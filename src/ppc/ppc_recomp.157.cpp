#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82E8D678) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bne cr6,0x82e8d6a8
	if (!cr6.eq) goto loc_82E8D6A8;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e8d6d4
	if (cr6.eq) goto loc_82E8D6D4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82e8d6d4
	goto loc_82E8D6D4;
loc_82E8D6A8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82e8d6d4
	if (!cr6.eq) goto loc_82E8D6D4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e8d6d4
	if (!cr6.gt) goto loc_82E8D6D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e8d6cc
	if (!cr6.eq) goto loc_82E8D6CC;
	// li r31,4
	r31.s64 = 4;
	// b 0x82e8d6cc
	goto loc_82E8D6CC;
loc_82E8D6C8:
	// rlwinm r31,r31,1,0,30
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82E8D6CC:
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e8d6c8
	if (cr6.lt) goto loc_82E8D6C8;
loc_82E8D6D4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x82e8d6e8
	if (!cr6.gt) goto loc_82E8D6E8;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// b 0x82e8d6ec
	goto loc_82E8D6EC;
loc_82E8D6E8:
	// stw r4,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r4.u32);
loc_82E8D6EC:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e8d7f4
	if (cr6.eq) goto loc_82E8D7F4;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// blt cr6,0x82e8d704
	if (cr6.lt) goto loc_82E8D704;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82E8D704:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// beq cr6,0x82e8d77c
	if (cr6.eq) goto loc_82E8D77C;
	// lis r11,8191
	r11.s64 = 536805376;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e8d72c
	if (!cr6.gt) goto loc_82E8D72C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E8D72C:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e8d73c
	if (cr6.gt) goto loc_82E8D73C;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82E8D73C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e8d77c
	if (cr0.eq) goto loc_82E8D77C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt 0x82e8d774
	if (cr0.lt) goto loc_82E8D774;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r8,r8,-26584
	ctx.r8.s64 = ctx.r8.s64 + -26584;
loc_82E8D764:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82e8d764
	if (!cr0.lt) goto loc_82E8D764;
loc_82E8D774:
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// b 0x82e8d780
	goto loc_82E8D780;
loc_82E8D77C:
	// li r31,0
	r31.s64 = 0;
loc_82E8D780:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e8d7b4
	if (cr6.eq) goto loc_82E8D7B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82E8D794:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82e8d794
	if (!cr0.eq) goto loc_82E8D794;
loc_82E8D7B4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e8d7f0
	if (cr0.eq) goto loc_82E8D7F0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e8d7ec
	if (cr6.eq) goto loc_82E8D7EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e8d7f0
	goto loc_82E8D7F0;
loc_82E8D7EC:
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82E8D7F0:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_82E8D7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E8D678) {
	__imp__sub_82E8D678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8D800) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e8cca0
	sub_82E8CCA0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8d83c
	if (cr0.eq) goto loc_82E8D83C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8D83C:
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

PPC_WEAK_FUNC(sub_82E8D800) {
	__imp__sub_82E8D800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8D858) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e8dfbc
	if (!cr0.eq) goto loc_82E8DFBC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,-26580
	r27.s64 = r11.s64 + -26580;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r29,148(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r25,-1
	r25.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8d944
	if (!cr6.gt) goto loc_82E8D944;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r29,4
	ctx.r7.s64 = r29.s64 + 4;
loc_82E8D8C8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82e8d8e4
	if (!cr6.eq) goto loc_82E8D8E4;
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r25.u32);
	// b 0x82e8d92c
	goto loc_82E8D92C;
loc_82E8D8E4:
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r4.u32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_82E8D92C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82e8d8c8
	if (cr6.lt) goto loc_82E8D8C8;
loc_82E8D944:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r26,132(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8d9f0
	if (!cr6.gt) goto loc_82E8D9F0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r26,4
	ctx.r9.s64 = r26.s64 + 4;
loc_82E8D98C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82e8d9a8
	if (!cr6.eq) goto loc_82E8D9A8;
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// b 0x82e8d9d8
	goto loc_82E8D9D8;
loc_82E8D9A8:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_82E8D9D8:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e8d98c
	if (cr6.lt) goto loc_82E8D98C;
loc_82E8D9F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8dabc
	if (!cr6.gt) goto loc_82E8DABC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
loc_82E8DA50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82e8daa4
	if (cr6.eq) goto loc_82E8DAA4;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// rotlwi r9,r9,0
	ctx.r9.u64 = rotl32(ctx.r9.u32, 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_82E8DAA4:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8da50
	if (cr6.lt) goto loc_82E8DA50;
loc_82E8DABC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e8dafc
	if (cr6.eq) goto loc_82E8DAFC;
	// addi r11,r8,4
	r11.s64 = ctx.r8.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82E8DAD4:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82e8dad4
	if (!cr0.eq) goto loc_82E8DAD4;
loc_82E8DAFC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8dbd8
	if (cr6.eq) goto loc_82E8DBD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8dba0
	if (!cr6.gt) goto loc_82E8DBA0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r29,4
	ctx.r6.s64 = r29.s64 + 4;
loc_82E8DB44:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82e8db88
	if (cr6.eq) goto loc_82E8DB88;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e8db70
	if (!cr6.eq) goto loc_82E8DB70;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82e8db88
	goto loc_82E8DB88;
loc_82E8DB70:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82E8DB88:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82e8db44
	if (cr6.lt) goto loc_82E8DB44;
loc_82E8DBA0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e8dbd0
	if (cr6.eq) goto loc_82E8DBD0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82E8DBB4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dbb4
	if (!cr0.eq) goto loc_82E8DBB4;
loc_82E8DBD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DBD8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8dcb4
	if (cr6.eq) goto loc_82E8DCB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8dc7c
	if (!cr6.gt) goto loc_82E8DC7C;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r29,4
	ctx.r6.s64 = r29.s64 + 4;
loc_82E8DC20:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82e8dc64
	if (cr6.eq) goto loc_82E8DC64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e8dc4c
	if (!cr6.eq) goto loc_82E8DC4C;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82e8dc64
	goto loc_82E8DC64;
loc_82E8DC4C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82E8DC64:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82e8dc20
	if (cr6.lt) goto loc_82E8DC20;
loc_82E8DC7C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e8dcac
	if (cr6.eq) goto loc_82E8DCAC;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82E8DC90:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dc90
	if (!cr0.eq) goto loc_82E8DC90;
loc_82E8DCAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DCB4:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8dd90
	if (cr6.eq) goto loc_82E8DD90;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8dd58
	if (!cr6.gt) goto loc_82E8DD58;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r26,4
	ctx.r6.s64 = r26.s64 + 4;
loc_82E8DCFC:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82e8dd40
	if (cr6.eq) goto loc_82E8DD40;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e8dd28
	if (!cr6.eq) goto loc_82E8DD28;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82e8dd40
	goto loc_82E8DD40;
loc_82E8DD28:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82E8DD40:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82e8dcfc
	if (cr6.lt) goto loc_82E8DCFC;
loc_82E8DD58:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e8dd88
	if (cr6.eq) goto loc_82E8DD88;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E8DD6C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8dd6c
	if (!cr0.eq) goto loc_82E8DD6C;
loc_82E8DD88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DD90:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8de6c
	if (cr6.eq) goto loc_82E8DE6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82e8d4f0
	sub_82E8D4F0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8de34
	if (!cr6.gt) goto loc_82E8DE34;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r26,4
	ctx.r6.s64 = r26.s64 + 4;
loc_82E8DDD8:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82e8de1c
	if (cr6.eq) goto loc_82E8DE1C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e8de04
	if (!cr6.eq) goto loc_82E8DE04;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82e8de1c
	goto loc_82E8DE1C;
loc_82E8DE04:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82E8DE1C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82e8ddd8
	if (cr6.lt) goto loc_82E8DDD8;
loc_82E8DE34:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e8de64
	if (cr6.eq) goto loc_82E8DE64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E8DE48:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8de48
	if (!cr0.eq) goto loc_82E8DE48;
loc_82E8DE64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DE6C:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8df2c
	if (cr6.eq) goto loc_82E8DF2C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r11,r11,-26580
	r11.s64 = r11.s64 + -26580;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e8d678
	sub_82E8D678(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8def4
	if (!cr6.gt) goto loc_82E8DEF4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r26,4
	ctx.r9.s64 = r26.s64 + 4;
loc_82E8DEBC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e8dedc
	if (cr6.eq) goto loc_82E8DEDC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_82E8DEDC:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e8debc
	if (cr6.lt) goto loc_82E8DEBC;
loc_82E8DEF4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e8df24
	if (cr6.eq) goto loc_82E8DF24;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E8DF08:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfsx f0,r8,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e8df08
	if (!cr0.eq) goto loc_82E8DF08;
loc_82E8DF24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DF2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r24,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r24.u32);
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// bge cr6,0x82e8df68
	if (!cr6.lt) goto loc_82E8DF68;
	// mulli r10,r24,20
	ctx.r10.s64 = r24.s64 * 20;
loc_82E8DF48:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8df48
	if (cr6.lt) goto loc_82E8DF48;
loc_82E8DF68:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8df9c
	if (!cr6.lt) goto loc_82E8DF9C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82E8DF7C:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8df7c
	if (cr6.lt) goto loc_82E8DF7C;
loc_82E8DF9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86428
	sub_82E86428(ctx, base);
loc_82E8DFBC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E8D858) {
	__imp__sub_82E8D858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8DFC8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-9856
	r30.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e8e008
	if (!cr0.eq) goto loc_82E8E008;
loc_82E8E000:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8e170
	goto loc_82E8E170;
loc_82E8E008:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e8d858
	sub_82E8D858(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = r11.s64 + -25920;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82e8e000
	if (!cr6.eq) goto loc_82E8E000;
	// lis r11,256
	r11.s64 = 16777216;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e8e000
	if (!cr6.eq) goto loc_82E8E000;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r5,1
	ctx.r5.s64 = 1;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r11,-25852
	r11.s64 = r11.s64 + -25852;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x82e878b0
	sub_82E878B0(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(48) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e87960
	sub_82E87960(ctx, base);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8E170:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E8DFC8) {
	__imp__sub_82E8DFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8E178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e8e1bc
	if (cr0.eq) goto loc_82E8E1BC;
	// clrlwi. r10,r21,31
	ctx.r10.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e8e1bc
	if (cr0.eq) goto loc_82E8E1BC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8e1bc
	if (!cr6.eq) goto loc_82E8E1BC;
loc_82E8E1B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8E1B4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c1c
	return;
loc_82E8E1BC:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e8e1dc
	if (cr0.eq) goto loc_82E8E1DC;
	// rlwinm. r9,r21,0,30,30
	ctx.r9.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8e1dc
	if (cr0.eq) goto loc_82E8E1DC;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E1DC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8e1f8
	if (cr6.eq) goto loc_82E8E1F8;
	// rlwinm. r9,r21,0,29,29
	ctx.r9.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8e1f8
	if (cr0.eq) goto loc_82E8E1F8;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E1F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8e214
	if (cr6.eq) goto loc_82E8E214;
	// rlwinm. r9,r21,0,28,28
	ctx.r9.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8e214
	if (cr0.eq) goto loc_82E8E214;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E214:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8e230
	if (cr6.eq) goto loc_82E8E230;
	// rlwinm. r9,r21,0,28,28
	ctx.r9.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8e230
	if (cr0.eq) goto loc_82E8E230;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E230:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8e24c
	if (cr6.eq) goto loc_82E8E24C;
	// rlwinm. r11,r21,0,27,27
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8e24c
	if (cr0.eq) goto loc_82E8E24C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E24C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8e268
	if (cr6.eq) goto loc_82E8E268;
	// rlwinm. r11,r21,0,27,27
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8e268
	if (cr0.eq) goto loc_82E8E268;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8e1b0
	if (cr6.eq) goto loc_82E8E1B0;
loc_82E8E268:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e8d858
	sub_82E8D858(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r11,-9856
	r30.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e8e1b0
	if (cr0.eq) goto loc_82E8E1B0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = r11.s64 + -25920;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82e8e1b0
	if (!cr6.eq) goto loc_82E8E1B0;
	// lis r11,768
	r11.s64 = 50331648;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82e8e300
	if (cr6.eq) goto loc_82E8E300;
loc_82E8E2EC:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e8e1b0
	goto loc_82E8E1B0;
loc_82E8E300:
	// li r11,170
	r11.s64 = 170;
	// lis r27,-31952
	r27.s64 = -2094006272;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r11,-9264(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-9264) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8e360
	if (cr6.eq) goto loc_82E8E360;
loc_82E8E320:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// lwz r11,-9264(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-9264) );
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e8e320
	if (cr6.lt) goto loc_82E8E320;
loc_82E8E360:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// rlwimi r11,r21,16,16,31
	r11.u64 = (rotl32(r21.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r21,16,0,15
	ctx.r10.u64 = (rotl32(r21.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e664
	if (!cr6.gt) goto loc_82E8E664;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8E4E0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// add r28,r27,r11
	r28.u64 = r27.u64 + r11.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e650
	if (cr6.eq) goto loc_82E8E650;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E650:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8e4e0
	if (cr6.lt) goto loc_82E8E4E0;
loc_82E8E664:
	// clrlwi. r22,r21,31
	r22.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// beq 0x82e8e6cc
	if (cr0.eq) goto loc_82E8E6CC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e6cc
	if (!cr6.gt) goto loc_82E8E6CC;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E8E680:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e6b8
	if (cr6.eq) goto loc_82E8E6B8;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E6B8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e8e680
	if (cr6.lt) goto loc_82E8E680;
loc_82E8E6CC:
	// rlwinm. r24,r21,0,27,27
	r24.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82e8e760
	if (cr0.eq) goto loc_82E8E760;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e760
	if (!cr6.gt) goto loc_82E8E760;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8E6EC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e748
	if (cr6.eq) goto loc_82E8E748;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E748:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8e6ec
	if (cr6.lt) goto loc_82E8E6EC;
loc_82E8E760:
	// rlwinm. r25,r21,0,28,28
	r25.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82e8e7f4
	if (cr0.eq) goto loc_82E8E7F4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e7f4
	if (!cr6.gt) goto loc_82E8E7F4;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8E780:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e7dc
	if (cr6.eq) goto loc_82E8E7DC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E7DC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8e780
	if (cr6.lt) goto loc_82E8E780;
loc_82E8E7F4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r4,4
	ctx.r4.s64 = 4;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e970
	if (!cr6.gt) goto loc_82E8E970;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E8E8E0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e95c
	if (cr6.eq) goto loc_82E8E95C;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E95C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e8e8e0
	if (cr6.lt) goto loc_82E8E8E0;
loc_82E8E970:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8e9fc
	if (!cr6.gt) goto loc_82E8E9FC;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8E988:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8e9e4
	if (cr6.eq) goto loc_82E8E9E4;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8E9E4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8e988
	if (cr6.lt) goto loc_82E8E988;
loc_82E8E9FC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8ea88
	if (!cr6.gt) goto loc_82E8EA88;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8EA14:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8ea70
	if (cr6.eq) goto loc_82E8EA70;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8EA70:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8ea14
	if (cr6.lt) goto loc_82E8EA14;
loc_82E8EA88:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8eb1c
	if (!cr6.gt) goto loc_82E8EB1C;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8EAA0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8eb04
	if (cr6.eq) goto loc_82E8EB04;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e8eb04
	if (cr6.eq) goto loc_82E8EB04;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8EB04:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8eaa0
	if (cr6.lt) goto loc_82E8EAA0;
loc_82E8EB1C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8ebb0
	if (!cr6.gt) goto loc_82E8EBB0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82E8EB34:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8eb98
	if (cr6.eq) goto loc_82E8EB98;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82e8eb98
	if (cr6.eq) goto loc_82E8EB98;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8EB98:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e8eb34
	if (cr6.lt) goto loc_82E8EB34;
loc_82E8EBB0:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8ec38
	if (!cr6.gt) goto loc_82E8EC38;
	// rlwinm r26,r21,0,29,29
	r26.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E8EBC8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e8ec24
	if (cr6.eq) goto loc_82E8EC24;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8EC24:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e8ebc8
	if (cr6.lt) goto loc_82E8EBC8;
loc_82E8EC38:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8ecbc
	if (!cr6.gt) goto loc_82E8ECBC;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E8EC4C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82e8eca8
	if (cr6.eq) goto loc_82E8ECA8;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8e2ec
	if (!cr6.eq) goto loc_82E8E2EC;
loc_82E8ECA8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e8ec4c
	if (cr6.lt) goto loc_82E8EC4C;
loc_82E8ECBC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8ed24
	if (!cr6.gt) goto loc_82E8ED24;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E8ECD0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8ed10
	if (cr6.eq) goto loc_82E8ED10;
	// rlwinm. r11,r21,0,30,30
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8ed10
	if (cr0.eq) goto loc_82E8ED10;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8ed2c
	if (!cr6.eq) goto loc_82E8ED2C;
loc_82E8ED10:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e8ecd0
	if (cr6.lt) goto loc_82E8ECD0;
loc_82E8ED24:
	// li r31,1
	r31.s64 = 1;
	// b 0x82e8ed30
	goto loc_82E8ED30;
loc_82E8ED2C:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82E8ED30:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82e8e1b4
	goto loc_82E8E1B4;
}

PPC_WEAK_FUNC(sub_82E8E178) {
	__imp__sub_82E8E178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8ED48) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e8ed90
	if (cr0.eq) goto loc_82E8ED90;
	// clrlwi. r10,r20,31
	ctx.r10.u64 = r20.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e8ed90
	if (cr0.eq) goto loc_82E8ED90;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8ed90
	if (!cr6.eq) goto loc_82E8ED90;
loc_82E8ED84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8ED88:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c18
	return;
loc_82E8ED90:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(44) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e8edb0
	if (cr0.eq) goto loc_82E8EDB0;
	// rlwinm. r9,r20,0,30,30
	ctx.r9.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8edb0
	if (cr0.eq) goto loc_82E8EDB0;
	// lwz r9,80(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(80) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EDB0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8edcc
	if (cr6.eq) goto loc_82E8EDCC;
	// rlwinm. r9,r20,0,29,29
	ctx.r9.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8edcc
	if (cr0.eq) goto loc_82E8EDCC;
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EDCC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8ede8
	if (cr6.eq) goto loc_82E8EDE8;
	// rlwinm. r9,r20,0,28,28
	ctx.r9.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8ede8
	if (cr0.eq) goto loc_82E8EDE8;
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(36) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EDE8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8ee04
	if (cr6.eq) goto loc_82E8EE04;
	// rlwinm. r9,r20,0,28,28
	ctx.r9.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e8ee04
	if (cr0.eq) goto loc_82E8EE04;
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(68) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EE04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8ee20
	if (cr6.eq) goto loc_82E8EE20;
	// rlwinm. r11,r20,0,27,27
	r11.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8ee20
	if (cr0.eq) goto loc_82E8EE20;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EE20:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8ee3c
	if (cr6.eq) goto loc_82E8EE3C;
	// rlwinm. r11,r20,0,27,27
	r11.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8ee3c
	if (cr0.eq) goto loc_82E8EE3C;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8ed84
	if (cr6.eq) goto loc_82E8ED84;
loc_82E8EE3C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e8d858
	sub_82E8D858(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,-9856
	r27.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82e8ed84
	if (cr0.eq) goto loc_82E8ED84;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r3,r11,-25920
	ctx.r3.s64 = r11.s64 + -25920;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82e8ed84
	if (!cr6.eq) goto loc_82E8ED84;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lis r11,768
	r11.s64 = 50331648;
	// beq cr6,0x82e8eea4
	if (cr6.eq) goto loc_82E8EEA4;
	// li r11,3
	r11.s64 = 3;
loc_82E8EEA4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82e8eee0
	if (cr6.eq) goto loc_82E8EEE0;
loc_82E8EECC:
	// lwz r11,84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(84) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e8ed84
	goto loc_82E8ED84;
loc_82E8EEE0:
	// li r11,170
	r11.s64 = 170;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// li r21,0
	r21.s64 = 0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r11,-9264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9264) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8ef40
	if (cr6.eq) goto loc_82E8EF40;
loc_82E8EF00:
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lwz r11,-9264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9264) );
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e8ef00
	if (cr6.lt) goto loc_82E8EF00;
loc_82E8EF40:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8ef6c
	if (!cr6.eq) goto loc_82E8EF6C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// rlwimi r11,r20,16,16,31
	r11.u64 = (rotl32(r20.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r20,16,0,15
	ctx.r10.u64 = (rotl32(r20.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x82e8ef70
	goto loc_82E8EF70;
loc_82E8EF6C:
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
loc_82E8EF70:
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8efc4
	if (!cr6.eq) goto loc_82E8EFC4;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8EFC4:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f014
	if (!cr6.eq) goto loc_82E8F014;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F014:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f064
	if (!cr6.eq) goto loc_82E8F064;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F064:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f0b4
	if (!cr6.eq) goto loc_82E8F0B4;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F0B4:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f298
	if (!cr6.gt) goto loc_82E8F298;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F0F0:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// add r31,r30,r11
	r31.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f284
	if (cr6.eq) goto loc_82E8F284;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f128
	if (!cr6.eq) goto loc_82E8F128;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F128:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8f180
	if (!cr6.eq) goto loc_82E8F180;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F180:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8f1d8
	if (!cr6.eq) goto loc_82E8F1D8;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F1D8:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8f230
	if (!cr6.eq) goto loc_82E8F230;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F230:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F284:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f0f0
	if (cr6.lt) goto loc_82E8F0F0;
loc_82E8F298:
	// clrlwi. r23,r20,31
	r23.u64 = r20.u32 & 0x1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82e8f304
	if (cr0.eq) goto loc_82E8F304;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f304
	if (!cr6.gt) goto loc_82E8F304;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F2B4:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f2f0
	if (cr6.eq) goto loc_82E8F2F0;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F2F0:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e8f2b4
	if (cr6.lt) goto loc_82E8F2B4;
loc_82E8F304:
	// rlwinm. r24,r20,0,27,27
	r24.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82e8f3a0
	if (cr0.eq) goto loc_82E8F3A0;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f3a0
	if (!cr6.gt) goto loc_82E8F3A0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F324:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f388
	if (cr6.eq) goto loc_82E8F388;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(32) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f360
	if (!cr6.eq) goto loc_82E8F360;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F360:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F388:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f324
	if (cr6.lt) goto loc_82E8F324;
loc_82E8F3A0:
	// rlwinm. r25,r20,0,28,28
	r25.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82e8f43c
	if (cr0.eq) goto loc_82E8F43C;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f43c
	if (!cr6.gt) goto loc_82E8F43C;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F3C0:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f424
	if (cr6.eq) goto loc_82E8F424;
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(36) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f3fc
	if (!cr6.eq) goto loc_82E8F3FC;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F3FC:
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F424:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f3c0
	if (cr6.lt) goto loc_82E8F3C0;
loc_82E8F43C:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f464
	if (!cr6.eq) goto loc_82E8F464;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F464:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f4b4
	if (!cr6.eq) goto loc_82E8F4B4;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F4B4:
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f504
	if (!cr6.eq) goto loc_82E8F504;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F504:
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f5dc
	if (!cr6.gt) goto loc_82E8F5DC;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F540:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f5c8
	if (cr6.eq) goto loc_82E8F5C8;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82e8f574
	if (!cr6.eq) goto loc_82E8F574;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F574:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r21.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F5C8:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e8f540
	if (cr6.lt) goto loc_82E8F540;
loc_82E8F5DC:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f670
	if (!cr6.gt) goto loc_82E8F670;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F5F4:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f658
	if (cr6.eq) goto loc_82E8F658;
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f630
	if (!cr6.eq) goto loc_82E8F630;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F630:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F658:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f5f4
	if (cr6.lt) goto loc_82E8F5F4;
loc_82E8F670:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f704
	if (!cr6.gt) goto loc_82E8F704;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F688:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f6ec
	if (cr6.eq) goto loc_82E8F6EC;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(60) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f6c4
	if (!cr6.eq) goto loc_82E8F6C4;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F6C4:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F6EC:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f688
	if (cr6.lt) goto loc_82E8F688;
loc_82E8F704:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f7a0
	if (!cr6.gt) goto loc_82E8F7A0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F71C:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f788
	if (cr6.eq) goto loc_82E8F788;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e8f788
	if (cr6.eq) goto loc_82E8F788;
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(64) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f760
	if (!cr6.eq) goto loc_82E8F760;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F760:
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F788:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f71c
	if (cr6.lt) goto loc_82E8F71C;
loc_82E8F7A0:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f83c
	if (!cr6.gt) goto loc_82E8F83C;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82E8F7B8:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f824
	if (cr6.eq) goto loc_82E8F824;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82e8f824
	if (cr6.eq) goto loc_82E8F824;
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(68) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bne cr6,0x82e8f7fc
	if (!cr6.eq) goto loc_82E8F7FC;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F7FC:
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F824:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e8f7b8
	if (cr6.lt) goto loc_82E8F7B8;
loc_82E8F83C:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f8cc
	if (!cr6.gt) goto loc_82E8F8CC;
	// rlwinm r29,r20,0,29,29
	r29.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x4;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F854:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e8f8b8
	if (cr6.eq) goto loc_82E8F8B8;
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8f890
	if (!cr6.eq) goto loc_82E8F890;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F890:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F8B8:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e8f854
	if (cr6.lt) goto loc_82E8F854;
loc_82E8F8CC:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f958
	if (!cr6.gt) goto loc_82E8F958;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F8E0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82e8f944
	if (cr6.eq) goto loc_82E8F944;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bne cr6,0x82e8f91c
	if (!cr6.eq) goto loc_82E8F91C;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82E8F91C:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8eecc
	if (!cr6.eq) goto loc_82E8EECC;
loc_82E8F944:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e8f8e0
	if (cr6.lt) goto loc_82E8F8E0;
loc_82E8F958:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e8f9c4
	if (!cr6.gt) goto loc_82E8F9C4;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F96C:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8f9b0
	if (cr6.eq) goto loc_82E8F9B0;
	// rlwinm. r11,r20,0,30,30
	r11.u64 = rotl64(r20.u32 | (r20.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8f9b0
	if (cr0.eq) goto loc_82E8F9B0;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r21.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8f9cc
	if (!cr6.eq) goto loc_82E8F9CC;
loc_82E8F9B0:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(48) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e8f96c
	if (cr6.lt) goto loc_82E8F96C;
loc_82E8F9C4:
	// li r31,1
	r31.s64 = 1;
	// b 0x82e8f9d0
	goto loc_82E8F9D0;
loc_82E8F9CC:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82E8F9D0:
	// lwz r11,84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(84) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82e8ed88
	goto loc_82E8ED88;
}

PPC_WEAK_FUNC(sub_82E8ED48) {
	__imp__sub_82E8ED48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8F9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,23468
	ctx.r3.s64 = r11.s64 + 23468;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E8F9E8) {
	__imp__sub_82E8F9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8F9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e8fa20
	if (cr0.eq) goto loc_82E8FA20;
	// stb r29,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r29.u8);
	// b 0x82e8fa6c
	goto loc_82E8FA6C;
loc_82E8FA20:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r30,-31952
	r30.s64 = -2094006272;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e8fa3c
	if (cr0.eq) goto loc_82E8FA3C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8FA3C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e8fa54
	if (cr0.eq) goto loc_82E8FA54;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8FA54:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e8fa6c
	if (cr0.eq) goto loc_82E8FA6C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8FA6C:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E8F9F8) {
	__imp__sub_82E8F9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8FA80) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82e8fe68
	if (cr0.eq) goto loc_82E8FE68;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e8fe68
	if (cr0.eq) goto loc_82E8FE68;
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11840
	r11.s64 = r11.s64 + -11840;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E8FAF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82e8faf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8FAF4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x82e8fe5c
	if (!cr6.eq) goto loc_82E8FE5C;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82e8fe50
	if (!cr6.eq) goto loc_82E8FE50;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r27.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-25828
	ctx.r3.s64 = r11.s64 + -25828;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e8fe50
	if (!cr0.eq) goto loc_82E8FE50;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bgt cr6,0x82e8fe50
	if (cr6.gt) goto loc_82E8FE50;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8fe50
	if (cr6.eq) goto loc_82E8FE50;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82e8fc94
	if (cr6.lt) goto loc_82E8FC94;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82e8fc20
	if (!cr6.eq) goto loc_82E8FC20;
	// lis r29,-31952
	r29.s64 = -2094006272;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,-9248(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9248) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e8fc20
	if (cr6.eq) goto loc_82E8FC20;
loc_82E8FBD0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e8fe68
	if (!cr6.eq) goto loc_82E8FE68;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,170
	cr6.compare<uint32_t>(r11.u32, 170, xer);
	// bne cr6,0x82e8fe68
	if (!cr6.eq) goto loc_82E8FE68;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// lwz r11,-9248(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9248) );
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e8fbd0
	if (cr6.lt) goto loc_82E8FBD0;
loc_82E8FC20:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82e8fc70
	if (cr6.eq) goto loc_82E8FC70;
loc_82E8FC4C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82E8FC50:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82e8fe6c
	goto loc_82E8FE6C;
loc_82E8FC70:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82E8FC94:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e8fe3c
	if (!cr0.gt) goto loc_82E8FE3C;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// li r29,-1
	r29.s64 = -1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x82e8fcc0
	if (!cr6.gt) goto loc_82E8FCC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E8FCC0:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8fce0
	if (!cr6.gt) goto loc_82E8FCE0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E8FCE0:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e8fcfc
	if (!cr6.gt) goto loc_82E8FCFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E8FCFC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mulli r30,r11,12
	r30.s64 = r11.s64 * 12;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82e8fc4c
	if (!cr6.eq) goto loc_82E8FC4C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e8fd90
	if (!cr6.gt) goto loc_82E8FD90;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82E8FD4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e8fd4c
	if (cr6.lt) goto loc_82E8FD4C;
loc_82E8FD90:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mulli r30,r11,12
	r30.s64 = r11.s64 * 12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82e8fc4c
	if (!cr6.eq) goto loc_82E8FC4C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e8fe1c
	if (!cr6.gt) goto loc_82E8FE1C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82E8FDD8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e8fdd8
	if (cr6.lt) goto loc_82E8FDD8;
loc_82E8FE1C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e8fe6c
	goto loc_82E8FE6C;
loc_82E8FE3C:
	// li r30,1
	r30.s64 = 1;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// b 0x82e8fc50
	goto loc_82E8FC50;
loc_82E8FE50:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82E8FE5C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8FE68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8FE6C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E8FA80) {
	__imp__sub_82E8FA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8FE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(23464) );
	// bne cr6,0x82e8fe94
	if (!cr6.eq) goto loc_82E8FE94;
loc_82E8FE8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e8fec0
	goto loc_82E8FEC0;
loc_82E8FE94:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8fe8c
	if (!cr6.lt) goto loc_82E8FE8C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e8fec0
	if (cr6.eq) goto loc_82E8FEC0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E8FEC0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8fef4
	if (cr6.eq) goto loc_82E8FEF4;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8fef4
	if (!cr6.lt) goto loc_82E8FEF4;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e8fef8
	if (!cr6.eq) goto loc_82E8FEF8;
loc_82E8FEF4:
	// li r11,0
	r11.s64 = 0;
loc_82E8FEF8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e8ff0c
	if (!cr6.lt) goto loc_82E8FF0C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E8FF0C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E8FE78) {
	__imp__sub_82E8FE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8FF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(23464) );
	// bne cr6,0x82e8ff3c
	if (!cr6.eq) goto loc_82E8FF3C;
loc_82E8FF34:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e8ff68
	goto loc_82E8FF68;
loc_82E8FF3C:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8ff34
	if (!cr6.lt) goto loc_82E8FF34;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e8ff68
	if (cr6.eq) goto loc_82E8FF68;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E8FF68:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e8ff9c
	if (cr6.eq) goto loc_82E8FF9C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8ff9c
	if (!cr6.lt) goto loc_82E8FF9C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e8ffa0
	if (!cr6.eq) goto loc_82E8FFA0;
loc_82E8FF9C:
	// li r11,0
	r11.s64 = 0;
loc_82E8FFA0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e8ffb4
	if (!cr6.lt) goto loc_82E8FFB4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E8FFB4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E8FF20) {
	__imp__sub_82E8FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E8FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r9,23464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(23464) );
	// bne cr6,0x82e8ffe4
	if (!cr6.eq) goto loc_82E8FFE4;
loc_82E8FFDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e90010
	goto loc_82E90010;
loc_82E8FFE4:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8ffdc
	if (!cr6.lt) goto loc_82E8FFDC;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82e90010
	if (cr6.eq) goto loc_82E90010;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E90010:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90044
	if (cr6.eq) goto loc_82E90044;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90044
	if (!cr6.lt) goto loc_82E90044;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90048
	if (!cr6.eq) goto loc_82E90048;
loc_82E90044:
	// li r11,0
	r11.s64 = 0;
loc_82E90048:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e9005c
	if (!cr6.lt) goto loc_82E9005C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E9005C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E8FFC8) {
	__imp__sub_82E8FFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90070) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mulli r10,r11,3
	ctx.r10.s64 = r11.s64 * 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900bc
	if (!cr6.gt) goto loc_82E900BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E900BC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900dc
	if (!cr6.gt) goto loc_82E900DC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E900DC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e900f8
	if (!cr6.gt) goto loc_82E900F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E900F8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e90160
	if (!cr6.gt) goto loc_82E90160;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E90114:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e90114
	if (cr6.lt) goto loc_82E90114;
loc_82E90160:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r10,-32023
	ctx.r10.s64 = -2098659328;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,-392
	ctx.r6.s64 = ctx.r10.s64 + -392;
	// stw r11,23464(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23464, r11.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca5868
	sub_82CA5868(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-224
	ctx.r6.s64 = r11.s64 + -224;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca5868
	sub_82CA5868(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-56
	ctx.r6.s64 = r11.s64 + -56;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r4,3,0,28
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca5868
	sub_82CA5868(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82E901CC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e90280
	if (!cr6.gt) goto loc_82E90280;
loc_82E901DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e9022c
	if (!cr0.gt) goto loc_82E9022C;
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82E90200:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82e9021c
	if (cr6.eq) goto loc_82E9021C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82e90200
	if (cr6.lt) goto loc_82E90200;
	// b 0x82e9022c
	goto loc_82E9022C;
loc_82E9021C:
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
loc_82E9022C:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e90270
	if (cr0.eq) goto loc_82E90270;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r11,r11
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// mulli r11,r10,33
	r11.s64 = ctx.r10.s64 * 33;
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// andc r11,r9,r10
	r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	// twlgei r11,-1
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E90270:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e901dc
	if (cr6.lt) goto loc_82E901DC;
loc_82E90280:
	// addi r29,r29,33
	r29.s64 = r29.s64 + 33;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r29,99
	cr6.compare<int32_t>(r29.s32, 99, xer);
	// blt cr6,0x82e901cc
	if (cr6.lt) goto loc_82E901CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E90070) {
	__imp__sub_82E90070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E902A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e902dc
	if (!cr6.gt) goto loc_82E902DC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e90508
	if (cr6.eq) goto loc_82E90508;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e90508
	if (cr6.eq) goto loc_82E90508;
loc_82E902DC:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e90508
	if (cr0.eq) goto loc_82E90508;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// lis r11,768
	r11.s64 = 50331648;
	// beq cr6,0x82e90310
	if (cr6.eq) goto loc_82E90310;
	// li r11,3
	r11.s64 = 3;
loc_82E90310:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r3,r11,-25828
	ctx.r3.s64 = r11.s64 + -25828;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bne cr6,0x82e90508
	if (!cr6.eq) goto loc_82E90508;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e90508
	if (!cr6.eq) goto loc_82E90508;
	// li r11,170
	r11.s64 = 170;
	// lis r29,-31952
	r29.s64 = -2094006272;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r11,-9248(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9248) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e903c0
	if (cr6.eq) goto loc_82E903C0;
loc_82E90380:
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e90508
	if (!cr6.eq) goto loc_82E90508;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// lwz r11,-9248(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9248) );
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e90380
	if (cr6.lt) goto loc_82E90380;
loc_82E903C0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82e903ec
	if (!cr6.eq) goto loc_82E903EC;
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x82e903f0
	goto loc_82E903F0;
loc_82E903EC:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
loc_82E903F0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e90508
	if (!cr6.eq) goto loc_82E90508;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e90608
	if (!cr6.eq) goto loc_82E90608;
	// ble 0x82e90454
	if (!cr0.gt) goto loc_82E90454;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e9044c
	if (!cr6.gt) goto loc_82E9044C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9044C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82E90454:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e904ac
	if (!cr6.gt) goto loc_82E904AC;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82E9046C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e9046c
	if (cr6.lt) goto loc_82E9046C;
loc_82E904AC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = r11.s64 * 3;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82e90514
	if (cr6.eq) goto loc_82E90514;
loc_82E904DC:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e90508
	if (cr6.eq) goto loc_82E90508;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
loc_82E90500:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E90508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9050C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E90514:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e90564
	if (!cr6.gt) goto loc_82E90564;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82E90524:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e90524
	if (cr6.lt) goto loc_82E90524;
loc_82E90564:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = r11.s64 * 3;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e904dc
	if (!cr6.eq) goto loc_82E904DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e905b0
	if (cr6.eq) goto loc_82E905B0;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E905B0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e90764
	if (!cr6.gt) goto loc_82E90764;
loc_82E905C4:
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e905fc
	if (!cr6.eq) goto loc_82E905FC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e905c4
	if (cr6.lt) goto loc_82E905C4;
	// b 0x82e90764
	goto loc_82E90764;
loc_82E905FC:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82e90500
	goto loc_82E90500;
loc_82E90608:
	// ble 0x82e90630
	if (!cr0.gt) goto loc_82E90630;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e90628
	if (!cr6.gt) goto loc_82E90628;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E90628:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82E90630:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e9066c
	if (!cr6.gt) goto loc_82E9066C;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E90648:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e90648
	if (cr6.lt) goto loc_82E90648;
loc_82E9066C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = r11.s64 * 3;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e904dc
	if (!cr6.eq) goto loc_82E904DC;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e906d0
	if (!cr6.gt) goto loc_82E906D0;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E906AC:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e906ac
	if (cr6.lt) goto loc_82E906AC;
loc_82E906D0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r5,r11,3
	ctx.r5.s64 = r11.s64 * 3;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e904dc
	if (!cr6.eq) goto loc_82E904DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e9071c
	if (cr6.eq) goto loc_82E9071C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9071C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e90764
	if (!cr6.gt) goto loc_82E90764;
loc_82E90730:
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e905fc
	if (!cr6.eq) goto loc_82E905FC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e90730
	if (cr6.lt) goto loc_82E90730;
loc_82E90764:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9050c
	goto loc_82E9050C;
}

PPC_WEAK_FUNC(sub_82E902A0) {
	__imp__sub_82E902A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90780) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e907e8
	if (cr0.eq) goto loc_82E907E8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r11,-25796
	r11.s64 = r11.s64 + -25796;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82e907cc
	if (cr6.eq) goto loc_82E907CC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82e907d0
	goto loc_82E907D0;
loc_82E907CC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82E907D0:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// b 0x82e907ec
	goto loc_82E907EC;
loc_82E907E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E907EC:
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

PPC_WEAK_FUNC(sub_82E90780) {
	__imp__sub_82E90780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90800) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25796
	r11.s64 = r11.s64 + -25796;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e8f9f8
	sub_82E8F9F8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
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

PPC_WEAK_FUNC(sub_82E90800) {
	__imp__sub_82E90800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90848) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19184
	ctx.r4.s64 = r11.s64 + -19184;
	// bl 0x82e7d750
	sub_82E7D750(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82e9087c
	if (!cr0.eq) goto loc_82E9087C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e90884
	goto loc_82E90884;
loc_82E9087C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e8fa80
	sub_82E8FA80(ctx, base);
loc_82E90884:
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

PPC_WEAK_FUNC(sub_82E90848) {
	__imp__sub_82E90848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90898) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e902a0
	sub_82E902A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E90898) {
	__imp__sub_82E90898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E908A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e90a50
	if (cr0.eq) goto loc_82E90A50;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e90bec
	if (cr6.eq) goto loc_82E90BEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// add r11,r5,r3
	r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e9090c
	if (cr6.eq) goto loc_82E9090C;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e9090c
	if (!cr6.lt) goto loc_82E9090C;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90910
	if (!cr6.eq) goto loc_82E90910;
loc_82E9090C:
	// li r11,0
	r11.s64 = 0;
loc_82E90910:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e90920
	if (!cr6.eq) goto loc_82E90920;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90934
	goto loc_82E90934;
loc_82E90920:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e90930
	if (!cr6.eq) goto loc_82E90930;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90934
	goto loc_82E90934;
loc_82E90930:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90934:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90bec
	if (!cr6.eq) goto loc_82E90BEC;
	// addi r30,r3,-1
	r30.s64 = ctx.r3.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e909e0
	if (!cr0.gt) goto loc_82E909E0;
loc_82E9094C:
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r5,r9
	r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90990
	if (cr6.eq) goto loc_82E90990;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90990
	if (!cr6.lt) goto loc_82E90990;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90994
	if (!cr6.eq) goto loc_82E90994;
loc_82E90990:
	// li r11,0
	r11.s64 = 0;
loc_82E90994:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e909a4
	if (!cr6.eq) goto loc_82E909A4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e909b8
	goto loc_82E909B8;
loc_82E909A4:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e909b4
	if (!cr6.eq) goto loc_82E909B4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e909b8
	goto loc_82E909B8;
loc_82E909B4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E909B8:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x82e90bec
	if (cr6.gt) goto loc_82E90BEC;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x82e909d0
	if (!cr6.lt) goto loc_82E909D0;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// b 0x82e909d4
	goto loc_82E909D4;
loc_82E909D0:
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_82E909D4:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e9094c
	if (cr6.lt) goto loc_82E9094C;
loc_82E909E0:
	// add r11,r5,r31
	r11.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90a18
	if (cr6.eq) goto loc_82E90A18;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90a18
	if (!cr6.lt) goto loc_82E90A18;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90a1c
	if (!cr6.eq) goto loc_82E90A1C;
loc_82E90A18:
	// li r11,0
	r11.s64 = 0;
loc_82E90A1C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e90a2c
	if (!cr6.eq) goto loc_82E90A2C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90a40
	goto loc_82E90A40;
loc_82E90A2C:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e90a3c
	if (!cr6.eq) goto loc_82E90A3C;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90a40
	goto loc_82E90A40;
loc_82E90A3C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90A40:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90be8
	if (!cr6.eq) goto loc_82E90BE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82e90bec
	goto loc_82E90BEC;
loc_82E90A50:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e90bec
	if (cr6.eq) goto loc_82E90BEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r5,r3
	r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90aac
	if (cr6.eq) goto loc_82E90AAC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90aac
	if (!cr6.lt) goto loc_82E90AAC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90ab0
	if (!cr6.eq) goto loc_82E90AB0;
loc_82E90AAC:
	// li r11,0
	r11.s64 = 0;
loc_82E90AB0:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e90ac0
	if (!cr6.eq) goto loc_82E90AC0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90ad4
	goto loc_82E90AD4;
loc_82E90AC0:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e90ad0
	if (!cr6.eq) goto loc_82E90AD0;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90ad4
	goto loc_82E90AD4;
loc_82E90AD0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90AD4:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x82e90bec
	if (!cr6.eq) goto loc_82E90BEC;
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// b 0x82e90b70
	goto loc_82E90B70;
loc_82E90AE8:
	// add r11,r30,r8
	r11.u64 = r30.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r5,r9
	r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90b2c
	if (cr6.eq) goto loc_82E90B2C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90b2c
	if (!cr6.lt) goto loc_82E90B2C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90b30
	if (!cr6.eq) goto loc_82E90B30;
loc_82E90B2C:
	// li r11,0
	r11.s64 = 0;
loc_82E90B30:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e90b40
	if (!cr6.eq) goto loc_82E90B40;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90b54
	goto loc_82E90B54;
loc_82E90B40:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e90b50
	if (!cr6.eq) goto loc_82E90B50;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90b54
	goto loc_82E90B54;
loc_82E90B50:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90B54:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// blt cr6,0x82e90bec
	if (cr6.lt) goto loc_82E90BEC;
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x82e90b6c
	if (!cr6.gt) goto loc_82E90B6C;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// b 0x82e90b70
	goto loc_82E90B70;
loc_82E90B6C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82E90B70:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82e90ae8
	if (cr6.lt) goto loc_82E90AE8;
	// add r11,r5,r8
	r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90bb4
	if (cr6.eq) goto loc_82E90BB4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90bb4
	if (!cr6.lt) goto loc_82E90BB4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90bb8
	if (!cr6.eq) goto loc_82E90BB8;
loc_82E90BB4:
	// li r11,0
	r11.s64 = 0;
loc_82E90BB8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e90bc8
	if (!cr6.eq) goto loc_82E90BC8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90bdc
	goto loc_82E90BDC;
loc_82E90BC8:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e90bd8
	if (!cr6.eq) goto loc_82E90BD8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90bdc
	goto loc_82E90BDC;
loc_82E90BD8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90BDC:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f1.f64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// beq cr6,0x82e90bec
	if (cr6.eq) goto loc_82E90BEC;
loc_82E90BE8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E90BEC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E908A0) {
	__imp__sub_82E908A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90BF8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// addic. r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r11.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e90cc4
	if (!cr0.gt) goto loc_82E90CC4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// mullw r30,r11,r5
	r30.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
loc_82E90C30:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r30,r9
	r11.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90c74
	if (cr6.eq) goto loc_82E90C74;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90c74
	if (!cr6.lt) goto loc_82E90C74;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90c78
	if (!cr6.eq) goto loc_82E90C78;
loc_82E90C74:
	// li r11,0
	r11.s64 = 0;
loc_82E90C78:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82e90c88
	if (!cr6.eq) goto loc_82E90C88;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90c9c
	goto loc_82E90C9C;
loc_82E90C88:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82e90c98
	if (!cr6.eq) goto loc_82E90C98;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90c9c
	goto loc_82E90C9C;
loc_82E90C98:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90C9C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e90cac
	if (!cr6.lt) goto loc_82E90CAC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82e90cb8
	goto loc_82E90CB8;
loc_82E90CAC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e90d1c
	if (!cr6.gt) goto loc_82E90D1C;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_82E90CB8:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e90c30
	if (cr6.lt) goto loc_82E90C30;
loc_82E90CC4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r29
	r11.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90d08
	if (cr6.eq) goto loc_82E90D08;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90d08
	if (!cr6.lt) goto loc_82E90D08;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90d0c
	if (!cr6.eq) goto loc_82E90D0C;
loc_82E90D08:
	// li r11,0
	r11.s64 = 0;
loc_82E90D0C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82e90d28
	if (!cr6.eq) goto loc_82E90D28;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e90d3c
	goto loc_82E90D3C;
loc_82E90D1C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82e90e0c
	goto loc_82E90E0C;
loc_82E90D28:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82e90d38
	if (!cr6.eq) goto loc_82E90D38;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e90d3c
	goto loc_82E90D3C;
loc_82E90D38:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_82E90D3C:
	// add r11,r8,r4
	r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e90d74
	if (cr6.eq) goto loc_82E90D74;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e90d74
	if (!cr6.lt) goto loc_82E90D74;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e90d78
	if (!cr6.eq) goto loc_82E90D78;
loc_82E90D74:
	// li r11,0
	r11.s64 = 0;
loc_82E90D78:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82e90d88
	if (!cr6.eq) goto loc_82E90D88;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e90d9c
	goto loc_82E90D9C;
loc_82E90D88:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82e90d98
	if (!cr6.eq) goto loc_82E90D98;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x82e90d9c
	goto loc_82E90D9C;
loc_82E90D98:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82E90D9C:
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e90dbc
	if (cr0.eq) goto loc_82E90DBC;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82e90dbc
	if (!cr6.lt) goto loc_82E90DBC;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e90dbc
	if (!cr6.lt) goto loc_82E90DBC;
loc_82E90DB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e90e14
	goto loc_82E90E14;
loc_82E90DBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e90ddc
	if (!cr6.eq) goto loc_82E90DDC;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82e90dd4
	if (!cr6.gt) goto loc_82E90DD4;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e90db4
	if (cr6.gt) goto loc_82E90DB4;
loc_82E90DD4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e90df8
	if (cr6.eq) goto loc_82E90DF8;
loc_82E90DDC:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// blt cr6,0x82e90df0
	if (cr6.lt) goto loc_82E90DF0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82e90e10
	goto loc_82E90E10;
loc_82E90DF0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// b 0x82e90e10
	goto loc_82E90E10;
loc_82E90DF8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e90e08
	if (cr6.gt) goto loc_82E90E08;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x82e90e0c
	goto loc_82E90E0C;
loc_82E90E08:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82E90E0C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82E90E10:
	// bl 0x82e908a0
	sub_82E908A0(ctx, base);
loc_82E90E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E90BF8) {
	__imp__sub_82E90BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90E20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e90800
	sub_82E90800(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e90e5c
	if (cr0.eq) goto loc_82E90E5C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E90E5C:
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

PPC_WEAK_FUNC(sub_82E90E20) {
	__imp__sub_82E90E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82e90ea8
	if (!cr6.eq) goto loc_82E90EA8;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e90ebc
	goto loc_82E90EBC;
loc_82E90EA8:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x82e90eb8
	if (!cr6.eq) goto loc_82E90EB8;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e90ebc
	goto loc_82E90EBC;
loc_82E90EB8:
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82E90EBC:
	// li r6,1
	ctx.r6.s64 = 1;
	// fsubs f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e90bf8
	sub_82E90BF8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82e90ee4
	if (!cr6.eq) goto loc_82E90EE4;
loc_82E90EDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e90f10
	goto loc_82E90F10;
loc_82E90EE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e90bf8
	sub_82E90BF8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e90edc
	if (cr6.eq) goto loc_82E90EDC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_82E90F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E90E78) {
	__imp__sub_82E90E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E90F18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e90f48
	if (!cr6.eq) goto loc_82E90F48;
loc_82E90F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9108c
	goto loc_82E9108C;
loc_82E90F48:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r26,0
	r26.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// li r29,-1
	r29.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
loc_82E90F60:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82e90f84
	if (!cr6.eq) goto loc_82E90F84;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// fmr f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f9.f64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82e90fa0
	goto loc_82E90FA0;
loc_82E90F84:
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
loc_82E90FA0:
	// bl 0x82e90e78
	sub_82E90E78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e90f40
	if (cr6.eq) goto loc_82E90F40;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82e90fbc
	if (cr6.eq) goto loc_82E90FBC;
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// bge cr6,0x82e90fc4
	if (!cr6.lt) goto loc_82E90FC4;
loc_82E90FBC:
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82E90FC4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x82e90f60
	if (cr6.lt) goto loc_82E90F60;
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// bgt cr6,0x82e91080
	if (cr6.gt) goto loc_82E91080;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E90FF0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91018:
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, r27.s32, xer);
	// beq cr6,0x82e91048
	if (cr6.eq) goto loc_82E91048;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r30,r10,r30
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// blt cr6,0x82e9105c
	if (cr6.lt) goto loc_82E9105C;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lwzx r30,r10,r30
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// bgt cr6,0x82e9105c
	if (cr6.gt) goto loc_82E9105C;
loc_82E91048:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x82e91018
	if (cr6.lt) goto loc_82E91018;
loc_82E9105C:
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x82e91074
	if (!cr6.eq) goto loc_82E91074;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r9,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82E91074:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// ble cr6,0x82e90ff0
	if (!cr6.gt) goto loc_82E90FF0;
loc_82E91080:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82E9108C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E90F18) {
	__imp__sub_82E90F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91098) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e910c8
	if (!cr6.eq) goto loc_82E910C8;
loc_82E910C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e911ec
	goto loc_82E911EC;
loc_82E910C8:
	// li r25,0
	r25.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// li r28,-1
	r28.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82E910DC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + r11.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e90e78
	sub_82E90E78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e910c0
	if (cr0.eq) goto loc_82E910C0;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82e91118
	if (cr6.eq) goto loc_82E91118;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// bge cr6,0x82e91120
	if (!cr6.lt) goto loc_82E91120;
loc_82E91118:
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82E91120:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(r31.s32, 12, xer);
	// blt cr6,0x82e910dc
	if (cr6.lt) goto loc_82E910DC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// bgt cr6,0x82e911e0
	if (cr6.gt) goto loc_82E911E0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E91150:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91178:
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, r27.s32, xer);
	// beq cr6,0x82e911a8
	if (cr6.eq) goto loc_82E911A8;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r31,r10,r31
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// blt cr6,0x82e911bc
	if (cr6.lt) goto loc_82E911BC;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// bgt cr6,0x82e911bc
	if (cr6.gt) goto loc_82E911BC;
loc_82E911A8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// blt cr6,0x82e91178
	if (cr6.lt) goto loc_82E91178;
loc_82E911BC:
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x82e911d4
	if (!cr6.eq) goto loc_82E911D4;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stwx r9,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82E911D4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// ble cr6,0x82e91150
	if (!cr6.gt) goto loc_82E91150;
loc_82E911E0:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_82E911EC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E91098) {
	__imp__sub_82E91098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E911F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e9121c
	if (!cr6.eq) goto loc_82E9121C;
loc_82E91214:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E9121C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-25732
	r30.s64 = r11.s64 + -25732;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e91260
	if (!cr0.eq) goto loc_82E91260;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91214
	if (cr0.eq) goto loc_82E91214;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E91260:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-25748
	r30.s64 = r11.s64 + -25748;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e912a0
	if (!cr0.eq) goto loc_82E912A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91214
	if (cr0.eq) goto loc_82E91214;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// b 0x82e912ac
	goto loc_82E912AC;
loc_82E912A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826330b0
	sub_826330B0(ctx, base);
loc_82E912AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E911F8) {
	__imp__sub_82E911F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E912B8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e91320
	if (!cr6.gt) goto loc_82E91320;
	// li r30,0
	r30.s64 = 0;
loc_82E912E0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e9130c
	if (cr6.eq) goto loc_82E9130C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9130C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e912e0
	if (cr6.lt) goto loc_82E912E0;
loc_82E91320:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E912B8) {
	__imp__sub_82E912B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91330) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e91398
	if (!cr6.gt) goto loc_82E91398;
	// li r30,0
	r30.s64 = 0;
loc_82E91358:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e91384
	if (cr6.eq) goto loc_82E91384;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91384:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e91358
	if (cr6.lt) goto loc_82E91358;
loc_82E91398:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E91330) {
	__imp__sub_82E91330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E913A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e913d4
	if (cr6.lt) goto loc_82E913D4;
loc_82E913CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91504
	goto loc_82E91504;
loc_82E913D4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x82e914a4
	if (!cr0.eq) goto loc_82E914A4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// beq 0x82e913cc
	if (cr0.eq) goto loc_82E913CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e91500
	if (!cr6.gt) goto loc_82E91500;
	// li r27,0
	r27.s64 = 0;
loc_82E9142C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r28,r11,r27
	r28.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lbz r11,136(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e91488
	if (cr0.eq) goto loc_82E91488;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e91488
	if (!cr6.gt) goto loc_82E91488;
	// li r30,0
	r30.s64 = 0;
loc_82E91458:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(132) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e91458
	if (cr6.lt) goto loc_82E91458;
loc_82E91488:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82e9142c
	if (cr6.lt) goto loc_82E9142C;
	// b 0x82e91500
	goto loc_82E91500;
loc_82E914A4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e91500
	if (!cr6.gt) goto loc_82E91500;
	// li r30,0
	r30.s64 = 0;
loc_82E914B8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 136);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e914e8
	if (cr0.eq) goto loc_82E914E8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E914E8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e914b8
	if (cr6.lt) goto loc_82E914B8;
loc_82E91500:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E91504:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E913A8) {
	__imp__sub_82E913A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91510) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e91580
	if (cr0.eq) goto loc_82E91580;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_82E91558:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, xer);
	// beq cr6,0x82e9157c
	if (cr6.eq) goto loc_82E9157C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e91558
	if (cr6.lt) goto loc_82E91558;
	// b 0x82e91580
	goto loc_82E91580;
loc_82E9157C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E91580:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e915d4
	if (cr0.eq) goto loc_82E915D4;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e915c0
	if (!cr6.lt) goto loc_82E915C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E91598:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e91598
	if (cr6.lt) goto loc_82E91598;
loc_82E915C0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e915d8
	goto loc_82E915D8;
loc_82E915D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E915D8:
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

PPC_WEAK_FUNC(sub_82E91510) {
	__imp__sub_82E91510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E915F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e91610
	if (!cr6.eq) goto loc_82E91610;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82E91610:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e91624
	if (!cr6.eq) goto loc_82E91624;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82E91624:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e91638
	if (cr0.eq) goto loc_82E91638;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82E91638:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e9164c
	if (cr0.eq) goto loc_82E9164C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_82E9164C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E915F0) {
	__imp__sub_82E915F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91668) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,23188
	r11.s64 = r11.s64 + 23188;
loc_82E9169C:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e916ec
	if (cr6.eq) goto loc_82E916EC;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(268) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e9169c
	if (!cr0.eq) goto loc_82E9169C;
	// li r11,0
	r11.s64 = 0;
loc_82E916B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e916d4
	if (cr0.eq) goto loc_82E916D4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E916D4:
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
loc_82E916EC:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e916b4
	goto loc_82E916B4;
}

PPC_WEAK_FUNC(sub_82E91668) {
	__imp__sub_82E91668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E916F8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,23188
	r11.s64 = r11.s64 + 23188;
loc_82E9172C:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e9177c
	if (cr6.eq) goto loc_82E9177C;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(268) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e9172c
	if (!cr0.eq) goto loc_82E9172C;
	// li r11,0
	r11.s64 = 0;
loc_82E91744:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e91764
	if (cr0.eq) goto loc_82E91764;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91764:
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
loc_82E9177C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82e91744
	goto loc_82E91744;
}

PPC_WEAK_FUNC(sub_82E916F8) {
	__imp__sub_82E916F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91788) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27288
	r11.s64 = r11.s64 + -27288;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// beq cr6,0x82e918b0
	if (cr6.eq) goto loc_82E918B0;
	// lis r11,2340
	r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	r11.u64 = r11.u64 | 37449;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// ble cr6,0x82e917e8
	if (!cr6.gt) goto loc_82E917E8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E917E8:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e917f8
	if (cr6.gt) goto loc_82E917F8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82E917F8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91844
	if (cr0.eq) goto loc_82E91844;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// blt 0x82e9183c
	if (cr0.lt) goto loc_82E9183C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-30208
	ctx.r9.s64 = ctx.r9.s64 + -30208;
loc_82E91820:
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r29.u32);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// bge 0x82e91820
	if (!cr0.lt) goto loc_82E91820;
loc_82E9183C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x82e91848
	goto loc_82E91848;
loc_82E91844:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E91848:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82e9189c
	if (!cr6.gt) goto loc_82E9189C;
	// li r11,28
	r11.s64 = 28;
loc_82E91868:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e91868
	if (cr6.lt) goto loc_82E91868;
loc_82E9189C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r29.u32);
loc_82E918B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E91788) {
	__imp__sub_82E91788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E918C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e918f4
	if (!cr0.eq) goto loc_82E918F4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-17100
	r11.s64 = r11.s64 + -17100;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82E918F4:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// stb r7,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r7.u8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82e91984
	if (!cr6.eq) goto loc_82E91984;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e91968
	if (!cr0.eq) goto loc_82E91968;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E91968:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E91984:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// beq 0x82e919a4
	if (cr0.eq) goto loc_82E919A4;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r11.u32);
	// b 0x82e919a8
	goto loc_82E919A8;
loc_82E919A4:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E919A8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,-17100
	ctx.r10.s64 = ctx.r10.s64 + -17100;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E918C0) {
	__imp__sub_82E918C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E919C8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,9692
	r11.s64 = r11.s64 + 9692;
	// li r30,0
	r30.s64 = 0;
	// lis r29,-31948
	r29.s64 = -2093744128;
	// lis r10,-32023
	ctx.r10.s64 = -2098659328;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,5736
	ctx.r4.s64 = ctx.r10.s64 + 5736;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// bl 0x82e7c9c0
	sub_82E7C9C0(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,5880
	ctx.r4.s64 = r11.s64 + 5880;
	// bl 0x82e7c9e0
	sub_82E7C9E0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E919C8) {
	__imp__sub_82E919C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91A40) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,9692
	ctx.r10.s64 = ctx.r10.s64 + 9692;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x82e91aa0
	if (cr0.eq) goto loc_82E91AA0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e91a9c
	if (cr6.eq) goto loc_82E91A9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e91aa0
	goto loc_82E91AA0;
loc_82E91A9C:
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82E91AA0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91abc
	if (cr0.eq) goto loc_82E91ABC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91ABC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91adc
	if (cr0.eq) goto loc_82E91ADC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91ADC:
	// lis r30,-31948
	r30.s64 = -2093744128;
	// lis r11,-32023
	r11.s64 = -2098659328;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,5736
	ctx.r4.s64 = r11.s64 + 5736;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82e7c9d0
	sub_82E7C9D0(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,5880
	ctx.r4.s64 = r11.s64 + 5880;
	// bl 0x82e7c9f0
	sub_82E7C9F0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82E91A40) {
	__imp__sub_82E91A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91B30) {
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
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82e7ebc0
	sub_82E7EBC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e91b98
	if (!cr0.eq) goto loc_82E91B98;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91c1c
	goto loc_82E91C1C;
loc_82E91B98:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e91bb4
	if (!cr6.gt) goto loc_82E91BB4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E91BB4:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r11,0
	r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e91bf0
	if (!cr6.gt) goto loc_82E91BF0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E91BD0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e91bd0
	if (cr6.lt) goto loc_82E91BD0;
loc_82E91BF0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91c10
	if (cr0.eq) goto loc_82E91C10;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82e91788
	sub_82E91788(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e91c14
	goto loc_82E91C14;
loc_82E91C10:
	// li r11,0
	r11.s64 = 0;
loc_82E91C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82E91C1C:
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

PPC_WEAK_FUNC(sub_82E91B30) {
	__imp__sub_82E91B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91C38) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r11,-17100
	r28.s64 = r11.s64 + -17100;
	// bne cr6,0x82e91d1c
	if (!cr6.eq) goto loc_82E91D1C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r3,28
	ctx.r3.s64 = 28;
	// beq cr6,0x82e91c9c
	if (cr6.eq) goto loc_82E91C9C;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91cc0
	if (cr0.eq) goto loc_82E91CC0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82e91cb4
	goto loc_82E91CB4;
loc_82E91C9C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91cc0
	if (cr0.eq) goto loc_82E91CC0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
loc_82E91CB4:
	// bl 0x82e91788
	sub_82E91788(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82e91cc4
	goto loc_82E91CC4;
loc_82E91CC0:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82E91CC4:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82e91cf0
	goto loc_82E91CF0;
loc_82E91CD0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e918c0
	sub_82E918C0(ctx, base);
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
loc_82E91CF0:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e91cd0
	if (!cr0.eq) goto loc_82E91CD0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91d18
	if (cr0.eq) goto loc_82E91D18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91D18:
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
loc_82E91D1C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82e918c0
	sub_82E918C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E91C38) {
	__imp__sub_82E91C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91D50) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// addi r11,r11,-17100
	r11.s64 = r11.s64 + -17100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x82e91d9c
	goto loc_82E91D9C;
loc_82E91D74:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82e91d98
	if (!cr6.eq) goto loc_82E91D98;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e91d98
	if (!cr6.eq) goto loc_82E91D98;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e91dac
	if (cr6.eq) goto loc_82E91DAC;
loc_82E91D98:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
loc_82E91D9C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne 0x82e91d74
	if (!cr0.eq) goto loc_82E91D74;
	// b 0x82e91db4
	goto loc_82E91DB4;
loc_82E91DAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e915f0
	sub_82E915F0(ctx, base);
loc_82E91DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E91D50) {
	__imp__sub_82E91D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91DC8) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82e91e1c
	goto loc_82E91E1C;
loc_82E91DE8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82e91e04
	if (cr6.eq) goto loc_82E91E04;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e91e04
	if (cr6.eq) goto loc_82E91E04;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e91e18
	if (!cr6.eq) goto loc_82E91E18;
loc_82E91E04:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91E18:
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
loc_82E91E1C:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e91de8
	if (!cr0.eq) goto loc_82E91DE8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E91DC8) {
	__imp__sub_82E91DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e91e54
	if (cr0.eq) goto loc_82E91E54;
	// bl 0x82e919c8
	sub_82E919C8(ctx, base);
	// b 0x82e91e58
	goto loc_82E91E58;
loc_82E91E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E91E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E91E30) {
	__imp__sub_82E91E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91E68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e91a40
	sub_82E91A40(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e91ea4
	if (cr0.eq) goto loc_82E91EA4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E91EA4:
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

PPC_WEAK_FUNC(sub_82E91E68) {
	__imp__sub_82E91E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91EC0) {
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
	// bl 0x82e87420
	sub_82E87420(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82e91f40
	if (!cr0.gt) goto loc_82E91F40;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82E91EF4:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E91F00:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e91f24
	if (cr0.eq) goto loc_82E91F24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82e91f00
	if (cr6.eq) goto loc_82E91F00;
loc_82E91F24:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e91f50
	if (cr0.eq) goto loc_82E91F50;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e91ef4
	if (cr6.lt) goto loc_82E91EF4;
loc_82E91F40:
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// bne cr6,0x82e91f5c
	if (!cr6.eq) goto loc_82E91F5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e91f74
	goto loc_82E91F74;
loc_82E91F50:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// b 0x82e91f70
	goto loc_82E91F70;
loc_82E91F5C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
loc_82E91F70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E91F74:
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

PPC_WEAK_FUNC(sub_82E91EC0) {
	__imp__sub_82E91EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E91F88) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-1124
	ctx.r9.s64 = r11.s64 + -1124;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E91FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82e91fc0
	if (!cr0.eq) goto loc_82E91FC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e91ec0
	sub_82E91EC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e91fec
	if (!cr0.eq) goto loc_82E91FEC;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82e91ff8
	goto loc_82E91FF8;
loc_82E91FEC:
	// bl 0x82e87420
	sub_82E87420(ctx, base);
	// lwz r11,1024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82E91FF8:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r29,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r29.u32);
	// bne cr6,0x82e9201c
	if (!cr6.eq) goto loc_82E9201C;
	// bl 0x82e7ca00
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// b 0x82e92024
	goto loc_82E92024;
loc_82E9201C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
loc_82E92024:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e92040
	if (cr0.eq) goto loc_82E92040;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(272) );
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9704) );
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(r11.u32 + -9704, ctx.r10.u32);
loc_82E92040:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E91F88) {
	__imp__sub_82E91F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92050) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e91f88
	sub_82E91F88(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25688
	r11.s64 = r11.s64 + -25688;
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

PPC_WEAK_FUNC(sub_82E92050) {
	__imp__sub_82E92050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92098) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e920c0
	if (!cr6.eq) goto loc_82E920C0;
loc_82E920B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e92100
	goto loc_82E92100;
loc_82E920C0:
	// lwz r31,12(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e920b8
	if (cr0.eq) goto loc_82E920B8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e920b8
	if (cr0.eq) goto loc_82E920B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e757b8
	sub_82E757B8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82E92100:
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

PPC_WEAK_FUNC(sub_82E92098) {
	__imp__sub_82E92098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92118) {
	__imp__sub_82E92118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e92158
	if (cr6.eq) goto loc_82E92158;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e92158
	if (!cr6.lt) goto loc_82E92158;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9215c
	if (!cr6.eq) goto loc_82E9215C;
loc_82E92158:
	// li r11,0
	r11.s64 = 0;
loc_82E9215C:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92128) {
	__imp__sub_82E92128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,24020
	ctx.r3.s64 = r11.s64 + 24020;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92168) {
	__imp__sub_82E92168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92178) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e921ac
	if (cr0.eq) goto loc_82E921AC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25680
	r11.s64 = r11.s64 + -25680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e921b0
	goto loc_82E921B0;
loc_82E921AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E921B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92178) {
	__imp__sub_82E92178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E921C0) {
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
	// lis r30,-31952
	r30.s64 = -2094006272;
	// addi r11,r11,-25616
	r11.s64 = r11.s64 + -25616;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e9220c
	if (cr0.eq) goto loc_82E9220C;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9220c
	if (!cr6.eq) goto loc_82E9220C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9220C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92230
	if (cr0.eq) goto loc_82E92230;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e92230
	if (!cr6.eq) goto loc_82E92230;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E92230:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82E921C0) {
	__imp__sub_82E921C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92258) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9229c
	if (cr0.eq) goto loc_82E9229C;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9229c
	if (!cr6.eq) goto loc_82E9229C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_82E9229C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e922c4
	if (cr0.eq) goto loc_82E922C4;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e922c4
	if (!cr6.eq) goto loc_82E922C4;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_82E922C4:
	// li r11,1
	r11.s64 = 1;
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
	// ble cr6,0x82e922ec
	if (!cr6.gt) goto loc_82E922EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E922EC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e92308
	if (!cr6.gt) goto loc_82E92308;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E92308:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E92258) {
	__imp__sub_82E92258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92330) {
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
	// bl 0x82e85648
	sub_82E85648(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82E92330) {
	__imp__sub_82E92330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92370) {
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
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e923ac
	if (!cr6.gt) goto loc_82E923AC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e923c4
	if (cr6.eq) goto loc_82E923C4;
loc_82E923AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_82E923C4:
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

PPC_WEAK_FUNC(sub_82E92370) {
	__imp__sub_82E92370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E923E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r7,r10
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E923E0) {
	__imp__sub_82E923E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92458) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e92534
	if (!cr6.gt) goto loc_82E92534;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,-9856
	r31.s64 = r11.s64 + -9856;
loc_82E92484:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e924bc
	if (cr6.eq) goto loc_82E924BC;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e924bc
	if (!cr6.lt) goto loc_82E924BC;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e924c0
	if (!cr6.eq) goto loc_82E924C0;
loc_82E924BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E924C0:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e92520
	if (cr6.eq) goto loc_82E92520;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// li r7,255
	ctx.r7.s64 = 255;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// li r6,255
	ctx.r6.s64 = 255;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r27,72(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r4,r10
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mulli r10,r11,20
	ctx.r10.s64 = r11.s64 * 20;
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E92520:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(36) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e92484
	if (cr6.lt) goto loc_82E92484;
loc_82E92534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E92458) {
	__imp__sub_82E92458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92540) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e85580
	sub_82E85580(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-25616
	ctx.r10.s64 = r11.s64 + -25616;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stb r10,52(r31)
	PPC_STORE_U8(r31.u32 + 52, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_82E92540) {
	__imp__sub_82E92540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E925B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e921c0
	sub_82E921C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e925f4
	if (cr0.eq) goto loc_82E925F4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E925F4:
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

PPC_WEAK_FUNC(sub_82E925B8) {
	__imp__sub_82E925B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e85d08
	sub_82E85D08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e92644
	if (cr0.eq) goto loc_82E92644;
loc_82E9263C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e926ec
	goto loc_82E926EC;
loc_82E92644:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25536
	r11.s64 = r11.s64 + -25536;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e92684
	if (!cr0.eq) goto loc_82E92684;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e92258
	sub_82E92258(ctx, base);
	// b 0x82e9263c
	goto loc_82E9263C;
loc_82E92684:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,30936
	r11.s64 = r11.s64 + 30936;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e926e8
	if (!cr0.eq) goto loc_82E926E8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e926bc
	if (cr0.eq) goto loc_82E926BC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e926c4
	goto loc_82E926C4;
loc_82E926BC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E926C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// b 0x82e926ec
	goto loc_82E926EC;
loc_82E926E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E926EC:
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

PPC_WEAK_FUNC(sub_82E92610) {
	__imp__sub_82E92610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92708) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e92734
	if (!cr6.eq) goto loc_82E92734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e929a8
	goto loc_82E929A8;
loc_82E92734:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e929a4
	if (cr0.eq) goto loc_82E929A4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e929a4
	if (cr6.eq) goto loc_82E929A4;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e927a8
	if (cr0.eq) goto loc_82E927A8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_82E927A8:
	// fmuls f13,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82e929a4
	if (cr6.gt) goto loc_82E929A4;
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e92850
	if (!cr0.eq) goto loc_82E92850;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e928b0
	if (cr0.eq) goto loc_82E928B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
loc_82E927DC:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e9280c
	if (cr6.eq) goto loc_82E9280C;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e9280c
	if (!cr6.lt) goto loc_82E9280C;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e92810
	if (!cr6.eq) goto loc_82E92810;
loc_82E9280C:
	// li r11,0
	r11.s64 = 0;
loc_82E92810:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,60(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(60) );
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e929a4
	if (cr6.eq) goto loc_82E929A4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82e927dc
	if (cr6.lt) goto loc_82E927DC;
	// b 0x82e928b0
	goto loc_82E928B0;
loc_82E92850:
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e928b0
	if (cr0.eq) goto loc_82E928B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
loc_82E92860:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e92890
	if (cr6.eq) goto loc_82E92890;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e92890
	if (!cr6.lt) goto loc_82E92890;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e92894
	if (!cr6.eq) goto loc_82E92894;
loc_82E92890:
	// li r11,0
	r11.s64 = 0;
loc_82E92894:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82e929a4
	if (cr6.eq) goto loc_82E929A4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82e92860
	if (cr6.lt) goto loc_82E92860;
loc_82E928B0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bgt cr6,0x82e928c0
	if (cr6.gt) goto loc_82E928C0;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82E928C0:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// ble cr6,0x82e928e4
	if (!cr6.gt) goto loc_82E928E4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e92990
	goto loc_82E92990;
loc_82E928E4:
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82e92924
	if (!cr6.gt) goto loc_82E92924;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
loc_82E928F4:
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e92914
	if (!cr6.lt) goto loc_82E92914;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82e92918
	goto loc_82E92918;
loc_82E92914:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E92918:
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82e928f4
	if (cr6.gt) goto loc_82E928F4;
loc_82E92924:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82e92944
	if (!cr6.lt) goto loc_82E92944;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e92944
	if (!cr6.gt) goto loc_82E92944;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82E92944:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x82e92980
	if (!cr6.gt) goto loc_82E92980;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_82E92954:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-4) );
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne 0x82e92954
	if (!cr0.eq) goto loc_82E92954;
loc_82E92980:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_82E92990:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82E929A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E929A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E92708) {
	__imp__sub_82E92708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E929B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e92ac0
	if (cr6.eq) goto loc_82E92AC0;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82e929f0
	if (!cr6.eq) goto loc_82E929F0;
	// li r11,0
	r11.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// b 0x82e92a58
	goto loc_82E92A58;
loc_82E929F0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r11,r6,r11
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e92a2c
	if (cr6.eq) goto loc_82E92A2C;
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82e92a2c
	if (!cr6.lt) goto loc_82E92A2C;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e92a30
	if (!cr6.eq) goto loc_82E92A30;
loc_82E92A2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E92A30:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r11,r6,r5
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
loc_82E92A58:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-25520
	r11.s64 = r11.s64 + -25520;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826243d8
	sub_826243D8(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82E92AC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E929B0) {
	__imp__sub_82E929B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92AD8) {
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e92b00
	if (!cr6.eq) goto loc_82E92B00;
loc_82E92AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e92b78
	goto loc_82E92B78;
loc_82E92B00:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e92b14
	if (!cr6.eq) goto loc_82E92B14;
	// li r11,-2
	r11.s64 = -2;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_82E92B14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e929b0
	sub_82E929B0(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82e92af8
	if (cr6.eq) goto loc_82E92AF8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e92b68
	if (cr6.eq) goto loc_82E92B68;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e92b68
	if (!cr6.lt) goto loc_82E92B68;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e92b6c
	if (!cr6.eq) goto loc_82E92B6C;
loc_82E92B68:
	// li r11,0
	r11.s64 = 0;
loc_82E92B6C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_82E92B78:
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

PPC_WEAK_FUNC(sub_82E92AD8) {
	__imp__sub_82E92AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92B90) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e92ad8
	sub_82E92AD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E92B90) {
	__imp__sub_82E92B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92B98) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e92bc4
	if (!cr6.eq) goto loc_82E92BC4;
	// li r10,-2
	ctx.r10.s64 = -2;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// b 0x82e92c00
	goto loc_82E92C00;
loc_82E92BC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82e92ad8
	sub_82E92AD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92bfc
	if (cr0.eq) goto loc_82E92BFC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82e92c00
	goto loc_82E92C00;
loc_82E92BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92B98) {
	__imp__sub_82E92B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92C10) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e92c7c
	if (cr6.eq) goto loc_82E92C7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92c7c
	if (cr0.eq) goto loc_82E92C7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// beq cr6,0x82e92c74
	if (cr6.eq) goto loc_82E92C74;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-28736
	r30.s64 = r11.s64 + -28736;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e92c7c
	if (!cr0.eq) goto loc_82E92C7C;
loc_82E92C74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e92c80
	goto loc_82E92C80;
loc_82E92C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92C80:
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

PPC_WEAK_FUNC(sub_82E92C10) {
	__imp__sub_82E92C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92C98) {
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
	// lwz r26,4(r5)
	r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82ecb620
	sub_82ECB620(ctx, base);
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// li r31,0
	r31.s64 = 0;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e92d2c
	if (cr0.eq) goto loc_82E92D2C;
loc_82E92CC4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e92cf4
	if (cr6.eq) goto loc_82E92CF4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82e92cc4
	if (cr6.lt) goto loc_82E92CC4;
	// b 0x82e92d2c
	goto loc_82E92D2C;
loc_82E92CF4:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e92d18
	if (!cr6.eq) goto loc_82E92D18;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(36) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e92d2c
	if (cr6.eq) goto loc_82E92D2C;
loc_82E92D18:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E92D2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E92C98) {
	__imp__sub_82E92C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92D38) {
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
	// lwz r26,4(r5)
	r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82ecb620
	sub_82ECB620(ctx, base);
	// lwz r28,52(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// li r31,0
	r31.s64 = 0;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e92dcc
	if (cr0.eq) goto loc_82E92DCC;
loc_82E92D64:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e92d94
	if (cr6.eq) goto loc_82E92D94;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82e92d64
	if (cr6.lt) goto loc_82E92D64;
	// b 0x82e92dcc
	goto loc_82E92DCC;
loc_82E92D94:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e92db8
	if (!cr6.eq) goto loc_82E92DB8;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(36) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e92dcc
	if (cr6.eq) goto loc_82E92DCC;
loc_82E92DB8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E92DCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E92D38) {
	__imp__sub_82E92D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,24572
	ctx.r3.s64 = r11.s64 + 24572;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92DD8) {
	__imp__sub_82E92DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92DE8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27288
	r11.s64 = r11.s64 + -27288;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// beq cr6,0x82e92f10
	if (cr6.eq) goto loc_82E92F10;
	// lis r11,3276
	r11.s64 = 214695936;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,52428
	r11.u64 = r11.u64 | 52428;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// ble cr6,0x82e92e48
	if (!cr6.gt) goto loc_82E92E48;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E92E48:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e92e58
	if (cr6.gt) goto loc_82E92E58;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82E92E58:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92ea4
	if (cr0.eq) goto loc_82E92EA4;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// blt 0x82e92e9c
	if (cr0.lt) goto loc_82E92E9C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-25496
	ctx.r9.s64 = ctx.r9.s64 + -25496;
loc_82E92E80:
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x82e92e80
	if (!cr0.lt) goto loc_82E92E80;
loc_82E92E9C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x82e92ea8
	goto loc_82E92EA8;
loc_82E92EA4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E92EA8:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82e92efc
	if (!cr6.gt) goto loc_82E92EFC;
	// li r11,20
	r11.s64 = 20;
loc_82E92EC8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r8,r9,-20
	ctx.r8.s64 = ctx.r9.s64 + -20;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e92ec8
	if (cr6.lt) goto loc_82E92EC8;
loc_82E92EFC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r29.u32);
loc_82E92F10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E92DE8) {
	__imp__sub_82E92DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92F20) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92f54
	if (cr0.eq) goto loc_82E92F54;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25492
	r11.s64 = r11.s64 + -25492;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e92f58
	goto loc_82E92F58;
loc_82E92F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E92F20) {
	__imp__sub_82E92F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E92F68) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-25492
	r11.s64 = r11.s64 + -25492;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82e93014
	if (cr6.eq) goto loc_82E93014;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-4424
	ctx.r4.s64 = r11.s64 + -4424;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e92ff4
	if (cr0.eq) goto loc_82E92FF4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82e92fec
	goto loc_82E92FEC;
loc_82E92FC0:
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,11416
	ctx.r4.s64 = r11.s64 + 11416;
	// bl 0x82ec64f8
	sub_82EC64F8(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r11,11576
	ctx.r4.s64 = r11.s64 + 11576;
	// bl 0x82ec66f0
	sub_82EC66F0(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_82E92FEC:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e92fc0
	if (!cr0.eq) goto loc_82E92FC0;
loc_82E92FF4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93014
	if (cr0.eq) goto loc_82E93014;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93014:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82E92F68) {
	__imp__sub_82E92F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93038) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e930e4
	if (!cr6.gt) goto loc_82E930E4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r11,-25476
	r27.s64 = r11.s64 + -25476;
loc_82E93068:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7d860
	sub_82E7D860(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e930a8
	if (cr0.eq) goto loc_82E930A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e930a8
	if (cr0.eq) goto loc_82E930A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e930a8
	if (!cr0.eq) goto loc_82E930A8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82E930A8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e93068
	if (cr6.lt) goto loc_82E93068;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e930e4
	if (cr6.eq) goto loc_82E930E4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e930dc
	if (cr0.eq) goto loc_82E930DC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e92de8
	sub_82E92DE8(ctx, base);
	// b 0x82e930e0
	goto loc_82E930E0;
loc_82E930DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E930E0:
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
loc_82E930E4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ea45b0
	sub_82EA45B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E93038) {
	__imp__sub_82E93038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E930F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e92c10
	sub_82E92C10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93120
	if (cr0.eq) goto loc_82E93120;
loc_82E93118:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e931d8
	goto loc_82E931D8;
loc_82E93120:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,-25476
	r29.s64 = r11.s64 + -25476;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e931d4
	if (!cr0.eq) goto loc_82E931D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e93118
	if (cr0.eq) goto loc_82E93118;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-4424
	ctx.r4.s64 = r11.s64 + -4424;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e931d4
	if (cr0.eq) goto loc_82E931D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ec7ed8
	sub_82EC7ED8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq 0x82e931d4
	if (cr0.eq) goto loc_82E931D4;
	// lis r11,-32023
	r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,11416
	ctx.r4.s64 = r11.s64 + 11416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6398
	sub_82EC6398(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,11576
	ctx.r4.s64 = r11.s64 + 11576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6590
	sub_82EC6590(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r11,r11,-17100
	r11.s64 = r11.s64 + -17100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82ebac38
	sub_82EBAC38(ctx, base);
	// b 0x82e93118
	goto loc_82E93118;
loc_82E931D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E931D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E930F8) {
	__imp__sub_82E930F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E931E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e92f68
	sub_82E92F68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9321c
	if (cr0.eq) goto loc_82E9321C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9321C:
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

PPC_WEAK_FUNC(sub_82E931E0) {
	__imp__sub_82E931E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93238) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// addi r11,r11,-25432
	r11.s64 = r11.s64 + -25432;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e93278
	if (cr0.eq) goto loc_82E93278;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93278:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93290
	if (cr0.eq) goto loc_82E93290;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93290:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99598
	sub_82E99598(ctx, base);
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

PPC_WEAK_FUNC(sub_82E93238) {
	__imp__sub_82E93238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E932B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,24852
	ctx.r3.s64 = r11.s64 + 24852;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E932B0) {
	__imp__sub_82E932B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E932C0) {
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
	// bl 0x82e99750
	sub_82E99750(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r11.u8);
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

PPC_WEAK_FUNC(sub_82E932C0) {
	__imp__sub_82E932C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E932F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e997d0
	sub_82E997D0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// ble cr6,0x82e933d0
	if (!cr6.gt) goto loc_82E933D0;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e933d0
	if (cr0.eq) goto loc_82E933D0;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93364
	if (cr6.lt) goto loc_82E93364;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93388
	goto loc_82E93388;
loc_82E93364:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93388:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e933bc
	if (!cr6.eq) goto loc_82E933BC;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e933bc
	if (cr6.eq) goto loc_82E933BC;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E933BC:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93364
	if (cr6.lt) goto loc_82E93364;
loc_82E933D0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e93404
	if (cr6.eq) goto loc_82E93404;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e93404
	if (cr6.eq) goto loc_82E93404;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E932F8) {
	__imp__sub_82E932F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,24848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24848) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24848(r11)
	PPC_STORE_U32(r11.u32 + 24848, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E93410) {
	__imp__sub_82E93410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93428) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e93238
	sub_82E93238(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93464
	if (cr0.eq) goto loc_82E93464;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93464:
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

PPC_WEAK_FUNC(sub_82E93428) {
	__imp__sub_82E93428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93480) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e93610
	if (!cr6.eq) goto loc_82E93610;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r28,0
	r28.s64 = 0;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e93534
	if (!cr6.gt) goto loc_82E93534;
	// li r30,0
	r30.s64 = 0;
loc_82E934D4:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e934e8
	if (cr6.lt) goto loc_82E934E8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e934f4
	goto loc_82E934F4;
loc_82E934E8:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r30
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82E934F4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e93520
	if (!cr6.eq) goto loc_82E93520;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9357c
	if (!cr0.eq) goto loc_82E9357C;
loc_82E93520:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e934d4
	if (cr6.lt) goto loc_82E934D4;
loc_82E93534:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82e935e8
	if (!cr6.gt) goto loc_82E935E8;
	// li r30,0
	r30.s64 = 0;
loc_82E93568:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93584
	if (cr6.lt) goto loc_82E93584;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e935a8
	goto loc_82E935A8;
loc_82E9357C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e93614
	goto loc_82E93614;
loc_82E93584:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82E935A8:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e935d4
	if (!cr6.eq) goto loc_82E935D4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9357c
	if (!cr0.eq) goto loc_82E9357C;
loc_82E935D4:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93568
	if (cr6.lt) goto loc_82E93568;
loc_82E935E8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82eccfb0
	sub_82ECCFB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
loc_82E93610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E93614:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E93480) {
	__imp__sub_82E93480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93620) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9364c
	if (!cr0.eq) goto loc_82E9364C;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e936e0
	if (!cr6.gt) goto loc_82E936E0;
loc_82E9364C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(100) );
	// stw r4,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9366c
	if (cr0.eq) goto loc_82E9366C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9366C:
	// lwz r31,108(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e936d0
	if (cr0.eq) goto loc_82E936D0;
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82e93690
	if (!cr6.gt) goto loc_82E93690;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93690:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e936d0
	if (cr0.eq) goto loc_82E936D0;
	// addic. r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82e936c8
	if (cr0.lt) goto loc_82E936C8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E936B0:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e936b0
	if (!cr0.lt) goto loc_82E936B0;
loc_82E936C8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e936d4
	goto loc_82E936D4;
loc_82E936D0:
	// li r11,0
	r11.s64 = 0;
loc_82E936D4:
	// stw r11,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
loc_82E936E0:
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

PPC_WEAK_FUNC(sub_82E93620) {
	__imp__sub_82E93620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E936F8) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93724
	if (!cr0.eq) goto loc_82E93724;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e93780
	if (!cr6.gt) goto loc_82E93780;
loc_82E93724:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// stw r4,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93744
	if (cr0.eq) goto loc_82E93744;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93744:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e9375c
	if (!cr0.eq) goto loc_82E9375C;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// b 0x82e9377c
	goto loc_82E9377C;
loc_82E9375C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e93774
	if (!cr6.gt) goto loc_82E93774;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93774:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_82E9377C:
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
loc_82E93780:
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

PPC_WEAK_FUNC(sub_82E936F8) {
	__imp__sub_82E936F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93798) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e99528
	sub_82E99528(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// addi r9,r11,-25432
	ctx.r9.s64 = r11.s64 + -25432;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,-6136
	ctx.r8.s64 = ctx.r8.s64 + -6136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// addi r7,r11,16936
	ctx.r7.s64 = r11.s64 + 16936;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
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

PPC_WEAK_FUNC(sub_82E93798) {
	__imp__sub_82E93798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93838) {
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
	// bl 0x82e99cd0
	sub_82E99CD0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93860
	if (!cr0.eq) goto loc_82E93860;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9389c
	goto loc_82E9389C;
loc_82E93860:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e9387c
	if (!cr6.eq) goto loc_82E9387C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e936f8
	sub_82E936F8(ctx, base);
loc_82E9387C:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e93898
	if (!cr6.eq) goto loc_82E93898;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e93620
	sub_82E93620(ctx, base);
loc_82E93898:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9389C:
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

PPC_WEAK_FUNC(sub_82E93838) {
	__imp__sub_82E93838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E938B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e938d4
	if (!cr6.eq) goto loc_82E938D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e93970
	goto loc_82E93970;
loc_82E938D4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30720
	r30.s64 = r11.s64 + -30720;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e93920
	if (!cr0.eq) goto loc_82E93920;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93964
	if (cr0.eq) goto loc_82E93964;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e93620
	sub_82E93620(ctx, base);
loc_82E93918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e93970
	goto loc_82E93970;
loc_82E93920:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30744
	r30.s64 = r11.s64 + -30744;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e93964
	if (!cr0.eq) goto loc_82E93964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93964
	if (cr0.eq) goto loc_82E93964;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e936f8
	sub_82E936F8(ctx, base);
	// b 0x82e93918
	goto loc_82E93918;
loc_82E93964:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e99a58
	sub_82E99A58(ctx, base);
loc_82E93970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E938B0) {
	__imp__sub_82E938B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9399c
	if (cr0.eq) goto loc_82E9399C;
	// bl 0x82e93798
	sub_82E93798(ctx, base);
	// b 0x82e939a0
	goto loc_82E939A0;
loc_82E9399C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E939A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E93978) {
	__imp__sub_82E93978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E939B0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e93a00
	if (!cr6.eq) goto loc_82E93A00;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// lwz r11,124(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// b 0x82e93a14
	goto loc_82E93A14;
loc_82E93A00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E93A14:
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_82E939B0) {
	__imp__sub_82E939B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93A30) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e93a80
	if (!cr6.eq) goto loc_82E93A80;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// lwz r11,124(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// b 0x82e93a94
	goto loc_82E93A94;
loc_82E93A80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E93A94:
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_82E93A30) {
	__imp__sub_82E93A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93AB0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bne cr6,0x82e93b10
	if (!cr6.eq) goto loc_82E93B10;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// lwz r8,124(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mullw r11,r8,r9
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82e93b28
	goto loc_82E93B28;
loc_82E93B10:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82E93B28:
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

PPC_WEAK_FUNC(sub_82E93AB0) {
	__imp__sub_82E93AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93B40) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// addi r11,r11,-25312
	r11.s64 = r11.s64 + -25312;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e93b80
	if (cr0.eq) goto loc_82E93B80;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93B80:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e93b98
	if (cr0.eq) goto loc_82E93B98;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93B98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9adc0
	sub_82E9ADC0(ctx, base);
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

PPC_WEAK_FUNC(sub_82E93B40) {
	__imp__sub_82E93B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,25132
	ctx.r3.s64 = r11.s64 + 25132;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E93BB8) {
	__imp__sub_82E93BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e99d70
	sub_82E99D70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E93BC8) {
	__imp__sub_82E93BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93BD0) {
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
	// bl 0x82e9aea8
	sub_82E9AEA8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
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

PPC_WEAK_FUNC(sub_82E93BD0) {
	__imp__sub_82E93BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93C08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9aef0
	sub_82E9AEF0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// ble cr6,0x82e93ce0
	if (!cr6.gt) goto loc_82E93CE0;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e93ce0
	if (cr0.eq) goto loc_82E93CE0;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93c74
	if (cr6.lt) goto loc_82E93C74;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93c98
	goto loc_82E93C98;
loc_82E93C74:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93C98:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e93ccc
	if (!cr6.eq) goto loc_82E93CCC;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e93ccc
	if (cr6.eq) goto loc_82E93CCC;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93CCC:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93c74
	if (cr6.lt) goto loc_82E93C74;
loc_82E93CE0:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e93d74
	if (cr6.eq) goto loc_82E93D74;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e93d74
	if (cr6.eq) goto loc_82E93D74;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e93d48
	if (cr6.eq) goto loc_82E93D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e93d48
	if (cr6.eq) goto loc_82E93D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93D48:
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e93d74
	if (cr6.eq) goto loc_82E93D74;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,150
	ctx.r6.s64 = 150;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93D74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E93C08) {
	__imp__sub_82E93C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,25128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(25128) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,25128(r11)
	PPC_STORE_U32(r11.u32 + 25128, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E93D80) {
	__imp__sub_82E93D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93D98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e93b40
	sub_82E93B40(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93dd4
	if (cr0.eq) goto loc_82E93DD4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93DD4:
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

PPC_WEAK_FUNC(sub_82E93D98) {
	__imp__sub_82E93D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E93DF0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e9421c
	if (!cr6.eq) goto loc_82E9421C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ece9d0
	sub_82ECE9D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82ece780
	sub_82ECE780(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82e939b0
	sub_82E939B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82e93ab0
	sub_82E93AB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82ece840
	sub_82ECE840(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// bl 0x82ecdd10
	sub_82ECDD10(ctx, base);
	// b 0x82e93ea0
	goto loc_82E93EA0;
loc_82E93E88:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82e93a30
	sub_82E93A30(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82e93eac
	if (cr6.eq) goto loc_82E93EAC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecce68
	sub_82ECCE68(ctx, base);
loc_82E93EA0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e93e88
	if (!cr6.eq) goto loc_82E93E88;
	// b 0x82e93eb0
	goto loc_82E93EB0;
loc_82E93EAC:
	// li r29,1
	r29.s64 = 1;
loc_82E93EB0:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93ec0
	if (!cr0.eq) goto loc_82E93EC0;
loc_82E93EB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e94220
	goto loc_82E94220;
loc_82E93EC0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e93f78
	if (!cr6.gt) goto loc_82E93F78;
	// li r30,0
	r30.s64 = 0;
loc_82E93EE0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93ef4
	if (cr6.lt) goto loc_82E93EF4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e93f00
	goto loc_82E93F00;
loc_82E93EF4:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r30
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82E93F00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e93f64
	if (!cr6.eq) goto loc_82E93F64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93f48
	if (cr0.eq) goto loc_82E93F48;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93f40
	if (cr0.eq) goto loc_82E93F40;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93eb8
	if (cr0.eq) goto loc_82E93EB8;
	// b 0x82e93f64
	goto loc_82E93F64;
loc_82E93F40:
	// li r27,1
	r27.s64 = 1;
	// b 0x82e93f60
	goto loc_82E93F60;
loc_82E93F48:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93f5c
	if (cr0.eq) goto loc_82E93F5C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93eb8
	if (!cr0.eq) goto loc_82E93EB8;
	// b 0x82e93f64
	goto loc_82E93F64;
loc_82E93F5C:
	// li r27,0
	r27.s64 = 0;
loc_82E93F60:
	// li r26,1
	r26.s64 = 1;
loc_82E93F64:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93ee0
	if (cr6.lt) goto loc_82E93EE0;
loc_82E93F78:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// li r29,0
	r29.s64 = 0;
	// addi r25,r11,3972
	r25.s64 = r11.s64 + 3972;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e9405c
	if (!cr6.gt) goto loc_82E9405C;
	// li r30,0
	r30.s64 = 0;
loc_82E93FAC:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93fc0
	if (cr6.lt) goto loc_82E93FC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e93fe4
	goto loc_82E93FE4;
loc_82E93FC0:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E93FE4:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e94048
	if (!cr6.eq) goto loc_82E94048;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9402c
	if (cr0.eq) goto loc_82E9402C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e94024
	if (cr0.eq) goto loc_82E94024;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93eb8
	if (cr0.eq) goto loc_82E93EB8;
	// b 0x82e94048
	goto loc_82E94048;
loc_82E94024:
	// li r27,1
	r27.s64 = 1;
	// b 0x82e94044
	goto loc_82E94044;
loc_82E9402C:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e94040
	if (cr0.eq) goto loc_82E94040;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93eb8
	if (!cr0.eq) goto loc_82E93EB8;
	// b 0x82e94048
	goto loc_82E94048;
loc_82E94040:
	// li r27,0
	r27.s64 = 0;
loc_82E94044:
	// li r26,1
	r26.s64 = 1;
loc_82E94048:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e93fac
	if (cr6.lt) goto loc_82E93FAC;
loc_82E9405C:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// li r28,0
	r28.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r27,r11,27,31,31
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e940f4
	if (!cr6.gt) goto loc_82E940F4;
	// li r30,0
	r30.s64 = 0;
loc_82E94080:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94094
	if (cr6.lt) goto loc_82E94094;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e940a0
	goto loc_82E940A0;
loc_82E94094:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r30
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_82E940A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e940e0
	if (!cr6.eq) goto loc_82E940E0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e940d8
	if (cr0.eq) goto loc_82E940D8;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93eb8
	if (cr0.eq) goto loc_82E93EB8;
	// b 0x82e940e0
	goto loc_82E940E0;
loc_82E940D8:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93eb8
	if (!cr0.eq) goto loc_82E93EB8;
loc_82E940E0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94080
	if (cr6.lt) goto loc_82E94080;
loc_82E940F4:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82e941ac
	if (!cr6.gt) goto loc_82E941AC;
	// li r30,0
	r30.s64 = 0;
loc_82E94120:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94134
	if (cr6.lt) goto loc_82E94134;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e94158
	goto loc_82E94158;
loc_82E94134:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E94158:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e94198
	if (!cr6.eq) goto loc_82E94198;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e94190
	if (cr0.eq) goto loc_82E94190;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e93eb8
	if (cr0.eq) goto loc_82E93EB8;
	// b 0x82e94198
	goto loc_82E94198;
loc_82E94190:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e93eb8
	if (!cr0.eq) goto loc_82E93EB8;
loc_82E94198:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94120
	if (cr6.lt) goto loc_82E94120;
loc_82E941AC:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e941e4
	if (cr0.eq) goto loc_82E941E4;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stw r24,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r24.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82e94210
	goto loc_82E94210;
loc_82E941E4:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stw r23,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r23.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
loc_82E94210:
	// stfs f9,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
loc_82E9421C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E94220:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E93DF0) {
	__imp__sub_82E93DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94228) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r10,-30984
	r30.s64 = ctx.r10.s64 + -30984;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E94278:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e94278
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E94278;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r28,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, r28.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r29,r10,6288
	r29.s64 = ctx.r10.s64 + 6288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E942D0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e942d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E942D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r28.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r11,r11,-9856
	r11.s64 = r11.s64 + -9856;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e94310
	if (!cr6.eq) goto loc_82E94310;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82e94334
	goto loc_82E94334;
loc_82E94310:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f1,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E94334:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E94228) {
	__imp__sub_82E94228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94348) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e94374
	if (!cr0.eq) goto loc_82E94374;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e94408
	if (!cr6.gt) goto loc_82E94408;
loc_82E94374:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(112) );
	// stw r4,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e94394
	if (cr0.eq) goto loc_82E94394;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E94394:
	// lwz r31,120(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e943f8
	if (cr0.eq) goto loc_82E943F8;
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82e943b8
	if (!cr6.gt) goto loc_82E943B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E943B8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e943f8
	if (cr0.eq) goto loc_82E943F8;
	// addic. r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82e943f0
	if (cr0.lt) goto loc_82E943F0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E943D8:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e943d8
	if (!cr0.lt) goto loc_82E943D8;
loc_82E943F0:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e943fc
	goto loc_82E943FC;
loc_82E943F8:
	// li r11,0
	r11.s64 = 0;
loc_82E943FC:
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
loc_82E94408:
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

PPC_WEAK_FUNC(sub_82E94348) {
	__imp__sub_82E94348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94420) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9444c
	if (!cr0.eq) goto loc_82E9444C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e944a8
	if (!cr6.gt) goto loc_82E944A8;
loc_82E9444C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stw r4,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9446c
	if (cr0.eq) goto loc_82E9446C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9446C:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e94484
	if (!cr0.eq) goto loc_82E94484;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// b 0x82e944a4
	goto loc_82E944A4;
loc_82E94484:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e9449c
	if (!cr6.gt) goto loc_82E9449C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9449C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
loc_82E944A4:
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
loc_82E944A8:
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

PPC_WEAK_FUNC(sub_82E94420) {
	__imp__sub_82E94420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E944C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9ad58
	sub_82E9AD58(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// lis r9,-32023
	ctx.r9.s64 = -2098659328;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,-6136
	ctx.r8.s64 = ctx.r8.s64 + -6136;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r9,r9,16936
	ctx.r9.s64 = ctx.r9.s64 + 16936;
	// addi r11,r11,-25312
	r11.s64 = r11.s64 + -25312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
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

PPC_WEAK_FUNC(sub_82E944C0) {
	__imp__sub_82E944C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94570) {
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
	// bl 0x82e99cd0
	sub_82E99CD0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e94598
	if (!cr0.eq) goto loc_82E94598;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e945d4
	goto loc_82E945D4;
loc_82E94598:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e945b4
	if (!cr6.eq) goto loc_82E945B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e94420
	sub_82E94420(ctx, base);
loc_82E945B4:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e945d0
	if (!cr6.eq) goto loc_82E945D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e94348
	sub_82E94348(ctx, base);
loc_82E945D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E945D4:
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

PPC_WEAK_FUNC(sub_82E94570) {
	__imp__sub_82E94570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E945E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e9460c
	if (!cr6.eq) goto loc_82E9460C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e946a8
	goto loc_82E946A8;
loc_82E9460C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30720
	r30.s64 = r11.s64 + -30720;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e94658
	if (!cr0.eq) goto loc_82E94658;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9469c
	if (cr0.eq) goto loc_82E9469C;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e94348
	sub_82E94348(ctx, base);
loc_82E94650:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e946a8
	goto loc_82E946A8;
loc_82E94658:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30744
	r30.s64 = r11.s64 + -30744;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9469c
	if (!cr0.eq) goto loc_82E9469C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9469c
	if (cr0.eq) goto loc_82E9469C;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e94420
	sub_82E94420(ctx, base);
	// b 0x82e94650
	goto loc_82E94650;
loc_82E9469C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9b280
	sub_82E9B280(ctx, base);
loc_82E946A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E945E8) {
	__imp__sub_82E945E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E946B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e946d4
	if (cr0.eq) goto loc_82E946D4;
	// bl 0x82e944c0
	sub_82E944C0(ctx, base);
	// b 0x82e946d8
	goto loc_82E946D8;
loc_82E946D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E946D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E946B0) {
	__imp__sub_82E946B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E946E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,26440
	ctx.r3.s64 = r11.s64 + 26440;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E946E8) {
	__imp__sub_82E946E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E946F8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e94728
	if (cr0.eq) goto loc_82E94728;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E94728:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e94750
	if (cr0.eq) goto loc_82E94750;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc3c0
	sub_82ECC3C0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82E94750:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
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

PPC_WEAK_FUNC(sub_82E946F8) {
	__imp__sub_82E946F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94768) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e94798
	if (cr0.eq) goto loc_82E94798;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E94798:
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

PPC_WEAK_FUNC(sub_82E94768) {
	__imp__sub_82E94768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E947B0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e947ec
	if (cr0.eq) goto loc_82E947EC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-25192
	ctx.r10.s64 = r11.s64 + -25192;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82e947f0
	goto loc_82E947F0;
loc_82E947EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E947F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E947B0) {
	__imp__sub_82E947B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94800) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,26436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26436) );
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// addi r31,r9,25408
	r31.s64 = ctx.r9.s64 + 25408;
	// bne 0x82e9485c
	if (!cr0.eq) goto loc_82E9485C;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lbz r8,-9148(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -9148);
	// stw r11,26436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26436, r11.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e94848
	if (cr0.eq) goto loc_82E94848;
	// li r11,0
	r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(r31.u32 + 1024, r11.u32);
loc_82E94848:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,4120
	ctx.r3.s64 = ctx.r10.s64 + 4120;
	// stb r11,-9148(r9)
	PPC_STORE_U8(ctx.r9.u32 + -9148, r11.u8);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82E9485C:
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

PPC_WEAK_FUNC(sub_82E94800) {
	__imp__sub_82E94800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94878) {
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
	// bl 0x82e94800
	sub_82E94800(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82e948f8
	if (!cr0.gt) goto loc_82E948F8;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82E948AC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E948B8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e948dc
	if (cr0.eq) goto loc_82E948DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82e948b8
	if (cr6.eq) goto loc_82E948B8;
loc_82E948DC:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e94908
	if (cr0.eq) goto loc_82E94908;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e948ac
	if (cr6.lt) goto loc_82E948AC;
loc_82E948F8:
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// bne cr6,0x82e94914
	if (!cr6.eq) goto loc_82E94914;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9492c
	goto loc_82E9492C;
loc_82E94908:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// b 0x82e94928
	goto loc_82E94928;
loc_82E94914:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
loc_82E94928:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9492C:
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

PPC_WEAK_FUNC(sub_82E94878) {
	__imp__sub_82E94878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94940) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-27084
	ctx.r9.s64 = r11.s64 + -27084;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E94978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82e94978
	if (!cr0.eq) goto loc_82E94978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e94878
	sub_82E94878(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e949a4
	if (!cr0.eq) goto loc_82E949A4;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82e949b0
	goto loc_82E949B0;
loc_82E949A4:
	// bl 0x82e94800
	sub_82E94800(ctx, base);
	// lwz r11,1024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82E949B0:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r29,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r29.u32);
	// bne cr6,0x82e949d4
	if (!cr6.eq) goto loc_82E949D4;
	// bl 0x82e7ca00
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// b 0x82e949dc
	goto loc_82E949DC;
loc_82E949D4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
loc_82E949DC:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e949f8
	if (cr0.eq) goto loc_82E949F8;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(272) );
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9704) );
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(r11.u32 + -9704, ctx.r10.u32);
loc_82E949F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E94940) {
	__imp__sub_82E94940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,26716
	ctx.r3.s64 = r11.s64 + 26716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E94A08) {
	__imp__sub_82E94A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-25112
	r11.s64 = r11.s64 + -25112;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e94a58
	if (cr0.eq) goto loc_82E94A58;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_82E94A58:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e94a74
	if (cr0.eq) goto loc_82E94A74;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_82E94A74:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E94A18) {
	__imp__sub_82E94A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94A88) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e94ac0
	if (!cr6.eq) goto loc_82E94AC0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e94ad4
	if (cr6.eq) goto loc_82E94AD4;
loc_82E94AC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E94AD4:
	// li r25,0
	r25.s64 = 0;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r26,r31,24
	r26.s64 = r31.s64 + 24;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// bl 0x82ecbbe0
	sub_82ECBBE0(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x82e94b1c
	if (!cr0.eq) goto loc_82E94B1C;
loc_82E94B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e94c60
	goto loc_82E94C60;
loc_82E94B1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb688
	sub_82ECB688(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bge cr6,0x82e94b14
	if (!cr6.lt) goto loc_82E94B14;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94b68
	if (!cr6.gt) goto loc_82E94B68;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82E94B44:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ecc2b8
	sub_82ECC2B8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94b44
	if (cr6.lt) goto loc_82E94B44;
loc_82E94B68:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// li r27,4
	r27.s64 = 4;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94bc8
	if (!cr6.gt) goto loc_82E94BC8;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82E94B80:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ecb688
	sub_82ECB688(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82e94bb4
	if (!cr6.lt) goto loc_82E94BB4;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82E94BB4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e94b80
	if (cr6.lt) goto loc_82E94B80;
loc_82E94BC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94c54
	if (!cr6.gt) goto loc_82E94C54;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82E94BE8:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x82e94c2c
	if (!cr6.eq) goto loc_82E94C2C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
	// b 0x82e94c30
	goto loc_82E94C30;
loc_82E94C2C:
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
loc_82E94C30:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stb r25,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r25.u8);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e94be8
	if (cr6.lt) goto loc_82E94BE8;
loc_82E94C54:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_82E94C60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E94A88) {
	__imp__sub_82E94A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94C68) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r27,4
	r27.s64 = 4;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94cf8
	if (!cr6.gt) goto loc_82E94CF8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r30,0
	r30.s64 = 0;
loc_82E94C98:
	// lbzx r11,r30,r10
	r11.u64 = PPC_LOAD_U8(r30.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e94cdc
	if (!cr0.eq) goto loc_82E94CDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82ecb688
	sub_82ECB688(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82e94cdc
	if (!cr6.lt) goto loc_82E94CDC;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82E94CDC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e94c98
	if (cr6.lt) goto loc_82E94C98;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e94d00
	if (!cr6.eq) goto loc_82E94D00;
loc_82E94CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e94d94
	goto loc_82E94D94;
loc_82E94D00:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94d88
	if (!cr6.gt) goto loc_82E94D88;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82E94D20:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e94d40
	if (!cr0.eq) goto loc_82E94D40;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x82e94d70
	if (!cr6.eq) goto loc_82E94D70;
loc_82E94D40:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
loc_82E94D70:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e94d20
	if (cr6.lt) goto loc_82E94D20;
loc_82E94D88:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E94D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E94C68) {
	__imp__sub_82E94C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e94e5c
	if (cr0.eq) goto loc_82E94E5C;
	// bl 0x82ecd028
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e94e54
	if (cr0.eq) goto loc_82E94E54;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94e4c
	if (!cr6.gt) goto loc_82E94E4C;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82E94DF4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e94e14
	if (!cr0.eq) goto loc_82E94E14;
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e94e34
	if (cr0.eq) goto loc_82E94E34;
loc_82E94E14:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_82E94E34:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e94df4
	if (cr6.lt) goto loc_82E94DF4;
loc_82E94E4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
loc_82E94E54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82eccfd0
	sub_82ECCFD0(ctx, base);
loc_82E94E5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E94DA0) {
	__imp__sub_82E94DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94E68) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// ble cr6,0x82e94ee8
	if (!cr6.gt) goto loc_82E94EE8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82E94EAC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82e94ed4
	if (cr0.eq) goto loc_82E94ED4;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
loc_82E94ED4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e94eac
	if (cr6.lt) goto loc_82E94EAC;
loc_82E94EE8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
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

PPC_WEAK_FUNC(sub_82E94E68) {
	__imp__sub_82E94E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e94f84
	if (!cr6.gt) goto loc_82E94F84;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82E94F3C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e94f6c
	if (cr0.eq) goto loc_82E94F6C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82E94F6C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e94f3c
	if (cr6.lt) goto loc_82E94F3C;
loc_82E94F84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E94F00) {
	__imp__sub_82E94F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94F98) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e94fc0
	if (cr0.eq) goto loc_82E94FC0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
loc_82E94FC0:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e94fd4
	if (cr0.eq) goto loc_82E94FD4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
loc_82E94FD4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

PPC_WEAK_FUNC(sub_82E94F98) {
	__imp__sub_82E94F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E94FF8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e95030
	if (cr0.eq) goto loc_82E95030;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
loc_82E95030:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9504c
	if (cr0.eq) goto loc_82E9504C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
loc_82E9504C:
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// li r30,-1
	r30.s64 = -1;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82e9506c
	if (!cr6.gt) goto loc_82E9506C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E9506C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lis r11,8191
	r11.s64 = 536805376;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82e9508c
	if (!cr6.gt) goto loc_82E9508C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E9508C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E94FF8) {
	__imp__sub_82E94FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E950A0) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e950e8
	if (cr0.eq) goto loc_82E950E8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-25112
	ctx.r10.s64 = r11.s64 + -25112;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x82e950ec
	goto loc_82E950EC;
loc_82E950E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E950EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E950A0) {
	__imp__sub_82E950A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95100) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e94a18
	sub_82E94A18(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9513c
	if (cr0.eq) goto loc_82E9513C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9513C:
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

PPC_WEAK_FUNC(sub_82E95100) {
	__imp__sub_82E95100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95158) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e951d8
	if (!cr6.gt) goto loc_82E951D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r11,-28736
	r28.s64 = r11.s64 + -28736;
loc_82E95184:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7d860
	sub_82E7D860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e951c8
	if (cr0.eq) goto loc_82E951C8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e951fc
	if (cr0.eq) goto loc_82E951FC;
loc_82E951C8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e95184
	if (cr6.lt) goto loc_82E95184;
loc_82E951D8:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e951f0
	if (!cr6.eq) goto loc_82E951F0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e94ff8
	sub_82E94FF8(ctx, base);
loc_82E951F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E951F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E951FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e951f4
	goto loc_82E951F4;
}

PPC_WEAK_FUNC(sub_82E95158) {
	__imp__sub_82E95158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25048
	r11.s64 = r11.s64 + -25048;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e95268
	if (!cr0.eq) goto loc_82E95268;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e94ff8
	sub_82E94FF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e952a8
	goto loc_82E952A8;
loc_82E95268:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25068
	r11.s64 = r11.s64 + -25068;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e952a4
	if (!cr0.eq) goto loc_82E952A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e952a8
	goto loc_82E952A8;
loc_82E952A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E952A8:
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

PPC_WEAK_FUNC(sub_82E95208) {
	__imp__sub_82E95208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E952C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,26992
	ctx.r3.s64 = r11.s64 + 26992;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E952C0) {
	__imp__sub_82E952C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E952D0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-24984
	r11.s64 = r11.s64 + -24984;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e95318
	if (cr0.eq) goto loc_82E95318;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82E95318:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
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

PPC_WEAK_FUNC(sub_82E952D0) {
	__imp__sub_82E952D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95338) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e95374
	if (cr6.eq) goto loc_82E95374;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E95374:
	// li r11,0
	r11.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82ecbbe0
	sub_82ECBBE0(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82ecbfb0
	sub_82ECBFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// beq cr6,0x82e95438
	if (cr6.eq) goto loc_82E95438;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// beq 0x82e95438
	if (cr0.eq) goto loc_82E95438;
	// li r11,1
	r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x82e9543c
	goto loc_82E9543C;
loc_82E95438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9543C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E95338) {
	__imp__sub_82E95338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e954f0
	if (!cr6.eq) goto loc_82E954F0;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// ble cr6,0x82e954f0
	if (!cr6.gt) goto loc_82E954F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb688
	sub_82ECB688(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82e954f0
	if (!cr6.lt) goto loc_82E954F0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e954d4
	if (!cr6.gt) goto loc_82E954D4;
	// li r30,0
	r30.s64 = 0;
loc_82E954A0:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e954a0
	if (cr6.lt) goto loc_82E954A0;
loc_82E954D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82e954f4
	goto loc_82E954F4;
loc_82E954F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E954F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E95448) {
	__imp__sub_82E95448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9551c
	if (!cr6.eq) goto loc_82E9551C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9551c
	if (cr0.eq) goto loc_82E9551C;
	// b 0x82eccfd0
	sub_82ECCFD0(ctx, base);
	return;
loc_82E9551C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95500) {
	__imp__sub_82E95500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95528) {
	__imp__sub_82E95528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9557c
	if (!cr6.eq) goto loc_82E9557C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// b 0x82e955e8
	goto loc_82E955E8;
loc_82E9557C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82e955e4
	if (!cr6.eq) goto loc_82E955E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e955d4
	if (!cr6.gt) goto loc_82E955D4;
	// li r30,0
	r30.s64 = 0;
loc_82E955A0:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e955a0
	if (cr6.lt) goto loc_82E955A0;
loc_82E955D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// b 0x82e955e8
	goto loc_82E955E8;
loc_82E955E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E955E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E95540) {
	__imp__sub_82E95540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E955F0) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e95618
	if (cr0.eq) goto loc_82E95618;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
loc_82E95618:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e9562c
	if (cr0.eq) goto loc_82E9562C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
loc_82E9562C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_82E955F0) {
	__imp__sub_82E955F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95658) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e95698
	if (cr0.eq) goto loc_82E95698;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82E95698:
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82e956b4
	if (!cr6.gt) goto loc_82E956B4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E956B4:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82E95658) {
	__imp__sub_82E95658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E956D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e95730
	if (cr0.eq) goto loc_82E95730;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-24984
	ctx.r10.s64 = r11.s64 + -24984;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2704);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x82e95734
	goto loc_82E95734;
loc_82E95730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E95734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E956D8) {
	__imp__sub_82E956D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95748) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e952d0
	sub_82E952D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e95784
	if (cr0.eq) goto loc_82E95784;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E95784:
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

PPC_WEAK_FUNC(sub_82E95748) {
	__imp__sub_82E95748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E957A0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e95820
	if (!cr6.gt) goto loc_82E95820;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r11,-28736
	r28.s64 = r11.s64 + -28736;
loc_82E957CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7d860
	sub_82E7D860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e95810
	if (cr0.eq) goto loc_82E95810;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e95844
	if (cr0.eq) goto loc_82E95844;
loc_82E95810:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e957cc
	if (cr6.lt) goto loc_82E957CC;
loc_82E95820:
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e95838
	if (!cr6.eq) goto loc_82E95838;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e95658
	sub_82E95658(ctx, base);
loc_82E95838:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9583C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E95844:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9583c
	goto loc_82E9583C;
}

PPC_WEAK_FUNC(sub_82E957A0) {
	__imp__sub_82E957A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25048
	r11.s64 = r11.s64 + -25048;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e958b0
	if (!cr0.eq) goto loc_82E958B0;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e95658
	sub_82E95658(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e958f0
	goto loc_82E958F0;
loc_82E958B0:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25068
	r11.s64 = r11.s64 + -25068;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e958ec
	if (!cr0.eq) goto loc_82E958EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e958f0
	goto loc_82E958F0;
loc_82E958EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E958F0:
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

PPC_WEAK_FUNC(sub_82E95850) {
	__imp__sub_82E95850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,27268
	ctx.r3.s64 = r11.s64 + 27268;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95908) {
	__imp__sub_82E95908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95918) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-24896
	r11.s64 = r11.s64 + -24896;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e95960
	if (cr0.eq) goto loc_82E95960;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82E95960:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
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

PPC_WEAK_FUNC(sub_82E95918) {
	__imp__sub_82E95918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95980) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e959bc
	if (cr6.eq) goto loc_82E959BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E959BC:
	// li r11,0
	r11.s64 = 0;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x82ecbbe0
	sub_82ECBBE0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e95a6c
	if (cr0.eq) goto loc_82E95A6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb688
	sub_82ECB688(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82e95a6c
	if (!cr6.lt) goto loc_82E95A6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e95a5c
	if (!cr6.gt) goto loc_82E95A5C;
	// li r28,0
	r28.s64 = 0;
loc_82E95A28:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e95a28
	if (cr6.lt) goto loc_82E95A28;
loc_82E95A5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// b 0x82e95a70
	goto loc_82E95A70;
loc_82E95A6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E95A70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E95980) {
	__imp__sub_82E95980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb720
	sub_82ECB720(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e95ad8
	if (!cr6.gt) goto loc_82E95AD8;
	// li r30,0
	r30.s64 = 0;
loc_82E95AA4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ecc4c8
	sub_82ECC4C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e95aa4
	if (cr6.lt) goto loc_82E95AA4;
loc_82E95AD8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecb740
	sub_82ECB740(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E95A78) {
	__imp__sub_82E95A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e95b24
	if (cr0.eq) goto loc_82E95B24;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ecc6b0
	sub_82ECC6B0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82E95B24:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
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

PPC_WEAK_FUNC(sub_82E95AF0) {
	__imp__sub_82E95AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95B40) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e95b80
	if (cr0.eq) goto loc_82E95B80;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82E95B80:
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82e95b9c
	if (!cr6.gt) goto loc_82E95B9C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E95B9C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82E95B40) {
	__imp__sub_82E95B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e95c10
	if (cr0.eq) goto loc_82E95C10;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-24896
	ctx.r10.s64 = r11.s64 + -24896;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2704);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x82e95c14
	goto loc_82E95C14;
loc_82E95C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E95C14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95BC0) {
	__imp__sub_82E95BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95C28) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e95918
	sub_82E95918(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e95c64
	if (cr0.eq) goto loc_82E95C64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E95C64:
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

PPC_WEAK_FUNC(sub_82E95C28) {
	__imp__sub_82E95C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95C80) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e95d00
	if (!cr6.gt) goto loc_82E95D00;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r11,-28736
	r28.s64 = r11.s64 + -28736;
loc_82E95CAC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7d860
	sub_82E7D860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e95cf0
	if (cr0.eq) goto loc_82E95CF0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e95d24
	if (cr0.eq) goto loc_82E95D24;
loc_82E95CF0:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e95cac
	if (cr6.lt) goto loc_82E95CAC;
loc_82E95D00:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e95d18
	if (!cr6.eq) goto loc_82E95D18;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e95b40
	sub_82E95B40(ctx, base);
loc_82E95D18:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E95D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E95D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e95d1c
	goto loc_82E95D1C;
}

PPC_WEAK_FUNC(sub_82E95C80) {
	__imp__sub_82E95C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25048
	r11.s64 = r11.s64 + -25048;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e95d90
	if (!cr0.eq) goto loc_82E95D90;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e95b40
	sub_82E95B40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e95dd0
	goto loc_82E95DD0;
loc_82E95D90:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25068
	r11.s64 = r11.s64 + -25068;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e95dcc
	if (!cr0.eq) goto loc_82E95DCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e95dd0
	goto loc_82E95DD0;
loc_82E95DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E95DD0:
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

PPC_WEAK_FUNC(sub_82E95D30) {
	__imp__sub_82E95D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,29680
	ctx.r3.s64 = r11.s64 + 29680;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95DE8) {
	__imp__sub_82E95DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95DF8) {
	__imp__sub_82E95DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// li r11,0
	r11.s64 = 0;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(136) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addic. r10,r10,-2000
	xer.ca = ctx.r10.u32 > 1999;
	ctx.r10.s64 = ctx.r10.s64 + -2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e95e74
	if (cr0.eq) goto loc_82E95E74;
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
loc_82E95E2C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e95e4c
	if (cr6.eq) goto loc_82E95E4C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e95e2c
	if (cr6.lt) goto loc_82E95E2C;
	// b 0x82e95e74
	goto loc_82E95E74;
loc_82E95E4C:
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(144) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e95e6c
	if (!cr0.eq) goto loc_82E95E6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E95E6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
loc_82E95E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95E10) {
	__imp__sub_82E95E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(152) );
	// li r11,0
	r11.s64 = 0;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(136) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addic. r10,r10,-2000
	xer.ca = ctx.r10.u32 > 1999;
	ctx.r10.s64 = ctx.r10.s64 + -2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e95ee4
	if (cr0.eq) goto loc_82E95EE4;
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
loc_82E95E9C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e95ebc
	if (cr6.eq) goto loc_82E95EBC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e95e9c
	if (cr6.lt) goto loc_82E95E9C;
	// b 0x82e95ee4
	goto loc_82E95EE4;
loc_82E95EBC:
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(144) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e95edc
	if (!cr6.eq) goto loc_82E95EDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E95EDC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
loc_82E95EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95E80) {
	__imp__sub_82E95E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95EF0) {
	__imp__sub_82E95EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(168) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E95F00) {
	__imp__sub_82E95F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E95F10) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(168) );
	// clrlwi r9,r9,17
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFF;
loc_82E95F3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e96014
	if (cr6.eq) goto loc_82E96014;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e95f3c
	if (cr6.lt) goto loc_82E95F3C;
	// li r27,-1
	r27.s64 = -1;
loc_82E95F5C:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82e9600c
	if (cr6.eq) goto loc_82E9600C;
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// rlwinm r31,r9,2,0,29
	r31.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// bl 0x82e9be40
	sub_82E9BE40(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r30,44(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + int32_t(44) );
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// lwzx r31,r31,r10
	r31.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mullw r29,r9,r11
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r28,r8,r11
	r28.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e9600c
	if (cr0.eq) goto loc_82E9600C;
loc_82E95FAC:
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82e9600c
	if (cr0.eq) goto loc_82E9600C;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// clrlwi r8,r11,1
	ctx.r8.u64 = r11.u32 & 0x7FFFFFFF;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E95FCC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x82e95ffc
	if (!cr6.eq) goto loc_82E95FFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// xor r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// clrlwi. r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82e95ffc
	if (!cr0.eq) goto loc_82E95FFC;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r6,r26
	cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, xer);
	// beq cr6,0x82e9601c
	if (cr6.eq) goto loc_82E9601C;
loc_82E95FFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e95fcc
	if (cr6.lt) goto loc_82E95FCC;
loc_82E9600C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82E96014:
	// mr r27,r11
	r27.u64 = r11.u64;
	// b 0x82e95f5c
	goto loc_82E95F5C;
loc_82E9601C:
	// mulli r11,r9,24
	r11.s64 = ctx.r9.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e9600c
	if (cr0.eq) goto loc_82E9600C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e9be40
	sub_82E9BE40(ctx, base);
	// b 0x82e95fac
	goto loc_82E95FAC;
}

PPC_WEAK_FUNC(sub_82E95F10) {
	__imp__sub_82E95F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96048) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lhz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// rlwinm r7,r7,2,15,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FFFC;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// lwz r29,44(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(44) );
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// li r24,0
	r24.s64 = 0;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mullw r25,r9,r11
	r25.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// lwzx r31,r7,r10
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mullw r26,r8,r11
	r26.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e96128
	if (cr0.eq) goto loc_82E96128;
loc_82E9609C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9b628
	sub_82E9B628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e960bc
	if (cr0.eq) goto loc_82E960BC;
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e96134
	if (cr0.eq) goto loc_82E96134;
	// li r24,1
	r24.s64 = 1;
loc_82E960BC:
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e9610c
	if (cr0.eq) goto loc_82E9610C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9610c
	if (!cr6.eq) goto loc_82E9610C;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(168) );
	// li r11,0
	r11.s64 = 0;
loc_82E960D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// beq cr6,0x82e960f4
	if (cr6.eq) goto loc_82E960F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e960d4
	if (cr6.lt) goto loc_82E960D4;
	// li r11,-1
	r11.s64 = -1;
loc_82E960F4:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e9610c
	if (cr6.eq) goto loc_82E9610C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82e9be40
	sub_82E9BE40(ctx, base);
loc_82E9610C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwzx r5,r26,r29
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r25,r29
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + r29.u32);
	// bl 0x82e9baf8
	sub_82E9BAF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e9609c
	if (!cr0.eq) goto loc_82E9609C;
loc_82E96128:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82E9612C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82E96134:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9612c
	goto loc_82E9612C;
}

PPC_WEAK_FUNC(sub_82E96048) {
	__imp__sub_82E96048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96140) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-24772
	r30.s64 = r11.s64 + -24772;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e9636c
	if (!cr0.eq) goto loc_82E9636C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-31524
	ctx.r4.s64 = r11.s64 + -31524;
	// bl 0x82e7d7d8
	sub_82E7D7D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82e963bc
	if (cr0.eq) goto loc_82E963BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25584
	ctx.r4.s64 = r11.s64 + 25584;
	// bl 0x82e7d7d8
	sub_82E7D7D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e963bc
	if (cr0.eq) goto loc_82E963BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-15136
	ctx.r4.s64 = r11.s64 + -15136;
	// bl 0x82e7d7d8
	sub_82E7D7D8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e963bc
	if (cr0.eq) goto loc_82E963BC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24788
	ctx.r4.s64 = r11.s64 + -24788;
	// li r25,256
	r25.s64 = 256;
	// bl 0x82e7d7d8
	sub_82E7D7D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e961e0
	if (cr0.eq) goto loc_82E961E0;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82E961E0:
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(160) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e961f8
	if (!cr6.eq) goto loc_82E961F8;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,156(r29)
	PPC_STORE_U32(r29.u32 + 156, ctx.r3.u32);
loc_82E961F8:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82e7cbe8
	sub_82E7CBE8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82e963bc
	if (cr0.eq) goto loc_82E963BC;
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(160) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(156) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(156) );
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(160) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e96258
	if (!cr6.gt) goto loc_82E96258;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E96258:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r28,0
	r28.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e96340
	if (!cr6.gt) goto loc_82E96340;
	// li r30,0
	r30.s64 = 0;
loc_82E96284:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e7d388
	sub_82E7D388(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e963bc
	if (cr6.eq) goto loc_82E963BC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82e9ba48
	sub_82E9BA48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e962f4
	if (!cr6.eq) goto loc_82E962F4;
	// lwz r11,152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(152) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,152(r29)
	PPC_STORE_U32(r29.u32 + 152, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, r11.u32);
loc_82E962F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e96320
	if (!cr0.eq) goto loc_82E96320;
	// li r11,1
	r11.s64 = 1;
	// stb r11,164(r29)
	PPC_STORE_U8(r29.u32 + 164, r11.u8);
	// b 0x82e9632c
	goto loc_82E9632C;
loc_82E96320:
	// lbz r11,164(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 164);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e963bc
	if (cr6.eq) goto loc_82E963BC;
loc_82E9632C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e96284
	if (cr6.lt) goto loc_82E96284;
loc_82E96340:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(160) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,160(r29)
	PPC_STORE_U32(r29.u32 + 160, r11.u32);
	// b 0x82e963c0
	goto loc_82E963C0;
loc_82E9636C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-24800
	r30.s64 = r11.s64 + -24800;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e963bc
	if (!cr0.eq) goto loc_82E963BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e963bc
	if (cr0.eq) goto loc_82E963BC;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_82E963A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82e963a0
	if (!cr0.eq) goto loc_82E963A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e963c0
	goto loc_82E963C0;
loc_82E963BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E963C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E96140) {
	__imp__sub_82E96140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E963C8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// lwz r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic. r9,r9,-2000
	xer.ca = ctx.r9.u32 > 1999;
	ctx.r9.s64 = ctx.r9.s64 + -2000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e96410
	if (cr0.eq) goto loc_82E96410;
	// lwz r8,148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(148) );
loc_82E963F4:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e96424
	if (cr6.eq) goto loc_82E96424;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e963f4
	if (cr6.lt) goto loc_82E963F4;
loc_82E96410:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E96414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82E96424:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(140) );
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,29,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e96458
	if (!cr0.eq) goto loc_82E96458;
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
loc_82E9644C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82e96414
	goto loc_82E96414;
loc_82E96458:
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e96410
	if (cr0.eq) goto loc_82E96410;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(168) );
	// li r11,0
	r11.s64 = 0;
loc_82E96470:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e96490
	if (cr6.eq) goto loc_82E96490;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e96470
	if (cr6.lt) goto loc_82E96470;
	// li r11,-1
	r11.s64 = -1;
loc_82E96490:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e96410
	if (cr6.eq) goto loc_82E96410;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82e9be88
	sub_82E9BE88(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82e9644c
	goto loc_82E9644C;
}

PPC_WEAK_FUNC(sub_82E963C8) {
	__imp__sub_82E963C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E964A8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
loc_82E964C0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e96574
	if (cr6.eq) goto loc_82E96574;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e964c0
	if (cr6.lt) goto loc_82E964C0;
	// li r28,-1
	r28.s64 = -1;
loc_82E964E0:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82e9656c
	if (cr6.eq) goto loc_82E9656C;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// li r29,0
	r29.s64 = 0;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-2000
	xer.ca = r11.u32 > 1999;
	r11.s64 = r11.s64 + -2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9656c
	if (cr0.eq) goto loc_82E9656C;
	// li r30,0
	r30.s64 = 0;
loc_82E96504:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9654c
	if (cr6.eq) goto loc_82E9654C;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lbz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 120);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e9654c
	if (cr0.eq) goto loc_82E9654C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e9be40
	sub_82E9BE40(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// bl 0x82e9be40
	sub_82E9BE40(ctx, base);
loc_82E9654C:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-2000
	r11.s64 = r11.s64 + -2000;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e96504
	if (cr6.lt) goto loc_82E96504;
loc_82E9656C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82E96574:
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82e964e0
	goto loc_82E964E0;
}

PPC_WEAK_FUNC(sub_82E964A8) {
	__imp__sub_82E964A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(168) );
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82E96598:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e965b8
	if (cr6.eq) goto loc_82E965B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e96598
	if (cr6.lt) goto loc_82E96598;
	// blr 
	return;
loc_82E965B8:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E96580) {
	__imp__sub_82E96580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E965C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(168) );
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82E965D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e965f4
	if (cr6.eq) goto loc_82E965F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82e965d4
	if (cr6.lt) goto loc_82E965D4;
	// blr 
	return;
loc_82E965F4:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E965C8) {
	__imp__sub_82E965C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96608) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82e96630
	if (!cr6.eq) goto loc_82E96630;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// clrlwi r28,r11,17
	r28.u64 = r11.u32 & 0x7FFF;
	// b 0x82e96688
	goto loc_82E96688;
loc_82E96630:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(136) );
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(152) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r10,-2000
	ctx.r8.s64 = ctx.r10.s64 + -2000;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e96690
	if (!cr6.lt) goto loc_82E96690;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82E96654:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e96670
	if (cr6.eq) goto loc_82E96670;
	// rotlwi r9,r9,0
	ctx.r9.u64 = rotl32(ctx.r9.u32, 0);
	// lwz r9,116(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(116) );
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e96684
	if (cr6.eq) goto loc_82E96684;
loc_82E96670:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e96654
	if (cr6.lt) goto loc_82E96654;
	// b 0x82e96690
	goto loc_82E96690;
loc_82E96684:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82E96688:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82e96698
	if (!cr6.eq) goto loc_82E96698;
loc_82E96690:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e96940
	goto loc_82E96940;
loc_82E96698:
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cntlzw r3,r7
	ctx.r3.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r11,44(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(44) );
	// li r27,0
	r27.s64 = 0;
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// rlwinm r26,r28,2,0,29
	r26.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwz r24,148(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r5,124(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(124) );
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// mullw r4,r31,r5
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// lwzx r3,r24,r26
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r26.u32);
	// mullw r5,r29,r5
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(ctx.r5.s32);
	// add r31,r4,r11
	r31.u64 = ctx.r4.u64 + r11.u64;
	// add r29,r5,r11
	r29.u64 = ctx.r5.u64 + r11.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82e9b690
	sub_82E9B690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9693c
	if (!cr6.eq) goto loc_82E9693C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e967d8
	if (cr0.eq) goto loc_82E967D8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r7,-2
	cr6.compare<int32_t>(ctx.r7.s32, -2, xer);
	// beq cr6,0x82e9678c
	if (cr6.eq) goto loc_82E9678C;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82e9678c
	if (cr6.eq) goto loc_82E9678C;
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(136) );
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(152) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r10,-2000
	ctx.r8.s64 = ctx.r10.s64 + -2000;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e967d8
	if (!cr6.lt) goto loc_82E967D8;
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82E96754:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e96768
	if (cr0.eq) goto loc_82E96768;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e9677c
	if (cr6.eq) goto loc_82E9677C;
loc_82E96768:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e96754
	if (cr6.lt) goto loc_82E96754;
	// b 0x82e967d8
	goto loc_82E967D8;
loc_82E9677C:
	// lhz r10,2(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 2);
	// rlwinm r11,r11,16,1,15
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x82e967c8
	goto loc_82E967C8;
loc_82E9678C:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e967d0
	if (!cr0.eq) goto loc_82E967D0;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(140) );
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lhz r9,2(r25)
	ctx.r9.u64 = PPC_LOAD_U16(r25.u32 + 2);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwimi r8,r11,16,1,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0x7FFF0000) | (ctx.r8.u64 & 0xFFFFFFFF8000FFFF);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82E967C8:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x82e967d8
	goto loc_82E967D8;
loc_82E967D0:
	// li r11,-32768
	r11.s64 = -32768;
	// sth r11,0(r25)
	PPC_STORE_U16(r25.u32 + 0, r11.u16);
loc_82E967D8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r10,r11,-24812
	ctx.r10.s64 = r11.s64 + -24812;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r28,r11,-30984
	r28.s64 = r11.s64 + -30984;
	// clrlwi r11,r10,1
	r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r28.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E96840:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e96840
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E96840;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r27,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, r27.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E96888:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e96888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E96888;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r27,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9693c
	if (!cr6.eq) goto loc_82E9693C;
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9693c
	if (!cr0.eq) goto loc_82E9693C;
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// stb r27,120(r11)
	PPC_STORE_U8(r11.u32 + 120, r27.u8);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(148) );
	// stwx r27,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, r27.u32);
loc_82E9693C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E96940:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E96608) {
	__imp__sub_82E96608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(136) );
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,152(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(152) );
	// mr r27,r23
	r27.u64 = r23.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addic. r11,r11,-2000
	xer.ca = r11.u32 > 1999;
	r11.s64 = r11.s64 + -2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e969a8
	if (cr0.eq) goto loc_82E969A8;
	// lwz r31,140(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(140) );
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82E9698C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r24
	cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, xer);
	// beq cr6,0x82e969b4
	if (cr6.eq) goto loc_82E969B4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e9698c
	if (cr6.lt) goto loc_82E9698C;
loc_82E969A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E969AC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c1c
	return;
loc_82E969B4:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82e969a8
	if (cr6.eq) goto loc_82E969A8;
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(148) );
	// rlwinm r22,r27,2,0,29
	r22.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r22,r11
	r29.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x82e96b04
	if (!cr0.eq) goto loc_82E96B04;
	// lwz r4,160(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(160) );
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e96afc
	if (cr0.eq) goto loc_82E96AFC;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
loc_82E969E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e96b04
	if (!cr6.eq) goto loc_82E96B04;
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(156) );
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x82e96a50
	if (cr6.lt) goto loc_82E96A50;
	// add r9,r11,r6
	ctx.r9.u64 = r11.u64 + ctx.r6.u64;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e96a6c
	if (!cr6.eq) goto loc_82E96A6C;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82e96a6c
	if (cr0.eq) goto loc_82E96A6C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82E96A1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e96a6c
	if (!cr6.eq) goto loc_82E96A6C;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r21,116(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// cmplw cr6,r21,r24
	cr6.compare<uint32_t>(r21.u32, r24.u32, xer);
	// bne cr6,0x82e96a3c
	if (!cr6.eq) goto loc_82E96A3C;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82E96A3C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e96a1c
	if (cr6.lt) goto loc_82E96A1C;
	// b 0x82e96a6c
	goto loc_82E96A6C;
loc_82E96A50:
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lhz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e96a80
	if (cr6.eq) goto loc_82E96A80;
loc_82E96A6C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e969e4
	if (cr6.lt) goto loc_82E969E4;
	// b 0x82e96afc
	goto loc_82E96AFC;
loc_82E96A80:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(156) );
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e969a8
	if (cr0.eq) goto loc_82E969A8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E96AA4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lbz r7,120(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 120);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82e96ac8
	if (cr0.eq) goto loc_82E96AC8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e96aa4
	if (cr6.lt) goto loc_82E96AA4;
	// b 0x82e969a8
	goto loc_82E969A8;
loc_82E96AC8:
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r29,r11,r8
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lhz r11,4(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm. r10,r11,0,29,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e96afc
	if (!cr0.eq) goto loc_82E96AFC;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne 0x82e96af8
	if (!cr0.eq) goto loc_82E96AF8;
	// bl 0x82e9beb0
	sub_82E9BEB0(ctx, base);
	// b 0x82e96afc
	goto loc_82E96AFC;
loc_82E96AF8:
	// bl 0x82e9bff8
	sub_82E9BFF8(ctx, base);
loc_82E96AFC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e969a8
	if (cr6.eq) goto loc_82E969A8;
loc_82E96B04:
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(148) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r29,r22,r11
	PPC_STORE_U32(r22.u32 + r11.u32, r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(124) );
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82e9bc80
	sub_82E9BC80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e969a8
	if (!cr6.eq) goto loc_82E969A8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e96b8c
	if (!cr0.eq) goto loc_82E96B8C;
	// rlwinm r11,r11,16,17,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82e96b98
	if (cr6.eq) goto loc_82E96B98;
	// lwz r10,148(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(148) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e9bb68
	sub_82E9BB68(ctx, base);
	// b 0x82e96b98
	goto loc_82E96B98;
loc_82E96B8C:
	// rlwimi r11,r27,16,1,15
	r11.u64 = (rotl32(r27.u32, 16) & 0x7FFF0000) | (r11.u64 & 0xFFFFFFFF8000FFFF);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82E96B98:
	// lbz r11,120(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e96bec
	if (!cr0.eq) goto loc_82E96BEC;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(132) );
	// stw r24,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r24.u32);
	// stb r11,120(r29)
	PPC_STORE_U8(r29.u32 + 120, r11.u8);
	// bl 0x82e9be20
	sub_82E9BE20(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E96BEC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r11,-24812
	ctx.r10.s64 = r11.s64 + -24812;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r29,r11,-30984
	r29.s64 = r11.s64 + -30984;
	// clrlwi r11,r10,1
	r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E96C54:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e96c54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E96C54;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r23,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, r23.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E96C9C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e96c9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E96C9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r23,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r23.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(148) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r22,r11
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e969ac
	goto loc_82E969AC;
}

PPC_WEAK_FUNC(sub_82E96948) {
	__imp__sub_82E96948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96CE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-24756
	r11.s64 = r11.s64 + -24756;
	// lis r26,-31952
	r26.s64 = -2094006272;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e96d20
	if (cr0.eq) goto loc_82E96D20;
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r28.u32);
loc_82E96D20:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e96d3c
	if (cr0.eq) goto loc_82E96D3C;
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
loc_82E96D3C:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e96d94
	if (!cr6.gt) goto loc_82E96D94;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82E96D50:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82e96d80
	if (cr0.eq) goto loc_82E96D80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9bdd8
	sub_82E9BDD8(ctx, base);
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
loc_82E96D80:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e96d50
	if (cr6.lt) goto loc_82E96D50;
loc_82E96D94:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e96db0
	if (cr0.eq) goto loc_82E96DB0;
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
loc_82E96DB0:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e96dcc
	if (cr0.eq) goto loc_82E96DCC;
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r28.u32);
loc_82E96DCC:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e96e5c
	if (!cr6.gt) goto loc_82E96E5C;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82E96DE0:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e96e44
	if (cr6.eq) goto loc_82E96E44;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e96e30
	if (!cr6.gt) goto loc_82E96E30;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E96E08:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e96e1c
	if (cr6.eq) goto loc_82E96E1C;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
loc_82E96E1C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e96e08
	if (cr6.lt) goto loc_82E96E08;
loc_82E96E30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_82E96E44:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(160) );
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82e96de0
	if (cr6.lt) goto loc_82E96DE0;
loc_82E96E5C:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e96e78
	if (cr0.eq) goto loc_82E96E78;
	// lwz r11,-9868(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
loc_82E96E78:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E96CE0) {
	__imp__sub_82E96CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,27544
	ctx.r3.s64 = r11.s64 + 27544;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E96E90) {
	__imp__sub_82E96E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E96EA0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e7ebc0
	sub_82E7EBC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e96ec4
	if (!cr0.eq) goto loc_82E96EC4;
loc_82E96EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e972e0
	goto loc_82E972E0;
loc_82E96EC4:
	// li r25,0
	r25.s64 = 0;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addic. r30,r31,4
	xer.ca = r31.u32 > 4294967291;
	r30.s64 = r31.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r27,r25
	r27.u64 = r25.u64;
	// addi r26,r11,-9856
	r26.s64 = r11.s64 + -9856;
	// stw r25,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r25.u32);
	// beq 0x82e96f94
	if (cr0.eq) goto loc_82E96F94;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e96f94
	if (cr0.eq) goto loc_82E96F94;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11936
	ctx.r4.s64 = r11.s64 + 11936;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e96ebc
	if (cr0.eq) goto loc_82E96EBC;
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// lwz r11,100(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(100) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82e96ebc
	if (!cr6.eq) goto loc_82E96EBC;
loc_82E96F94:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// li r24,-1
	r24.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r23,r10,-2000
	r23.s64 = ctx.r10.s64 + -2000;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// cmplw cr6,r23,r9
	cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, xer);
	// rlwinm r3,r23,3,0,28
	ctx.r3.u64 = rotl64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e96fc8
	if (!cr6.gt) goto loc_82E96FC8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82E96FC8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// rlwinm r3,r23,2,0,29
	ctx.r3.u64 = rotl64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x82e96fe8
	if (!cr6.gt) goto loc_82E96FE8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82E96FE8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// lis r11,0
	r11.s64 = 0;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// li r22,1
	r22.s64 = 1;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, r11.u16);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, r11.u16);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82e970d8
	if (!cr6.gt) goto loc_82E970D8;
	// li r28,4
	r28.s64 = 4;
	// li r30,8
	r30.s64 = 8;
loc_82E97030:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,100(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(100) );
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwzx r11,r30,r10
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rotlwi r9,r10,8
	ctx.r9.u64 = rotl32(ctx.r10.u32, 8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rotlwi r9,r10,8
	ctx.r9.u64 = rotl32(ctx.r10.u32, 8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// stwx r25,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, r25.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e97030
	if (cr6.lt) goto loc_82E97030;
loc_82E970D8:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// cmplw cr6,r9,r23
	cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, xer);
	// bge cr6,0x82e97178
	if (!cr6.lt) goto loc_82E97178;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,3,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_82E970F8:
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r7,r7,2000
	ctx.r7.s64 = ctx.r7.s64 + 2000;
	// stwx r7,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// sth r25,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, r25.u16);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// sth r25,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, r25.u16);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// sth r22,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, r22.u16);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// lwzx r7,r4,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stwx r7,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e97164
	if (!cr6.eq) goto loc_82E97164;
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
loc_82E97164:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r23
	cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, xer);
	// blt cr6,0x82e970f8
	if (cr6.lt) goto loc_82E970F8;
loc_82E97178:
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r23,12
	ctx.r3.s64 = r23.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x82e97190
	if (!cr6.gt) goto loc_82E97190;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82E97190:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e97258
	if (!cr6.gt) goto loc_82E97258;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82E971B0:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82e9721c
	if (!cr6.eq) goto loc_82E9721C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e971e4
	if (cr0.eq) goto loc_82E971E4;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82e9bd90
	sub_82E9BD90(ctx, base);
	// b 0x82e971e8
	goto loc_82E971E8;
loc_82E971E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82E971E8:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// beq 0x82e97214
	if (cr0.eq) goto loc_82E97214;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82E97214:
	// bl 0x82e9be20
	sub_82E9BE20(ctx, base);
	// b 0x82e97240
	goto loc_82E97240;
loc_82E9721C:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// bne 0x82e97234
	if (!cr0.eq) goto loc_82E97234;
	// stb r25,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r25.u8);
	// b 0x82e97238
	goto loc_82E97238;
loc_82E97234:
	// stb r22,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r22.u8);
loc_82E97238:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// stwx r25,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r25.u32);
loc_82E97240:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e971b0
	if (cr6.lt) goto loc_82E971B0;
loc_82E97258:
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, xer);
	// bge cr6,0x82e97298
	if (!cr6.lt) goto loc_82E97298;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// subf r10,r10,r23
	ctx.r10.s64 = r23.s64 - ctx.r10.s64;
loc_82E9726C:
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stb r25,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, r25.u8);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// stwx r25,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r25.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r25.u32);
	// bne 0x82e9726c
	if (!cr0.eq) goto loc_82E9726C;
loc_82E97298:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r30,-31948
	r30.s64 = -2093744128;
	// lis r11,-32023
	r11.s64 = -2098659328;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,25984
	ctx.r4.s64 = r11.s64 + 25984;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82e7b8f8
	sub_82E7B8F8(ctx, base);
	// lis r11,-32023
	r11.s64 = -2098659328;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,26056
	ctx.r4.s64 = r11.s64 + 26056;
	// bl 0x82e7baf0
	sub_82E7BAF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E972E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82E96EA0) {
	__imp__sub_82E96EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E972E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e96ce0
	sub_82E96CE0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e97324
	if (cr0.eq) goto loc_82E97324;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97324:
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

PPC_WEAK_FUNC(sub_82E972E8) {
	__imp__sub_82E972E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97340) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e97394
	if (cr0.eq) goto loc_82E97394;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-24756
	ctx.r10.s64 = r11.s64 + -24756;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,2000
	ctx.r10.s64 = 2000;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// b 0x82e97398
	goto loc_82E97398;
loc_82E97394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E97398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E97340) {
	__imp__sub_82E97340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E973A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24668
	r11.s64 = r11.s64 + -24668;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x82e97400
	if (cr0.eq) goto loc_82E97400;
	// mullw r3,r11,r11
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// b 0x82e97404
	goto loc_82E97404;
loc_82E97400:
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82E97404:
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

PPC_WEAK_FUNC(sub_82E973A8) {
	__imp__sub_82E973A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,27820
	ctx.r3.s64 = r11.s64 + 27820;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E97420) {
	__imp__sub_82E97420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97430) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-24668
	r11.s64 = r11.s64 + -24668;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e9746c
	if (cr0.eq) goto loc_82E9746C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9746C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
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

PPC_WEAK_FUNC(sub_82E97430) {
	__imp__sub_82E97430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97490) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19184
	ctx.r4.s64 = r11.s64 + -19184;
	// bl 0x82e7d750
	sub_82E7D750(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82e974c4
	if (!cr0.eq) goto loc_82E974C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e974d8
	goto loc_82E974D8;
loc_82E974C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E974D8:
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

PPC_WEAK_FUNC(sub_82E97490) {
	__imp__sub_82E97490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E974F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e97684
	if (cr0.eq) goto loc_82E97684;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82e9766c
	if (!cr6.eq) goto loc_82E9766C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82e9766c
	if (!cr6.eq) goto loc_82E9766C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,-24696
	ctx.r3.s64 = r11.s64 + -24696;
	// rlwinm r11,r10,24,16,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9766c
	if (!cr0.eq) goto loc_82E9766C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9766c
	if (!cr6.eq) goto loc_82E9766C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r28,r27,16
	r28.s64 = r27.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82e97674
	if (!cr6.eq) goto loc_82E97674;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r29,12(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
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
	// mullw r6,r29,r29
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(r29.s32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mullw r11,r29,r29
	r11.s64 = int64_t(r29.s32) * int64_t(r29.s32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82e97680
	if (!cr6.eq) goto loc_82E97680;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e97688
	goto loc_82E97688;
loc_82E9766C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82E97674:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E97680:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E97688:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E974F0) {
	__imp__sub_82E974F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97690) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r23,r25
	r23.u64 = r25.u64;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// bl 0x82e8c938
	sub_82E8C938(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e8ca20
	sub_82E8CA20(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r10,r10,-26348
	ctx.r10.s64 = ctx.r10.s64 + -26348;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r9,r9,-30992
	ctx.r9.s64 = ctx.r9.s64 + -30992;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r22,88(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// cmplwi r22,0
	cr0.compare<uint32_t>(r22.u32, 0, xer);
	// bne 0x82e97710
	if (!cr0.eq) goto loc_82E97710;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
loc_82E97710:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r20,84(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// cmplwi r20,0
	cr0.compare<uint32_t>(r20.u32, 0, xer);
	// bne 0x82e97728
	if (!cr0.eq) goto loc_82E97728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
loc_82E97728:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r21,-31952
	r21.s64 = -2094006272;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e97744
	if (cr0.eq) goto loc_82E97744;
	// lwz r11,-9868(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97744:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// ble 0x82e97790
	if (!cr0.gt) goto loc_82E97790;
	// mullw r3,r11,r11
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mullw r11,r11,r11
	r11.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e97784
	if (!cr6.gt) goto loc_82E97784;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E97784:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82e97794
	goto loc_82E97794;
loc_82E97790:
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
loc_82E97794:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r24,r25
	r24.u64 = r25.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e979c4
	if (!cr6.gt) goto loc_82E979C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f29.f64 = double(temp.f32);
loc_82E977B8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e979b4
	if (!cr6.gt) goto loc_82E979B4;
loc_82E977C8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// mullw r11,r30,r11
	r11.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// add r27,r11,r29
	r27.u64 = r11.u64 + r29.u64;
	// bne cr6,0x82e977e8
	if (!cr6.eq) goto loc_82E977E8;
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + r23.u32, temp.u32);
	// b 0x82e979a4
	goto loc_82E979A4;
loc_82E977E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82e97818
	if (cr6.eq) goto loc_82E97818;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82e97818
	if (!cr6.lt) goto loc_82E97818;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9781c
	if (!cr6.eq) goto loc_82E9781C;
loc_82E97818:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E9781C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82e97848
	if (cr6.eq) goto loc_82E97848;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e97848
	if (!cr6.lt) goto loc_82E97848;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mulli r9,r29,20
	ctx.r9.s64 = r29.s64 * 20;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9784c
	if (!cr6.eq) goto loc_82E9784C;
loc_82E97848:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_82E9784C:
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9d280
	sub_82E9D280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e978fc
	if (cr0.eq) goto loc_82E978FC;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// ble cr6,0x82e978f4
	if (!cr6.gt) goto loc_82E978F4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
loc_82E97888:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e978b8
	if (cr6.eq) goto loc_82E978B8;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e978b8
	if (!cr6.lt) goto loc_82E978B8;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e978bc
	if (!cr6.eq) goto loc_82E978BC;
loc_82E978B8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E978BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(76) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e978d4
	if (!cr0.eq) goto loc_82E978D4;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// b 0x82e978e0
	goto loc_82E978E0;
loc_82E978D4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
loc_82E978E0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x82e97888
	if (cr6.lt) goto loc_82E97888;
loc_82E978F4:
	// add r24,r6,r24
	r24.u64 = ctx.r6.u64 + r24.u64;
	// b 0x82e97904
	goto loc_82E97904;
loc_82E978FC:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82E97904:
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f0.f64);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stfsx f0,r11,r23
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r23.u32, temp.u32);
	// bge cr6,0x82e9791c
	if (!cr6.lt) goto loc_82E9791C;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_82E9791C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e979a4
	if (cr0.eq) goto loc_82E979A4;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bne cr6,0x82e97938
	if (!cr6.eq) goto loc_82E97938;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82e97968
	goto loc_82E97968;
loc_82E97938:
	// subf r11,r26,r28
	r11.s64 = r28.s64 - r26.s64;
	// clrldi r10,r24,32
	ctx.r10.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82E97968:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = rotl32(ctx.r10.u32, 1);
	// divw r3,r10,r8
	ctx.r3.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r8,0
	// andc r11,r8,r11
	r11.u64 = ctx.r8.u64 & ~r11.u64;
	// twlgei r11,-1
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E979A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e977c8
	if (cr6.lt) goto loc_82E977C8;
loc_82E979B4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e977b8
	if (cr6.lt) goto loc_82E977B8;
loc_82E979C4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e97a24
	if (cr0.eq) goto loc_82E97A24;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bne cr6,0x82e979e0
	if (!cr6.eq) goto loc_82E979E0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82e97a10
	goto loc_82E97A10;
loc_82E979E0:
	// subf r10,r26,r28
	ctx.r10.s64 = r28.s64 - r26.s64;
	// clrldi r9,r24,32
	ctx.r9.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82E97A10:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97A24:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-12944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12944);
	f0.f64 = double(temp.f32);
	// mr r11,r25
	r11.u64 = r25.u64;
	// fdivs f0,f0,f30
	f0.f64 = double(float(f0.f64 / f30.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mullw. r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82e97a90
	if (!cr0.gt) goto loc_82E97A90;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82E97A48:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82e97a70
	if (cr6.lt) goto loc_82E97A70;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// b 0x82e97a74
	goto loc_82E97A74;
loc_82E97A70:
	// li r8,255
	ctx.r8.s64 = 255;
loc_82E97A74:
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e97a48
	if (cr6.lt) goto loc_82E97A48;
loc_82E97A90:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82e97aa8
	if (cr6.eq) goto loc_82E97AA8;
	// lwz r11,-9868(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(-9868) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97AA8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r22,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r22.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r20,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, r20.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e8c970
	sub_82E8C970(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_82E97690) {
	__imp__sub_82E97690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97AE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e97c1c
	if (cr6.eq) goto loc_82E97C1C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e97c1c
	if (!cr6.gt) goto loc_82E97C1C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r31,r11,-9856
	r31.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e97c1c
	if (cr0.eq) goto loc_82E97C1C;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r3,r11,-24696
	ctx.r3.s64 = r11.s64 + -24696;
	// lis r11,256
	r11.s64 = 16777216;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82e97c1c
	if (!cr6.eq) goto loc_82E97C1C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e97c1c
	if (!cr6.eq) goto loc_82E97C1C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e97c1c
	if (!cr6.eq) goto loc_82E97C1C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// mullw r5,r11,r11
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mullw r11,r11,r11
	r11.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq cr6,0x82e97c28
	if (cr6.eq) goto loc_82E97C28;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E97C20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82E97C28:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e97c20
	goto loc_82E97C20;
}

PPC_WEAK_FUNC(sub_82E97AE8) {
	__imp__sub_82E97AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e97c68
	if (cr0.eq) goto loc_82E97C68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e973a8
	sub_82E973A8(ctx, base);
	// b 0x82e97c6c
	goto loc_82E97C6C;
loc_82E97C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E97C6C:
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

PPC_WEAK_FUNC(sub_82E97C38) {
	__imp__sub_82E97C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97C80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e97430
	sub_82E97430(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e97cbc
	if (cr0.eq) goto loc_82E97CBC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97CBC:
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

PPC_WEAK_FUNC(sub_82E97C80) {
	__imp__sub_82E97C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,28096
	ctx.r3.s64 = r11.s64 + 28096;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E97CD8) {
	__imp__sub_82E97CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97CE8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-24596
	r11.s64 = r11.s64 + -24596;
	// lis r29,-31952
	r29.s64 = -2094006272;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lha r10,16(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82e97d50
	if (!cr0.gt) goto loc_82E97D50;
	// li r30,0
	r30.s64 = 0;
loc_82E97D1C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e97d3c
	if (cr6.eq) goto loc_82E97D3C;
	// lwz r11,-9868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9868) );
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97D3C:
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82e97d1c
	if (cr6.lt) goto loc_82E97D1C;
loc_82E97D50:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,-9868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,-9868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E97CE8) {
	__imp__sub_82E97CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E97D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-11840
	ctx.r10.s64 = r11.s64 + -11840;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,5
	r11.s64 = 5;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E97DB8:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82e97db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E97DB8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82e980d8
	if (cr0.eq) goto loc_82E980D8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e980d8
	if (cr0.eq) goto loc_82E980D8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x82e980cc
	if (!cr6.eq) goto loc_82E980CC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r21,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r21.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,-24624
	ctx.r3.s64 = r11.s64 + -24624;
	// rlwinm r11,r10,24,16,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e980c0
	if (!cr0.eq) goto loc_82E980C0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// rotlwi r10,r11,8
	ctx.r10.u64 = rotl32(r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r11.u16);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r22,-1
	r22.s64 = -1;
	// ori r23,r10,65535
	r23.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// ble cr6,0x82e97f14
	if (!cr6.gt) goto loc_82E97F14;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82E97F14:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lha r11,0(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 0));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e97f38
	if (!cr6.gt) goto loc_82E97F38;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82E97F38:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lha r10,0(r26)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 0));
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,1,0,30
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e97fbc
	if (!cr6.gt) goto loc_82E97FBC;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82E97F88:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rotlwi r7,r8,8
	ctx.r7.u64 = rotl32(ctx.r8.u32, 8);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lha r9,0(r26)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 0));
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e97f88
	if (cr6.lt) goto loc_82E97F88;
loc_82E97FBC:
	// lha r11,0(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 0));
	// mr r25,r21
	r25.u64 = r21.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e980a0
	if (!cr0.gt) goto loc_82E980A0;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82E97FD4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lhax r11,r11,r30
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + r30.u32));
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82e97fec
	if (!cr6.gt) goto loc_82E97FEC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82E97FEC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// lhax r11,r11,r30
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + r30.u32));
	// lhax r27,r10,r30
	r27.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r30.u32));
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r27,1,0,30
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e980c0
	if (!cr6.eq) goto loc_82E980C0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82e98088
	if (!cr6.gt) goto loc_82E98088;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82E9804C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rotlwi r7,r8,8
	ctx.r7.u64 = rotl32(ctx.r8.u32, 8);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lhax r9,r9,r30
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r30.u32));
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e9804c
	if (cr6.lt) goto loc_82E9804C;
loc_82E98088:
	// lha r11,0(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 0));
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e97fd4
	if (cr6.lt) goto loc_82E97FD4;
loc_82E980A0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e980dc
	goto loc_82E980DC;
loc_82E980C0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82E980CC:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E980D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E980DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82E97D88) {
	__imp__sub_82E97D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E980E8) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e98264
	if (cr0.eq) goto loc_82E98264;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r3,r11,-24624
	ctx.r3.s64 = r11.s64 + -24624;
	// lis r11,256
	r11.s64 = 16777216;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// bne cr6,0x82e98254
	if (!cr6.eq) goto loc_82E98254;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e98254
	if (!cr6.eq) goto loc_82E98254;
	// lhz r11,16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// li r5,1
	ctx.r5.s64 = 1;
	// rotlwi r9,r11,8
	ctx.r9.u64 = rotl32(r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e98254
	if (!cr6.eq) goto loc_82E98254;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e981cc
	if (!cr6.gt) goto loc_82E981CC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E981CC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e98218
	if (!cr0.gt) goto loc_82E98218;
	// li r11,0
	r11.s64 = 0;
loc_82E981E8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// rotlwi r8,r9,8
	ctx.r8.u64 = rotl32(ctx.r9.u32, 8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthx r9,r11,r29
	PPC_STORE_U16(r11.u32 + r29.u32, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lha r9,16(r31)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e981e8
	if (cr6.lt) goto loc_82E981E8;
loc_82E98218:
	// lha r5,16(r31)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82e98270
	if (cr6.eq) goto loc_82E98270;
loc_82E98240:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98254:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E98268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82E98270:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98318
	if (!cr6.gt) goto loc_82E98318;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r30,0
	r30.s64 = 0;
loc_82E98284:
	// lhax r11,r30,r11
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + r11.u32));
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e982d4
	if (!cr0.gt) goto loc_82E982D4;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	r11.s64 = 0;
loc_82E9829C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// rotlwi r7,r9,8
	ctx.r7.u64 = rotl32(ctx.r9.u32, 8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sthx r9,r11,r29
	PPC_STORE_U16(r11.u32 + r29.u32, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lhax r9,r30,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + ctx.r9.u32));
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e9829c
	if (cr6.lt) goto loc_82E9829C;
loc_82E982D4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhax r5,r30,r11
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(r30.u32 + r11.u32));
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lhax r10,r30,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + r11.u32));
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e98240
	if (!cr6.eq) goto loc_82E98240;
	// lha r10,16(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e98284
	if (cr6.lt) goto loc_82E98284;
loc_82E98318:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e98268
	goto loc_82E98268;
}

PPC_WEAK_FUNC(sub_82E980E8) {
	__imp__sub_82E980E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98348) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e98394
	if (cr0.eq) goto loc_82E98394;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r10,r11,-24596
	ctx.r10.s64 = r11.s64 + -24596;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r11.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82e98398
	goto loc_82E98398;
loc_82E98394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E98398:
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

PPC_WEAK_FUNC(sub_82E98348) {
	__imp__sub_82E98348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E983B0) {
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
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82E983B0) {
	__imp__sub_82E983B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E983E8) {
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
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e98418
	if (!cr6.gt) goto loc_82E98418;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E98418:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r11.u16);
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

PPC_WEAK_FUNC(sub_82E983E8) {
	__imp__sub_82E983E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mulli r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 * 20;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82e984ac
	if (!cr6.eq) goto loc_82E984AC;
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// rotlwi r11,r6,0
	r11.u64 = rotl32(ctx.r6.u32, 0);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mulli r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 * 20;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e984ac
	if (!cr0.eq) goto loc_82E984AC;
	// lha r11,28(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 28));
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r8.u16);
	// lhz r11,28(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, r11.u16);
loc_82E984AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E98440) {
	__imp__sub_82E98440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E984B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-24556
	r11.s64 = r11.s64 + -24556;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e984f8
	if (cr0.eq) goto loc_82E984F8;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
loc_82E984F8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e98514
	if (cr0.eq) goto loc_82E98514;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_82E98514:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E984B8) {
	__imp__sub_82E984B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98528) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82643c08
	sub_82643C08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + r30.u32, r11.u8);
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

PPC_WEAK_FUNC(sub_82E98528) {
	__imp__sub_82E98528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98598) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e984b8
	sub_82E984B8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e985d4
	if (cr0.eq) goto loc_82E985D4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E985D4:
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

PPC_WEAK_FUNC(sub_82E98598) {
	__imp__sub_82E98598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E985F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-24556
	r11.s64 = r11.s64 + -24556;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x82e878b0
	sub_82E878B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82e87960
	sub_82E87960(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lhz r11,108(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r29,r11
	r29.s64 = r11.s16;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r11.u16);
	// ble cr6,0x82e9868c
	if (!cr6.gt) goto loc_82E9868C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9868C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stwx r3,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e986f4
	if (cr0.eq) goto loc_82E986F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// divwu r3,r9,r10
	ctx.r3.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E986F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e984b8
	sub_82E984B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E985F0) {
	__imp__sub_82E985F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98708) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e97ce8
	sub_82E97CE8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e98744
	if (cr0.eq) goto loc_82E98744;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98744:
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

PPC_WEAK_FUNC(sub_82E98708) {
	__imp__sub_82E98708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98760) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19184
	ctx.r4.s64 = r11.s64 + -19184;
	// bl 0x82e7d750
	sub_82E7D750(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82e98794
	if (!cr0.eq) goto loc_82E98794;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9879c
	goto loc_82E9879C;
loc_82E98794:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e97d88
	sub_82E97D88(ctx, base);
loc_82E9879C:
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

PPC_WEAK_FUNC(sub_82E98760) {
	__imp__sub_82E98760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E987B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e987e0
	if (!cr0.eq) goto loc_82E987E0;
loc_82E987D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e98880
	goto loc_82E98880;
loc_82E987E0:
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e987d8
	if (cr6.eq) goto loc_82E987D8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// li r30,-1
	r30.s64 = -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// sth r11,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r11.u16);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82e98814
	if (!cr6.gt) goto loc_82E98814;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E98814:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e98848
	if (!cr6.gt) goto loc_82E98848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E98848:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,-24576
	r11.s64 = r11.s64 + -24576;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e878b0
	sub_82E878B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E98880:
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

PPC_WEAK_FUNC(sub_82E987B0) {
	__imp__sub_82E987B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,28372
	ctx.r3.s64 = r11.s64 + 28372;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E98898) {
	__imp__sub_82E98898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E988A8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-24492
	r11.s64 = r11.s64 + -24492;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82e98920
	if (cr6.eq) goto loc_82E98920;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// lis r28,-31952
	r28.s64 = -2094006272;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98910
	if (!cr6.gt) goto loc_82E98910;
	// li r29,0
	r29.s64 = 0;
loc_82E988E8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e988e8
	if (cr6.lt) goto loc_82E988E8;
loc_82E98910:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98920:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E988A8) {
	__imp__sub_82E988A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98938) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e98b08
	if (cr0.eq) goto loc_82E98B08;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e98b08
	if (cr0.eq) goto loc_82E98B08;
	// li r11,-1
	r11.s64 = -1;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// bne cr6,0x82e98af0
	if (!cr6.eq) goto loc_82E98AF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82e98af0
	if (!cr6.eq) goto loc_82E98AF0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-24516
	ctx.r3.s64 = r11.s64 + -24516;
	// li r11,0
	r11.s64 = 0;
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r11.u8);
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e98af0
	if (!cr0.eq) goto loc_82E98AF0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
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
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x82e98af0
	if (!cr6.eq) goto loc_82E98AF0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r26,0
	r26.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e98ad0
	if (!cr0.gt) goto loc_82E98AD0;
	// li r28,0
	r28.s64 = 0;
loc_82E98A34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e98af0
	if (!cr6.eq) goto loc_82E98AF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e98abc
	if (!cr6.gt) goto loc_82E98ABC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E98A78:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e98a78
	if (cr6.lt) goto loc_82E98A78;
loc_82E98ABC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e98a34
	if (cr6.lt) goto loc_82E98A34;
loc_82E98AD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e98b0c
	goto loc_82E98B0C;
loc_82E98AF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98B08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E98B0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E98938) {
	__imp__sub_82E98938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98B18) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c938
	sub_82E8C938(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e8ca20
	sub_82E8CA20(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r10,-26348
	ctx.r10.s64 = ctx.r10.s64 + -26348;
	// addi r9,r9,-30992
	ctx.r9.s64 = ctx.r9.s64 + -30992;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r25,88(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// cmplwi r25,0
	cr0.compare<uint32_t>(r25.u32, 0, xer);
	// bne 0x82e98b80
	if (!cr0.eq) goto loc_82E98B80;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
loc_82E98B80:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r24,84(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x82e98b98
	if (!cr0.eq) goto loc_82E98B98;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
loc_82E98B98:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e98bfc
	if (cr6.eq) goto loc_82E98BFC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r30,r26
	r30.u64 = r26.u64;
	// lis r28,-31952
	r28.s64 = -2094006272;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e98bec
	if (!cr6.gt) goto loc_82E98BEC;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82E98BC0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e98bc0
	if (cr6.lt) goto loc_82E98BC0;
loc_82E98BEC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98BFC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ble 0x82e98c80
	if (!cr0.gt) goto loc_82E98C80;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r27,-1
	r27.s64 = -1;
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// ble cr6,0x82e98c2c
	if (!cr6.gt) goto loc_82E98C2C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82E98C2C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98c84
	if (!cr6.gt) goto loc_82E98C84;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82E98C48:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e98c5c
	if (!cr6.gt) goto loc_82E98C5C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82E98C5C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e98c48
	if (cr6.lt) goto loc_82E98C48;
	// b 0x82e98c84
	goto loc_82E98C84;
loc_82E98C80:
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
loc_82E98C84:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98e18
	if (!cr6.gt) goto loc_82E98E18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
loc_82E98C9C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98e08
	if (!cr6.gt) goto loc_82E98E08;
	// rlwinm r28,r29,2,0,29
	r28.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E98CB0:
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x82e98ccc
	if (!cr6.eq) goto loc_82E98CCC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// b 0x82e98df8
	goto loc_82E98DF8;
loc_82E98CCC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82e98cfc
	if (cr6.eq) goto loc_82E98CFC;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e98cfc
	if (!cr6.lt) goto loc_82E98CFC;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e98d00
	if (!cr6.eq) goto loc_82E98D00;
loc_82E98CFC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82E98D00:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82e98d2c
	if (cr6.eq) goto loc_82E98D2C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98d2c
	if (!cr6.lt) goto loc_82E98D2C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mulli r9,r30,20
	ctx.r9.s64 = r30.s64 * 20;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e98d30
	if (!cr6.eq) goto loc_82E98D30;
loc_82E98D2C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82E98D30:
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9d280
	sub_82E9D280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e98da4
	if (cr0.eq) goto loc_82E98DA4;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e98d88
	if (cr6.eq) goto loc_82E98D88;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e98d88
	if (!cr6.lt) goto loc_82E98D88;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e98d8c
	if (!cr6.eq) goto loc_82E98D8C;
loc_82E98D88:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82E98D8C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// b 0x82e98db8
	goto loc_82E98DB8;
loc_82E98DA4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82E98DB8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e98df8
	if (cr0.eq) goto loc_82E98DF8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = rotl32(ctx.r10.u32, 1);
	// divw r3,r10,r8
	ctx.r3.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r8,0
	// andc r11,r8,r11
	r11.u64 = ctx.r8.u64 & ~r11.u64;
	// twlgei r11,-1
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98DF8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e98cb0
	if (cr6.lt) goto loc_82E98CB0;
loc_82E98E08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e98c9c
	if (cr6.lt) goto loc_82E98C9C;
loc_82E98E18:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r25,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r25.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r24,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, r24.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e8c970
	sub_82E8C970(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E98B18) {
	__imp__sub_82E98B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98E50) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98fe8
	if (!cr6.gt) goto loc_82E98FE8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e98fe8
	if (cr6.eq) goto loc_82E98FE8;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11956
	ctx.r4.s64 = r11.s64 + 11956;
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e98fe8
	if (cr0.eq) goto loc_82E98FE8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r3,r11,-24516
	ctx.r3.s64 = r11.s64 + -24516;
	// lis r11,256
	r11.s64 = 16777216;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// bne cr6,0x82e98fe8
	if (!cr6.eq) goto loc_82E98FE8;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e98fe8
	if (!cr6.eq) goto loc_82E98FE8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e98f24
	if (!cr0.gt) goto loc_82E98F24;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e98f1c
	if (!cr6.gt) goto loc_82E98F1C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E98F1C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82E98F24:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e98fb4
	if (!cr0.gt) goto loc_82E98FB4;
loc_82E98F34:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e98f88
	if (!cr6.gt) goto loc_82E98F88;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E98F48:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x82e98f48
	if (cr6.lt) goto loc_82E98F48;
loc_82E98F88:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(96) );
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e98f34
	if (cr6.lt) goto loc_82E98F34;
loc_82E98FB4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e98fd0
	if (cr6.eq) goto loc_82E98FD0;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E98FD0:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e98fec
	goto loc_82E98FEC;
loc_82E98FE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E98FEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E98E50) {
	__imp__sub_82E98E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E98FF8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e99044
	if (cr0.eq) goto loc_82E99044;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24492
	r11.s64 = r11.s64 + -24492;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82e99048
	goto loc_82E99048;
loc_82E99044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E99048:
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

PPC_WEAK_FUNC(sub_82E98FF8) {
	__imp__sub_82E98FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99060) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e988a8
	sub_82E988A8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9909c
	if (cr0.eq) goto loc_82E9909C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9909C:
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

PPC_WEAK_FUNC(sub_82E99060) {
	__imp__sub_82E99060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E990B8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e99168
	if (!cr0.gt) goto loc_82E99168;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r27,-1
	r27.s64 = -1;
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// ble cr6,0x82e990f4
	if (!cr6.gt) goto loc_82E990F4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82E990F4:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e99144
	if (!cr6.gt) goto loc_82E99144;
	// li r29,0
	r29.s64 = 0;
loc_82E99110:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e99124
	if (!cr6.gt) goto loc_82E99124;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82E99124:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e99110
	if (cr6.lt) goto loc_82E99110;
loc_82E99144:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-19184
	ctx.r4.s64 = r11.s64 + -19184;
	// bl 0x82e7d750
	sub_82E7D750(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e99170
	if (cr0.eq) goto loc_82E99170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e98938
	sub_82E98938(ctx, base);
	// b 0x82e99174
	goto loc_82E99174;
loc_82E99168:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E99170:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E99174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E990B8) {
	__imp__sub_82E990B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99180) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// cmpw cr6,r26,r4
	cr6.compare<int32_t>(r26.s32, ctx.r4.s32, xer);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// bne cr6,0x82e99260
	if (!cr6.eq) goto loc_82E99260;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e991e4
	if (cr6.eq) goto loc_82E991E4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e991e4
	if (!cr6.lt) goto loc_82E991E4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e991e8
	if (!cr6.eq) goto loc_82E991E8;
loc_82E991E4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E991E8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// beq cr6,0x82e9923c
	if (cr6.eq) goto loc_82E9923C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e9923c
	if (!cr6.lt) goto loc_82E9923C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e99240
	if (!cr6.eq) goto loc_82E99240;
loc_82E9923C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E99240:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82E99254:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E99258:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82E99260:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e99290
	if (cr6.eq) goto loc_82E99290;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e99290
	if (!cr6.lt) goto loc_82E99290;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e99294
	if (!cr6.eq) goto loc_82E99294;
loc_82E99290:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E99294:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// beq cr6,0x82e992e8
	if (cr6.eq) goto loc_82E992E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e992e8
	if (!cr6.lt) goto loc_82E992E8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e992ec
	if (!cr6.eq) goto loc_82E992EC;
loc_82E992E8:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E992EC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E9930C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e99488
	if (cr6.eq) goto loc_82E99488;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82e9951c
	if (cr6.eq) goto loc_82E9951C;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82e99354
	if (!cr6.eq) goto loc_82E99354;
loc_82E9934C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// b 0x82e99380
	goto loc_82E99380;
loc_82E99354:
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(40) );
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bge cr6,0x82e9934c
	if (!cr6.lt) goto loc_82E9934C;
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e99380
	if (cr6.eq) goto loc_82E99380;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82E99380:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82e993cc
	if (cr6.eq) goto loc_82E993CC;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e993cc
	if (!cr6.lt) goto loc_82E993CC;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e993d0
	if (!cr6.eq) goto loc_82E993D0;
loc_82E993CC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E993D0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// beq cr6,0x82e9941c
	if (cr6.eq) goto loc_82E9941C;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e9941c
	if (!cr6.lt) goto loc_82E9941C;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e99420
	if (!cr6.eq) goto loc_82E99420;
loc_82E9941C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82E99420:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stwx r28,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, r28.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r6,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r6.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e99464
	if (!cr0.eq) goto loc_82E99464;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82e99470
	goto loc_82E99470;
loc_82E99464:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_82E99470:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// bne cr6,0x82e9930c
	if (!cr6.eq) goto loc_82E9930C;
	// b 0x82e99254
	goto loc_82E99254;
loc_82E99488:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// beq cr6,0x82e99254
	if (cr6.eq) goto loc_82E99254;
	// rlwinm r30,r26,2,0,29
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E99494:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e9951c
	if (cr6.eq) goto loc_82E9951C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e994dc
	if (cr6.eq) goto loc_82E994DC;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e994dc
	if (!cr6.lt) goto loc_82E994DC;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(52) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e994e0
	if (!cr6.eq) goto loc_82E994E0;
loc_82E994DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82E994E0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82e89020
	sub_82E89020(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bne cr6,0x82e99494
	if (!cr6.eq) goto loc_82E99494;
	// b 0x82e99254
	goto loc_82E99254;
loc_82E9951C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e99258
	goto loc_82E99258;
}

PPC_WEAK_FUNC(sub_82E99180) {
	__imp__sub_82E99180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99528) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e99c90
	sub_82E99C90(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-24456
	ctx.r10.s64 = r11.s64 + -24456;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stb r10,52(r31)
	PPC_STORE_U8(r31.u32 + 52, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_82E99528) {
	__imp__sub_82E99528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99598) {
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
	// lis r30,-31952
	r30.s64 = -2094006272;
	// addi r11,r11,-24456
	r11.s64 = r11.s64 + -24456;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e995e4
	if (cr0.eq) goto loc_82E995E4;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e995e4
	if (!cr6.eq) goto loc_82E995E4;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E995E4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e99608
	if (cr0.eq) goto loc_82E99608;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e99608
	if (!cr6.eq) goto loc_82E99608;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E99608:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9962c
	if (cr0.eq) goto loc_82E9962C;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9962c
	if (!cr6.eq) goto loc_82E9962C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9962C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99fe8
	sub_82E99FE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82E99598) {
	__imp__sub_82E99598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99650) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e99694
	if (cr0.eq) goto loc_82E99694;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e99694
	if (!cr6.eq) goto loc_82E99694;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
loc_82E99694:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e996bc
	if (cr0.eq) goto loc_82E996BC;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e996bc
	if (!cr6.eq) goto loc_82E996BC;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
loc_82E996BC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e996e4
	if (cr0.eq) goto loc_82E996E4;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e996e4
	if (!cr6.eq) goto loc_82E996E4;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
loc_82E996E4:
	// li r11,1
	r11.s64 = 1;
	// stw r27,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r27.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
	// ble cr6,0x82e9970c
	if (!cr6.gt) goto loc_82E9970C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E9970C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e99728
	if (!cr6.gt) goto loc_82E99728;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82E99728:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E99650) {
	__imp__sub_82E99650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99750) {
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
	// bl 0x82e99e18
	sub_82E99E18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
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

PPC_WEAK_FUNC(sub_82E99750) {
	__imp__sub_82E99750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3216);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E99788) {
	__imp__sub_82E99788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E997C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E997C0) {
	__imp__sub_82E997C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E997D0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e998c4
	if (cr6.eq) goto loc_82E998C4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r28,r11,-9856
	r28.s64 = r11.s64 + -9856;
	// ble cr6,0x82e9985c
	if (!cr6.gt) goto loc_82E9985C;
	// li r30,0
	r30.s64 = 0;
loc_82E99808:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e99848
	if (cr6.eq) goto loc_82E99848;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E99848:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e99808
	if (cr6.lt) goto loc_82E99808;
loc_82E9985C:
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e998c4
	if (!cr6.lt) goto loc_82E998C4;
	// rlwinm r30,r29,2,0,29
	r30.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E99870:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e998b0
	if (cr6.eq) goto loc_82E998B0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E998B0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e99870
	if (cr6.lt) goto loc_82E99870;
loc_82E998C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E997D0) {
	__imp__sub_82E997D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E998D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e998ec
	if (!cr6.eq) goto loc_82E998EC;
loc_82E998E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E998EC:
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e99924
	if (cr0.eq) goto loc_82E99924;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_82E99904:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e998e4
	if (cr6.eq) goto loc_82E998E4;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x82e99904
	if (cr6.lt) goto loc_82E99904;
loc_82E99924:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e99970
	if (!cr6.lt) goto loc_82E99970;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E99934:
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e998e4
	if (cr6.eq) goto loc_82E998E4;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x82e99954
	if (!cr6.lt) goto loc_82E99954;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82E99954:
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x82e99934
	if (cr6.lt) goto loc_82E99934;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82e99978
	if (!cr6.eq) goto loc_82E99978;
loc_82E99970:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x82e9997c
	goto loc_82E9997C;
loc_82E99978:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
loc_82E9997C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e999cc
	if (cr0.eq) goto loc_82E999CC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E99988:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x82e999cc
	if (!cr6.gt) goto loc_82E999CC;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,-4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-4) );
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r6,-1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// bne 0x82e99988
	if (!cr0.eq) goto loc_82E99988;
loc_82E999CC:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E998D0) {
	__imp__sub_82E998D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99A00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e99598
	sub_82E99598(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99a3c
	if (cr0.eq) goto loc_82E99A3C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E99A3C:
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

PPC_WEAK_FUNC(sub_82E99A00) {
	__imp__sub_82E99A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99A58) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-24376
	r11.s64 = r11.s64 + -24376;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e99abc
	if (!cr0.eq) goto loc_82E99ABC;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e99650
	sub_82E99650(ctx, base);
loc_82E99AB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e99b44
	goto loc_82E99B44;
loc_82E99ABC:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,30936
	r11.s64 = r11.s64 + 30936;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e99b38
	if (!cr0.eq) goto loc_82E99B38;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99af4
	if (cr0.eq) goto loc_82E99AF4;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e99afc
	goto loc_82E99AFC;
loc_82E99AF4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E99AFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_82E99B1C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82e99b28
	if (cr6.lt) goto loc_82E99B28;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82E99B28:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f0.f64);
	// bne cr6,0x82e99b1c
	if (!cr6.eq) goto loc_82E99B1C;
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// b 0x82e99ab4
	goto loc_82E99AB4;
loc_82E99B38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9aab8
	sub_82E9AAB8(ctx, base);
loc_82E99B44:
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

PPC_WEAK_FUNC(sub_82E99A58) {
	__imp__sub_82E99A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e99c54
	if (!cr6.eq) goto loc_82E99C54;
loc_82E99B80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E99B84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E99B98:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99c48
	if (cr0.eq) goto loc_82E99C48;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecdd10
	sub_82ECDD10(ctx, base);
	// b 0x82e99c2c
	goto loc_82E99C2C;
loc_82E99BC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99c24
	if (cr0.eq) goto loc_82E99C24;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e99c24
	if (cr6.gt) goto loc_82E99C24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ece840
	sub_82ECE840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e998d0
	sub_82E998D0(ctx, base);
loc_82E99C24:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecce68
	sub_82ECCE68(ctx, base);
loc_82E99C2C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e99bc4
	if (!cr6.eq) goto loc_82E99BC4;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99c68
	if (cr0.eq) goto loc_82E99C68;
loc_82E99C48:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82E99C54:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e99b98
	if (cr6.lt) goto loc_82E99B98;
	// b 0x82e99b80
	goto loc_82E99B80;
loc_82E99C68:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x82e99b84
	goto loc_82E99B84;
}

PPC_WEAK_FUNC(sub_82E99B60) {
	__imp__sub_82E99B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24352
	r11.s64 = r11.s64 + -24352;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E99C90) {
	__imp__sub_82E99C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99CD0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e99d50
	if (!cr6.gt) goto loc_82E99D50;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r11,-28736
	r28.s64 = r11.s64 + -28736;
loc_82E99CFC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7d860
	sub_82E7D860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e99d40
	if (cr0.eq) goto loc_82E99D40;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99d68
	if (cr0.eq) goto loc_82E99D68;
loc_82E99D40:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e99cfc
	if (cr6.lt) goto loc_82E99CFC;
loc_82E99D50:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82E99D60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82E99D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e99d60
	goto loc_82E99D60;
}

PPC_WEAK_FUNC(sub_82E99CD0) {
	__imp__sub_82E99CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99D70) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99dac
	if (cr0.eq) goto loc_82E99DAC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e99dac
	if (cr0.eq) goto loc_82E99DAC;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(72) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e99dfc
	if (!cr6.eq) goto loc_82E99DFC;
loc_82E99DAC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x82e99dfc
	if (cr0.eq) goto loc_82E99DFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	r11.s64 = 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
	// stb r10,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r10.u8);
	// b 0x82e99e00
	goto loc_82E99E00;
loc_82E99DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E99E00:
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

PPC_WEAK_FUNC(sub_82E99D70) {
	__imp__sub_82E99D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
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

PPC_WEAK_FUNC(sub_82E99E18) {
	__imp__sub_82E99E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99E68) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e99ee8
	if (cr0.eq) goto loc_82E99EE8;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99ea4
	if (cr0.eq) goto loc_82E99EA4;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82e99ea8
	if (!cr0.eq) goto loc_82E99EA8;
loc_82E99EA4:
	// li r11,0
	r11.s64 = 0;
loc_82E99EA8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e99ee8
	if (!cr0.eq) goto loc_82E99EE8;
	// bl 0x82ecd028
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99f14
	if (cr0.eq) goto loc_82E99F14;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e99f14
	if (!cr0.eq) goto loc_82E99F14;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne 0x82e99efc
	if (!cr0.eq) goto loc_82E99EFC;
loc_82E99EE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E99EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E99F00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E99F14:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82eccfd0
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e99f30
	if (!cr0.eq) goto loc_82E99F30;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99efc
	if (cr0.eq) goto loc_82E99EFC;
loc_82E99F30:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e99fdc
	if (!cr0.eq) goto loc_82E99FDC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e99fdc
	if (cr0.eq) goto loc_82E99FDC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e99f80
	if (!cr0.eq) goto loc_82E99F80;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e99fdc
	if (cr0.eq) goto loc_82E99FDC;
loc_82E99F80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r10,21(r31)
	PPC_STORE_U8(r31.u32 + 21, ctx.r10.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
loc_82E99FDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e99f00
	goto loc_82E99F00;
}

PPC_WEAK_FUNC(sub_82E99E68) {
	__imp__sub_82E99E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E99FE8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24352
	r11.s64 = r11.s64 + -24352;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e99e18
	sub_82E99E18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9a02c
	if (cr0.eq) goto loc_82E9A02C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A02C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
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

PPC_WEAK_FUNC(sub_82E99FE8) {
	__imp__sub_82E99FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A050) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a17c
	if (cr0.eq) goto loc_82E9A17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a17c
	if (cr0.eq) goto loc_82E9A17C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// b 0x82e9a134
	goto loc_82E9A134;
loc_82E9A09C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a100
	if (cr0.eq) goto loc_82E9A100;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a0e8
	if (!cr0.eq) goto loc_82E9A0E8;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
loc_82E9A0E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a104
	goto loc_82E9A104;
loc_82E9A100:
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
loc_82E9A104:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a948
	sub_82E7A948(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a140
	if (cr6.eq) goto loc_82E9A140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
loc_82E9A134:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a09c
	if (cr6.eq) goto loc_82E9A09C;
loc_82E9A140:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a15c
	if (cr0.eq) goto loc_82E9A15C;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne 0x82e9a160
	if (!cr0.eq) goto loc_82E9A160;
loc_82E9A15C:
	// li r11,0
	r11.s64 = 0;
loc_82E9A160:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a17c
	if (cr0.eq) goto loc_82E9A17C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A17C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9A050) {
	__imp__sub_82E9A050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A188) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e7a720
	sub_82E7A720(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a2ec
	if (cr0.eq) goto loc_82E9A2EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a2ec
	if (cr0.eq) goto loc_82E9A2EC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x82e9a294
	goto loc_82E9A294;
loc_82E9A1F0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a5d8
	sub_82E7A5D8(ctx, base);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a258
	if (cr0.eq) goto loc_82E9A258;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a240
	if (!cr0.eq) goto loc_82E9A240;
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// stb r28,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r28.u8);
loc_82E9A240:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a25c
	goto loc_82E9A25C;
loc_82E9A258:
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
loc_82E9A25C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a7d0
	sub_82E7A7D0(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a2a0
	if (cr6.eq) goto loc_82E9A2A0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
loc_82E9A294:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a1f0
	if (cr6.eq) goto loc_82E9A1F0;
loc_82E9A2A0:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a2bc
	if (cr0.eq) goto loc_82E9A2BC;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82e9a2c0
	if (!cr0.eq) goto loc_82E9A2C0;
loc_82E9A2BC:
	// li r11,0
	r11.s64 = 0;
loc_82E9A2C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a2ec
	if (cr0.eq) goto loc_82E9A2EC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A2EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E9A188) {
	__imp__sub_82E9A188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A2F8) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e7b788
	sub_82E7B788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a45c
	if (cr0.eq) goto loc_82E9A45C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a45c
	if (cr0.eq) goto loc_82E9A45C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x82e9a404
	goto loc_82E9A404;
loc_82E9A360:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7b698
	sub_82E7B698(ctx, base);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a3c8
	if (cr0.eq) goto loc_82E9A3C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a3b0
	if (!cr0.eq) goto loc_82E9A3B0;
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// stb r28,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r28.u8);
loc_82E9A3B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a3cc
	goto loc_82E9A3CC;
loc_82E9A3C8:
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
loc_82E9A3CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a890
	sub_82E7A890(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a410
	if (cr6.eq) goto loc_82E9A410;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
loc_82E9A404:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a360
	if (cr6.eq) goto loc_82E9A360;
loc_82E9A410:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a42c
	if (cr0.eq) goto loc_82E9A42C;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82e9a430
	if (!cr0.eq) goto loc_82E9A430;
loc_82E9A42C:
	// li r11,0
	r11.s64 = 0;
loc_82E9A430:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a45c
	if (cr0.eq) goto loc_82E9A45C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7b5f8
	sub_82E7B5F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A45C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E9A2F8) {
	__imp__sub_82E9A2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A468) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a594
	if (cr0.eq) goto loc_82E9A594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a594
	if (cr0.eq) goto loc_82E9A594;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// b 0x82e9a54c
	goto loc_82E9A54C;
loc_82E9A4B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a518
	if (cr0.eq) goto loc_82E9A518;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a500
	if (!cr0.eq) goto loc_82E9A500;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
loc_82E9A500:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a51c
	goto loc_82E9A51C;
loc_82E9A518:
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
loc_82E9A51C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a948
	sub_82E7A948(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a558
	if (cr6.eq) goto loc_82E9A558;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a448
	sub_82E7A448(ctx, base);
loc_82E9A54C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a4b4
	if (cr6.eq) goto loc_82E9A4B4;
loc_82E9A558:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a574
	if (cr0.eq) goto loc_82E9A574;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne 0x82e9a578
	if (!cr0.eq) goto loc_82E9A578;
loc_82E9A574:
	// li r11,0
	r11.s64 = 0;
loc_82E9A578:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a594
	if (cr0.eq) goto loc_82E9A594;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9A468) {
	__imp__sub_82E9A468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A5A0) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e7a720
	sub_82E7A720(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a704
	if (cr0.eq) goto loc_82E9A704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a704
	if (cr0.eq) goto loc_82E9A704;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x82e9a6ac
	goto loc_82E9A6AC;
loc_82E9A608:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a5d8
	sub_82E7A5D8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a670
	if (cr0.eq) goto loc_82E9A670;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a658
	if (!cr0.eq) goto loc_82E9A658;
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// stb r28,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r28.u8);
loc_82E9A658:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a674
	goto loc_82E9A674;
loc_82E9A670:
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
loc_82E9A674:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a7d0
	sub_82E7A7D0(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a6b8
	if (cr6.eq) goto loc_82E9A6B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
loc_82E9A6AC:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a608
	if (cr6.eq) goto loc_82E9A608;
loc_82E9A6B8:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a6d4
	if (cr0.eq) goto loc_82E9A6D4;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82e9a6d8
	if (!cr0.eq) goto loc_82E9A6D8;
loc_82E9A6D4:
	// li r11,0
	r11.s64 = 0;
loc_82E9A6D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a704
	if (cr0.eq) goto loc_82E9A704;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E9A5A0) {
	__imp__sub_82E9A5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A710) {
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
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e7b788
	sub_82E7B788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a874
	if (cr0.eq) goto loc_82E9A874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99e68
	sub_82E99E68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a874
	if (cr0.eq) goto loc_82E9A874;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x82e9a81c
	goto loc_82E9A81C;
loc_82E9A778:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7b698
	sub_82E7B698(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a7e0
	if (cr0.eq) goto loc_82E9A7E0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9a7c8
	if (!cr0.eq) goto loc_82E9A7C8;
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// stb r28,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r28.u8);
loc_82E9A7C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9a7e4
	goto loc_82E9A7E4;
loc_82E9A7E0:
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
loc_82E9A7E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82e85528
	sub_82E85528(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82e7a890
	sub_82E7A890(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a828
	if (cr6.eq) goto loc_82E9A828;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a358
	sub_82E7A358(ctx, base);
loc_82E9A81C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e9a778
	if (cr6.eq) goto loc_82E9A778;
loc_82E9A828:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9a844
	if (cr0.eq) goto loc_82E9A844;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82e9a848
	if (!cr0.eq) goto loc_82E9A848;
loc_82E9A844:
	// li r11,0
	r11.s64 = 0;
loc_82E9A848:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a874
	if (cr0.eq) goto loc_82E9A874;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7b5f8
	sub_82E7B5F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E9A710) {
	__imp__sub_82E9A710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A880) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e99fe8
	sub_82E99FE8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9a8bc
	if (cr0.eq) goto loc_82E9A8BC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9A8BC:
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

PPC_WEAK_FUNC(sub_82E9A880) {
	__imp__sub_82E9A880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A8D8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e9a954
	if (cr6.eq) goto loc_82E9A954;
	// bl 0x82e94800
	sub_82E94800(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x82e9a954
	if (!cr0.gt) goto loc_82E9A954;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82E9A90C:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_82E9A918:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e9a93c
	if (cr0.eq) goto loc_82E9A93C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e9a918
	if (cr6.eq) goto loc_82E9A918;
loc_82E9A93C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e9a96c
	if (cr0.eq) goto loc_82E9A96C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x82e9a90c
	if (cr6.lt) goto loc_82E9A90C;
loc_82E9A954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9A958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E9A96C:
	// rlwinm r11,r6,2,0,29
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x82e9a958
	goto loc_82E9A958;
}

PPC_WEAK_FUNC(sub_82E9A8D8) {
	__imp__sub_82E9A8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A978) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,29676(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29676) );
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// addi r31,r9,28648
	r31.s64 = ctx.r9.s64 + 28648;
	// bne 0x82e9a9d4
	if (!cr0.eq) goto loc_82E9A9D4;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lbz r8,-9036(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -9036);
	// stw r11,29676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29676, r11.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e9a9c0
	if (cr0.eq) goto loc_82E9A9C0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(r31.u32 + 1024, r11.u32);
loc_82E9A9C0:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,4312
	ctx.r3.s64 = ctx.r10.s64 + 4312;
	// stb r11,-9036(r9)
	PPC_STORE_U8(ctx.r9.u32 + -9036, r11.u8);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82E9A9D4:
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

PPC_WEAK_FUNC(sub_82E9A978) {
	__imp__sub_82E9A978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9A9F0) {
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
	// bl 0x82e9a978
	sub_82E9A978(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82e9aa70
	if (!cr0.gt) goto loc_82E9AA70;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82E9AA24:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82E9AA30:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82e9aa54
	if (cr0.eq) goto loc_82E9AA54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82e9aa30
	if (cr6.eq) goto loc_82E9AA30;
loc_82E9AA54:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e9aa80
	if (cr0.eq) goto loc_82E9AA80;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e9aa24
	if (cr6.lt) goto loc_82E9AA24;
loc_82E9AA70:
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// bne cr6,0x82e9aa8c
	if (!cr6.eq) goto loc_82E9AA8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9aaa4
	goto loc_82E9AAA4;
loc_82E9AA80:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// b 0x82e9aaa0
	goto loc_82E9AAA0;
loc_82E9AA8C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1024) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
loc_82E9AAA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9AAA4:
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

PPC_WEAK_FUNC(sub_82E9A9F0) {
	__imp__sub_82E9A9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AAB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e9ab00
	if (cr6.eq) goto loc_82E9AB00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9ab00
	if (cr0.eq) goto loc_82E9AB00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// bne cr6,0x82e9ab00
	if (!cr6.eq) goto loc_82E9AB00;
loc_82E9AAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9ac18
	goto loc_82E9AC18;
loc_82E9AB00:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-26608
	r30.s64 = r11.s64 + -26608;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9aaf8
	if (cr0.eq) goto loc_82E9AAF8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-26624
	r30.s64 = r11.s64 + -26624;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e9ab68
	if (!cr0.eq) goto loc_82E9AB68;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// b 0x82e9ac18
	goto loc_82E9AC18;
loc_82E9AB68:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-26640
	r30.s64 = r11.s64 + -26640;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e9abac
	if (!cr0.eq) goto loc_82E9ABAC;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d20
	sub_82E79D20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// b 0x82e9ac18
	goto loc_82E9AC18;
loc_82E9ABAC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-24280
	r30.s64 = r11.s64 + -24280;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9ac14
	if (!cr0.eq) goto loc_82E9AC14;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = r11.s64 + -28736;
	// bl 0x82e7d7d8
	sub_82E7D7D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9ac14
	if (cr0.eq) goto loc_82E9AC14;
	// bl 0x82e9a8d8
	sub_82E9A8D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e9ac20
	if (!cr0.eq) goto loc_82E9AC20;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82e94800
	sub_82E94800(ctx, base);
	// lwz r11,1024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e9ac14
	if (!cr6.gt) goto loc_82E9AC14;
loc_82E9AC00:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82e94800
	sub_82E94800(ctx, base);
	// lwz r11,1024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82e9ac00
	if (cr6.lt) goto loc_82E9AC00;
loc_82E9AC14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9AC18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82E9AC20:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e9aaf8
	goto loc_82E9AAF8;
}

PPC_WEAK_FUNC(sub_82E9AAB8) {
	__imp__sub_82E9AAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AC48) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-27084
	ctx.r9.s64 = r11.s64 + -27084;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E9AC80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82e9ac80
	if (!cr0.eq) goto loc_82E9AC80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9a9f0
	sub_82E9A9F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9acac
	if (!cr0.eq) goto loc_82E9ACAC;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82e9acb8
	goto loc_82E9ACB8;
loc_82E9ACAC:
	// bl 0x82e9a978
	sub_82E9A978(ctx, base);
	// lwz r11,1024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1024) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82E9ACB8:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r29,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r29.u32);
	// bne cr6,0x82e9acdc
	if (!cr6.eq) goto loc_82E9ACDC;
	// bl 0x82e7ca00
	sub_82E7CA00(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// b 0x82e9ace4
	goto loc_82E9ACE4;
loc_82E9ACDC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
loc_82E9ACE4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9ad00
	if (cr0.eq) goto loc_82E9AD00;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(272) );
	// lwz r10,-9704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9704) );
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,-9704(r11)
	PPC_STORE_U32(r11.u32 + -9704, ctx.r10.u32);
loc_82E9AD00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E9AC48) {
	__imp__sub_82E9AC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AD10) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e9ac48
	sub_82E9AC48(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
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

PPC_WEAK_FUNC(sub_82E9AD10) {
	__imp__sub_82E9AD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AD58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e99c90
	sub_82E99C90(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-24256
	ctx.r10.s64 = r11.s64 + -24256;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,3040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stb r9,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r9.u8);
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
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

PPC_WEAK_FUNC(sub_82E9AD58) {
	__imp__sub_82E9AD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9ADC0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-24256
	r11.s64 = r11.s64 + -24256;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e9ae08
	if (cr0.eq) goto loc_82E9AE08;
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9ae08
	if (!cr6.eq) goto loc_82E9AE08;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9AE08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e99fe8
	sub_82E99FE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82E9ADC0) {
	__imp__sub_82E9ADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AE28) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9ae6c
	if (cr0.eq) goto loc_82E9AE6C;
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9ae6c
	if (!cr6.eq) goto loc_82E9AE6C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_82E9AE6C:
	// li r11,1
	r11.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = rotl64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
	// ble cr6,0x82e9ae90
	if (!cr6.gt) goto loc_82E9AE90;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9AE90:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9AE28) {
	__imp__sub_82E9AE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AEA8) {
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
	// bl 0x82e99e18
	sub_82E99E18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
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

PPC_WEAK_FUNC(sub_82E9AEA8) {
	__imp__sub_82E9AEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9AEE0) {
	__imp__sub_82E9AEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9AEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e9b07c
	if (cr6.eq) goto loc_82E9B07C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r29,r11,-9856
	r29.s64 = r11.s64 + -9856;
	// ble cr6,0x82e9afc8
	if (!cr6.gt) goto loc_82E9AFC8;
	// li r30,0
	r30.s64 = 0;
loc_82E9AF28:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82e9afb4
	if (cr6.eq) goto loc_82E9AFB4;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9AFB4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e9af28
	if (cr6.lt) goto loc_82E9AF28;
loc_82E9AFC8:
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82e9b07c
	if (!cr6.lt) goto loc_82E9B07C;
	// rlwinm r30,r28,4,0,27
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E9AFDC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x82e9b068
	if (cr6.eq) goto loc_82E9B068;
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9B068:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82e9afdc
	if (cr6.lt) goto loc_82E9AFDC;
loc_82E9B07C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E9AEF0) {
	__imp__sub_82E9AEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9b0a8
	if (!cr6.eq) goto loc_82E9B0A8;
loc_82E9B0A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9b220
	goto loc_82E9B220;
loc_82E9B0A8:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e9b10c
	if (cr0.eq) goto loc_82E9B10C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_82E9B0C0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x82e9b0d8
	if (!cr6.eq) goto loc_82E9B0D8;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e9b0a0
	if (cr6.eq) goto loc_82E9B0A0;
loc_82E9B0D8:
	// lbz r31,52(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e9b0f8
	if (!cr0.eq) goto loc_82E9B0F8;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e9b0f8
	if (!cr6.eq) goto loc_82E9B0F8;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e9b0a0
	if (cr6.eq) goto loc_82E9B0A0;
loc_82E9B0F8:
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e9b0c0
	if (cr6.lt) goto loc_82E9B0C0;
loc_82E9B10C:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e9b184
	if (!cr6.lt) goto loc_82E9B184;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82E9B120:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x82e9b138
	if (!cr6.eq) goto loc_82E9B138;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e9b0a0
	if (cr6.eq) goto loc_82E9B0A0;
loc_82E9B138:
	// lbz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x82e9b158
	if (!cr0.eq) goto loc_82E9B158;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e9b158
	if (!cr6.eq) goto loc_82E9B158;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e9b0a0
	if (cr6.eq) goto loc_82E9B0A0;
loc_82E9B158:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x82e9b168
	if (!cr6.lt) goto loc_82E9B168;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82E9B168:
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e9b120
	if (cr6.lt) goto loc_82E9B120;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e9b18c
	if (!cr6.eq) goto loc_82E9B18C;
loc_82E9B184:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82e9b190
	goto loc_82E9B190;
loc_82E9B18C:
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
loc_82E9B190:
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e9b1dc
	if (cr0.eq) goto loc_82E9B1DC;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E9B19C:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x82e9b1dc
	if (!cr6.gt) goto loc_82E9B1DC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bne 0x82e9b19c
	if (!cr0.eq) goto loc_82E9B19C;
loc_82E9B1DC:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r9.u8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
loc_82E9B220:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9B088) {
	__imp__sub_82E9B088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B228) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e9adc0
	sub_82E9ADC0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9b264
	if (cr0.eq) goto loc_82E9B264;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9B264:
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

PPC_WEAK_FUNC(sub_82E9B228) {
	__imp__sub_82E9B228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-25536
	r11.s64 = r11.s64 + -25536;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e9b2dc
	if (!cr0.eq) goto loc_82E9B2DC;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9ae28
	sub_82E9AE28(ctx, base);
loc_82E9B2D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9b468
	goto loc_82E9B468;
loc_82E9B2DC:
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,30936
	r11.s64 = r11.s64 + 30936;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9b358
	if (!cr0.eq) goto loc_82E9B358;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9b314
	if (cr0.eq) goto loc_82E9B314;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e9b31c
	goto loc_82E9B31C;
loc_82E9B314:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E9B31C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_82E9B33C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82e9b348
	if (cr6.lt) goto loc_82E9B348;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82E9B348:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f0.f64);
	// bne cr6,0x82e9b33c
	if (!cr6.eq) goto loc_82E9B33C;
	// stfs f0,48(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 48, temp.u32);
	// b 0x82e9b2d4
	goto loc_82E9B2D4;
loc_82E9B358:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-24176
	r11.s64 = r11.s64 + -24176;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e9b45c
	if (!cr0.eq) goto loc_82E9B45C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-24228
	r30.s64 = r11.s64 + -24228;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b44c
	if (cr0.eq) goto loc_82E9B44C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,3900
	r30.s64 = r11.s64 + 3900;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b44c
	if (cr0.eq) goto loc_82E9B44C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-32012
	r30.s64 = r11.s64 + -32012;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b44c
	if (cr0.eq) goto loc_82E9B44C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-24224
	r30.s64 = r11.s64 + -24224;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b444
	if (cr0.eq) goto loc_82E9B444;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,5664
	r30.s64 = r11.s64 + 5664;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b444
	if (cr0.eq) goto loc_82E9B444;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-10856
	r30.s64 = r11.s64 + -10856;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e9b444
	if (cr0.eq) goto loc_82E9B444;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9b468
	goto loc_82E9B468;
loc_82E9B444:
	// li r11,0
	r11.s64 = 0;
	// b 0x82e9b450
	goto loc_82E9B450;
loc_82E9B44C:
	// li r11,1
	r11.s64 = 1;
loc_82E9B450:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,52(r29)
	PPC_STORE_U8(r29.u32 + 52, r11.u8);
	// b 0x82e9b468
	goto loc_82E9B468;
loc_82E9B45C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9aab8
	sub_82E9AAB8(ctx, base);
loc_82E9B468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9B280) {
	__imp__sub_82E9B280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9b5e4
	if (!cr6.eq) goto loc_82E9B5E4;
loc_82E9B49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9B4A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E9B4B8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9b568
	if (cr0.eq) goto loc_82E9B568;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecdd10
	sub_82ECDD10(ctx, base);
	// b 0x82e9b560
	goto loc_82E9B560;
loc_82E9B4E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9b558
	if (cr0.eq) goto loc_82E9B558;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f31,f0
	f31.f64 = f0.f64;
	// bl 0x82ece840
	sub_82ECE840(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82e9b088
	sub_82E9B088(ctx, base);
loc_82E9B558:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecce68
	sub_82ECCE68(ctx, base);
loc_82E9B560:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e9b4e8
	if (!cr6.eq) goto loc_82E9B4E8;
loc_82E9B568:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e9b5d8
	if (!cr0.eq) goto loc_82E9B5D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecd058
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9b5d8
	if (cr0.eq) goto loc_82E9B5D8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecdd10
	sub_82ECDD10(ctx, base);
	// b 0x82e9b5d0
	goto loc_82E9B5D0;
loc_82E9B5A4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ece840
	sub_82ECE840(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82e9b5f8
	if (cr6.eq) goto loc_82E9B5F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ecce68
	sub_82ECCE68(ctx, base);
loc_82E9B5D0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e9b5a4
	if (!cr6.eq) goto loc_82E9B5A4;
loc_82E9B5D8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82E9B5E4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e9b4b8
	if (cr6.lt) goto loc_82E9B4B8;
	// b 0x82e9b49c
	goto loc_82E9B49C;
loc_82E9B5F8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r9,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r9.u8);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x82e9b4a0
	goto loc_82E9B4A0;
}

PPC_WEAK_FUNC(sub_82E9B478) {
	__imp__sub_82E9B478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B628) {
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9b668
	if (!cr6.eq) goto loc_82E9B668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,27544
	ctx.r4.s64 = r11.s64 + 27544;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_82E9B668:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e963c8
	sub_82E963C8(ctx, base);
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

PPC_WEAK_FUNC(sub_82E9B628) {
	__imp__sub_82E9B628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9B690) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// stb r29,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r29.u8);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stb r29,0(r17)
	PPC_STORE_U8(r17.u32 + 0, r29.u8);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// mr r18,r29
	r18.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r23,r29
	r23.u64 = r29.u64;
	// li r16,1
	r16.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e9b9d4
	if (!cr6.gt) goto loc_82E9B9D4;
	// mr r30,r29
	r30.u64 = r29.u64;
	// li r19,-2
	r19.s64 = -2;
loc_82E9B6F0:
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e9b998
	if (!cr0.eq) goto loc_82E9B998;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// clrlwi r28,r24,1
	r28.u64 = r24.u32 & 0x7FFFFFFF;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// bne cr6,0x82e9b998
	if (!cr6.eq) goto loc_82E9B998;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// clrlwi r27,r22,1
	r27.u64 = r22.u32 & 0x7FFFFFFF;
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// bne cr6,0x82e9b998
	if (!cr6.eq) goto loc_82E9B998;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, xer);
	// bne cr6,0x82e9b998
	if (!cr6.eq) goto loc_82E9B998;
	// lbz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e9b770
	if (!cr6.eq) goto loc_82E9B770;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9b770
	if (cr6.eq) goto loc_82E9B770;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82e9b690
	sub_82E9B690(ctx, base);
loc_82E9B770:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e9b9ec
	if (!cr6.eq) goto loc_82E9B9EC;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e9b8c0
	if (cr6.eq) goto loc_82E9B8C0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lwz r9,128(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(128) );
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e9b8b8
	if (cr0.eq) goto loc_82E9B8B8;
	// lwz r8,124(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(124) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E9B7E8:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, xer);
	// bne cr6,0x82e9b814
	if (!cr6.eq) goto loc_82E9B814;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmplw cr6,r6,r27
	cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, xer);
	// bne cr6,0x82e9b814
	if (!cr6.eq) goto loc_82E9B814;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82e9b828
	if (cr6.eq) goto loc_82E9B828;
loc_82E9B814:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e9b7e8
	if (cr6.lt) goto loc_82E9B7E8;
	// b 0x82e9b8b8
	goto loc_82E9B8B8;
loc_82E9B828:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9b8b8
	if (cr0.eq) goto loc_82E9B8B8;
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e9b8b8
	if (cr0.eq) goto loc_82E9B8B8;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82E9B86C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, xer);
	// bne cr6,0x82e9b898
	if (!cr6.eq) goto loc_82E9B898;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmplw cr6,r6,r27
	cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, xer);
	// bne cr6,0x82e9b898
	if (!cr6.eq) goto loc_82E9B898;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82e9b8ac
	if (cr6.eq) goto loc_82E9B8AC;
loc_82E9B898:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e9b86c
	if (cr6.lt) goto loc_82E9B86C;
	// b 0x82e9b8b8
	goto loc_82E9B8B8;
loc_82E9B8AC:
	// mulli r11,r10,24
	r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
loc_82E9B8B8:
	// stw r19,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r19.u32);
	// b 0x82e9b8dc
	goto loc_82E9B8DC;
loc_82E9B8C0:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e9b8d8
	if (!cr0.eq) goto loc_82E9B8D8;
	// li r11,-1
	r11.s64 = -1;
loc_82E9B8D8:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82E9B8DC:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9b960
	if (!cr6.eq) goto loc_82E9B960;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9b960
	if (cr0.eq) goto loc_82E9B960;
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e9b960
	if (cr0.eq) goto loc_82E9B960;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82E9B914:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r7,r7,1
	ctx.r7.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82e9b940
	if (!cr6.eq) goto loc_82E9B940;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// clrlwi r7,r7,1
	ctx.r7.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bne cr6,0x82e9b940
	if (!cr6.eq) goto loc_82E9B940;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r7,r25
	cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, xer);
	// beq cr6,0x82e9b954
	if (cr6.eq) goto loc_82E9B954;
loc_82E9B940:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e9b914
	if (cr6.lt) goto loc_82E9B914;
	// b 0x82e9b960
	goto loc_82E9B960;
loc_82E9B954:
	// mulli r11,r10,24
	r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r29.u32);
loc_82E9B960:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9b978
	if (!cr6.eq) goto loc_82E9B978;
	// stb r16,0(r17)
	PPC_STORE_U8(r17.u32 + 0, r16.u8);
loc_82E9B978:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r29.u32);
	// b 0x82e9b9c0
	goto loc_82E9B9C0;
loc_82E9B998:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9b9b8
	if (!cr0.eq) goto loc_82E9B9B8;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e9b9c0
	if (cr6.eq) goto loc_82E9B9C0;
	// mr r18,r16
	r18.u64 = r16.u64;
	// b 0x82e9b9c0
	goto loc_82E9B9C0;
loc_82E9B9B8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e9b9e0
	if (!cr6.eq) goto loc_82E9B9E0;
loc_82E9B9C0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x82e9b6f0
	if (cr6.lt) goto loc_82E9B6F0;
loc_82E9B9D4:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9b9e0
	if (!cr0.eq) goto loc_82E9B9E0;
	// stb r16,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r16.u8);
loc_82E9B9E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c08
	return;
loc_82E9B9EC:
	// stw r19,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r19.u32);
	// mulli r11,r23,24
	r11.s64 = r23.s64 * 24;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e9ba18
	if (!cr6.eq) goto loc_82E9BA18;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e9ba18
	if (cr0.eq) goto loc_82E9BA18;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82E9BA18:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9b9e0
	if (!cr6.eq) goto loc_82E9B9E0;
	// stb r16,0(r17)
	PPC_STORE_U8(r17.u32 + 0, r16.u8);
	// b 0x82e9b9e0
	goto loc_82E9B9E0;
}

PPC_WEAK_FUNC(sub_82E9B690) {
	__imp__sub_82E9B690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BA48) {
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
	// lis r11,2730
	r11.s64 = 178913280;
	// mulli r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 * 24;
	// stw r4,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e9ba78
	if (!cr6.gt) goto loc_82E9BA78;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9BA78:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ble cr6,0x82e9bae4
	if (!cr6.gt) goto loc_82E9BAE4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E9BA98:
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r10.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e9ba98
	if (cr6.lt) goto loc_82E9BA98;
loc_82E9BAE4:
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

PPC_WEAK_FUNC(sub_82E9BA48) {
	__imp__sub_82E9BA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e9bb50
	if (cr0.eq) goto loc_82E9BB50;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// clrlwi r7,r4,1
	ctx.r7.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82E9BB14:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e9bb40
	if (!cr6.eq) goto loc_82E9BB40;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// clrlwi. r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82e9bb40
	if (!cr0.eq) goto loc_82E9BB40;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e9bb58
	if (cr6.eq) goto loc_82E9BB58;
loc_82E9BB40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e9bb14
	if (cr6.lt) goto loc_82E9BB14;
loc_82E9BB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BB58:
	// mulli r11,r10,24
	r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9BAF8) {
	__imp__sub_82E9BAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82E9BB70:
	// lwz r3,128(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(128) );
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82E9BB7C:
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x82e9bc74
	if (!cr6.lt) goto loc_82E9BC74;
	// lwz r11,124(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// xor r31,r4,r31
	r31.u64 = ctx.r4.u64 ^ r31.u64;
	// clrlwi. r31,r31,1
	r31.u64 = r31.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e9bbb8
	if (!cr0.eq) goto loc_82E9BBB8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// xor r31,r31,r5
	r31.u64 = r31.u64 ^ ctx.r5.u64;
	// clrlwi. r31,r31,1
	r31.u64 = r31.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e9bbb8
	if (!cr0.eq) goto loc_82E9BBB8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e9bbc4
	if (cr6.eq) goto loc_82E9BBC4;
loc_82E9BBB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// b 0x82e9bb7c
	goto loc_82E9BB7C;
loc_82E9BBC4:
	// lwz r11,124(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// mulli r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e9bbec
	if (cr0.eq) goto loc_82E9BBEC;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e9bc58
	if (cr6.eq) goto loc_82E9BC58;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x82e9bb70
	goto loc_82E9BB70;
loc_82E9BBEC:
	// lwz r11,124(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(124) );
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r3,128(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(128) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bc58
	if (cr0.eq) goto loc_82E9BC58;
	// lwz r10,124(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(124) );
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// clrlwi r7,r4,1
	ctx.r7.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E9BC1C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e9bc48
	if (!cr6.eq) goto loc_82E9BC48;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// clrlwi r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e9bc48
	if (!cr6.eq) goto loc_82E9BC48;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e9bc60
	if (cr6.eq) goto loc_82E9BC60;
loc_82E9BC48:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82e9bc1c
	if (cr6.lt) goto loc_82E9BC1C;
loc_82E9BC58:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9bc78
	goto loc_82E9BC78;
loc_82E9BC60:
	// mulli r11,r9,24
	r11.s64 = ctx.r9.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// b 0x82e9bc78
	goto loc_82E9BC78;
loc_82E9BC74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9BC78:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9BB68) {
	__imp__sub_82E9BB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bec
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bd14
	if (cr0.eq) goto loc_82E9BD14;
	// clrlwi r30,r4,1
	r30.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82E9BCAC:
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82e9bcc8
	if (!cr6.eq) goto loc_82E9BCC8;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9bcc8
	if (!cr6.eq) goto loc_82E9BCC8;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82E9BCC8:
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// clrlwi r29,r29,1
	r29.u64 = r29.u32 & 0x7FFFFFFF;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x82e9bcfc
	if (!cr6.eq) goto loc_82E9BCFC;
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// xor r29,r29,r5
	r29.u64 = r29.u64 ^ ctx.r5.u64;
	// clrlwi. r29,r29,1
	r29.u64 = r29.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82e9bcfc
	if (!cr0.eq) goto loc_82E9BCFC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e9bd1c
	if (cr6.eq) goto loc_82E9BD1C;
loc_82E9BCFC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x82e9bcac
	if (cr6.lt) goto loc_82E9BCAC;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82e9bd38
	if (!cr6.eq) goto loc_82E9BD38;
loc_82E9BD14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9bd88
	goto loc_82E9BD88;
loc_82E9BD1C:
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mulli r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82e9bd84
	goto loc_82E9BD84;
loc_82E9BD38:
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mulli r10,r7,24
	ctx.r10.s64 = ctx.r7.s64 * 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r31,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r31.u32);
loc_82E9BD84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9BD88:
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9BC80) {
	__imp__sub_82E9BC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BD90) {
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
	// rlwinm r11,r4,29,3,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82E9BD90) {
	__imp__sub_82E9BD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82E9BDD8) {
	__imp__sub_82E9BDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bne 0x82e9be38
	if (!cr0.eq) goto loc_82E9BE38;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
loc_82E9BE38:
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E9BE20) {
	__imp__sub_82E9BE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r9,r11,7
	xer.ca = r11.u32 <= 7;
	ctx.r9.s64 = 7 - r11.s64;
	// rlwinm r11,r4,29,3,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// beq 0x82e9be7c
	if (cr0.eq) goto loc_82E9BE7C;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82e9be80
	goto loc_82E9BE80;
loc_82E9BE7C:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82E9BE80:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9BE40) {
	__imp__sub_82E9BE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,7
	xer.ca = r11.u32 <= 7;
	r11.s64 = 7 - r11.s64;
	// rlwinm r8,r4,29,3,31
	ctx.r8.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9BE88) {
	__imp__sub_82E9BE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BEB0) {
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9bee4
	if (!cr6.eq) goto loc_82E9BEE4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,27544
	ctx.r4.s64 = r11.s64 + 27544;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_82E9BEE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// bl 0x82e95e10
	sub_82E95E10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9bf64
	if (!cr0.eq) goto loc_82E9BF64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-25468
	r29.s64 = r11.s64 + -25468;
loc_82E9BF04:
	// clrlwi r11,r30,29
	r11.u64 = r30.u32 & 0x7;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,7
	xer.ca = r11.u32 <= 7;
	r11.s64 = 7 - r11.s64;
	// rlwinm r8,r30,29,3,31
	ctx.r8.u64 = rotl64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9bf58
	if (cr0.eq) goto loc_82E9BF58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// bl 0x82e95f00
	sub_82E95F00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bf58
	if (cr0.eq) goto loc_82E9BF58;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bf58
	if (cr0.eq) goto loc_82E9BF58;
	// bl 0x82eaf100
	sub_82EAF100(ctx, base);
loc_82E9BF58:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// blt cr6,0x82e9bf04
	if (cr6.lt) goto loc_82E9BF04;
loc_82E9BF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9BEB0) {
	__imp__sub_82E9BEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BF70) {
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
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-25468
	r29.s64 = r11.s64 + -25468;
loc_82E9BF8C:
	// clrlwi r11,r31,29
	r11.u64 = r31.u32 & 0x7;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,7
	xer.ca = r11.u32 <= 7;
	r11.s64 = 7 - r11.s64;
	// rlwinm r8,r31,29,3,31
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e9bfe0
	if (cr0.eq) goto loc_82E9BFE0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(140) );
	// bl 0x82e95f00
	sub_82E95F00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bfe0
	if (cr0.eq) goto loc_82E9BFE0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e9bfe0
	if (cr0.eq) goto loc_82E9BFE0;
	// bl 0x82eaf100
	sub_82EAF100(ctx, base);
loc_82E9BFE0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(r31.u32, 256, xer);
	// blt cr6,0x82e9bf8c
	if (cr6.lt) goto loc_82E9BF8C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E9BF70) {
	__imp__sub_82E9BF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9BFF8) {
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
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e9c030
	if (!cr6.eq) goto loc_82E9C030;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,27544
	ctx.r4.s64 = r11.s64 + 27544;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_82E9C030:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// bl 0x82e95e80
	sub_82E95E80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e9c04c
	if (!cr0.eq) goto loc_82E9C04C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9bf70
	sub_82E9BF70(ctx, base);
loc_82E9C04C:
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

PPC_WEAK_FUNC(sub_82E9BFF8) {
	__imp__sub_82E9BFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E9C060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// addi r11,r11,30232
	r11.s64 = r11.s64 + 30232;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 + 36;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r10,r4,68
	ctx.r10.s64 = ctx.r4.s64 + 68;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(52) );
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r10,r4,72
	ctx.r10.s64 = ctx.r4.s64 + 72;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(56) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(60) );
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// addi r10,r4,84
	ctx.r10.s64 = ctx.r4.s64 + 84;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// addi r10,r4,88
	ctx.r10.s64 = ctx.r4.s64 + 88;
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// addi r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 + 92;
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E9C060) {
	__imp__sub_82E9C060(ctx, base);
}

