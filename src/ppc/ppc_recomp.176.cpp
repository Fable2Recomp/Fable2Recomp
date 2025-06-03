#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82FB40B8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb40e4
	if (!cr6.eq) goto loc_82FB40E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb410c
	goto loc_82FB410C;
loc_82FB40E4:
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
	// ble cr6,0x82fb4114
	if (!cr6.gt) goto loc_82FB4114;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB410C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb3f78
	sub_82FB3F78(ctx, base);
loc_82FB4114:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r30,r10,r31
	r30.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82fb41bc
	if (!cr6.eq) goto loc_82FB41BC;
	// li r11,-1
	r11.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82FB4164:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82fb4164
	if (!cr0.eq) goto loc_82FB4164;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82FB418C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fb418c
	if (!cr0.eq) goto loc_82FB418C;
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(12) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82fb42b0
	goto loc_82FB42B0;
loc_82FB41BC:
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r26,r30
	r26.u64 = r30.u64;
loc_82FB41C4:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// and r26,r10,r29
	r26.u64 = ctx.r10.u64 & r29.u64;
	// mulli r10,r26,20
	ctx.r10.s64 = r26.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82fb41c4
	if (!cr6.eq) goto loc_82FB41C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r9,r26,20
	ctx.r9.s64 = r26.s64 * 20;
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
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// addi r25,r11,8
	r25.s64 = r11.s64 + 8;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82fb423c
	if (!cr6.eq) goto loc_82FB423C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fb4228
	if (cr6.eq) goto loc_82FB4228;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fb3bb0
	sub_82FB3BB0(ctx, base);
loc_82FB4228:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fb3a58
	sub_82FB3A58(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// b 0x82fb42b0
	goto loc_82FB42B0;
loc_82FB423C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
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
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & r29.u64;
	// b 0x82fb426c
	goto loc_82FB426C;
loc_82FB4268:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82FB426C:
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82fb4268
	if (!cr6.eq) goto loc_82FB4268;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fb4298
	if (cr6.eq) goto loc_82FB4298;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fb3bb0
	sub_82FB3BB0(ctx, base);
loc_82FB4298:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fb3a58
	sub_82FB3A58(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB42B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FB40B8) {
	__imp__sub_82FB40B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB42B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb436c
	if (cr6.eq) goto loc_82FB436C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82fb3f18
	sub_82FB3F18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FB4314:
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
	// bne 0x82fb4314
	if (!cr0.eq) goto loc_82FB4314;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb4340
	if (!cr0.eq) goto loc_82FB4340;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4340:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fb436c
	if (cr6.eq) goto loc_82FB436C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82fb4370
	goto loc_82FB4370;
loc_82FB436C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB4370:
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

PPC_WEAK_FUNC(sub_82FB42B8) {
	__imp__sub_82FB42B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4388) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb43b4
	if (!cr6.eq) goto loc_82FB43B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb43dc
	goto loc_82FB43DC;
loc_82FB43B4:
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
	// ble cr6,0x82fb43e4
	if (!cr6.gt) goto loc_82FB43E4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB43DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb3f78
	sub_82FB3F78(ctx, base);
loc_82FB43E4:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r30,r10,r31
	r30.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82fb44e4
	if (!cr6.eq) goto loc_82FB44E4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// li r11,1
	r11.s64 = 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82FB442C:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// stwcx. r7,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82fb442c
	if (!cr0.eq) goto loc_82FB442C;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82FB4458:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r6,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// stwcx. r5,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x82fb4458
	if (!cr0.eq) goto loc_82FB4458;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
loc_82FB4494:
	// mfmsr r30
	// mtmsrd r13,1
	// lwarx r3,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// stwcx. r4,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r30,1
	// bne 0x82fb4494
	if (!cr0.eq) goto loc_82FB4494;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_82FB44B4:
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
	// bne 0x82fb44b4
	if (!cr0.eq) goto loc_82FB44B4;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb3ab0
	sub_82FB3AB0(ctx, base);
	// b 0x82fb45d8
	goto loc_82FB45D8;
loc_82FB44E4:
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r26,r30
	r26.u64 = r30.u64;
loc_82FB44EC:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// and r26,r10,r29
	r26.u64 = ctx.r10.u64 & r29.u64;
	// mulli r10,r26,20
	ctx.r10.s64 = r26.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82fb44ec
	if (!cr6.eq) goto loc_82FB44EC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r9,r26,20
	ctx.r9.s64 = r26.s64 * 20;
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
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// addi r25,r11,8
	r25.s64 = r11.s64 + 8;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82fb4564
	if (!cr6.eq) goto loc_82FB4564;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fb4550
	if (cr6.eq) goto loc_82FB4550;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fb3bb0
	sub_82FB3BB0(ctx, base);
loc_82FB4550:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fb39f8
	sub_82FB39F8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// b 0x82fb45d8
	goto loc_82FB45D8;
loc_82FB4564:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
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
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & r29.u64;
	// b 0x82fb4594
	goto loc_82FB4594;
loc_82FB4590:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82FB4594:
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82fb4590
	if (!cr6.eq) goto loc_82FB4590;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fb45c0
	if (cr6.eq) goto loc_82FB45C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fb3bb0
	sub_82FB3BB0(ctx, base);
loc_82FB45C0:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fb39f8
	sub_82FB39F8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB45D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FB4388) {
	__imp__sub_82FB4388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB45E0) {
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
	// beq cr6,0x82fb4658
	if (cr6.eq) goto loc_82FB4658;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r5,r11,r29
	ctx.r5.u64 = r11.u64 & r29.u64;
	// bl 0x82fb3d18
	sub_82FB3D18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82fb4658
	if (cr0.lt) goto loc_82FB4658;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82fb39f8
	sub_82FB39F8(ctx, base);
	// b 0x82fb4668
	goto loc_82FB4668;
loc_82FB4658:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb4388
	sub_82FB4388(ctx, base);
loc_82FB4668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB45E0) {
	__imp__sub_82FB45E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4670) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r11,26436
	r11.s64 = r11.s64 + 26436;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb46b8
	if (cr0.eq) goto loc_82FB46B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82fb46bc
	goto loc_82FB46BC;
loc_82FB46B8:
	// li r11,0
	r11.s64 = 0;
loc_82FB46BC:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_82FB4670) {
	__imp__sub_82FB4670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB46D8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26436
	r11.s64 = r11.s64 + 26436;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fb4718
	if (cr6.eq) goto loc_82FB4718;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb3ea0
	sub_82FB3EA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4718:
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

PPC_WEAK_FUNC(sub_82FB46D8) {
	__imp__sub_82FB46D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4748) {
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
	// bl 0x82fb46d8
	sub_82FB46D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb4778
	if (cr0.eq) goto loc_82FB4778;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4778:
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

PPC_WEAK_FUNC(sub_82FB4748) {
	__imp__sub_82FB4748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb482c
	if (cr6.eq) goto loc_82FB482C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb482c
	if (cr6.eq) goto loc_82FB482C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82fb3f18
	sub_82FB3F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb483c
	if (cr0.eq) goto loc_82FB483C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FB4800:
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
	// bne 0x82fb4800
	if (!cr0.eq) goto loc_82FB4800;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb482c
	if (!cr0.eq) goto loc_82FB482C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB482C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB4830:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
loc_82FB483C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_82FB4858:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fb4858
	if (!cr0.eq) goto loc_82FB4858;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,-1
	r31.s64 = -1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FB488C:
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
	// bne 0x82fb488c
	if (!cr0.eq) goto loc_82FB488C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb48b8
	if (!cr0.eq) goto loc_82FB48B8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB48B8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82fb45e0
	sub_82FB45E0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FB48E0:
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
	// bne 0x82fb48e0
	if (!cr0.eq) goto loc_82FB48E0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb490c
	if (!cr0.eq) goto loc_82FB490C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB490C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FB4918:
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
	// bne 0x82fb4918
	if (!cr0.eq) goto loc_82FB4918;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb4944
	if (!cr0.eq) goto loc_82FB4944;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4944:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fb4830
	goto loc_82FB4830;
}

PPC_WEAK_FUNC(sub_82FB4798) {
	__imp__sub_82FB4798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4950) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fb4988
	if (cr6.eq) goto loc_82FB4988;
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
loc_82FB4988:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb49a8
	if (cr6.eq) goto loc_82FB49A8;
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
loc_82FB49A8:
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
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

PPC_WEAK_FUNC(sub_82FB4950) {
	__imp__sub_82FB4950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB49C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
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
	// beq 0x82fb4af0
	if (cr0.eq) goto loc_82FB4AF0;
	// lwa r11,4(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 4));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,26440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26440);
	f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r30,268
	r31.s64 = r30.s64 + 268;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f13,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x82f44678
	sub_82F44678(ctx, base);
	// addi r26,r30,156
	r26.s64 = r30.s64 + 156;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fc7a48
	sub_82FC7A48(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,26444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26444);
	f0.f64 = double(temp.f32);
	// lwa r11,4(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 4));
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
	// bl 0x82fc8bf8
	sub_82FC8BF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fc86a8
	sub_82FC86A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb4af0
	if (cr0.eq) goto loc_82FB4AF0;
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(248) );
	// li r31,0
	r31.s64 = 0;
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(240) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addic. r30,r8,1
	xer.ca = ctx.r8.u32 > 4294967294;
	r30.s64 = ctx.r8.s64 + 1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + r11.u64;
	// beq 0x82fb4af0
	if (cr0.eq) goto loc_82FB4AF0;
	// addi r29,r25,16
	r29.s64 = r25.s64 + 16;
loc_82FB4ABC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// add r9,r31,r27
	ctx.r9.u64 = r31.u64 + r27.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fc7aa0
	sub_82FC7AA0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82fb4abc
	if (cr6.lt) goto loc_82FB4ABC;
loc_82FB4AF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FB49C8) {
	__imp__sub_82FB49C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fb4b34
	if (cr6.eq) goto loc_82FB4B34;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
loc_82FB4B34:
	// lwa r11,-16(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -16));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-11080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11080);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB4AF8) {
	__imp__sub_82FB4AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4B58) {
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
	// beq 0x82fb4ba0
	if (cr0.eq) goto loc_82FB4BA0;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fb4b90
	if (cr0.eq) goto loc_82FB4B90;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fb4c04
	if (cr6.lt) goto loc_82FB4C04;
loc_82FB4B90:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fb4ba0
	if (cr0.eq) goto loc_82FB4BA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb4c04
	if (cr6.eq) goto loc_82FB4C04;
loc_82FB4BA0:
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
	// bne cr6,0x82fb4bd0
	if (!cr6.eq) goto loc_82FB4BD0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4bc4
	if (cr6.eq) goto loc_82FB4BC4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4BC4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fb4c04
	goto loc_82FB4C04;
loc_82FB4BD0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4be8
	if (cr6.eq) goto loc_82FB4BE8;
	// mulli r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 * 40;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fb4c04
	goto loc_82FB4C04;
loc_82FB4BE8:
	// mulli r30,r4,40
	r30.s64 = ctx.r4.s64 * 40;
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
loc_82FB4C04:
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

PPC_WEAK_FUNC(sub_82FB4B58) {
	__imp__sub_82FB4B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4C20) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb4c90
	if (cr6.lt) goto loc_82FB4C90;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb4c7c
	if (cr6.eq) goto loc_82FB4C7C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4c7c
	if (cr6.eq) goto loc_82FB4C7C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4C7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82FB4C90:
	// li r3,3072
	ctx.r3.s64 = 3072;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB4C20) {
	__imp__sub_82FB4C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4CB8) {
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
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FB4CB8) {
	__imp__sub_82FB4CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4D08) {
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4d2c
	if (cr6.eq) goto loc_82FB4D2C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4D2C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4d3c
	if (cr6.eq) goto loc_82FB4D3C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4D3C:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4d54
	if (cr6.eq) goto loc_82FB4D54;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4D54:
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

PPC_WEAK_FUNC(sub_82FB4D08) {
	__imp__sub_82FB4D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4D68) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r30,r11,24,8,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fb4d9c
	if (cr6.lt) goto loc_82FB4D9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fb4c20
	sub_82FB4C20(ctx, base);
loc_82FB4D9C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_82FB4D68) {
	__imp__sub_82FB4D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4DD0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fb4e3c
	if (!cr6.eq) goto loc_82FB4E3C;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fb4e18
	if (cr0.eq) goto loc_82FB4E18;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fb4e10
	if (cr0.eq) goto loc_82FB4E10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fb4e60
	if (!cr6.eq) goto loc_82FB4E60;
loc_82FB4E10:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fb4e60
	if (!cr0.eq) goto loc_82FB4E60;
loc_82FB4E18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb4e30
	if (cr6.eq) goto loc_82FB4E30;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4E30:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fb4e60
	goto loc_82FB4E60;
loc_82FB4E3C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fb4e50
	if (cr6.gt) goto loc_82FB4E50;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82fb4e60
	if (cr6.gt) goto loc_82FB4E60;
loc_82FB4E50:
	// rlwinm r11,r4,30,2,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82fb4b58
	sub_82FB4B58(ctx, base);
loc_82FB4E60:
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

PPC_WEAK_FUNC(sub_82FB4DD0) {
	__imp__sub_82FB4DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4E78) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82fb4e94
	if (!cr6.eq) goto loc_82FB4E94;
	// b 0x82fb4fb4
	goto loc_82FB4FB4;
loc_82FB4E94:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82fb4ea4
	if (!cr6.lt) goto loc_82FB4EA4;
	// li r31,8
	r31.s64 = 8;
	// b 0x82fb4eec
	goto loc_82FB4EEC;
loc_82FB4EA4:
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
loc_82FB4EEC:
	// li r28,0
	r28.s64 = 0;
	// mulli r11,r31,20
	r11.s64 = r31.s64 * 20;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r27,-2
	r27.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// beq cr6,0x82fb4f3c
	if (cr6.eq) goto loc_82FB4F3C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82FB4F24:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// bne 0x82fb4f24
	if (!cr0.eq) goto loc_82FB4F24;
loc_82FB4F3C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb4fa4
	if (cr6.eq) goto loc_82FB4FA4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82FB4F54:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82fb4f90
	if (cr6.eq) goto loc_82FB4F90;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ r11.u64;
	// bl 0x82fb5110
	sub_82FB5110(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82FB4F90:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x82fb4f54
	if (!cr0.eq) goto loc_82FB4F54;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB4FA4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82FB4FB4:
	// bl 0x82fc3a10
	sub_82FC3A10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FB4E78) {
	__imp__sub_82FB4E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB4FC0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82fb50a0
	if (cr6.eq) goto loc_82FB50A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r8,r10,26,6,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x82fb50a0
	if (!cr6.eq) goto loc_82FB50A0;
loc_82FB501C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82fb5078
	if (!cr6.eq) goto loc_82FB5078;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82fb506c
	if (!cr6.eq) goto loc_82FB506C;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// bl 0x82f43408
	sub_82F43408(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82fb5070
	if (!cr0.eq) goto loc_82FB5070;
loc_82FB506C:
	// li r11,0
	r11.s64 = 0;
loc_82FB5070:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb5098
	if (!cr0.eq) goto loc_82FB5098;
loc_82FB5078:
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82fb50a0
	if (cr6.eq) goto loc_82FB50A0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mulli r10,r28,20
	ctx.r10.s64 = r28.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// b 0x82fb501c
	goto loc_82FB501C;
loc_82FB5098:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82fb50a4
	goto loc_82FB50A4;
loc_82FB50A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FB50A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FB4FC0) {
	__imp__sub_82FB4FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB50B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82fb4d68
	sub_82FB4D68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

PPC_WEAK_FUNC(sub_82FB50B0) {
	__imp__sub_82FB50B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5110) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb513c
	if (!cr6.eq) goto loc_82FB513C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb5164
	goto loc_82FB5164;
loc_82FB513C:
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
	// ble cr6,0x82fb516c
	if (!cr6.gt) goto loc_82FB516C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB5164:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb4e78
	sub_82FB4E78(ctx, base);
loc_82FB516C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mulli r11,r9,20
	r11.s64 = ctx.r9.s64 * 20;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x82fb51cc
	if (!cr6.eq) goto loc_82FB51CC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r11.u32);
	// b 0x82fb5304
	goto loc_82FB5304;
loc_82FB51CC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82FB51D4:
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = r11.u64 & ctx.r8.u64;
	// mulli r11,r5,20
	r11.s64 = ctx.r5.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82fb51d4
	if (!cr6.eq) goto loc_82FB51D4;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mulli r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 * 20;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(12) );
	// rlwinm r31,r3,26,6,31
	r31.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r31,r31,r11
	r31.u64 = r31.u64 ^ r11.u64;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// xor r3,r31,r3
	ctx.r3.u64 = r31.u64 ^ ctx.r3.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82fb5274
	if (!cr6.eq) goto loc_82FB5274;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82fb524c
	if (cr6.eq) goto loc_82FB524C;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB524C:
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
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82fb5304
	goto loc_82FB5304;
loc_82FB5274:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwinm r30,r3,26,6,31
	r30.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// xor r31,r30,r31
	r31.u64 = r30.u64 ^ r31.u64;
	// xor r3,r31,r3
	ctx.r3.u64 = r31.u64 ^ ctx.r3.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82fb5294
	goto loc_82FB5294;
loc_82FB5290:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
loc_82FB5294:
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bne cr6,0x82fb5290
	if (!cr6.eq) goto loc_82FB5290;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82fb52d8
	if (cr6.eq) goto loc_82FB52D8;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB52D8:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
loc_82FB5304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB5110) {
	__imp__sub_82FB5110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5310) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb5370
	if (cr6.eq) goto loc_82FB5370;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82fb5370
	if (cr6.eq) goto loc_82FB5370;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82fb5370
	if (cr6.gt) goto loc_82FB5370;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x82fb5370
	if (cr6.gt) goto loc_82FB5370;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x82fb50b0
	sub_82FB50B0(ctx, base);
	// b 0x82fb5388
	goto loc_82FB5388;
loc_82FB5370:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82fd7e90
	sub_82FD7E90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_82FB5388:
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

PPC_WEAK_FUNC(sub_82FB5310) {
	__imp__sub_82FB5310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB53A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1024
	r11.s64 = 1024;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// beq cr6,0x82fb5400
	if (cr6.eq) goto loc_82FB5400;
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
loc_82FB5400:
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fb5420
	if (cr6.eq) goto loc_82FB5420;
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
loc_82FB5420:
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fb5440
	if (cr6.eq) goto loc_82FB5440;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FB5440:
	// stw r27,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r27.u32);
	// addi r29,r31,36
	r29.s64 = r31.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fc91b8
	sub_82FC91B8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82fc7f70
	sub_82FC7F70(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x82f430b0
	sub_82F430B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb5498
	if (cr6.eq) goto loc_82FB5498;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_82FB5498:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FB53A0) {
	__imp__sub_82FB53A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB54B8) {
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
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x82fc3a10
	sub_82FC3A10(ctx, base);
	// addi r30,r31,268
	r30.s64 = r31.s64 + 268;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82fb4d08
	sub_82FB4D08(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82fb4cb8
	sub_82FB4CB8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb551c
	if (cr6.eq) goto loc_82FB551C;
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
loc_82FB551C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb553c
	if (cr6.eq) goto loc_82FB553C;
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
loc_82FB553C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb555c
	if (cr6.eq) goto loc_82FB555C;
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
loc_82FB555C:
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

PPC_WEAK_FUNC(sub_82FB54B8) {
	__imp__sub_82FB54B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5578) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// addi r31,r30,36
	r31.s64 = r30.s64 + 36;
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r26,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r26.u32);
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, xer);
	// stw r26,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r26.u32);
	// stw r26,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r26.u32);
	// stw r26,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r26.u32);
	// bge cr6,0x82fb5608
	if (!cr6.lt) goto loc_82FB5608;
	// mulli r27,r5,40
	r27.s64 = ctx.r5.s64 * 40;
loc_82FB55C0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82fb55f8
	if (!cr6.eq) goto loc_82FB55F8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - r11.s64;
	// bl 0x82fb5310
	sub_82FB5310(ctx, base);
loc_82FB55F8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fb55c0
	if (cr6.lt) goto loc_82FB55C0;
loc_82FB5608:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc9620
	sub_82FC9620(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb56f4
	if (!cr6.gt) goto loc_82FB56F4;
loc_82FB5620:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// rlwinm r8,r3,30,2,29
	ctx.r8.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r3,3,25,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x78;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb56e4
	if (!cr6.gt) goto loc_82FB56E4;
	// add r4,r3,r24
	ctx.r4.u64 = ctx.r3.u64 + r24.u64;
loc_82FB5648:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r11,26,6,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFC;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// lwzx r11,r5,r6
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r29,28(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r6,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	// stw r7,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r7.u32);
	// subf r7,r31,r29
	ctx.r7.s64 = r29.s64 - r31.s64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82fb5648
	if (cr6.lt) goto loc_82FB5648;
loc_82FB56E4:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82fb5620
	if (cr6.lt) goto loc_82FB5620;
loc_82FB56F4:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// add r3,r24,r11
	ctx.r3.u64 = r24.u64 + r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FB5578) {
	__imp__sub_82FB5578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5708) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lbz r11,36(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fb5790
	if (cr0.eq) goto loc_82FB5790;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fb5794
	if (!cr6.gt) goto loc_82FB5794;
	// li r28,40
	r28.s64 = 40;
loc_82FB5748:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,-40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-40) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82fb5778
	if (cr6.eq) goto loc_82FB5778;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fb5578
	sub_82FB5578(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82FB5778:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82fb5748
	if (cr6.lt) goto loc_82FB5748;
	// b 0x82fb5794
	goto loc_82FB5794;
loc_82FB5790:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82FB5794:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fb5578
	sub_82FB5578(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB5708) {
	__imp__sub_82FB5708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB57B0) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	r15.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r15
	r28.u64 = r15.u64;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r27.u32);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fb5c38
	if (cr6.eq) goto loc_82FB5C38;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-11664
	r11.s64 = r11.s64 + -11664;
	// lfs f29,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f29.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82fb5808
	goto loc_82FB5808;
loc_82FB5804:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82FB5808:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb585c
	if (cr6.eq) goto loc_82FB585C;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_82FB5824:
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-12) );
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x82fb5850
	if (!cr6.eq) goto loc_82FB5850;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x82fb5840
	if (!cr6.gt) goto loc_82FB5840;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82FB5840:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82fb5850
	if (!cr6.gt) goto loc_82FB5850;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82FB5850:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bne 0x82fb5824
	if (!cr0.eq) goto loc_82FB5824;
loc_82FB585C:
	// lwz r11,12(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(12) );
	// lwz r30,16(r14)
	r30.u64 = PPC_LOAD_U32(r14.u32 + int32_t(16) );
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fb588c
	if (cr6.gt) goto loc_82FB588C;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82fb588c
	if (!cr6.gt) goto loc_82FB588C;
loc_82FB5880:
	// rlwinm r29,r29,1,0,30
	r29.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82fb5880
	if (cr6.lt) goto loc_82FB5880;
loc_82FB588C:
	// rlwinm r11,r30,31,1,31
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x82fb58b0
	if (cr6.gt) goto loc_82FB58B0;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// ble cr6,0x82fb58b0
	if (!cr6.gt) goto loc_82FB58B0;
loc_82FB58A4:
	// rlwinm r30,r30,1,0,30
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// blt cr6,0x82fb58a4
	if (cr6.lt) goto loc_82FB58A4;
loc_82FB58B0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb58f0
	if (cr0.eq) goto loc_82FB58F0;
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
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82eff360
	sub_82EFF360(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82fb58f4
	goto loc_82FB58F4;
loc_82FB58F0:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_82FB58F4:
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// mr r29,r15
	r29.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb594c
	if (!cr6.gt) goto loc_82FB594C;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82FB5918:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + r11.u64;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82fb5938
	if (!cr6.eq) goto loc_82FB5938;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82fb49c8
	sub_82FB49C8(ctx, base);
loc_82FB5938:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb5918
	if (cr6.lt) goto loc_82FB5918;
loc_82FB594C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,20(r14)
	ctx.r9.u64 = PPC_LOAD_U32(r14.u32 + int32_t(20) );
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// lwz r19,0(r9)
	r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r11,r19,1
	r11.s64 = r19.s64 + 1;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r3,24(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + int32_t(24) );
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lwz r11,28(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(28) );
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// fdivs f30,f29,f0
	f30.f64 = double(float(f29.f64 / f0.f64));
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r15.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r15.u32);
	// stb r15,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r15.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// fdivs f31,f29,f13
	f31.f64 = double(float(f29.f64 / ctx.f13.f64));
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb59f8
	if (cr0.eq) goto loc_82FB59F8;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82f01690
	sub_82F01690(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// b 0x82fb59fc
	goto loc_82FB59FC;
loc_82FB59F8:
	// mr r20,r15
	r20.u64 = r15.u64;
loc_82FB59FC:
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
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// mr r18,r15
	r18.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb5bf8
	if (!cr6.gt) goto loc_82FB5BF8;
	// mr r21,r15
	r21.u64 = r15.u64;
loc_82FB5A28:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// add r11,r21,r10
	r11.u64 = r21.u64 + ctx.r10.u64;
	// lwzx r23,r21,r10
	r23.u64 = PPC_LOAD_U32(r21.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r22,4(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r26,28(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r25,32(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r24,36(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// beq cr6,0x82fb5a84
	if (cr6.eq) goto loc_82FB5A84;
	// mulli r11,r9,40
	r11.s64 = ctx.r9.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r26,28(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// lwz r25,32(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r24,36(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
loc_82FB5A84:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82fb5bdc
	if (!cr6.eq) goto loc_82FB5BDC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fb5ad4
	if (cr0.eq) goto loc_82FB5AD4;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r15,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r15.u32);
	// stw r15,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r15.u32);
	// b 0x82fb5ad8
	goto loc_82FB5AD8;
loc_82FB5AD4:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_82FB5AD8:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// extsw r11,r24
	r11.s64 = r24.s32;
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// extsw r11,r26
	r11.s64 = r26.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// extsw r11,r25
	r11.s64 = r25.s32;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r11.u64);
	// lfd f9,152(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// extsw r9,r27
	ctx.r9.s64 = r27.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lfd f0,112(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// fmuls f0,f12,f31
	f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fmuls f0,f11,f30
	f0.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f0,f9,f31
	f0.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lwz r30,16(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + int32_t(16) );
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82f49918
	sub_82F49918(ctx, base);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f4bca0
	sub_82F4BCA0(ctx, base);
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
loc_82FB5BDC:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,40
	r21.s64 = r21.s64 + 40;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// blt cr6,0x82fb5a28
	if (cr6.lt) goto loc_82FB5A28;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r27,404(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(404) );
loc_82FB5BF8:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82fb5c08
	if (cr6.eq) goto loc_82FB5C08;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FB5C08:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82fb5c28
	if (cr6.eq) goto loc_82FB5C28;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FB5C28:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82fb5804
	if (cr6.lt) goto loc_82FB5804;
loc_82FB5C38:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82FB57B0) {
	__imp__sub_82FB57B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5C50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fb4dd0
	sub_82FB4DD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mulli r10,r31,40
	ctx.r10.s64 = r31.s64 * 40;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-40
	ctx.r10.s64 = r11.s64 + -40;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r10,-40(r11)
	PPC_STORE_U32(r11.u32 + -40, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r10,-36(r11)
	PPC_STORE_U32(r11.u32 + -36, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r10,-32(r11)
	PPC_STORE_U32(r11.u32 + -32, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// stw r10,-28(r11)
	PPC_STORE_U32(r11.u32 + -28, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// stw r7,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, ctx.r7.u32);
	// stw r8,-20(r11)
	PPC_STORE_U32(r11.u32 + -20, ctx.r8.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r9.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB5C50) {
	__imp__sub_82FB5C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5CE0) {
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
	// beq cr6,0x82fb5d3c
	if (cr6.eq) goto loc_82FB5D3C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & r11.u64;
	// bl 0x82fb4fc0
	sub_82FB4FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82fb5d3c
	if (cr0.lt) goto loc_82FB5D3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// b 0x82fb5d40
	goto loc_82FB5D40;
loc_82FB5D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB5D40:
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

PPC_WEAK_FUNC(sub_82FB5CE0) {
	__imp__sub_82FB5CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5D58) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb5d84
	if (!cr6.eq) goto loc_82FB5D84;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb5dac
	goto loc_82FB5DAC;
loc_82FB5D84:
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
	// ble cr6,0x82fb5db4
	if (!cr6.gt) goto loc_82FB5DB4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB5DAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb4e78
	sub_82FB4E78(ctx, base);
loc_82FB5DB4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mulli r11,r9,20
	r11.s64 = ctx.r9.s64 * 20;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x82fb5e1c
	if (!cr6.eq) goto loc_82FB5E1C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// b 0x82fb5f64
	goto loc_82FB5F64;
loc_82FB5E1C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82FB5E24:
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = r11.u64 & ctx.r8.u64;
	// mulli r11,r5,20
	r11.s64 = ctx.r5.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82fb5e24
	if (!cr6.eq) goto loc_82FB5E24;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mulli r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 * 20;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(12) );
	// rlwinm r31,r3,26,6,31
	r31.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r31,r31,r11
	r31.u64 = r31.u64 ^ r11.u64;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// xor r3,r31,r3
	ctx.r3.u64 = r31.u64 ^ ctx.r3.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82fb5ecc
	if (!cr6.eq) goto loc_82FB5ECC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82fb5e9c
	if (cr6.eq) goto loc_82FB5E9C;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB5E9C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// b 0x82fb5f64
	goto loc_82FB5F64;
loc_82FB5ECC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwinm r30,r3,26,6,31
	r30.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// xor r31,r30,r31
	r31.u64 = r30.u64 ^ r31.u64;
	// xor r3,r31,r3
	ctx.r3.u64 = r31.u64 ^ ctx.r3.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82fb5eec
	goto loc_82FB5EEC;
loc_82FB5EE8:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
loc_82FB5EEC:
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bne cr6,0x82fb5ee8
	if (!cr6.eq) goto loc_82FB5EE8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82fb5f30
	if (cr6.eq) goto loc_82FB5F30;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB5F30:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82FB5F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB5D58) {
	__imp__sub_82FB5D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB5F70) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
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
	// beq 0x82fb628c
	if (cr0.eq) goto loc_82FB628C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// li r22,0
	r22.s64 = 0;
	// beq 0x82fb6004
	if (cr0.eq) goto loc_82FB6004;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82efac40
	sub_82EFAC40(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82fb6008
	goto loc_82FB6008;
loc_82FB6004:
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82FB6008:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r11.u32);
	// bl 0x82fb4950
	sub_82FB4950(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// lfs f0,26444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26444);
	f0.f64 = double(temp.f32);
	// lwa r11,4(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 4));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// mr r24,r22
	r24.u64 = r22.u64;
	// beq 0x82fb6274
	if (cr0.eq) goto loc_82FB6274;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r23,-1
	r23.s64 = -1;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
loc_82FB6088:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f48e10
	sub_82F48E10(ctx, base);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82fb60b4
	if (!cr6.eq) goto loc_82FB60B4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82fb60b8
	if (cr6.eq) goto loc_82FB60B8;
loc_82FB60B4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82FB60B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb6268
	if (cr0.eq) goto loc_82FB6268;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82fb6268
	if (cr0.eq) goto loc_82FB6268;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x82fb6268
	if (!cr6.gt) goto loc_82FB6268;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x82fb6268
	if (!cr6.gt) goto loc_82FB6268;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// subf r28,r11,r10
	r28.s64 = ctx.r10.s64 - r11.s64;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf. r10,r30,r29
	ctx.r10.s64 = r29.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r22.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// ble 0x82fb6268
	if (!cr0.gt) goto loc_82FB6268;
	// subf. r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82fb6268
	if (!cr0.gt) goto loc_82FB6268;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// bl 0x82f432d0
	sub_82F432D0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r30,r31,348
	r30.s64 = r31.s64 + 348;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb5ce0
	sub_82FB5CE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// bne 0x82fb6210
	if (!cr0.eq) goto loc_82FB6210;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82FB6210:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb6224
	if (cr6.eq) goto loc_82FB6224;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// b 0x82fb625c
	goto loc_82FB625C;
loc_82FB6224:
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// xor r11,r9,r11
	r11.u64 = ctx.r9.u64 ^ r11.u64;
	// xor r5,r11,r8
	ctx.r5.u64 = r11.u64 ^ ctx.r8.u64;
	// bl 0x82fb5d58
	sub_82FB5D58(ctx, base);
loc_82FB625C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fb5c50
	sub_82FB5C50(ctx, base);
loc_82FB6268:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r21
	cr6.compare<uint32_t>(r24.u32, r21.u32, xer);
	// blt cr6,0x82fb6088
	if (cr6.lt) goto loc_82FB6088;
loc_82FB6274:
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
loc_82FB628C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_82FB5F70) {
	__imp__sub_82FB5F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB62A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb634c
	if (!cr6.gt) goto loc_82FB634C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82FB62D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82fb6338
	if (!cr6.eq) goto loc_82FB6338;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82fb6318
	if (cr6.eq) goto loc_82FB6318;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82fb6338
	if (cr6.gt) goto loc_82FB6338;
loc_82FB6318:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
loc_82FB6338:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82fb62d0
	if (cr6.lt) goto loc_82FB62D0;
loc_82FB634C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x82fb4b58
	sub_82FB4B58(ctx, base);
	// addi r3,r27,348
	ctx.r3.s64 = r27.s64 + 348;
	// bl 0x82fc3a10
	sub_82FC3A10(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb63ec
	if (!cr6.gt) goto loc_82FB63EC;
loc_82FB637C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82fb63d8
	if (!cr6.eq) goto loc_82FB63D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82fb63c4
	if (cr6.eq) goto loc_82FB63C4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82fb63d8
	if (cr6.gt) goto loc_82FB63D8;
loc_82FB63C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82fb5f70
	sub_82FB5F70(ctx, base);
loc_82FB63D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb637c
	if (cr6.lt) goto loc_82FB637C;
loc_82FB63EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb5708
	sub_82FB5708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb57b0
	sub_82FB57B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb4dd0
	sub_82FB4DD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6424
	if (cr6.eq) goto loc_82FB6424;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB6424:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FB62A0) {
	__imp__sub_82FB62A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB6430) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6474
	if (cr6.eq) goto loc_82FB6474;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82fb6474
	if (cr6.eq) goto loc_82FB6474;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb53a0
	sub_82FB53A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb62a0
	sub_82FB62A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb54b8
	sub_82FB54B8(ctx, base);
loc_82FB6474:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB6430) {
	__imp__sub_82FB6430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB6488) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r11,26448
	ctx.r5.s64 = r11.s64 + 26448;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// beq cr6,0x82fb6534
	if (cr6.eq) goto loc_82FB6534;
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
loc_82FB6534:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// beq cr6,0x82fb655c
	if (cr6.eq) goto loc_82FB655C;
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
loc_82FB655C:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// beq cr6,0x82fb6584
	if (cr6.eq) goto loc_82FB6584;
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
loc_82FB6584:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb65ac
	if (cr6.eq) goto loc_82FB65AC;
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
loc_82FB65AC:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb65d4
	if (cr6.eq) goto loc_82FB65D4;
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
loc_82FB65D4:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fb65f4
	if (cr6.eq) goto loc_82FB65F4;
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
loc_82FB65F4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6614
	if (cr6.eq) goto loc_82FB6614;
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
loc_82FB6614:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// fdivs f0,f0,f31
	f0.f64 = double(float(f0.f64 / f31.f64));
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FB6488) {
	__imp__sub_82FB6488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB6660) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6694
	if (cr6.eq) goto loc_82FB6694;
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
loc_82FB6694:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb66b4
	if (cr6.eq) goto loc_82FB66B4;
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
loc_82FB66B4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb66d4
	if (cr6.eq) goto loc_82FB66D4;
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
loc_82FB66D4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb66f4
	if (cr6.eq) goto loc_82FB66F4;
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
loc_82FB66F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6714
	if (cr6.eq) goto loc_82FB6714;
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
loc_82FB6714:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb6734
	if (cr6.eq) goto loc_82FB6734;
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
loc_82FB6734:
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

PPC_WEAK_FUNC(sub_82FB6660) {
	__imp__sub_82FB6660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB6748) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// rlwinm r11,r10,27,31,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x82fb67a4
	if (!cr6.lt) goto loc_82FB67A4;
	// addi r11,r11,23
	r11.s64 = r11.s64 + 23;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r28.u32);
loc_82FB67A4:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(116) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// ld r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r7,56(r29)
	ctx.r7.u64 = PPC_LOAD_U64(r29.u32 + 56);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lwz r11,80(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB6748) {
	__imp__sub_82FB6748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB6868) {
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
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne 0x82fb68ac
	if (!cr0.eq) goto loc_82FB68AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(104) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_82FB68AC:
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

PPC_WEAK_FUNC(sub_82FB6868) {
	__imp__sub_82FB6868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7508
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb68fc
	if (!cr6.lt) goto loc_82FB68FC;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB68FC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r10,26528
	ctx.r4.s64 = ctx.r10.s64 + 26528;
	// lbz r30,48(r9)
	r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fb70cc
	if (cr6.eq) goto loc_82FB70CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f28,2756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	f28.f64 = double(temp.f32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lfd f29,26472(r9)
	f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 26472);
	// addi r24,r11,26504
	r24.s64 = r11.s64 + 26504;
	// lfs f30,26480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26480);
	f30.f64 = double(temp.f32);
	// lfs f31,2200(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2200);
	f31.f64 = double(temp.f32);
loc_82FB695C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r10,r30,255
	ctx.r10.s64 = r30.s64 + 255;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// clrlwi r25,r10,24
	r25.u64 = ctx.r10.u32 & 0xFF;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb6984
	if (!cr6.lt) goto loc_82FB6984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB6984:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r30,r29
	r30.u64 = r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// sth r29,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r29.u16);
	// cmplwi cr6,r5,7
	cr6.compare<uint32_t>(ctx.r5.u32, 7, xer);
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r29.u8);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// sth r29,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r29.u16);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r29.u8);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// bgt cr6,0x82fb719c
	if (cr6.gt) goto loc_82FB719C;
	// lis r12,-32252
	r12.s64 = -2113667072;
	// addi r12,r12,26488
	r12.s64 = r12.s64 + 26488;
	// rlwinm r0,r5,1,0,30
	r0.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32005
	r12.s64 = -2097479680;
	// addi r12,r12,27116
	r12.s64 = r12.s64 + 27116;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82FB69EC;
	case 1:
		goto loc_82FB6D2C;
	case 2:
		goto loc_82FB6E6C;
	case 3:
		goto loc_82FB7088;
	case 4:
		goto loc_82FB70E0;
	case 5:
		goto loc_82FB7120;
	case 6:
		goto loc_82FB7194;
	case 7:
		goto loc_82FB70E0;
	default:
		__builtin_unreachable();
	}
loc_82FB69EC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a1b8
	sub_82F2A1B8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82fb6a1c
	if (!cr6.lt) goto loc_82FB6A1C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6A1C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6a64
	if (!cr6.gt) goto loc_82FB6A64;
	// li r11,15
	r11.s64 = 15;
loc_82FB6A64:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// bge cr6,0x82fb6a94
	if (!cr6.lt) goto loc_82FB6A94;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6A94:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6adc
	if (!cr6.gt) goto loc_82FB6ADC;
	// li r11,15
	r11.s64 = 15;
loc_82FB6ADC:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r11.u8);
	// bge cr6,0x82fb6b0c
	if (!cr6.lt) goto loc_82FB6B0C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6B0C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x82200800
	sub_82200800(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82fb6b9c
	if (!cr6.lt) goto loc_82FB6B9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6B9C:
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
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
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
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r11.u16);
	// bge cr6,0x82fb6c20
	if (!cr6.lt) goto loc_82FB6C20;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6C20:
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
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,24,24,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6c54
	if (!cr6.gt) goto loc_82FB6C54;
	// li r11,15
	r11.s64 = 15;
loc_82FB6C54:
	// rlwinm r9,r9,28,20,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (rotl32(r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb6c7c
	if (!cr6.lt) goto loc_82FB6C7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB6C7C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// beq 0x82fb6ca4
	if (cr0.eq) goto loc_82FB6CA4;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82FB6CA4:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fb6cb4
	if (!cr0.eq) goto loc_82FB6CB4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82FB6CB4:
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fb6cc8
	if (!cr6.gt) goto loc_82FB6CC8;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
loc_82FB6CC8:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82FB6CD4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r11.u8);
	// beq cr6,0x82fb70c4
	if (cr6.eq) goto loc_82FB70C4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bge cr6,0x82fb70c4
	if (!cr6.lt) goto loc_82FB70C4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r9,105(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r8,106(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r7,107(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lhz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r5,110(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r5,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
loc_82FB6D18:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x82fb70c4
	goto loc_82FB70C4;
loc_82FB6D2C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82fb6d4c
	if (!cr6.lt) goto loc_82FB6D4C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6D4C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6d94
	if (!cr6.gt) goto loc_82FB6D94;
	// li r11,15
	r11.s64 = 15;
loc_82FB6D94:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// bge cr6,0x82fb6dc4
	if (!cr6.lt) goto loc_82FB6DC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6DC4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6e0c
	if (!cr6.gt) goto loc_82FB6E0C;
	// li r11,15
	r11.s64 = 15;
loc_82FB6E0C:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r11.u8);
	// bge cr6,0x82fb6e38
	if (!cr6.lt) goto loc_82FB6E38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB6E38:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lbz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// rlwinm r11,r9,0,0,28
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subfic r11,r11,8
	xer.ca = r11.u32 <= 8;
	r11.s64 = 8 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,24,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x82fb6cd4
	goto loc_82FB6CD4;
loc_82FB6E6C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a1b8
	sub_82F2A1B8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82fb6e9c
	if (!cr6.lt) goto loc_82FB6E9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6E9C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6ee4
	if (!cr6.gt) goto loc_82FB6EE4;
	// li r11,15
	r11.s64 = 15;
loc_82FB6EE4:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// bge cr6,0x82fb6f14
	if (!cr6.lt) goto loc_82FB6F14;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6F14:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r9,16,16,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6f5c
	if (!cr6.gt) goto loc_82FB6F5C;
	// li r11,15
	r11.s64 = 15;
loc_82FB6F5C:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r11.u8);
	// bge cr6,0x82fb6f8c
	if (!cr6.lt) goto loc_82FB6F8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82FB6F8C:
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
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,24,24,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82fb6fc0
	if (!cr6.gt) goto loc_82FB6FC0;
	// li r11,15
	r11.s64 = 15;
loc_82FB6FC0:
	// rlwinm r9,r9,28,20,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (rotl32(r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb6fe8
	if (!cr6.lt) goto loc_82FB6FE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB6FE8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// beq 0x82fb7010
	if (cr0.eq) goto loc_82FB7010;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82FB7010:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fb7020
	if (!cr0.eq) goto loc_82FB7020;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82FB7020:
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fb7034
	if (!cr6.gt) goto loc_82FB7034;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
loc_82FB7034:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r11.u8);
	// beq cr6,0x82fb70c4
	if (cr6.eq) goto loc_82FB70C4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bge cr6,0x82fb70c4
	if (!cr6.lt) goto loc_82FB70C4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lhz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lbz r7,105(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r6,106(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r5,107(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// b 0x82fb6d18
	goto loc_82FB6D18;
loc_82FB7088:
	// li r30,27
	r30.s64 = 27;
loc_82FB708C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb70b0
	if (!cr6.lt) goto loc_82FB70B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB70B0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82FB70BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fb708c
	if (!cr6.eq) goto loc_82FB708C;
loc_82FB70C4:
	// clrlwi. r30,r25,24
	r30.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82fb695c
	if (!cr0.eq) goto loc_82FB695C;
loc_82FB70CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7554
	// b 0x82ca2c28
	return;
loc_82FB70E0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb70fc
	if (!cr6.lt) goto loc_82FB70FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB70FC:
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
	// mulli r11,r11,5
	r11.s64 = r11.s64 * 5;
	// addi r30,r11,19
	r30.s64 = r11.s64 + 19;
	// b 0x82fb70bc
	goto loc_82FB70BC;
loc_82FB7120:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82fb713c
	if (!cr6.lt) goto loc_82FB713C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB713C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lbz r30,48(r9)
	r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// bge cr6,0x82fb716c
	if (!cr6.lt) goto loc_82FB716C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82FB716C:
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
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,13
	r30.s64 = r11.s64 + 13;
	// b 0x82fb70bc
	goto loc_82FB70BC;
loc_82FB7194:
	// li r30,80
	r30.s64 = 80;
	// b 0x82fb708c
	goto loc_82FB708C;
loc_82FB719C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// b 0x82fb70bc
	goto loc_82FB70BC;
}

PPC_WEAK_FUNC(sub_82FB68C0) {
	__imp__sub_82FB68C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB71B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB71B0) {
	__imp__sub_82FB71B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB71B8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,26548
	ctx.r10.s64 = ctx.r10.s64 + 26548;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82ef70f0
	sub_82EF70F0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fb721c
	if (cr6.eq) goto loc_82FB721C;
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
loc_82FB721C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb723c
	if (cr6.eq) goto loc_82FB723C;
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
loc_82FB723C:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fb725c
	if (cr6.eq) goto loc_82FB725C;
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
loc_82FB725C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb727c
	if (cr6.eq) goto loc_82FB727C;
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
loc_82FB727C:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fb729c
	if (cr6.eq) goto loc_82FB729C;
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
loc_82FB729C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb72bc
	if (cr6.eq) goto loc_82FB72BC;
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
loc_82FB72BC:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB71B8) {
	__imp__sub_82FB71B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB72D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fb7338
	if (!cr6.eq) goto loc_82FB7338;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fb7338
	if (!cr6.eq) goto loc_82FB7338;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
loc_82FB7308:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb732c
	if (cr0.eq) goto loc_82FB732C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82fb7308
	if (cr6.eq) goto loc_82FB7308;
loc_82FB732C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82fb733c
	if (cr0.eq) goto loc_82FB733C;
loc_82FB7338:
	// li r11,0
	r11.s64 = 0;
loc_82FB733C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB72D0) {
	__imp__sub_82FB72D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7348) {
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
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7440
	sub_82EF7440(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// xor r3,r11,r3
	ctx.r3.u64 = r11.u64 ^ ctx.r3.u64;
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

PPC_WEAK_FUNC(sub_82FB7348) {
	__imp__sub_82FB7348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB73B8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb73ec
	if (cr6.eq) goto loc_82FB73EC;
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
loc_82FB73EC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb740c
	if (cr6.eq) goto loc_82FB740C;
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
loc_82FB740C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb742c
	if (cr6.eq) goto loc_82FB742C;
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
loc_82FB742C:
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

PPC_WEAK_FUNC(sub_82FB73B8) {
	__imp__sub_82FB73B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7448) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fb7348
	sub_82FB7348(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FB7448) {
	__imp__sub_82FB7448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82fb7464
	if (cr6.eq) goto loc_82FB7464;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FB7464:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// b 0x82fb72d0
	sub_82FB72D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FB7450) {
	__imp__sub_82FB7450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB7470) {
	__imp__sub_82FB7470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7480) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb74dc
	if (cr0.eq) goto loc_82FB74DC;
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
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fb71b8
	sub_82FB71B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82fb74e0
	goto loc_82FB74E0;
loc_82FB74DC:
	// li r31,0
	r31.s64 = 0;
loc_82FB74E0:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,-3496
	r30.s64 = r11.s64 + -3496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-3496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3496) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// beq cr6,0x82fb7528
	if (cr6.eq) goto loc_82FB7528;
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
loc_82FB7528:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB7480) {
	__imp__sub_82FB7480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7538) {
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
	// bl 0x82fb73b8
	sub_82FB73B8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb7568
	if (cr0.eq) goto loc_82FB7568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB7568:
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

PPC_WEAK_FUNC(sub_82FB7538) {
	__imp__sub_82FB7538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7588) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb75f8
	if (cr6.lt) goto loc_82FB75F8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb75e4
	if (cr6.eq) goto loc_82FB75E4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb75e4
	if (cr6.eq) goto loc_82FB75E4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB75E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82FB75F8:
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB7588) {
	__imp__sub_82FB7588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7620) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r30,r11,26,6,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fb7654
	if (cr6.lt) goto loc_82FB7654;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fb7588
	sub_82FB7588(ctx, base);
loc_82FB7654:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_82FB7620) {
	__imp__sub_82FB7620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7688) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82fb7620
	sub_82FB7620(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

PPC_WEAK_FUNC(sub_82FB7688) {
	__imp__sub_82FB7688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB76E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r30,-32252
	r30.s64 = -2113667072;
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
	// beq 0x82fb77bc
	if (cr0.eq) goto loc_82FB77BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb77bc
	if (cr6.eq) goto loc_82FB77BC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// ble cr6,0x82fb77b4
	if (!cr6.gt) goto loc_82FB77B4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26584);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r11,28,4,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r6,r10,28,4,29
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb7798
	if (cr6.gt) goto loc_82FB7798;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FB7798:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb77b4
	if (!cr0.eq) goto loc_82FB77B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb77b4
	if (cr6.eq) goto loc_82FB77B4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB77B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb7688
	sub_82FB7688(ctx, base);
loc_82FB77BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fb7934
	if (!cr6.gt) goto loc_82FB7934;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26584);
	f0.f64 = double(temp.f32);
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f11.f64);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb7824
	if (cr6.gt) goto loc_82FB7824;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FB7824:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// ble cr6,0x82fb7938
	if (!cr6.gt) goto loc_82FB7938;
	// b 0x82fb7848
	goto loc_82FB7848;
loc_82FB7844:
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26584);
	f0.f64 = double(temp.f32);
loc_82FB7848:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r8,r10,28,4,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r6,r11,26
	ctx.r6.u64 = r11.u32 & 0x3F;
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mulli r9,r6,12
	ctx.r9.s64 = ctx.r6.s64 * 12;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb78bc
	if (cr6.gt) goto loc_82FB78BC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FB78BC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb7938
	if (!cr0.eq) goto loc_82FB7938;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r8,r11,28,4,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82fb791c
	if (cr6.eq) goto loc_82FB791C;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82fb791c
	if (cr0.eq) goto loc_82FB791C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB791C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb7688
	sub_82FB7688(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82fb7844
	if (cr6.gt) goto loc_82FB7844;
loc_82FB7934:
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26584);
	f0.f64 = double(temp.f32);
loc_82FB7938:
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fb79dc
	if (cr0.eq) goto loc_82FB79DC;
	// b 0x82fb79c0
	goto loc_82FB79C0;
loc_82FB7948:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f11.f64);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb79a4
	if (cr6.gt) goto loc_82FB79A4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FB79A4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb79cc
	if (!cr0.eq) goto loc_82FB79CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb79c0
	if (cr6.eq) goto loc_82FB79C0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB79C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x82fb7948
	if (cr6.gt) goto loc_82FB7948;
loc_82FB79CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82fb79dc
	if (!cr6.lt) goto loc_82FB79DC;
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
loc_82FB79DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB76E8) {
	__imp__sub_82FB76E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB79E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca74f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f27,f3
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f3.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f24,f4
	f24.f64 = ctx.f4.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// fmr f26,f5
	f26.f64 = ctx.f5.f64;
	// fmr f25,f6
	f25.f64 = ctx.f6.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x8219ec50
	sub_8219EC50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x8219ec50
	sub_8219EC50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2680);
	f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / f0.f64));
	// bl 0x82260900
	sub_82260900(ctx, base);
	// fadds f0,f29,f27
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 + f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f28,f24
	f0.f64 = double(float(f28.f64 + f24.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// ble cr6,0x82fb7aac
	if (!cr6.gt) goto loc_82FB7AAC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,26868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26868);
	f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + f0.f64));
loc_82FB7AAC:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f31.f64 - f30.f64);
	// fdivs f13,f0,f27
	ctx.f13.f64 = double(float(f0.f64 / f27.f64));
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f0,f13
	f27.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fadds f31,f27,f30
	f31.f64 = double(float(f27.f64 + f30.f64));
	// ble cr6,0x82fb7b40
	if (!cr6.gt) goto loc_82FB7B40;
loc_82FB7AE8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f24,f28
	ctx.f12.f64 = double(std::fma(float(ctx.f13.f64), float(f24.f64), float(f28.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f0,f13,f0,f29
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(f29.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// fadds f31,f27,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f27.f64 + f31.f64));
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne 0x82fb7ae8
	if (!cr0.eq) goto loc_82FB7AE8;
loc_82FB7B40:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 + f26.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f28,f25
	f0.f64 = double(float(f28.f64 + f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7544
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB79E8) {
	__imp__sub_82FB79E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca74dc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f2.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// lfs f24,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f24.f64 = double(temp.f32);
	// lfs f26,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f26.f64 = double(temp.f32);
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// fmr f20,f5
	f20.f64 = ctx.f5.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f17,f7
	f17.f64 = ctx.f7.f64;
	// lfs f23,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f23.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f25,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f25.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,1
	r29.s64 = 1;
	// fadds f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f12,f29,f28
	ctx.f12.f64 = double(float(f29.f64 + f28.f64));
	// lfs f19,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f19.f64 = double(temp.f32);
	// fadds f9,f24,f28
	ctx.f9.f64 = double(float(f24.f64 + f28.f64));
	// fadds f0,f26,f31
	f0.f64 = double(float(f26.f64 + f31.f64));
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fmuls f18,f5,f20
	f18.f64 = double(float(ctx.f5.f64 * f20.f64));
	// fadds f10,f29,f30
	ctx.f10.f64 = double(float(f29.f64 + f30.f64));
	// fadds f8,f23,f27
	ctx.f8.f64 = double(float(f23.f64 + f27.f64));
	// fadds f13,f25,f30
	ctx.f13.f64 = double(float(f25.f64 + f30.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = static_cast<float>(ctx.f9.f64 - ctx.f12.f64);
	// fsubs f4,f7,f0
	ctx.f4.f64 = static_cast<float>(ctx.f7.f64 - f0.f64);
	// fsubs f3,f8,f11
	ctx.f3.f64 = static_cast<float>(ctx.f8.f64 - ctx.f11.f64);
	// fsubs f2,f10,f13
	ctx.f2.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f1,f3,f2,f1
	ctx.f1.f64 = double(std::fma(float(ctx.f3.f64), float(ctx.f2.f64), -float(ctx.f1.f64)));
	// fabs f22,f1
	f22.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f22,f6
	cr6.compare(f22.f64, ctx.f6.f64);
	// bge cr6,0x82fb7c5c
	if (!cr6.lt) goto loc_82FB7C5C;
	// fadds f7,f0,f7
	ctx.f7.f64 = double(float(f0.f64 + ctx.f7.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	f0.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmuls f21,f12,f0
	f21.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f22,f13,f0
	f22.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82fb7c7c
	goto loc_82FB7C7C;
loc_82FB7C5C:
	// fsubs f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// fsubs f11,f0,f11
	ctx.f11.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f12,f11,f5,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f5.f64), -float(ctx.f12.f64)));
	// fdivs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmadds f22,f2,f12,f13
	f22.f64 = double(std::fma(float(ctx.f2.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fmadds f21,f4,f12,f0
	f21.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f12.f64), float(f0.f64)));
loc_82FB7C7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb7cd4
	if (cr0.eq) goto loc_82FB7CD4;
	// fsubs f0,f22,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f22.f64 - f29.f64);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f21,f13
	ctx.f13.f64 = static_cast<float>(f21.f64 - ctx.f13.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fsqrts f19,f0
	f19.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f19,f18
	cr6.compare(f19.f64, f18.f64);
	// bgt cr6,0x82fb7ccc
	if (cr6.gt) goto loc_82FB7CCC;
	// stfs f22,80(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f21,84(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_82FB7CCC:
	// li r29,0
	r29.s64 = 0;
	// b 0x82fb7d54
	goto loc_82FB7D54;
loc_82FB7CD4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f12,f25,f10
	ctx.f12.f64 = static_cast<float>(f25.f64 - ctx.f10.f64);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f26,f0
	ctx.f11.f64 = static_cast<float>(f26.f64 - f0.f64);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmsubs f12,f12,f31,f11
	ctx.f12.f64 = double(std::fma(float(ctx.f12.f64), float(f31.f64), -float(ctx.f11.f64)));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fb7d04
	if (cr6.lt) goto loc_82FB7D04;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB7D04:
	// fsubs f12,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = static_cast<float>(f23.f64 - f0.f64);
	// li r11,1
	r11.s64 = 1;
	// fsubs f11,f24,f10
	ctx.f11.f64 = static_cast<float>(f24.f64 - ctx.f10.f64);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmsubs f12,f11,f31,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f11.f64), float(f31.f64), -float(ctx.f12.f64)));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fb7d24
	if (cr6.lt) goto loc_82FB7D24;
	// li r11,0
	r11.s64 = 0;
loc_82FB7D24:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82fb7d54
	if (cr6.eq) goto loc_82FB7D54;
	// stfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_82FB7D54:
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb7ed4
	if (cr0.eq) goto loc_82FB7ED4;
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(348) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82fb7e68
	if (cr6.eq) goto loc_82FB7E68;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82fb7e40
	if (cr6.eq) goto loc_82FB7E40;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq 0x82fb7dd0
	if (cr0.eq) goto loc_82FB7DD0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmadds f13,f30,f20,f13
	ctx.f13.f64 = double(std::fma(float(f30.f64), float(f20.f64), float(ctx.f13.f64)));
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fnmsubs f0,f31,f20,f0
	f0.f64 = -double(std::fma(float(f31.f64), float(f20.f64), -float(f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f31
	f0.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f27
	f0.f64 = double(float(f0.f64 + f27.f64));
	// fmadds f13,f27,f20,f13
	ctx.f13.f64 = double(std::fma(float(f27.f64), float(f20.f64), float(ctx.f13.f64)));
	// fnmsubs f0,f28,f20,f0
	f0.f64 = -double(std::fma(float(f28.f64), float(f20.f64), -float(f0.f64)));
	// b 0x82fb7eac
	goto loc_82FB7EAC;
loc_82FB7DD0:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(f0.f64 + f30.f64));
	// fsubs f13,f18,f17
	ctx.f13.f64 = static_cast<float>(f18.f64 - f17.f64);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// fsubs f9,f19,f17
	ctx.f9.f64 = static_cast<float>(f19.f64 - f17.f64);
	// fadds f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 + f31.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f31,f0,f28
	f31.f64 = double(float(f0.f64 + f28.f64));
	// fadds f30,f12,f27
	f30.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fsubs f0,f22,f11
	f0.f64 = static_cast<float>(f22.f64 - ctx.f11.f64);
	// fdivs f29,f13,f9
	f29.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fsubs f12,f21,f10
	ctx.f12.f64 = static_cast<float>(f21.f64 - ctx.f10.f64);
	// fmadds f0,f0,f29,f11
	f0.f64 = double(std::fma(float(f0.f64), float(f29.f64), float(ctx.f11.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f12,f29,f10
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f29.f64), float(ctx.f10.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// fsubs f0,f22,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f22.f64 - f31.f64);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// fsubs f13,f21,f30
	ctx.f13.f64 = static_cast<float>(f21.f64 - f30.f64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fmadds f0,f0,f29,f31
	f0.f64 = double(std::fma(float(f0.f64), float(f29.f64), float(f31.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f13,f29,f30
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f29.f64), float(f30.f64)));
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82fb7eb8
	goto loc_82FB7EB8;
loc_82FB7E40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f27
	ctx.f6.f64 = f27.f64;
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x82fb79e8
	sub_82FB79E8(ctx, base);
	// b 0x82fb7ed4
	goto loc_82FB7ED4;
loc_82FB7E68:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f27
	f0.f64 = double(float(f0.f64 + f27.f64));
loc_82FB7EAC:
	// fadds f13,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FB7EB8:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_82FB7ED4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7528
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB7B80) {
	__imp__sub_82FB7B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB7EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2be4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// fsubs f10,f12,f13
	ctx.f10.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
	// fdivs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f29,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f29.f64 = double(temp.f32);
	// fmr f28,f29
	f28.f64 = f29.f64;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f31,f11,f9
	f31.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f30,f12,f9
	f30.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// beq cr6,0x82fb7fc4
	if (cr6.eq) goto loc_82FB7FC4;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82fb7f64
	if (!cr6.eq) goto loc_82FB7F64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f30
	f28.f64 = f30.f64;
loc_82FB7F64:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f0.f64 - f30.f64);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// fsubs f13,f13,f31
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f31.f64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f13,f28
	f0.f64 = static_cast<float>(ctx.f13.f64 - f28.f64);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fsubs f0,f0,f28
	f0.f64 = static_cast<float>(f0.f64 - f28.f64);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82fb80fc
	goto loc_82FB80FC;
loc_82FB7FC4:
	// fneg f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = f30.u64 ^ 0x8000000000000000;
	// fneg f1,f31
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// bl 0x8219ec50
	sub_8219EC50(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2680);
	f0.f64 = double(temp.f32);
	// lfs f13,26580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26580);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	f0.f64 = double(std::fma(float(ctx.f11.f64), float(f0.f64), float(ctx.f12.f64)));
	// fadds f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 + ctx.f13.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fsubs f29,f13,f28
	f29.f64 = static_cast<float>(ctx.f13.f64 - f28.f64);
	// bl 0x82260900
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// fsubs f0,f0,f30
	f0.f64 = static_cast<float>(f0.f64 - f30.f64);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f12,f12,f31
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f31.f64);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fdivs f0,f29,f0
	f0.f64 = double(float(f29.f64 / f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f29,f29,f0
	f29.f64 = double(float(f29.f64 / f0.f64));
	// fadds f28,f29,f28
	f28.f64 = double(float(f29.f64 + f28.f64));
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// ble cr6,0x82fb80e0
	if (!cr6.gt) goto loc_82FB80E0;
loc_82FB8080:
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmadds f11,f13,f26,f11
	ctx.f11.f64 = double(std::fma(float(ctx.f13.f64), float(f26.f64), float(ctx.f11.f64)));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(ctx.f12.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// fadds f28,f29,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f29.f64 + f28.f64));
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne 0x82fb8080
	if (!cr0.eq) goto loc_82FB8080;
loc_82FB80E0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82FB80FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FB7EE8) {
	__imp__sub_82FB7EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8128) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfs f5,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f5
	ctx.f8.f64 = static_cast<float>(f0.f64 - ctx.f5.f64);
	// fsubs f3,f13,f9
	ctx.f3.f64 = static_cast<float>(ctx.f13.f64 - ctx.f9.f64);
	// lfs f11,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = static_cast<float>(ctx.f5.f64 - f0.f64);
	// fdivs f30,f11,f2
	f30.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fsubs f9,f9,f7
	ctx.f9.f64 = static_cast<float>(ctx.f9.f64 - ctx.f7.f64);
	// lfs f7,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fdivs f31,f11,f12
	f31.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsubs f28,f13,f0
	f28.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// lfs f11,26592(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26592);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f3,f30,f3
	ctx.f3.f64 = double(float(f30.f64 * ctx.f3.f64));
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f4,f31
	ctx.f10.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f4,f1,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f11,f31,f29
	ctx.f11.f64 = double(float(f31.f64 * f29.f64));
	// fmsubs f8,f28,f9,f8
	ctx.f8.f64 = double(std::fma(float(f28.f64), float(ctx.f9.f64), -float(ctx.f8.f64)));
	// fmuls f30,f3,f29
	f30.f64 = double(float(ctx.f3.f64 * f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmuls f31,f4,f29
	f31.f64 = double(float(ctx.f4.f64 * f29.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x82fb820c
	if (!cr6.gt) goto loc_82FB820C;
	// fcmpu cr6,f12,f2
	cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// blt cr6,0x82fb81e0
	if (cr6.lt) goto loc_82FB81E0;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_82FB81E0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fdivs f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 / f0.f64));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// bl 0x82fb7b80
	sub_82FB7B80(ctx, base);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB820C:
	// fadds f11,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 + ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 + ctx.f10.f64));
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lfs f12,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f12,f12,f12,f11
	ctx.f12.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f11.f64)));
	// fsqrts f7,f12
	ctx.f7.f64 = double(simd::sqrt_f32(float(ctx.f12.f64)));
	// beq cr6,0x82fb8244
	if (cr6.eq) goto loc_82FB8244;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82fb832c
	if (!cr6.eq) goto loc_82FB832C;
loc_82FB8244:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f7
	ctx.f9.f64 = static_cast<float>(ctx.f12.f64 - ctx.f7.f64);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f12
	cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x82fb832c
	if (!cr6.lt) goto loc_82FB832C;
	// fadds f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 + f30.f64));
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f30,f0,f1
	f30.f64 = double(float(f0.f64 + ctx.f1.f64));
	// fadds f0,f5,f1
	f0.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + f31.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = static_cast<float>(ctx.f9.f64 - ctx.f12.f64);
	// fsubs f4,f8,f13
	ctx.f4.f64 = static_cast<float>(ctx.f8.f64 - ctx.f13.f64);
	// fsubs f2,f30,f0
	ctx.f2.f64 = static_cast<float>(f30.f64 - f0.f64);
	// fsubs f3,f7,f11
	ctx.f3.f64 = static_cast<float>(ctx.f7.f64 - ctx.f11.f64);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f1,f3,f2,f1
	ctx.f1.f64 = double(std::fma(float(ctx.f3.f64), float(ctx.f2.f64), -float(ctx.f1.f64)));
	// fabs f31,f1
	f31.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f31,f6
	cr6.compare(f31.f64, ctx.f6.f64);
	// bge cr6,0x82fb82e4
	if (!cr6.lt) goto loc_82FB82E4;
	// fadds f6,f0,f30
	ctx.f6.f64 = double(float(f0.f64 + f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	f0.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82fb8304
	goto loc_82FB8304;
loc_82FB82E4:
	// fsubs f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// fsubs f11,f13,f11
	ctx.f11.f64 = static_cast<float>(ctx.f13.f64 - ctx.f11.f64);
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f12,f11,f5,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f5.f64), -float(ctx.f12.f64)));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmadds f12,f2,f11,f0
	ctx.f12.f64 = double(std::fma(float(ctx.f2.f64), float(ctx.f11.f64), float(f0.f64)));
	// fmadds f0,f4,f11,f13
	f0.f64 = double(std::fma(float(ctx.f4.f64), float(ctx.f11.f64), float(ctx.f13.f64)));
loc_82FB8304:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// beq 0x82fb831c
	if (cr0.eq) goto loc_82FB831C;
	// stfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x82fb8388
	goto loc_82FB8388;
loc_82FB831C:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// b 0x82fb8388
	goto loc_82FB8388;
loc_82FB832C:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82fb83c8
	if (cr6.lt) goto loc_82FB83C8;
	// beq cr6,0x82fb83a4
	if (cr6.eq) goto loc_82FB83A4;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
loc_82FB8388:
	// stfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB83A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x82fb79e8
	sub_82FB79E8(ctx, base);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB83C8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lfs f5,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// bl 0x82fb7b80
	sub_82FB7B80(ctx, base);
loc_82FB83E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB8128) {
	__imp__sub_82FB8128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB83F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82fb8864
	if (cr6.lt) goto loc_82FB8864;
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fb8624
	if (cr0.eq) goto loc_82FB8624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r28,r5,24
	r28.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// bne 0x82fb8444
	if (!cr0.eq) goto loc_82FB8444;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82fb8534
	if (!cr6.gt) goto loc_82FB8534;
loc_82FB8444:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbfeb0
	sub_82FBFEB0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82fb852c
	if (!cr6.gt) goto loc_82FB852C;
loc_82FB8468:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb8478
	if (!cr6.eq) goto loc_82FB8478;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB8478:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82fb8494
	if (cr6.lt) goto loc_82FB8494;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82FB8494:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb84a4
	if (!cr6.eq) goto loc_82FB84A4;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB84A4:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// rlwinm r3,r9,28,4,29
	ctx.r3.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFC;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// lwzx r5,r3,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 * 12;
	// lfs f2,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r11,28,4,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// lwzx r8,r4,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r9,r3,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + r26.u32);
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8128
	sub_82FB8128(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fb8468
	if (cr6.lt) goto loc_82FB8468;
loc_82FB852C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbffd8
	sub_82FBFFD8(ctx, base);
loc_82FB8534:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82fb8548
	if (!cr6.eq) goto loc_82FB8548;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82fb8864
	if (!cr6.lt) goto loc_82FB8864;
loc_82FB8548:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbfeb0
	sub_82FBFEB0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82fb885c
	if (cr0.lt) goto loc_82FB885C;
loc_82FB8568:
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fb8578
	if (!cr6.eq) goto loc_82FB8578;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB8578:
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fb858c
	if (!cr6.eq) goto loc_82FB858C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB858C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fb85a4
	if (cr6.lt) goto loc_82FB85A4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
loc_82FB85A4:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r7,r30,28,4,29
	ctx.r7.u64 = rotl64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r4,r6,28,4,29
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// clrlwi r28,r6,26
	r28.u64 = ctx.r6.u32 & 0x3F;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// clrlwi r8,r30,26
	ctx.r8.u64 = r30.u32 & 0x3F;
	// lwzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r5,r28,12
	ctx.r5.s64 = r28.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r26,r11,28,4,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfs f2,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8128
	sub_82FB8128(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82fb8568
	if (!cr0.lt) goto loc_82FB8568;
	// b 0x82fb885c
	goto loc_82FB885C;
loc_82FB8624:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbfeb0
	sub_82FBFEB0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// lfs f1,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fb7ee8
	sub_82FB7EE8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82fb8738
	if (!cr6.gt) goto loc_82FB8738;
loc_82FB8670:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb8680
	if (!cr6.eq) goto loc_82FB8680;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB8680:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82fb869c
	if (cr6.lt) goto loc_82FB869C;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82FB869C:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb86ac
	if (!cr6.eq) goto loc_82FB86AC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB86AC:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r9,28,4,29
	ctx.r3.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r8,r6,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwzx r7,r3,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// mulli r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 * 12;
	// mulli r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r11,28,4,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r8,r4,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + r28.u32);
	// lwzx r9,r3,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8128
	sub_82FB8128(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fb8670
	if (cr6.lt) goto loc_82FB8670;
loc_82FB8738:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r10,-2
	r11.s64 = ctx.r10.s64 + -2;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r6,r11,26
	ctx.r6.u64 = r11.u32 & 0x3F;
	// rlwinm r30,r11,28,4,29
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// mulli r5,r6,12
	ctx.r5.s64 = ctx.r6.s64 * 12;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// rlwinm r28,r10,28,4,29
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// clrlwi r30,r10,26
	r30.u64 = ctx.r10.u32 & 0x3F;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// lwzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + ctx.r9.u32);
	// lfs f1,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// bl 0x82fb7ee8
	sub_82FB7EE8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addic. r30,r11,-2
	xer.ca = r11.u32 > 1;
	r30.s64 = r11.s64 + -2;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82fb885c
	if (cr0.eq) goto loc_82FB885C;
loc_82FB87A4:
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fb87b4
	if (!cr6.eq) goto loc_82FB87B4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB87B4:
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fb87c8
	if (!cr6.eq) goto loc_82FB87C8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
loc_82FB87C8:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fb87e0
	if (cr6.lt) goto loc_82FB87E0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
loc_82FB87E0:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r7,r30,28,4,29
	ctx.r7.u64 = rotl64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r4,r6,28,4,29
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// clrlwi r28,r6,26
	r28.u64 = ctx.r6.u32 & 0x3F;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// clrlwi r8,r30,26
	ctx.r8.u64 = r30.u32 & 0x3F;
	// lwzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r5,r28,12
	ctx.r5.s64 = r28.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r26,r11,28,4,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfs f2,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8128
	sub_82FB8128(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82fb87a4
	if (!cr0.eq) goto loc_82FB87A4;
loc_82FB885C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbffd8
	sub_82FBFFD8(ctx, base);
loc_82FB8864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FB83F8) {
	__imp__sub_82FB83F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8870) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// stw r26,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r26.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stb r26,44(r27)
	PPC_STORE_U8(r27.u32 + 44, r26.u8);
	// addi r31,r27,24
	r31.s64 = r27.s64 + 24;
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb8bb4
	if (!cr6.gt) goto loc_82FB8BB4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r28,-32252
	r28.s64 = -2113667072;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
loc_82FB88C0:
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// rlwinm r9,r25,28,4,29
	ctx.r9.u64 = rotl64(r25.u32 | (r25.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r25,26
	r11.u64 = r25.u32 & 0x3F;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// blt cr6,0x82fb88ec
	if (cr6.lt) goto loc_82FB88EC;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// bne cr6,0x82fb8ba4
	if (!cr6.eq) goto loc_82FB8BA4;
loc_82FB88EC:
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82fb8ba4
	if (cr6.eq) goto loc_82FB8BA4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fb8978
	if (cr6.eq) goto loc_82FB8978;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lfs f0,26584(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 26584);
	f0.f64 = double(temp.f32);
	// lwz r5,36(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(36) );
	// rlwinm r4,r11,28,4,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r6,26,6,29
	ctx.r3.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r6,r6,3,21,28
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// lwz r29,20(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// lwzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r5,r3,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + r29.u32);
	// ldx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f11.f64);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb8978
	if (cr6.gt) goto loc_82FB8978;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FB8978:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb8a78
	if (cr0.eq) goto loc_82FB8A78;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// ble cr6,0x82fb8ba4
	if (!cr6.gt) goto loc_82FB8BA4;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82FB8990:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ble cr6,0x82fb8a58
	if (!cr6.gt) goto loc_82FB8A58;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lfs f0,26584(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 26584);
	f0.f64 = double(temp.f32);
	// rlwinm r8,r10,28,4,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mulli r9,r6,12
	ctx.r9.s64 = ctx.r6.s64 * 12;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb8a3c
	if (cr6.gt) goto loc_82FB8A3C;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FB8A3C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb8a58
	if (!cr0.eq) goto loc_82FB8A58;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb8a58
	if (cr6.eq) goto loc_82FB8A58;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB8A58:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb7688
	sub_82FB7688(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb8990
	if (cr6.lt) goto loc_82FB8990;
	// b 0x82fb8ba4
	goto loc_82FB8BA4;
loc_82FB8A78:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fb8aac
	if (cr6.eq) goto loc_82FB8AAC;
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82fb76e8
	sub_82FB76E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb83f8
	sub_82FB83F8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r26,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r26.u8);
loc_82FB8AAC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fb8ba4
	if (!cr6.gt) goto loc_82FB8BA4;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82FB8AC0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r7,r10,26,6,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r10,3,21,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ble cr6,0x82fb8b88
	if (!cr6.gt) goto loc_82FB8B88;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lfs f0,26584(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 26584);
	f0.f64 = double(temp.f32);
	// rlwinm r7,r10,28,4,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fb8b6c
	if (cr6.gt) goto loc_82FB8B6C;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FB8B6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb8b88
	if (!cr0.eq) goto loc_82FB8B88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb8b88
	if (cr6.eq) goto loc_82FB8B88;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FB8B88:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb7688
	sub_82FB7688(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fb8ac0
	if (cr6.lt) goto loc_82FB8AC0;
loc_82FB8BA4:
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82fb88c0
	if (cr6.lt) goto loc_82FB88C0;
loc_82FB8BB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fb8be4
	if (!cr6.gt) goto loc_82FB8BE4;
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82fb76e8
	sub_82FB76E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fb83f8
	sub_82FB83F8(ctx, base);
loc_82FB8BE4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82FB8870) {
	__imp__sub_82FB8870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8BF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82ef8e38
	sub_82EF8E38(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB8BF0) {
	__imp__sub_82FB8BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8C30) {
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
	// addi r11,r11,26672
	r11.s64 = r11.s64 + 26672;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb8c60
	if (cr6.eq) goto loc_82FB8C60;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB8C60:
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

PPC_WEAK_FUNC(sub_82FB8C30) {
	__imp__sub_82FB8C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8C80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f10,f9,f9
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f11.f64)));
	// fsubs f11,f10,f11
	ctx.f11.f64 = static_cast<float>(ctx.f10.f64 - ctx.f11.f64);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82fb8d0c
	if (!cr6.eq) goto loc_82FB8D0C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// lfs f11,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82fb8cd8
	if (cr6.eq) goto loc_82FB8CD8;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82fb8cd0
	if (!cr6.lt) goto loc_82FB8CD0;
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// b 0x82fb8cd4
	goto loc_82FB8CD4;
loc_82FB8CD0:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
loc_82FB8CD4:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FB8CD8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82fb8cf8
	if (cr6.eq) goto loc_82FB8CF8;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82fb8cf0
	if (!cr6.lt) goto loc_82FB8CF0;
	// fadds f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82fb8cf4
	goto loc_82FB8CF4;
loc_82FB8CF0:
	// fsubs f0,f13,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(ctx.f13.f64 - ctx.f11.f64);
loc_82FB8CF4:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82FB8CF8:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fsubs f11,f10,f0
	ctx.f11.f64 = static_cast<float>(ctx.f10.f64 - f0.f64);
loc_82FB8D0C:
	// fdivs f0,f9,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB8C80) {
	__imp__sub_82FB8C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8D18) {
	PPC_FUNC_PROLOGUE();
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
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-12900(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12900);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x821fe378
	sub_821FE378(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2784(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2784);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB8D18) {
	__imp__sub_82FB8D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fb8db4
	if (cr6.eq) goto loc_82FB8DB4;
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fb8db4
	if (!cr0.eq) goto loc_82FB8DB4;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb8dac
	if (!cr6.eq) goto loc_82FB8DAC;
	// li r11,64
	r11.s64 = 64;
loc_82FB8DAC:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fb8fcc
	if (!cr0.eq) goto loc_82FB8FCC;
loc_82FB8DB4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lfs f10,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// ble cr6,0x82fb8f24
	if (!cr6.gt) goto loc_82FB8F24;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// lfs f11,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
loc_82FB8DE4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -6);
	// std r7,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r7.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82fb8f0c
	if (!cr6.gt) goto loc_82FB8F0C;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fb8e58
	if (!cr6.gt) goto loc_82FB8E58;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82FB8E58:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r8.u64);
	// lfd f12,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fb8e94
	if (!cr6.gt) goto loc_82FB8E94;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82FB8E94:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fb8ed0
	if (!cr6.gt) goto loc_82FB8ED0;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82FB8ED0:
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82fb8f0c
	if (!cr6.gt) goto loc_82FB8F0C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82FB8F0C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82fb8de4
	if (!cr0.eq) goto loc_82FB8DE4;
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// bne cr6,0x82fb8f2c
	if (!cr6.eq) goto loc_82FB8F2C;
loc_82FB8F24:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_82FB8F2C:
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fb8f44
	if (cr0.eq) goto loc_82FB8F44;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2708);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82FB8F44:
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bne cr6,0x82fb8f78
	if (!cr6.eq) goto loc_82FB8F78;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82fb8f78
	if (!cr6.gt) goto loc_82FB8F78;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,2856(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2856);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82FB8F78:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x82fb8f84
	if (!cr6.lt) goto loc_82FB8F84;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
loc_82FB8F84:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,26676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26676);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f0,-16940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16940);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r11,-4(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// blt cr6,0x82fb8fb8
	if (cr6.lt) goto loc_82FB8FB8;
	// li r11,17
	r11.s64 = 17;
loc_82FB8FB8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26600
	ctx.r10.s64 = ctx.r10.s64 + 26600;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82FB8FCC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB8D88) {
	__imp__sub_82FB8D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB8FD8) {
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
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb9018
	if (cr0.eq) goto loc_82FB9018;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb9018
	if (cr6.eq) goto loc_82FB9018;
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
loc_82FB9018:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fb9034
	if (!cr6.eq) goto loc_82FB9034;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb9034
	if (cr6.eq) goto loc_82FB9034;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FB9034:
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

PPC_WEAK_FUNC(sub_82FB8FD8) {
	__imp__sub_82FB8FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9048) {
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
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb9090
	if (cr0.eq) goto loc_82FB9090;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb9090
	if (cr6.eq) goto loc_82FB9090;
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
loc_82FB9090:
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
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

PPC_WEAK_FUNC(sub_82FB9048) {
	__imp__sub_82FB9048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB90B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r9,26680
	ctx.r9.s64 = ctx.r9.s64 + 26680;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB90B0) {
	__imp__sub_82FB90B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB90E0) {
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
	// bl 0x82fb8c30
	sub_82FB8C30(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb9110
	if (cr0.eq) goto loc_82FB9110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB9110:
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

PPC_WEAK_FUNC(sub_82FB90E0) {
	__imp__sub_82FB90E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9130) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// clrlwi r31,r28,16
	r31.u64 = r28.u32 & 0xFFFF;
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82fb91e0
	if (cr6.eq) goto loc_82FB91E0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fb9178
	if (cr6.eq) goto loc_82FB9178;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82fb9178
	if (!cr0.eq) goto loc_82FB9178;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fb91e4
	goto loc_82FB91E4;
loc_82FB9178:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb91d8
	if (cr6.eq) goto loc_82FB91D8;
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82fb9198
	if (!cr6.lt) goto loc_82FB9198;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82FB9198:
	// clrlwi. r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fb91d0
	if (cr0.eq) goto loc_82FB91D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FB91A8:
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82fb91a8
	if (!cr0.eq) goto loc_82FB91A8;
loc_82FB91D0:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB91D8:
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// sth r28,18(r30)
	PPC_STORE_U16(r30.u32 + 18, r28.u16);
loc_82FB91E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FB91E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB9130) {
	__imp__sub_82FB9130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB91F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r6,18(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r11,18(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x82fb9298
	if (!cr6.eq) goto loc_82FB9298;
	// lbz r11,17(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82fb9298
	if (!cr6.eq) goto loc_82FB9298;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82fb9298
	if (!cr6.eq) goto loc_82FB9298;
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82fb9298
	if (!cr6.eq) goto loc_82FB9298;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82fb9290
	if (cr6.eq) goto loc_82FB9290;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
loc_82FB924C:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82fb9270
	if (!cr6.eq) goto loc_82FB9270;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82fb9274
	if (cr6.eq) goto loc_82FB9274;
loc_82FB9270:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB9274:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fb9298
	if (cr0.eq) goto loc_82FB9298;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x82fb924c
	if (cr6.lt) goto loc_82FB924C;
loc_82FB9290:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FB9298:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB91F0) {
	__imp__sub_82FB91F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB92A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lhz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// lbz r3,17(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
loc_82FB92B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x82fb92b4
	if (!cr0.eq) goto loc_82FB92B4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FB92A0) {
	__imp__sub_82FB92A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB92E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82fb92f4
	if (cr6.eq) goto loc_82FB92F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FB92F4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// b 0x82fb91f0
	sub_82FB91F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FB92E0) {
	__imp__sub_82FB92E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9300) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

PPC_WEAK_FUNC(sub_82FB9300) {
	__imp__sub_82FB9300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9358) {
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
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb939c
	if (cr0.eq) goto loc_82FB939C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb939c
	if (cr6.eq) goto loc_82FB939C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FB939C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb93c8
	if (cr0.eq) goto loc_82FB93C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb93c8
	if (cr6.eq) goto loc_82FB93C8;
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
loc_82FB93C8:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
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

PPC_WEAK_FUNC(sub_82FB9358) {
	__imp__sub_82FB9358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9418) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82fb9048
	sub_82FB9048(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB9418) {
	__imp__sub_82FB9418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9478) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb94a8
	if (cr0.eq) goto loc_82FB94A8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82fb94d0
	if (cr6.eq) goto loc_82FB94D0;
loc_82FB94A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb9048
	sub_82FB9048(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fb94d0
	if (cr6.eq) goto loc_82FB94D0;
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
loc_82FB94D0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB9478) {
	__imp__sub_82FB9478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9508) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addi r11,r11,26680
	r11.s64 = r11.s64 + 26680;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq cr6,0x82fb9540
	if (cr6.eq) goto loc_82FB9540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FB9540:
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

PPC_WEAK_FUNC(sub_82FB9508) {
	__imp__sub_82FB9508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9558) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fb9598
	if (!cr6.eq) goto loc_82FB9598;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb9590
	if (cr0.eq) goto loc_82FB9590;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// b 0x82fb9594
	goto loc_82FB9594;
loc_82FB9590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB9594:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82FB9598:
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

PPC_WEAK_FUNC(sub_82FB9558) {
	__imp__sub_82FB9558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB95B0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(72) );
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

PPC_WEAK_FUNC(sub_82FB95B0) {
	__imp__sub_82FB95B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB95F0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,26672
	r11.s64 = r11.s64 + 26672;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef70f0
	sub_82EF70F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r11.u16);
	// bl 0x82fb9130
	sub_82FB9130(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r28,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FB95F0) {
	__imp__sub_82FB95F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9660) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27424
	r31.s64 = r11.s64 + -27424;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,-27420(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-27420) );
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fb96ac
	if (!cr0.eq) goto loc_82FB96AC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,26688
	ctx.r9.s64 = ctx.r9.s64 + 26688;
	// stw r11,-27420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27420, r11.u32);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7088
	ctx.r3.s64 = r11.s64 + 7088;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82FB96AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB9660) {
	__imp__sub_82FB9660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB96D8) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27416
	r31.s64 = r11.s64 + -27416;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,-27412(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-27412) );
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fb9724
	if (!cr0.eq) goto loc_82FB9724;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,26704
	ctx.r9.s64 = ctx.r9.s64 + 26704;
	// stw r11,-27412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27412, r11.u32);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7112
	ctx.r3.s64 = r11.s64 + 7112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82FB9724:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FB96D8) {
	__imp__sub_82FB96D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// or r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 | r27.u64;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// twllei r27,0
	// lhz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// twllei r5,0
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - r11.s64;
	// mullw r7,r10,r28
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = rotl32(ctx.r8.u32, 1);
	// rotlwi r10,r7,1
	ctx.r10.u64 = rotl32(ctx.r7.u32, 1);
	// divw r8,r8,r27
	ctx.r8.s32 = ctx.r8.s32 / r27.s32;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// divw r7,r7,r5
	ctx.r7.s32 = ctx.r7.s32 / ctx.r5.s32;
	// andc r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// andc r9,r27,r9
	ctx.r9.u64 = r27.u64 & ~ctx.r9.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// add r26,r7,r6
	r26.u64 = ctx.r7.u64 + ctx.r6.u64;
	// twlgei r8,-1
	// twlgei r9,-1
	// bl 0x82fb8d18
	sub_82FB8D18(ctx, base);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// twllei r27,0
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = rotl32(ctx.r9.u32, 1);
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / r27.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// andc r10,r27,r10
	ctx.r10.u64 = r27.u64 & ~ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// twlgei r10,-1
	// bl 0x82fb8d18
	sub_82FB8D18(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// twllei r27,0
	// mullw r9,r11,r28
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// rotlwi r11,r9,1
	r11.u64 = rotl32(ctx.r9.u32, 1);
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / r27.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r11,r27,r11
	r11.u64 = r27.u64 & ~r11.u64;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// twlgei r11,-1
	// bl 0x82fb8d18
	sub_82FB8D18(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r3.u8);
	// stb r30,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r25,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r25.u8);
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FB9750) {
	__imp__sub_82FB9750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bdc
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r27,2(r5)
	r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r25,4(r5)
	r25.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - r11.s64;
	// lhz r30,4(r4)
	r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r31,2(r4)
	r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// subf r3,r30,r25
	ctx.r3.s64 = r25.s64 - r30.s64;
	// lhz r5,6(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// subf r4,r31,r27
	ctx.r4.s64 = r27.s64 - r31.s64;
	// or r27,r10,r7
	r27.u64 = ctx.r10.u64 | ctx.r7.u64;
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mullw r26,r3,r6
	r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r29,r4,r6
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mullw r25,r5,r6
	r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// divw r8,r10,r27
	ctx.r8.s32 = ctx.r10.s32 / r27.s32;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// divw r6,r29,r27
	ctx.r6.s32 = r29.s32 / r27.s32;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rotlwi r30,r10,1
	r30.u64 = rotl32(ctx.r10.u32, 1);
	// divw r4,r26,r27
	ctx.r4.s32 = r26.s32 / r27.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r29,r29,1
	r29.u64 = rotl32(r29.u32, 1);
	// rotlwi r10,r26,1
	ctx.r10.u64 = rotl32(r26.u32, 1);
	// stb r9,1(r28)
	PPC_STORE_U8(r28.u32 + 1, ctx.r9.u8);
	// rotlwi r11,r25,1
	r11.u64 = rotl32(r25.u32, 1);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// divw r31,r25,r27
	r31.s32 = r25.s32 / r27.s32;
	// stb r8,2(r28)
	PPC_STORE_U8(r28.u32 + 2, ctx.r8.u8);
	// addi r6,r30,-1
	ctx.r6.s64 = r30.s64 + -1;
	// stb r7,3(r28)
	PPC_STORE_U8(r28.u32 + 3, ctx.r7.u8);
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// andc r8,r27,r6
	ctx.r8.u64 = r27.u64 & ~ctx.r6.u64;
	// andc r7,r27,r5
	ctx.r7.u64 = r27.u64 & ~ctx.r5.u64;
	// stb r3,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// andc r10,r27,r10
	ctx.r10.u64 = r27.u64 & ~ctx.r10.u64;
	// andc r11,r27,r11
	r11.u64 = r27.u64 & ~r11.u64;
	// twllei r27,0
	// twllei r27,0
	// twllei r27,0
	// twllei r27,0
	// twlgei r8,-1
	// twlgei r7,-1
	// twlgei r10,-1
	// twlgei r11,-1
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FB9880) {
	__imp__sub_82FB9880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9970) {
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
	// bl 0x82ca7504
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fb99a8
	if (cr6.eq) goto loc_82FB99A8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82fb99bc
	if (!cr6.eq) goto loc_82FB99BC;
loc_82FB99A8:
	// lis r11,-256
	r11.s64 = -16777216;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r26.u8);
	// li r28,1
	r28.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_82FB99BC:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x82fb9c48
	if (!cr6.gt) goto loc_82FB9C48;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f28.f64 = double(temp.f32);
	// fmr f31,f28
	f31.f64 = f28.f64;
	// fcmpu cr6,f27,f28
	cr6.compare(f27.f64, f28.f64);
	// bne cr6,0x82fb9a00
	if (!cr6.eq) goto loc_82FB9A00;
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82FB99E0:
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82fb99e0
	if (cr6.lt) goto loc_82FB99E0;
	// b 0x82fb9a74
	goto loc_82FB9A74;
loc_82FB9A00:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lfs f29,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f29.f64 = double(temp.f32);
	// lfs f30,3500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	f30.f64 = double(temp.f32);
	// lfs f31,2960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2960);
	f31.f64 = double(temp.f32);
loc_82FB9A20:
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821fe378
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmadds f1,f0,f30,f29
	ctx.f1.f64 = double(std::fma(float(f0.f64), float(f30.f64), float(f29.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(r31.u32, 256, xer);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// blt cr6,0x82fb9a20
	if (cr6.lt) goto loc_82FB9A20;
	// fdivs f31,f28,f27
	f31.f64 = double(float(f28.f64 / f27.f64));
loc_82FB9A74:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82fb9a98
	if (cr0.eq) goto loc_82FB9A98;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_82FB9A8C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82fb9a8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82FB9A8C;
loc_82FB9A98:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x82fb9c20
	if (!cr6.gt) goto loc_82FB9C20;
	// addi r11,r29,6
	r11.s64 = r29.s64 + 6;
	// addi r23,r28,-1
	r23.s64 = r28.s64 + -1;
loc_82FB9AA8:
	// lbz r26,2(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// bge cr6,0x82fb9ab8
	if (!cr6.lt) goto loc_82FB9AB8;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82FB9AB8:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = rotl32(ctx.r10.u32, 1);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r7,1
	ctx.r7.u64 = rotl32(ctx.r7.u32, 1);
	// lbz r29,8(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// rotlwi r5,r5,1
	ctx.r5.u64 = rotl32(ctx.r5.u32, 1);
	// lbz r30,9(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// lbz r28,-2(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// rotlwi r3,r3,1
	ctx.r3.u64 = rotl32(ctx.r3.u32, 1);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r27,6(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// rotlwi r29,r29,1
	r29.u64 = rotl32(r29.u32, 1);
	// lhzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// rotlwi r6,r30,1
	ctx.r6.u64 = rotl32(r30.u32, 1);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f28.f64);
	// lhzx r3,r3,r25
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + r25.u32);
	// rotlwi r30,r28,8
	r30.u64 = rotl32(r28.u32, 8);
	// rotlwi r25,r27,8
	r25.u64 = rotl32(r27.u32, 8);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// lhzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + ctx.r8.u32);
	// or r8,r30,r28
	ctx.r8.u64 = r30.u64 | r28.u64;
	// sth r7,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r7.u16);
	// or r30,r25,r27
	r30.u64 = r25.u64 | r27.u64;
	// lhzx r7,r6,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// addi r25,r11,8
	r25.s64 = r11.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// subf r30,r31,r26
	r30.s64 = r26.s64 - r31.s64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// bne cr6,0x82fb9bb8
	if (!cr6.eq) goto loc_82FB9BB8;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bge cr6,0x82fb9c0c
	if (!cr6.lt) goto loc_82FB9C0C;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,1
	r28.s64 = 1;
	// add r27,r11,r24
	r27.u64 = r11.u64 + r24.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_82FB9B80:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82fb9880
	sub_82FB9880(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x82fb9b80
	if (!cr0.eq) goto loc_82FB9B80;
	// b 0x82fb9c0c
	goto loc_82FB9C0C;
loc_82FB9BB8:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bge cr6,0x82fb9c0c
	if (!cr6.lt) goto loc_82FB9C0C;
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,1
	r28.s64 = 1;
	// add r27,r11,r24
	r27.u64 = r11.u64 + r24.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_82FB9BD4:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fb9750
	sub_82FB9750(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x82fb9bd4
	if (!cr0.eq) goto loc_82FB9BD4;
loc_82FB9C0C:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne 0x82fb9aa8
	if (!cr0.eq) goto loc_82FB9AA8;
	// cmplwi cr6,r26,256
	cr6.compare<uint32_t>(r26.u32, 256, xer);
	// bge cr6,0x82fb9c64
	if (!cr6.lt) goto loc_82FB9C64;
loc_82FB9C20:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r26,256
	xer.ca = r26.u32 <= 256;
	r11.s64 = 256 - r26.s64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fb9c64
	if (cr6.eq) goto loc_82FB9C64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82FB9C38:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fb9c38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82FB9C38;
	// b 0x82fb9c64
	goto loc_82FB9C64;
loc_82FB9C48:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r11,256
	r11.s64 = 256;
loc_82FB9C50:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82fb9c50
	if (!cr0.eq) goto loc_82FB9C50;
loc_82FB9C64:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7550
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82FB9970) {
	__imp__sub_82FB9970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FB9C78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82ef8e38
	sub_82EF8E38(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// stb r3,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r3.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r23,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r23.u8);
	// addi r24,r31,24
	r24.s64 = r31.s64 + 24;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r11,26796
	ctx.r4.s64 = r11.s64 + 26796;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fb9d20
	if (!cr0.eq) goto loc_82FB9D20;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,26784
	ctx.r4.s64 = r11.s64 + 26784;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82f2a230
	sub_82F2A230(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bge cr6,0x82fb9d14
	if (!cr6.lt) goto loc_82FB9D14;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
loc_82FB9D14:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9D20:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fb9fc0
	if (cr0.eq) goto loc_82FB9FC0;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef8e38
	sub_82EF8E38(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fb9d54
	if (cr0.eq) goto loc_82FB9D54;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r10.u8);
loc_82FB9D54:
	// li r3,28
	ctx.r3.s64 = 28;
	// clrlwi r29,r11,28
	r29.u64 = r11.u32 & 0xF;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fb9d98
	if (cr0.eq) goto loc_82FB9D98;
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// bl 0x82fb95f0
	sub_82FB95F0(ctx, base);
	// b 0x82fb9d9c
	goto loc_82FB9D9C;
loc_82FB9D98:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82FB9D9C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82fb9fb4
	if (cr6.eq) goto loc_82FB9FB4;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// clrlwi r27,r29,16
	r27.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82fb9f98
	if (!cr6.eq) goto loc_82FB9F98;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82fb9e24
	if (!cr6.gt) goto loc_82FB9E24;
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_82FB9DCC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r28,r29,r11
	r28.u64 = r29.u64 + r11.u64;
	// bl 0x82ef8e38
	sub_82EF8E38(ctx, base);
	// stb r3,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x82fb9e18
	if (!cr6.lt) goto loc_82FB9E18;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r10.u8);
loc_82FB9E18:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82fb9dcc
	if (!cr0.eq) goto loc_82FB9DCC;
loc_82FB9E24:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,26752
	ctx.r4.s64 = r11.s64 + 26752;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bne cr6,0x82fb9e74
	if (!cr6.eq) goto loc_82FB9E74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2700);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,24(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
loc_82FB9E74:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r29,296(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(296) );
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r10,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r10.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82fb9ea4
	if (cr6.eq) goto loc_82FB9EA4;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82fb9ea8
	if (!cr0.eq) goto loc_82FB9EA8;
loc_82FB9EA4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82FB9EA8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb9f00
	if (cr0.eq) goto loc_82FB9F00;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// bl 0x82f2ed98
	sub_82F2ED98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fb9ee0
	if (cr0.eq) goto loc_82FB9EE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
loc_82FB9EE0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fba028
	if (!cr6.eq) goto loc_82FBA028;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fba028
	if (cr6.eq) goto loc_82FBA028;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9F00:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82fb9660
	sub_82FB9660(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f3fc78
	sub_82F3FC78(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fb9f40
	if (!cr6.eq) goto loc_82FB9F40;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82fb9f44
	if (cr6.eq) goto loc_82FB9F44;
loc_82FB9F40:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82FB9F44:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fb9f5c
	if (!cr0.eq) goto loc_82FB9F5C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
loc_82FB9F5C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fb9f74
	if (!cr6.eq) goto loc_82FB9F74;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb9f74
	if (cr6.eq) goto loc_82FB9F74;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FB9F74:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fba028
	if (cr6.eq) goto loc_82FBA028;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9F98:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fb9fb4
	if (cr6.eq) goto loc_82FB9FB4;
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
loc_82FB9FB4:
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stb r23,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r23.u8);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9FC0:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fba028
	if (cr0.eq) goto loc_82FBA028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,26732
	ctx.r4.s64 = r11.s64 + 26732;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82f2ed98
	sub_82F2ED98(ctx, base);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// bl 0x82f2a348
	sub_82F2A348(ctx, base);
loc_82FBA028:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82FB9C78) {
	__imp__sub_82FB9C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA030) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// mr. r11,r10
	r11.u64 = ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// bne 0x82fba090
	if (!cr0.eq) goto loc_82FBA090;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82fb3030
	sub_82FB3030(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82fba230
	goto loc_82FBA230;
loc_82FBA090:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fba208
	if (cr0.eq) goto loc_82FBA208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r28,4(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fba0c0
	if (cr6.eq) goto loc_82FBA0C0;
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
loc_82FBA0C0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fba100
	if (cr0.eq) goto loc_82FBA100;
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
	// lhz r5,18(r28)
	ctx.r5.u64 = PPC_LOAD_U16(r28.u32 + 18);
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// lbz r11,1(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 1);
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// bl 0x82fb95f0
	sub_82FB95F0(ctx, base);
	// b 0x82fba104
	goto loc_82FBA104;
loc_82FBA100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBA104:
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fba1e0
	if (cr6.eq) goto loc_82FBA1E0;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fba1e0
	if (cr0.eq) goto loc_82FBA1E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f30,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f30.f64 = double(temp.f32);
loc_82FBA12C:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f31.f64), float(f0.f64)));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// stbx r11,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + r31.u32, r11.u8);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// add r27,r11,r31
	r27.u64 = r11.u64 + r31.u64;
	// bl 0x82fb3030
	sub_82FB3030(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lhz r11,18(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 18);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fba12c
	if (cr6.lt) goto loc_82FBA12C;
loc_82FBA1E0:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lfs f13,24(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// fmadds f0,f13,f31,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f31.f64), float(f0.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// b 0x82fba21c
	goto loc_82FBA21C;
loc_82FBA208:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fba21c
	if (cr0.eq) goto loc_82FBA21C;
	// addi r4,r25,8
	ctx.r4.s64 = r25.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
loc_82FBA21C:
	// addi r5,r24,16
	ctx.r5.s64 = r24.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82f66118
	sub_82F66118(ctx, base);
loc_82FBA230:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FBA030) {
	__imp__sub_82FBA030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA240) {
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
	// bl 0x82fb9508
	sub_82FB9508(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fba270
	if (cr0.eq) goto loc_82FBA270;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FBA270:
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

PPC_WEAK_FUNC(sub_82FBA240) {
	__imp__sub_82FBA240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA290) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// sth r11,4(r30)
	PPC_STORE_U16(r30.u32 + 4, r11.u16);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lhz r11,16(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// sth r11,16(r30)
	PPC_STORE_U16(r30.u32 + 16, r11.u16);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fba2e8
	if (cr6.eq) goto loc_82FBA2E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
loc_82FBA2E8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fba334
	if (cr6.eq) goto loc_82FBA334;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fba32c
	if (cr0.eq) goto loc_82FBA32C;
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// b 0x82fba330
	goto loc_82FBA330;
loc_82FBA32C:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82FBA330:
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
loc_82FBA334:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBA290) {
	__imp__sub_82FBA290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,12(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fba370
	if (cr6.eq) goto loc_82FBA370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBA370:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fba3a8
	if (cr0.eq) goto loc_82FBA3A8;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// b 0x82fba3ac
	goto loc_82FBA3AC;
loc_82FBA3A8:
	// li r31,0
	r31.s64 = 0;
loc_82FBA3AC:
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBA340) {
	__imp__sub_82FBA340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA3B8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// sth r3,4(r29)
	PPC_STORE_U16(r29.u32 + 4, ctx.r3.u16);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,83
	cr6.compare<int32_t>(r28.s32, 83, xer);
	// bne cr6,0x82fba42c
	if (!cr6.eq) goto loc_82FBA42C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,26,26
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r31,16(r29)
	PPC_STORE_U16(r29.u32 + 16, r31.u16);
	// beq 0x82fba42c
	if (cr0.eq) goto loc_82FBA42C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2700);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,20(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
loc_82FBA42C:
	// rlwinm. r11,r31,0,28,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fba4c8
	if (cr0.eq) goto loc_82FBA4C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fba454
	if (cr0.eq) goto loc_82FBA454;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// b 0x82fba458
	goto loc_82FBA458;
loc_82FBA454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBA458:
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x82fba46c
	if (!cr6.eq) goto loc_82FBA46C;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
loc_82FBA46C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb9c78
	sub_82FB9C78(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fba490
	if (!cr0.eq) goto loc_82FBA490;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// b 0x82fba4b8
	goto loc_82FBA4B8;
loc_82FBA490:
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fba4bc
	if (cr0.eq) goto loc_82FBA4BC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fba4bc
	if (cr6.eq) goto loc_82FBA4BC;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 18);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82fba4bc
	if (cr0.eq) goto loc_82FBA4BC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_82FBA4B8:
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82FBA4BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// b 0x82fba4d8
	goto loc_82FBA4D8;
loc_82FBA4C8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
loc_82FBA4D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBA3B8) {
	__imp__sub_82FBA3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBA4E0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca74f4
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// lfs f30,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82fba520
	if (cr0.eq) goto loc_82FBA520;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f1,26828(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26828);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82fba524
	goto loc_82FBA524;
loc_82FBA520:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_82FBA524:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lhz r5,18(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// bl 0x82fb9970
	sub_82FB9970(ctx, base);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// beq cr6,0x82fba980
	if (cr6.eq) goto loc_82FBA980;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// beq cr6,0x82fba798
	if (cr6.eq) goto loc_82FBA798;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// bne cr6,0x82fbaa0c
	if (!cr6.eq) goto loc_82FBAA0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb8d88
	sub_82FB8D88(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82eff498
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fbaa0c
	if (cr0.eq) goto loc_82FBAA0C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r27,-1
	r28.s64 = r27.s64 + -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f31,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	f31.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f28,f12,f31
	f28.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fsubs f8,f28,f30
	ctx.f8.f64 = static_cast<float>(f28.f64 - f30.f64);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f8
	f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82fb8c80
	sub_82FB8C80(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x82fba6f0
	if (!cr6.gt) goto loc_82FBA6F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f23,f30,f8
	ctx.fpscr.disableFlushMode();
	f23.f64 = double(float(f30.f64 / ctx.f8.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f29.f64 = double(temp.f32);
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// lfs f24,2780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2780);
	f24.f64 = double(temp.f32);
loc_82FBA5E8:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// li r30,1
	r30.s64 = 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f28
	f0.f64 = static_cast<float>(f0.f64 - f28.f64);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fsubs f0,f0,f29
	f0.f64 = static_cast<float>(f0.f64 - f29.f64);
	// fmuls f27,f30,f0
	f27.f64 = double(float(f30.f64 * f0.f64));
	// fmuls f26,f0,f0
	f26.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f25,f29,f0
	f25.f64 = double(float(f29.f64 * f0.f64));
loc_82FBA618:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f28.f64);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fsubs f12,f12,f30
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f30.f64);
	// fmsubs f11,f29,f12,f27
	ctx.f11.f64 = double(std::fma(float(f29.f64), float(ctx.f12.f64), -float(f27.f64)));
	// fmadds f10,f12,f12,f26
	ctx.f10.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f26.f64)));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmsubs f0,f10,f0,f11
	f0.f64 = double(std::fma(float(ctx.f10.f64), float(f0.f64), -float(ctx.f11.f64)));
	// fabs f0,f0
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fmadds f0,f30,f12,f0
	f0.f64 = double(std::fma(float(f30.f64), float(ctx.f12.f64), float(f0.f64)));
	// fadds f0,f0,f25
	f0.f64 = double(float(f0.f64 + f25.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f23
	f0.f64 = double(float(f0.f64 * f23.f64));
	// fmadds f1,f0,f24,f31
	ctx.f1.f64 = double(std::fma(float(f0.f64), float(f24.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82fba68c
	if (!cr6.gt) goto loc_82FBA68C;
	// li r11,255
	r11.s64 = 255;
loc_82FBA68C:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82fba698
	if (cr6.lt) goto loc_82FBA698;
	// li r11,255
	r11.s64 = 255;
loc_82FBA698:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82fba618
	if (cr6.lt) goto loc_82FBA618;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fba5e8
	if (cr6.lt) goto loc_82FBA5E8;
loc_82FBA6F0:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// ble cr6,0x82fbaa0c
	if (!cr6.gt) goto loc_82FBAA0C;
	// lbz r11,1167(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1167);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// lbz r10,1164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1164);
	// lbz r9,1166(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1166);
	// rlwimi r11,r10,8,16,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r29,1165(r1)
	r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1165);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r29,r9,8,0,23
	r29.u64 = (rotl32(ctx.r9.u32, 8) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
loc_82FBA720:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82fba720
	if (cr6.lt) goto loc_82FBA720;
	// b 0x82fbaa0c
	goto loc_82FBAA0C;
loc_82FBA798:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb8d88
	sub_82FB8D88(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82eff498
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fbaa0c
	if (cr0.eq) goto loc_82FBAA0C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r27,-1
	r28.s64 = r27.s64 + -1;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f31,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f29,f0,f31
	f29.f64 = double(float(f0.f64 * f31.f64));
	// fsubs f0,f29,f30
	f0.f64 = static_cast<float>(f29.f64 - f30.f64);
	// ble cr6,0x82fba8d8
	if (!cr6.gt) goto loc_82FBA8D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f28,f30,f0
	f28.f64 = double(float(f30.f64 / f0.f64));
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// lfs f27,2780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2780);
	f27.f64 = double(temp.f32);
loc_82FBA804:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// li r30,1
	r30.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = static_cast<float>(f0.f64 - f29.f64);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fmuls f30,f0,f0
	f30.f64 = double(float(f0.f64 * f0.f64));
loc_82FBA828:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = static_cast<float>(f0.f64 - f29.f64);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fmadds f0,f0,f0,f30
	f0.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(f30.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(std::fma(float(f0.f64), float(f27.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82fba874
	if (!cr6.gt) goto loc_82FBA874;
	// li r11,255
	r11.s64 = 255;
loc_82FBA874:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82fba880
	if (cr6.lt) goto loc_82FBA880;
	// li r11,255
	r11.s64 = 255;
loc_82FBA880:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82fba828
	if (cr6.lt) goto loc_82FBA828;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fba804
	if (cr6.lt) goto loc_82FBA804;
loc_82FBA8D8:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// ble cr6,0x82fbaa0c
	if (!cr6.gt) goto loc_82FBAA0C;
	// lbz r11,1167(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1167);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// lbz r10,1164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1164);
	// lbz r9,1166(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1166);
	// rlwimi r11,r10,8,16,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r29,1165(r1)
	r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1165);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r29,r9,8,0,23
	r29.u64 = (rotl32(ctx.r9.u32, 8) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
loc_82FBA908:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82fba908
	if (cr6.lt) goto loc_82FBA908;
	// b 0x82fbaa0c
	goto loc_82FBAA0C;
loc_82FBA980:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eff498
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fbaa0c
	if (cr0.eq) goto loc_82FBAA0C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbaa0c
	if (!cr6.gt) goto loc_82FBAA0C;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_82FBA9AC:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// blt cr6,0x82fba9bc
	if (cr6.lt) goto loc_82FBA9BC;
	// li r11,255
	r11.s64 = 255;
loc_82FBA9BC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,83(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r11,r10,8,16,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (rotl32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82fba9ac
	if (cr6.lt) goto loc_82FBA9AC;
loc_82FBAA0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca7540
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FBA4E0) {
	__imp__sub_82FBA4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBAA20) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82fb96d8
	sub_82FB96D8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ef2088
	sub_82EF2088(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82fbab68
	if (!cr6.eq) goto loc_82FBAB68;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fba4e0
	sub_82FBA4E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82fbab34
	if (cr0.eq) goto loc_82FBAB34;
	// li r11,1
	r11.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r26.u8);
	// beq cr6,0x82fbaad4
	if (cr6.eq) goto loc_82FBAAD4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82FBAAD4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbaaf8
	if (cr0.eq) goto loc_82FBAAF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f3ece8
	sub_82F3ECE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82FBAAF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fbab0c
	if (cr6.eq) goto loc_82FBAB0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ef1d88
	sub_82EF1D88(ctx, base);
loc_82FBAB0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fbab2c
	if (cr6.eq) goto loc_82FBAB2C;
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
loc_82FBAB2C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82fbab44
	if (!cr6.eq) goto loc_82FBAB44;
loc_82FBAB34:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r4,r11,26832
	ctx.r4.s64 = r11.s64 + 26832;
	// bl 0x82ef1e18
	sub_82EF1E18(ctx, base);
loc_82FBAB44:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fbab74
	if (cr6.eq) goto loc_82FBAB74;
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
	// b 0x82fbab74
	goto loc_82FBAB74;
loc_82FBAB68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1810
	sub_82EF1810(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82FBAB74:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82fbab8c
	if (!cr6.eq) goto loc_82FBAB8C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82fbabac
	goto loc_82FBABAC;
loc_82FBAB8C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82fbabac
	if (cr6.lt) goto loc_82FBABAC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBABAC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbabcc
	if (cr6.eq) goto loc_82FBABCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBABCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FBAA20) {
	__imp__sub_82FBAA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBABD8) {
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
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(16) );
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(40) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,44(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(44) );
	// lbz r8,56(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 56);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// bl 0x82fbaa20
	sub_82FBAA20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbac28
	if (cr6.eq) goto loc_82FBAC28;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FBAC28:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

PPC_WEAK_FUNC(sub_82FBABD8) {
	__imp__sub_82FBABD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBAC50) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r26,20(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbae94
	if (cr0.eq) goto loc_82FBAE94;
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f2bea0
	sub_82F2BEA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82fbacf0
	if (!cr0.eq) goto loc_82FBACF0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82fbafa4
	if (cr6.eq) goto loc_82FBAFA4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// bl 0x82fbaa20
	sub_82FBAA20(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82fbafa4
	if (cr0.eq) goto loc_82FBAFA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FBACF0:
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fbafa4
	if (cr6.eq) goto loc_82FBAFA4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82fbad28
	if (!cr6.eq) goto loc_82FBAD28;
loc_82FBAD20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fbafa8
	goto loc_82FBAFA8;
loc_82FBAD28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// addi r31,r28,16
	r31.s64 = r28.s64 + 16;
	// stw r10,52(r28)
	PPC_STORE_U32(r28.u32 + 52, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bne cr6,0x82fbad94
	if (!cr6.eq) goto loc_82FBAD94;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,26480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26480);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26484);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x82fbae1c
	goto loc_82FBAE1C;
loc_82FBAD94:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,0
	r11.s64 = 0;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// twllei r10,0
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f30,f11,f13
	f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 + ctx.f13.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f0,f30,f0
	f0.f64 = double(float(f30.f64 + f0.f64));
loc_82FBAE1C:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fbae40
	if (cr6.eq) goto loc_82FBAE40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66090
	sub_82F66090(ctx, base);
loc_82FBAE40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// bl 0x82f65e78
	sub_82F65E78(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// b 0x82fbad20
	goto loc_82FBAD20;
loc_82FBAE94:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbafa4
	if (cr0.eq) goto loc_82FBAFA4;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82f2bea0
	sub_82F2BEA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbaeb8
	if (cr0.eq) goto loc_82FBAEB8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// b 0x82fbaebc
	goto loc_82FBAEBC;
loc_82FBAEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBAEBC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbafa4
	if (cr6.eq) goto loc_82FBAFA4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82fbafa4
	if (cr0.eq) goto loc_82FBAFA4;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x82fbaf2c
	if (cr6.eq) goto loc_82FBAF2C;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x82fbaf20
	if (cr6.eq) goto loc_82FBAF20;
	// cmpwi cr6,r11,66
	cr6.compare<int32_t>(r11.s32, 66, xer);
	// beq cr6,0x82fbaf18
	if (cr6.eq) goto loc_82FBAF18;
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// bne cr6,0x82fbaf34
	if (!cr6.eq) goto loc_82FBAF34;
	// li r31,1
	r31.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// b 0x82fbaf34
	goto loc_82FBAF34;
loc_82FBAF18:
	// li r30,0
	r30.s64 = 0;
	// b 0x82fbaf30
	goto loc_82FBAF30;
loc_82FBAF20:
	// li r31,1
	r31.s64 = 1;
	// li r30,1
	r30.s64 = 1;
	// b 0x82fbaf34
	goto loc_82FBAF34;
loc_82FBAF2C:
	// li r30,1
	r30.s64 = 1;
loc_82FBAF30:
	// li r31,0
	r31.s64 = 0;
loc_82FBAF34:
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fbaf54
	if (cr6.eq) goto loc_82FBAF54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66090
	sub_82F66090(ctx, base);
loc_82FBAF54:
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// bl 0x82f65e78
	sub_82F65E78(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// stw r31,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r31.u32);
	// stw r30,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r30.u32);
	// b 0x82fbad20
	goto loc_82FBAD20;
loc_82FBAFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBAFA8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FBAC50) {
	__imp__sub_82FBAC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBAFB8) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bne 0x82fbb004
	if (!cr0.eq) goto loc_82FBB004;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82fbb044
	goto loc_82FBB044;
loc_82FBB004:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fbac50
	sub_82FBAC50(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbb050
	if (cr6.eq) goto loc_82FBB050;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
loc_82FBB044:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBB050:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBAFB8) {
	__imp__sub_82FBAFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB060) {
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
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lfs f0,1200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1200);
	f0.f64 = double(temp.f32);
	// lfs f13,1388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FBB060) {
	__imp__sub_82FBB060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x82ca74d0
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4368
	r11.s64 = r11.s64 + -4368;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82fbb140
	if (!cr6.eq) goto loc_82FBB140;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82fbb140
	if (!cr6.eq) goto loc_82FBB140;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82fbb140
	if (!cr6.eq) goto loc_82FBB140;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82fbb140
	if (!cr6.eq) goto loc_82FBB140;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82fbb140
	if (!cr6.eq) goto loc_82FBB140;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82fbb144
	if (cr6.eq) goto loc_82FBB144;
loc_82FBB140:
	// li r11,0
	r11.s64 = 0;
loc_82FBB144:
	// stb r11,116(r31)
	PPC_STORE_U8(r31.u32 + 116, r11.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r29,r31,144
	r29.s64 = r31.s64 + 144;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f66090
	sub_82F66090(ctx, base);
	// lfs f10,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f29,f7
	f29.f64 = ctx.f7.f64;
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f31,f6
	f31.f64 = ctx.f6.f64;
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f7,f2,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f7.f64), float(ctx.f2.f64), float(ctx.f12.f64)));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(std::fma(float(ctx.f5.f64), float(ctx.f13.f64), float(ctx.f10.f64)));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// fmadds f11,f6,f0,f11
	ctx.f11.f64 = double(std::fma(float(ctx.f6.f64), float(f0.f64), float(ctx.f11.f64)));
	// lfs f28,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f28.f64 = double(temp.f32);
	// fmadds f9,f29,f2,f9
	ctx.f9.f64 = double(std::fma(float(f29.f64), float(ctx.f2.f64), float(ctx.f9.f64)));
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f29,f28,f2,f8
	f29.f64 = double(std::fma(float(f28.f64), float(ctx.f2.f64), float(ctx.f8.f64)));
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = f28.f64;
	// lfs f30,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f30.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmr f27,f7
	f27.f64 = ctx.f7.f64;
	// lfs f25,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f25.f64 = double(temp.f32);
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// lfs f24,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f24.f64 = double(temp.f32);
	// fmuls f30,f30,f1
	f30.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lfs f23,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f23.f64 = double(temp.f32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f22,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f22.f64 = double(temp.f32);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f21,f6
	f21.f64 = ctx.f6.f64;
	// fadds f6,f25,f3
	ctx.f6.f64 = double(float(f25.f64 + ctx.f3.f64));
	// fmadds f31,f8,f13,f31
	f31.f64 = double(std::fma(float(ctx.f8.f64), float(ctx.f13.f64), float(f31.f64)));
	// fadds f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 + f27.f64));
	// fadds f9,f29,f26
	ctx.f9.f64 = double(float(f29.f64 + f26.f64));
	// fmadds f30,f28,f13,f30
	f30.f64 = double(std::fma(float(f28.f64), float(ctx.f13.f64), float(f30.f64)));
	// fmr f28,f27
	f28.f64 = f27.f64;
	// fsubs f29,f12,f10
	f29.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// fadds f5,f24,f4
	ctx.f5.f64 = double(float(f24.f64 + ctx.f4.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f24,f23,f1
	f24.f64 = double(float(f23.f64 * ctx.f1.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f29,f29,f29
	f29.f64 = double(float(f29.f64 * f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f26,f11,f9
	f26.f64 = static_cast<float>(ctx.f11.f64 - ctx.f9.f64);
	// fadds f7,f31,f7
	ctx.f7.f64 = double(float(f31.f64 + ctx.f7.f64));
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// fsubs f25,f8,f12
	f25.f64 = static_cast<float>(ctx.f8.f64 - ctx.f12.f64);
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f30,f30,f28
	f30.f64 = double(float(f30.f64 + f28.f64));
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f6,f0,f6
	ctx.f6.f64 = static_cast<float>(f0.f64 - ctx.f6.f64);
	// lfs f27,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f27.f64 = double(temp.f32);
	// fsubs f0,f3,f1
	f0.f64 = static_cast<float>(ctx.f3.f64 - ctx.f1.f64);
	// fsubs f23,f4,f2
	f23.f64 = static_cast<float>(ctx.f4.f64 - ctx.f2.f64);
	// fsubs f5,f13,f5
	ctx.f5.f64 = static_cast<float>(ctx.f13.f64 - ctx.f5.f64);
	// fmadds f13,f22,f13,f24
	ctx.f13.f64 = double(std::fma(float(f22.f64), float(ctx.f13.f64), float(f24.f64)));
	// fmadds f26,f26,f26,f29
	f26.f64 = double(std::fma(float(f26.f64), float(f26.f64), float(f29.f64)));
	// fsubs f28,f7,f11
	f28.f64 = static_cast<float>(ctx.f7.f64 - ctx.f11.f64);
	// fmuls f25,f25,f25
	f25.f64 = double(float(f25.f64 * f25.f64));
	// fadds f29,f13,f21
	f29.f64 = double(float(ctx.f13.f64 + f21.f64));
	// stfs f29,144(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsqrts f13,f26
	ctx.f13.f64 = double(simd::sqrt_f32(float(f26.f64)));
	// fmadds f28,f28,f28,f25
	f28.f64 = double(std::fma(float(f28.f64), float(f28.f64), float(f25.f64)));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fsqrts f28,f28
	f28.f64 = double(simd::sqrt_f32(float(f28.f64)));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fdivs f26,f31,f28
	f26.f64 = double(float(f31.f64 / f28.f64));
	// fadds f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmuls f6,f23,f26
	ctx.f6.f64 = double(float(f23.f64 * f26.f64));
	// fmuls f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * f26.f64));
	// fcmpu cr6,f28,f31
	cr6.compare(f28.f64, f31.f64);
	// ble cr6,0x82fbb338
	if (!cr6.gt) goto loc_82FBB338;
	// fadds f28,f28,f27
	f28.f64 = double(float(f28.f64 + f27.f64));
	// fdivs f28,f31,f28
	f28.f64 = double(float(f31.f64 / f28.f64));
	// fmuls f0,f28,f0
	f0.f64 = double(float(f28.f64 * f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82FBB338:
	// fadds f28,f5,f6
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fcmpu cr6,f28,f31
	cr6.compare(f28.f64, f31.f64);
	// ble cr6,0x82fbb354
	if (!cr6.gt) goto loc_82FBB354;
	// fadds f28,f28,f27
	f28.f64 = double(float(f28.f64 + f27.f64));
	// fdivs f31,f31,f28
	f31.f64 = double(float(f31.f64 / f28.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(f31.f64 * ctx.f6.f64));
	// fmuls f5,f31,f5
	ctx.f5.f64 = double(float(f31.f64 * ctx.f5.f64));
loc_82FBB354:
	// fsubs f31,f30,f10
	ctx.fpscr.disableFlushMode();
	f31.f64 = static_cast<float>(f30.f64 - ctx.f10.f64);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f28,f29,f9
	f28.f64 = static_cast<float>(f29.f64 - ctx.f9.f64);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f27,f12,f10
	f27.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fsubs f24,f7,f11
	f24.f64 = static_cast<float>(ctx.f7.f64 - ctx.f11.f64);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// fsubs f26,f11,f9
	f26.f64 = static_cast<float>(ctx.f11.f64 - ctx.f9.f64);
	// fsubs f25,f8,f12
	f25.f64 = static_cast<float>(ctx.f8.f64 - ctx.f12.f64);
	// fsubs f22,f7,f29
	f22.f64 = static_cast<float>(ctx.f7.f64 - f29.f64);
	// fsubs f23,f8,f30
	f23.f64 = static_cast<float>(ctx.f8.f64 - f30.f64);
	// fmadds f21,f31,f6,f10
	f21.f64 = double(std::fma(float(f31.f64), float(ctx.f6.f64), float(ctx.f10.f64)));
	// stfs f21,172(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f20,f28,f6,f9
	f20.f64 = double(std::fma(float(f28.f64), float(ctx.f6.f64), float(ctx.f9.f64)));
	// fmadds f10,f27,f0,f10
	ctx.f10.f64 = double(std::fma(float(f27.f64), float(f0.f64), float(ctx.f10.f64)));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f18,f24,f6,f11
	f18.f64 = double(std::fma(float(f24.f64), float(ctx.f6.f64), float(ctx.f11.f64)));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f16,f24,f5,f7
	f16.f64 = -double(std::fma(float(f24.f64), float(ctx.f5.f64), -float(ctx.f7.f64)));
	// fnmsubs f24,f28,f5,f29
	f24.f64 = -double(std::fma(float(f28.f64), float(ctx.f5.f64), -float(f29.f64)));
	// fmadds f9,f26,f0,f9
	ctx.f9.f64 = double(std::fma(float(f26.f64), float(f0.f64), float(ctx.f9.f64)));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f19,f25,f6,f12
	f19.f64 = double(std::fma(float(f25.f64), float(ctx.f6.f64), float(ctx.f12.f64)));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fnmsubs f17,f25,f5,f8
	f17.f64 = -double(std::fma(float(f25.f64), float(ctx.f5.f64), -float(ctx.f8.f64)));
	// fnmsubs f25,f31,f5,f30
	f25.f64 = -double(std::fma(float(f31.f64), float(ctx.f5.f64), -float(f30.f64)));
	// fmadds f10,f27,f0,f21
	ctx.f10.f64 = double(std::fma(float(f27.f64), float(f0.f64), float(f21.f64)));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f29,f26,f0,f20
	f29.f64 = double(std::fma(float(f26.f64), float(f0.f64), float(f20.f64)));
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f31,f27,f13,f12
	f31.f64 = -double(std::fma(float(f27.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fnmsubs f30,f26,f13,f11
	f30.f64 = -double(std::fma(float(f26.f64), float(ctx.f13.f64), -float(ctx.f11.f64)));
	// fnmsubs f26,f26,f13,f18
	f26.f64 = -double(std::fma(float(f26.f64), float(ctx.f13.f64), -float(f18.f64)));
	// fnmsubs f15,f22,f13,f16
	f15.f64 = -double(std::fma(float(f22.f64), float(ctx.f13.f64), -float(f16.f64)));
	// fnmsubs f27,f27,f13,f19
	f27.f64 = -double(std::fma(float(f27.f64), float(ctx.f13.f64), -float(f19.f64)));
	// fnmsubs f21,f23,f13,f17
	f21.f64 = -double(std::fma(float(f23.f64), float(ctx.f13.f64), -float(f17.f64)));
	// fmadds f14,f23,f0,f25
	f14.f64 = double(std::fma(float(f23.f64), float(f0.f64), float(f25.f64)));
	// fmadds f0,f22,f0,f24
	f0.f64 = double(std::fma(float(f22.f64), float(f0.f64), float(f24.f64)));
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f27,96(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,100(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f19,96(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f18,100(r1)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	f0.f64 = double(temp.f32);
	// lfs f28,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f28.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// stfs f20,84(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f14,96(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f20,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f20.f64 = double(temp.f32);
	// stfs f20,100(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f31.f64 = double(temp.f32);
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stfs f21,96(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f15,100(r1)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f29,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f29.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f28.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// stfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f19,88(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// stfs f18,92(r1)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stfs f17,96(r1)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfs f16,100(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f26.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f23,f0,f13
	ctx.f13.f64 = double(std::fma(float(f23.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f0,f22,f0,f12
	f0.f64 = double(std::fma(float(f22.f64), float(f0.f64), float(ctx.f12.f64)));
	// stfs f25,80(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// stfs f14,88(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// stfs f20,92(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f27,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f27.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f25,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f25.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f24,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f24.f64 = double(temp.f32);
	// fnmsubs f13,f23,f0,f25
	ctx.f13.f64 = -double(std::fma(float(f23.f64), float(f0.f64), -float(f25.f64)));
	// fnmsubs f0,f22,f0,f24
	f0.f64 = -double(std::fma(float(f22.f64), float(f0.f64), -float(f24.f64)));
	// stfs f14,80(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f20,84(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// stfs f21,88(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// stfs f15,92(r1)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// stfs f21,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f15,84(r1)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f17,88(r1)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// stfs f16,92(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f25,96(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// stfs f24,100(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
	// stfs f30,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f28,124(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f29,128(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca751c
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBB0B8) {
	__imp__sub_82FBB0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB618) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f12.f64), float(ctx.f13.f64)));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmadds f0,f13,f12,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f12.f64), float(f0.f64)));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82fbb670
	if (cr6.gt) goto loc_82FBB670;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82FBB670:
	// lfs f12,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82fbb684
	if (cr6.gt) goto loc_82FBB684;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FBB684:
	// lfs f12,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82fbb698
	if (cr6.lt) goto loc_82FBB698;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FBB698:
	// lfs f12,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82fbb6ac
	if (cr6.lt) goto loc_82FBB6AC;
	// li r11,0
	r11.s64 = 0;
loc_82FBB6AC:
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// addi r10,r7,26860
	ctx.r10.s64 = ctx.r7.s64 + 26860;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rotlwi r11,r11,5
	r11.u64 = rotl32(r11.u32, 5);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r11,176
	ctx.r10.s64 = r11.s64 + 176;
	// lfs f12,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f11.f64), float(f0.f64), float(ctx.f12.f64)));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f13,f13,f0,f10
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(ctx.f10.f64)));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f0,f13,f0,f11
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), float(ctx.f11.f64)));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBB618) {
	__imp__sub_82FBB618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB758) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(468) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbb818
	if (!cr6.gt) goto loc_82FBB818;
	// li r30,0
	r30.s64 = 0;
loc_82FBB77C:
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(464) );
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + r11.u64;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82fbb804
	if (!cr6.lt) goto loc_82FBB804;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82fbb804
	if (!cr6.lt) goto loc_82FBB804;
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// lfs f4,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	sub_82F665D8(ctx, base);
loc_82FBB804:
	// lwz r11,468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(468) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fbb77c
	if (cr6.lt) goto loc_82FBB77C;
loc_82FBB818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBB758) {
	__imp__sub_82FBB758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fbac50
	sub_82FBAC50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,26880
	ctx.r4.s64 = r11.s64 + 26880;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r30,r30,160
	r30.s64 = r30.s64 + 160;
loc_82FBB8B8:
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82fbb924
	if (cr6.eq) goto loc_82FBB924;
	// lhz r11,10(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82fbb924
	if (cr6.eq) goto loc_82FBB924;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBB924:
	// addi r28,r28,6
	r28.s64 = r28.s64 + 6;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplwi cr6,r28,54
	cr6.compare<uint32_t>(r28.u32, 54, xer);
	// blt cr6,0x82fbb8b8
	if (cr6.lt) goto loc_82FBB8B8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBB820) {
	__imp__sub_82FBB820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBB940) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82fbb9e8
	if (!cr6.lt) goto loc_82FBB9E8;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
loc_82FBB9E8:
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82fbb9f8
	if (!cr6.lt) goto loc_82FBB9F8;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
loc_82FBB9F8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fbba04
	if (!cr6.gt) goto loc_82FBBA04;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_82FBBA04:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82fbba10
	if (!cr6.gt) goto loc_82FBBA10;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_82FBBA10:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f7
	cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x82fbba20
	if (!cr6.lt) goto loc_82FBBA20;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_82FBBA20:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// bge cr6,0x82fbba30
	if (!cr6.lt) goto loc_82FBBA30;
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
loc_82FBBA30:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82fbba3c
	if (!cr6.gt) goto loc_82FBBA3C;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_82FBBA3C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82fbba48
	if (!cr6.gt) goto loc_82FBBA48;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
loc_82FBBA48:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f7
	cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x82fbba58
	if (!cr6.lt) goto loc_82FBBA58;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_82FBBA58:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// bge cr6,0x82fbba68
	if (!cr6.lt) goto loc_82FBBA68;
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
loc_82FBBA68:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82fbba74
	if (!cr6.gt) goto loc_82FBBA74;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_82FBBA74:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82fbba80
	if (!cr6.gt) goto loc_82FBBA80;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
loc_82FBBA80:
	// stfs f7,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stfs f8,4(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f10,12(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_82FBB940) {
	__imp__sub_82FBB940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBBAA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbbb18
	if (!cr6.eq) goto loc_82FBBB18;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbbaf4
	if (cr0.eq) goto loc_82FBBAF4;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbbaec
	if (cr0.eq) goto loc_82FBBAEC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbbb3c
	if (!cr6.eq) goto loc_82FBBB3C;
loc_82FBBAEC:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbbb3c
	if (!cr0.eq) goto loc_82FBBB3C;
loc_82FBBAF4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbbb0c
	if (cr6.eq) goto loc_82FBBB0C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBBB0C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82fbbb3c
	goto loc_82FBBB3C;
loc_82FBBB18:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbbb2c
	if (cr6.gt) goto loc_82FBBB2C;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82fbbb3c
	if (cr6.gt) goto loc_82FBBB3C;
loc_82FBBB2C:
	// rlwinm r11,r31,30,2,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82f42c08
	sub_82F42C08(ctx, base);
loc_82FBBB3C:
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// bge cr6,0x82fbbb68
	if (!cr6.lt) goto loc_82FBBB68;
	// mulli r29,r28,48
	r29.s64 = r28.s64 * 48;
	// subf r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
loc_82FBBB4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add. r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fbbb5c
	if (cr0.eq) goto loc_82FBBB5C;
	// bl 0x82fbb060
	sub_82FBB060(ctx, base);
loc_82FBBB5C:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// bne 0x82fbbb4c
	if (!cr0.eq) goto loc_82FBBB4C;
loc_82FBBB68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBBAA8) {
	__imp__sub_82FBBAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBBB70) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbbc88
	if (!cr6.gt) goto loc_82FBBC88;
loc_82FBBB98:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(40) );
	// rlwinm r9,r28,28,4,29
	ctx.r9.u64 = rotl64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r28,26
	ctx.r10.u64 = r28.u32 & 0x3F;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82fbbc14
	if (cr6.lt) goto loc_82FBBC14;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbbbd8
	if (!cr0.eq) goto loc_82FBBBD8;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbbc14
	if (cr0.eq) goto loc_82FBBC14;
loc_82FBBBD8:
	// lwz r11,468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(468) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbbbf0
	if (!cr6.eq) goto loc_82FBBBF0;
	// addi r3,r30,464
	ctx.r3.s64 = r30.s64 + 464;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x82fbbaa8
	sub_82FBBAA8(ctx, base);
loc_82FBBBF0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(464) );
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82fbfbd8
	sub_82FBFBD8(ctx, base);
loc_82FBBC14:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82fbbc78
	if (cr6.lt) goto loc_82FBBC78;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbbc3c
	if (!cr0.eq) goto loc_82FBBC3C;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbbc78
	if (cr0.eq) goto loc_82FBBC78;
loc_82FBBC3C:
	// lwz r11,468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(468) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbbc54
	if (!cr6.eq) goto loc_82FBBC54;
	// addi r3,r30,464
	ctx.r3.s64 = r30.s64 + 464;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x82fbbaa8
	sub_82FBBAA8(ctx, base);
loc_82FBBC54:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(464) );
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82fbfbd8
	sub_82FBFBD8(ctx, base);
loc_82FBBC78:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82fbbb98
	if (cr6.lt) goto loc_82FBBB98;
loc_82FBBC88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBBB70) {
	__imp__sub_82FBBB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBBC90) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stw r8,448(r28)
	PPC_STORE_U32(r28.u32 + 448, ctx.r8.u32);
	// lfs f9,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	f0.f64 = double(temp.f32);
	// addi r29,r1,152
	r29.s64 = ctx.r1.s64 + 152;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// li r26,9
	r26.s64 = 9;
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f7,188(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f7,228(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f9,232(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f8,268(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,284(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
loc_82FBBD98:
	// lfs f11,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// blt cr6,0x82fbbddc
	if (cr6.lt) goto loc_82FBBDDC;
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x82fbbddc
	if (cr6.lt) goto loc_82FBBDDC;
	// lfs f13,-8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fbbddc
	if (cr6.lt) goto loc_82FBBDDC;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82fbbde0
	if (!cr6.lt) goto loc_82FBBDE0;
loc_82FBBDDC:
	// li r11,0
	r11.s64 = 0;
loc_82FBBDE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbbdf0
	if (!cr0.eq) goto loc_82FBBDF0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82fbbe50
	goto loc_82FBBE50;
loc_82FBBDF0:
	// lfs f13,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82fbbe04
	if (!cr6.gt) goto loc_82FBBE04;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// b 0x82fbbe08
	goto loc_82FBBE08;
loc_82FBBE04:
	// fmr f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f0.f64;
loc_82FBBE08:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82fbbe1c
	if (!cr6.gt) goto loc_82FBBE1C;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// b 0x82fbbe20
	goto loc_82FBBE20;
loc_82FBBE1C:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f0.f64;
loc_82FBBE20:
	// lfs f0,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82fbbe34
	if (!cr6.gt) goto loc_82FBBE34;
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// b 0x82fbbe38
	goto loc_82FBBE38;
loc_82FBBE34:
	// fmr f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f11.f64;
loc_82FBBE38:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x82fbbe48
	if (!cr6.gt) goto loc_82FBBE48;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// b 0x82fbbe4c
	goto loc_82FBBE4C;
loc_82FBBE48:
	// fmr f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f10.f64;
loc_82FBBE4C:
	// li r11,1
	r11.s64 = 1;
loc_82FBBE50:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbbe6c
	if (!cr0.eq) goto loc_82FBBE6C;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f31,4(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f31,-8(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + -8, temp.u32);
	// stfs f31,-4(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + -4, temp.u32);
	// b 0x82fbbe7c
	goto loc_82FBBE7C;
loc_82FBBE6C:
	// stfs f6,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f5,-8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + -8, temp.u32);
	// stfs f7,-4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + -4, temp.u32);
loc_82FBBE7C:
	// lfs f0,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbbea0
	if (!cr6.lt) goto loc_82FBBEA0;
	// lfs f12,-4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82fbbea4
	if (cr6.lt) goto loc_82FBBEA4;
loc_82FBBEA0:
	// li r11,1
	r11.s64 = 1;
loc_82FBBEA4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbbf30
	if (!cr0.eq) goto loc_82FBBF30;
	// lfs f12,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r27,2
	ctx.r6.s64 = r27.s64 + 2;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r30,4
	r30.s64 = 4;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82FBBEE0:
	// addi r4,r5,-4
	ctx.r4.s64 = ctx.r5.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fbb618
	sub_82FBB618(ctx, base);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fctiwz f0,f13
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// sth r11,-2(r6)
	PPC_STORE_U16(ctx.r6.u32 + -2, r11.u16);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82fbbee0
	if (!cr0.eq) goto loc_82FBBEE0;
	// b 0x82fbbf4c
	goto loc_82FBBF4C;
loc_82FBBF30:
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82FBBF40:
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x82fbbf40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82FBBF40;
loc_82FBBF4C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82fbbd98
	if (!cr0.eq) goto loc_82FBBD98;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// bl 0x82f65e78
	sub_82F65E78(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r29,r31,176
	r29.s64 = r31.s64 + 176;
	// addi r30,r28,160
	r30.s64 = r28.s64 + 160;
	// li r31,9
	r31.s64 = 9;
loc_82FBBFB8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f66090
	sub_82F66090(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x82fbbfb8
	if (!cr0.eq) goto loc_82FBBFB8;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FBBC90) {
	__imp__sub_82FBBC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// addi r11,r11,26988
	r11.s64 = r11.s64 + 26988;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r26,r31,64
	r26.s64 = r31.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r25,r31,176
	r25.s64 = r31.s64 + 176;
	// li r28,8
	r28.s64 = 8;
loc_82FBC080:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r25,r25,32
	r25.s64 = r25.s64 + 32;
	// bge 0x82fbc080
	if (!cr0.lt) goto loc_82FBC080;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r28,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r28.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r28,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stb r28,116(r31)
	PPC_STORE_U8(r31.u32 + 116, r28.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82FBC020) {
	__imp__sub_82FBC020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC118) {
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
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x82fbbaa8
	sub_82FBBAA8(ctx, base);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(464) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc148
	if (cr6.eq) goto loc_82FBC148;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC148:
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

PPC_WEAK_FUNC(sub_82FBC118) {
	__imp__sub_82FBC118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC168) {
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
	// bl 0x82fbc118
	sub_82FBC118(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbc198
	if (cr0.eq) goto loc_82FBC198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC198:
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

PPC_WEAK_FUNC(sub_82FBC168) {
	__imp__sub_82FBC168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC1B8) {
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
	// li r29,2
	r29.s64 = 2;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
loc_82FBC1D4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// bge 0x82fbc1d4
	if (!cr0.lt) goto loc_82FBC1D4;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x82fc04e0
	sub_82FC04E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r10.u32);
loc_82FBC218:
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x82fbc218
	if (!cr0.eq) goto loc_82FBC218;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBC1B8) {
	__imp__sub_82FBC1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC238) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBC238) {
	__imp__sub_82FBC238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC250) {
	PPC_FUNC_PROLOGUE();
	// stw r4,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBC250) {
	__imp__sub_82FBC250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC258) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 376);
	f0.f64 = double(temp.f32);
	// lfs f12,3280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// ble cr6,0x82fbc290
	if (!cr6.gt) goto loc_82FBC290;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82fbc288
	if (!cr6.gt) goto loc_82FBC288;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82fbc28c
	goto loc_82FBC28C;
loc_82FBC288:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82FBC28C:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBC290:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82fbc2ac
	if (cr6.gt) goto loc_82FBC2AC;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82FBC2AC:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBC258) {
	__imp__sub_82FBC258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26348(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26348);
	f0.f64 = double(temp.f32);
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// fsubs f7,f9,f10
	ctx.f7.f64 = static_cast<float>(ctx.f9.f64 - ctx.f10.f64);
	// fsel f13,f8,f13,f12
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f12,f7,f9,f10
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fsubs f10,f12,f13
	ctx.f10.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82fbc310
	if (!cr6.lt) goto loc_82FBC310;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82fbc348
	goto loc_82FBC348;
loc_82FBC310:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// lfs f12,3048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3048);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f1,f0,f12
	ctx.f10.f64 = double(std::fma(float(ctx.f1.f64), float(f0.f64), float(ctx.f12.f64)));
	// lfs f0,3184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3184);
	f0.f64 = double(temp.f32);
	// lfs f12,27004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27004);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = static_cast<float>(f0.f64 - ctx.f10.f64);
	// fsel f0,f9,f0,f10
	f0.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_82FBC348:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// fdivs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 / f0.f64));
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBC2B8) {
	__imp__sub_82FBC2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC358) {
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
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbc388
	if (!cr6.eq) goto loc_82FBC388;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
loc_82FBC388:
	// li r11,0
	r11.s64 = 0;
loc_82FBC38C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(r11.u32, 76, xer);
	// blt cr6,0x82fbc38c
	if (cr6.lt) goto loc_82FBC38C;
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBC358) {
	__imp__sub_82FBC358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(100) );
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbc3c8
	if (!cr6.eq) goto loc_82FBC3C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FBC3C8:
	// addi r9,r11,76
	ctx.r9.s64 = r11.s64 + 76;
loc_82FBC3CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82fbc3ec
	if (!cr0.eq) goto loc_82FBC3EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82fbc3cc
	if (!cr6.eq) goto loc_82FBC3CC;
loc_82FBC3EC:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBC3B0) {
	__imp__sub_82FBC3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// subf r27,r31,r28
	r27.s64 = r28.s64 - r31.s64;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_82FBC420:
	// lhzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82fbc420
	if (!cr0.eq) goto loc_82FBC420;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// li r29,9
	r29.s64 = 9;
loc_82FBC43C:
	// add r4,r30,r27
	ctx.r4.u64 = r30.u64 + r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x82fbc43c
	if (!cr0.eq) goto loc_82FBC43C;
	// lwz r11,448(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(448) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBC3F8) {
	__imp__sub_82FBC3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC468) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,212
	r30.s64 = r31.s64 + 212;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fbc4a0
	if (!cr0.eq) goto loc_82FBC4A0;
	// li r11,1
	r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FBC4A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,436(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(436) );
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// mulli r11,r28,3
	r11.s64 = r28.s64 * 3;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc09b0
	sub_82FC09B0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fbc51c
	if (cr6.eq) goto loc_82FBC51C;
loc_82FBC4C8:
	// lwz r11,448(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(448) );
	// rlwinm r9,r31,24,8,29
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFC;
	// clrlwi r10,r31,22
	ctx.r10.u64 = r31.u32 & 0x3FF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82fbc4c8
	if (cr6.lt) goto loc_82FBC4C8;
loc_82FBC51C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBC468) {
	__imp__sub_82FBC468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC528) {
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
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(240) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc560
	if (cr6.eq) goto loc_82FBC560;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBC560:
	// li r29,0
	r29.s64 = 0;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x82fc0960
	sub_82FC0960(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBC528) {
	__imp__sub_82FBC528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC598) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r22,r31,212
	r22.s64 = r31.s64 + 212;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r24,20(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbc738
	if (cr0.eq) goto loc_82FBC738;
	// lbz r11,311(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 311);
	// li r19,0
	r19.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fbc6b4
	if (cr0.eq) goto loc_82FBC6B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// beq cr6,0x82fbc68c
	if (cr6.eq) goto loc_82FBC68C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbc68c
	if (!cr6.gt) goto loc_82FBC68C;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_82FBC624:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fbc63c
	if (cr6.eq) goto loc_82FBC63C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r25
	ctx.r7.u64 = r11.u64 + r25.u64;
	// b 0x82fbc640
	goto loc_82FBC640;
loc_82FBC63C:
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
loc_82FBC640:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82fbc670
	if (cr6.eq) goto loc_82FBC670;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r23
	ctx.r3.u64 = r11.u64 + r23.u64;
	// bl 0x82fbac50
	sub_82FBAC50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbc670
	if (cr0.eq) goto loc_82FBC670;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
loc_82FBC670:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82fbc624
	if (cr6.lt) goto loc_82FBC624;
loc_82FBC68C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82fbc6e8
	goto loc_82FBC6E8;
loc_82FBC6B4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fbc6cc
	if (cr6.eq) goto loc_82FBC6CC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
	// b 0x82fbc6d0
	goto loc_82FBC6D0;
loc_82FBC6CC:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
loc_82FBC6D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r3,r11,r23
	ctx.r3.u64 = r11.u64 + r23.u64;
	// bl 0x82fbafb8
	sub_82FBAFB8(ctx, base);
loc_82FBC6E8:
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fc05a8
	sub_82FC05A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu r8,r3,r11
	ctx.r8.u32 = ctx.r3.u32 / r11.u32;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBC738:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82FBC598) {
	__imp__sub_82FBC598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC748) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,240
	r31.s64 = r30.s64 + 240;
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(240) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc784
	if (cr6.eq) goto loc_82FBC784;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBC784:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82fc0948
	sub_82FC0948(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbc7a8
	if (cr0.eq) goto loc_82FBC7A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC7A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBC748) {
	__imp__sub_82FBC748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC7B8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbc834
	if (cr6.eq) goto loc_82FBC834;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_82FBC7EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc808
	if (cr6.eq) goto loc_82FBC808;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC808:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbc7ec
	if (!cr6.eq) goto loc_82FBC7EC;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82fbc834
	if (cr6.eq) goto loc_82FBC834;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC834:
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

PPC_WEAK_FUNC(sub_82FBC7B8) {
	__imp__sub_82FBC7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC850) {
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
	// beq 0x82fbc898
	if (cr0.eq) goto loc_82FBC898;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbc888
	if (cr0.eq) goto loc_82FBC888;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbc8fc
	if (cr6.lt) goto loc_82FBC8FC;
loc_82FBC888:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbc898
	if (cr0.eq) goto loc_82FBC898;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbc8fc
	if (cr6.eq) goto loc_82FBC8FC;
loc_82FBC898:
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
	// bne cr6,0x82fbc8c8
	if (!cr6.eq) goto loc_82FBC8C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc8bc
	if (cr6.eq) goto loc_82FBC8BC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC8BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbc8fc
	goto loc_82FBC8FC;
loc_82FBC8C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc8e0
	if (cr6.eq) goto loc_82FBC8E0;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbc8fc
	goto loc_82FBC8FC;
loc_82FBC8E0:
	// rlwinm r30,r4,1,0,30
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_82FBC8FC:
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

PPC_WEAK_FUNC(sub_82FBC850) {
	__imp__sub_82FBC850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC918) {
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
	// beq 0x82fbc960
	if (cr0.eq) goto loc_82FBC960;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbc950
	if (cr0.eq) goto loc_82FBC950;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbc9c4
	if (cr6.lt) goto loc_82FBC9C4;
loc_82FBC950:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbc960
	if (cr0.eq) goto loc_82FBC960;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbc9c4
	if (cr6.eq) goto loc_82FBC9C4;
loc_82FBC960:
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
	// bne cr6,0x82fbc990
	if (!cr6.eq) goto loc_82FBC990;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc984
	if (cr6.eq) goto loc_82FBC984;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBC984:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbc9c4
	goto loc_82FBC9C4;
loc_82FBC990:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbc9a8
	if (cr6.eq) goto loc_82FBC9A8;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbc9c4
	goto loc_82FBC9C4;
loc_82FBC9A8:
	// rlwinm r30,r4,8,0,23
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
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
loc_82FBC9C4:
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

PPC_WEAK_FUNC(sub_82FBC918) {
	__imp__sub_82FBC918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBC9E0) {
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
	// beq 0x82fbca28
	if (cr0.eq) goto loc_82FBCA28;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbca18
	if (cr0.eq) goto loc_82FBCA18;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbca8c
	if (cr6.lt) goto loc_82FBCA8C;
loc_82FBCA18:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbca28
	if (cr0.eq) goto loc_82FBCA28;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbca8c
	if (cr6.eq) goto loc_82FBCA8C;
loc_82FBCA28:
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
	// bne cr6,0x82fbca58
	if (!cr6.eq) goto loc_82FBCA58;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbca4c
	if (cr6.eq) goto loc_82FBCA4C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCA4C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbca8c
	goto loc_82FBCA8C;
loc_82FBCA58:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbca70
	if (cr6.eq) goto loc_82FBCA70;
	// mulli r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 * 96;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbca8c
	goto loc_82FBCA8C;
loc_82FBCA70:
	// mulli r30,r4,96
	r30.s64 = ctx.r4.s64 * 96;
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
loc_82FBCA8C:
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

PPC_WEAK_FUNC(sub_82FBC9E0) {
	__imp__sub_82FBC9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBCAA8) {
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
	// beq 0x82fbcaf0
	if (cr0.eq) goto loc_82FBCAF0;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbcae0
	if (cr0.eq) goto loc_82FBCAE0;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbcb54
	if (cr6.lt) goto loc_82FBCB54;
loc_82FBCAE0:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbcaf0
	if (cr0.eq) goto loc_82FBCAF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbcb54
	if (cr6.eq) goto loc_82FBCB54;
loc_82FBCAF0:
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
	// bne cr6,0x82fbcb20
	if (!cr6.eq) goto loc_82FBCB20;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcb14
	if (cr6.eq) goto loc_82FBCB14;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCB14:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbcb54
	goto loc_82FBCB54;
loc_82FBCB20:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcb38
	if (cr6.eq) goto loc_82FBCB38;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbcb54
	goto loc_82FBCB54;
loc_82FBCB38:
	// rlwinm r30,r4,5,0,26
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
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
loc_82FBCB54:
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

PPC_WEAK_FUNC(sub_82FBCAA8) {
	__imp__sub_82FBCAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBCB70) {
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
	// beq 0x82fbcbb8
	if (cr0.eq) goto loc_82FBCBB8;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbcba8
	if (cr0.eq) goto loc_82FBCBA8;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbcc1c
	if (cr6.lt) goto loc_82FBCC1C;
loc_82FBCBA8:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbcbb8
	if (cr0.eq) goto loc_82FBCBB8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbcc1c
	if (cr6.eq) goto loc_82FBCC1C;
loc_82FBCBB8:
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
	// bne cr6,0x82fbcbe8
	if (!cr6.eq) goto loc_82FBCBE8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcbdc
	if (cr6.eq) goto loc_82FBCBDC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCBDC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbcc1c
	goto loc_82FBCC1C;
loc_82FBCBE8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcc00
	if (cr6.eq) goto loc_82FBCC00;
	// mulli r4,r4,464
	ctx.r4.s64 = ctx.r4.s64 * 464;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbcc1c
	goto loc_82FBCC1C;
loc_82FBCC00:
	// mulli r30,r4,464
	r30.s64 = ctx.r4.s64 * 464;
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
loc_82FBCC1C:
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

PPC_WEAK_FUNC(sub_82FBCB70) {
	__imp__sub_82FBCB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBCC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// lfs f12,2636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2636);
	ctx.f12.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lfs f13,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBCC38) {
	__imp__sub_82FBCC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBCCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stb r8,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r8.u8);
	// addi r8,r7,26996
	ctx.r8.s64 = ctx.r7.s64 + 26996;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lis r4,16383
	ctx.r4.s64 = 1073676288;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lfs f13,26996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// ori r7,r4,65535
	ctx.r7.u64 = ctx.r4.u64 | 65535;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lfs f12,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// stw r6,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r6.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r11.u32);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, r11.u32);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,252(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f12,264(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f12,268(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r7,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r7.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, r11.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, r11.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, r11.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, r11.u32);
	// stw r8,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r8.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, r11.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, r11.u32);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, r11.u32);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, r11.u32);
	// stw r9,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r9.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, r11.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, r11.u32);
	// stw r9,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r9.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, r11.u32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, r11.u32);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, r11.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, r11.u32);
	// stw r10,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r10.u32);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, r11.u32);
	// stw r11,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, r11.u32);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, r11.u32);
	// stw r10,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r10.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, r11.u32);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, r11.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, r11.u32);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, r11.u32);
	// stw r10,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r10.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, r11.u32);
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, r11.u32);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, r11.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, r11.u32);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, r11.u32);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, r11.u32);
	// stw r11,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, r11.u32);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, r11.u32);
	// stw r10,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, r11.u32);
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, r11.u32);
	// stw r11,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, r11.u32);
	// stw r10,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r10.u32);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, r11.u32);
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, r11.u32);
	// stw r11,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, r11.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBCCD8) {
	__imp__sub_82FBCCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBCF30) {
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
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,476
	ctx.r3.s64 = r31.s64 + 476;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = r31.s64 + 436;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,396
	ctx.r3.s64 = r31.s64 + 396;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,356
	ctx.r3.s64 = r31.s64 + 356;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcf9c
	if (cr6.eq) goto loc_82FBCF9C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCF9C:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(320) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcfac
	if (cr6.eq) goto loc_82FBCFAC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCFAC:
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(280) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcfc4
	if (cr6.eq) goto loc_82FBCFC4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCFC4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcfd4
	if (cr6.eq) goto loc_82FBCFD4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCFD4:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcfec
	if (cr6.eq) goto loc_82FBCFEC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCFEC:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbcffc
	if (cr6.eq) goto loc_82FBCFFC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBCFFC:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd00c
	if (cr6.eq) goto loc_82FBD00C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD00C:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd01c
	if (cr6.eq) goto loc_82FBD01C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD01C:
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd034
	if (cr6.eq) goto loc_82FBD034;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD034:
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd064
	if (cr6.eq) goto loc_82FBD064;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD064:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd074
	if (cr6.eq) goto loc_82FBD074;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD074:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd084
	if (cr6.eq) goto loc_82FBD084;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD084:
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

PPC_WEAK_FUNC(sub_82FBCF30) {
	__imp__sub_82FBCF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD098) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd104
	if (!cr6.eq) goto loc_82FBD104;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbd0e0
	if (cr0.eq) goto loc_82FBD0E0;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbd0d8
	if (cr0.eq) goto loc_82FBD0D8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbd128
	if (!cr6.eq) goto loc_82FBD128;
loc_82FBD0D8:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbd128
	if (!cr0.eq) goto loc_82FBD128;
loc_82FBD0E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd0f8
	if (cr6.eq) goto loc_82FBD0F8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD0F8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82fbd128
	goto loc_82FBD128;
loc_82FBD104:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd118
	if (cr6.gt) goto loc_82FBD118;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82fbd128
	if (cr6.gt) goto loc_82FBD128;
loc_82FBD118:
	// rlwinm r11,r4,30,2,31
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82fbc850
	sub_82FBC850(ctx, base);
loc_82FBD128:
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

PPC_WEAK_FUNC(sub_82FBD098) {
	__imp__sub_82FBD098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD140) {
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
	// bge cr6,0x82fbd188
	if (!cr6.lt) goto loc_82FBD188;
	// rlwinm r30,r28,8,0,23
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82FBD16C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82fbc748
	sub_82FBC748(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
	// bne 0x82fbd16c
	if (!cr0.eq) goto loc_82FBD16C;
loc_82FBD188:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd1dc
	if (!cr6.eq) goto loc_82FBD1DC;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbd1b8
	if (cr0.eq) goto loc_82FBD1B8;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbd1b0
	if (cr0.eq) goto loc_82FBD1B0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbd204
	if (!cr6.eq) goto loc_82FBD204;
loc_82FBD1B0:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbd204
	if (!cr0.eq) goto loc_82FBD204;
loc_82FBD1B8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd1d0
	if (cr6.eq) goto loc_82FBD1D0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD1D0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82fbd204
	goto loc_82FBD204;
loc_82FBD1DC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd1f4
	if (cr6.gt) goto loc_82FBD1F4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd204
	if (cr6.gt) goto loc_82FBD204;
loc_82FBD1F4:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82fbc918
	sub_82FBC918(ctx, base);
loc_82FBD204:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82fbd230
	if (!cr6.lt) goto loc_82FBD230;
	// rlwinm r31,r27,8,0,23
	r31.u64 = rotl64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// subf r30,r27,r28
	r30.s64 = r28.s64 - r27.s64;
loc_82FBD214:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add. r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fbd224
	if (cr0.eq) goto loc_82FBD224;
	// bl 0x82fbc1b8
	sub_82FBC1B8(ctx, base);
loc_82FBD224:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// bne 0x82fbd214
	if (!cr0.eq) goto loc_82FBD214;
loc_82FBD230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBD140) {
	__imp__sub_82FBD140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD238) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
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
	// bne cr6,0x82fbd2a8
	if (!cr6.eq) goto loc_82FBD2A8;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbd288
	if (cr0.eq) goto loc_82FBD288;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbd280
	if (cr0.eq) goto loc_82FBD280;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbd2cc
	if (!cr6.eq) goto loc_82FBD2CC;
loc_82FBD280:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbd2cc
	if (!cr0.eq) goto loc_82FBD2CC;
loc_82FBD288:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd2a0
	if (cr6.eq) goto loc_82FBD2A0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD2A0:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x82fbd2cc
	goto loc_82FBD2CC;
loc_82FBD2A8:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd2bc
	if (cr6.gt) goto loc_82FBD2BC;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82fbd2cc
	if (cr6.gt) goto loc_82FBD2CC;
loc_82FBD2BC:
	// rlwinm r11,r31,30,2,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82f42ef8
	sub_82F42EF8(ctx, base);
loc_82FBD2CC:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x82fbd304
	if (!cr6.lt) goto loc_82FBD304;
	// mulli r10,r29,20
	ctx.r10.s64 = r29.s64 * 20;
	// subf r9,r29,r31
	ctx.r9.s64 = r31.s64 - r29.s64;
loc_82FBD2DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbd2f8
	if (cr0.eq) goto loc_82FBD2F8;
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_82FBD2F8:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x82fbd2dc
	if (!cr0.eq) goto loc_82FBD2DC;
loc_82FBD304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBD238) {
	__imp__sub_82FBD238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD310) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd380
	if (!cr6.eq) goto loc_82FBD380;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbd35c
	if (cr0.eq) goto loc_82FBD35C;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbd354
	if (cr0.eq) goto loc_82FBD354;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbd3a4
	if (!cr6.eq) goto loc_82FBD3A4;
loc_82FBD354:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbd3a4
	if (!cr0.eq) goto loc_82FBD3A4;
loc_82FBD35C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd374
	if (cr6.eq) goto loc_82FBD374;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD374:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82fbd3a4
	goto loc_82FBD3A4;
loc_82FBD380:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd394
	if (cr6.gt) goto loc_82FBD394;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82fbd3a4
	if (cr6.gt) goto loc_82FBD3A4;
loc_82FBD394:
	// rlwinm r11,r31,30,2,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82fbcaa8
	sub_82FBCAA8(ctx, base);
loc_82FBD3A4:
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// bge cr6,0x82fbd3d0
	if (!cr6.lt) goto loc_82FBD3D0;
	// rlwinm r29,r28,5,0,26
	r29.u64 = rotl64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
loc_82FBD3B4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add. r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fbd3c4
	if (cr0.eq) goto loc_82FBD3C4;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
loc_82FBD3C4:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// bne 0x82fbd3b4
	if (!cr0.eq) goto loc_82FBD3B4;
loc_82FBD3D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBD310) {
	__imp__sub_82FBD310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD3D8) {
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
	// bne cr6,0x82fbd448
	if (!cr6.eq) goto loc_82FBD448;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbd424
	if (cr0.eq) goto loc_82FBD424;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbd41c
	if (cr0.eq) goto loc_82FBD41C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbd46c
	if (!cr6.eq) goto loc_82FBD46C;
loc_82FBD41C:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbd46c
	if (!cr0.eq) goto loc_82FBD46C;
loc_82FBD424:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd43c
	if (cr6.eq) goto loc_82FBD43C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD43C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82fbd46c
	goto loc_82FBD46C;
loc_82FBD448:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbd45c
	if (cr6.gt) goto loc_82FBD45C;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82fbd46c
	if (cr6.gt) goto loc_82FBD46C;
loc_82FBD45C:
	// rlwinm r11,r31,30,2,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82fbcb70
	sub_82FBCB70(ctx, base);
loc_82FBD46C:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x82fbd4b0
	if (!cr6.lt) goto loc_82FBD4B0;
	// mulli r28,r29,464
	r28.s64 = r29.s64 * 464;
	// subf r27,r29,r31
	r27.s64 = r31.s64 - r29.s64;
loc_82FBD47C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add. r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbd4a4
	if (cr0.eq) goto loc_82FBD4A4;
	// addi r29,r11,160
	r29.s64 = r11.s64 + 160;
	// li r31,8
	r31.s64 = 8;
loc_82FBD490:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// bge 0x82fbd490
	if (!cr0.lt) goto loc_82FBD490;
loc_82FBD4A4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,464
	r28.s64 = r28.s64 + 464;
	// bne 0x82fbd47c
	if (!cr0.eq) goto loc_82FBD47C;
loc_82FBD4B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBD3D8) {
	__imp__sub_82FBD3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fbd238
	sub_82FBD238(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mulli r10,r31,20
	ctx.r10.s64 = r31.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r11,5
	r11.s64 = 5;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82FBD4F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fbd4f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82FBD4F4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBD4B8) {
	__imp__sub_82FBD4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD510) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(40) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r9,r5,28,4,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFC;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// clrlwi r11,r5,26
	r11.u64 = ctx.r5.u32 & 0x3F;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwz r27,8(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82fbd554
	if (!cr6.eq) goto loc_82FBD554;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82FBD554:
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// rlwinm r26,r29,1,0,30
	r26.u64 = rotl64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r26,r27
	ctx.r4.u64 = r26.u64 + r27.u64;
	// bl 0x82fbd098
	sub_82FBD098(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fbd604
	if (cr6.eq) goto loc_82FBD604;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FBD57C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r6,r9,26,6,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r9,3,21,28
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7F8;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(20) );
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r9,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r9,26,6,29
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r8,r9,3,21,28
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7F8;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(20) );
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// blt cr6,0x82fbd57c
	if (cr6.lt) goto loc_82FBD57C;
loc_82FBD604:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r26,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FBD510) {
	__imp__sub_82FBD510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD638) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x82fc0c08
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f13,3032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3032);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stb r30,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r30.u8);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stb r30,47(r31)
	PPC_STORE_U8(r31.u32 + 47, r30.u8);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r30,45(r31)
	PPC_STORE_U8(r31.u32 + 45, r30.u8);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stb r30,46(r31)
	PPC_STORE_U8(r31.u32 + 46, r30.u8);
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

PPC_WEAK_FUNC(sub_82FBD638) {
	__imp__sub_82FBD638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD6E8) {
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
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd720
	if (cr6.eq) goto loc_82FBD720;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBD720:
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd754
	if (cr6.eq) goto loc_82FBD754;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBD754:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd770
	if (cr6.eq) goto loc_82FBD770;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbc748
	sub_82FBC748(ctx, base);
loc_82FBD770:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82fc0948
	sub_82FC0948(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd794
	if (cr6.eq) goto loc_82FBD794;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD794:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd098
	sub_82FBD098(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbd7b0
	if (cr6.eq) goto loc_82FBD7B0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBD7B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBD6E8) {
	__imp__sub_82FBD6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBD7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f0
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// fmr f22,f2
	f22.f64 = ctx.f2.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lhz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U16(r18.u32 + 4);
	// li r15,1
	r15.s64 = 1;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfs f23,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f23.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r17,0(r16)
	r17.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// fmr f31,f23
	f31.f64 = f23.f64;
	// stb r15,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r15.u8);
	// fmr f30,f23
	f30.f64 = f23.f64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// rlwinm r14,r10,27,31,31
	r14.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbd854
	if (!cr6.eq) goto loc_82FBD854;
	// lbz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// subfc r10,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82fbd85c
	goto loc_82FBD85C;
loc_82FBD854:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_82FBD85C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbd868
	if (cr0.eq) goto loc_82FBD868;
	// mr r14,r29
	r14.u64 = r29.u64;
loc_82FBD868:
	// lwz r8,28(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + int32_t(28) );
	// rlwinm. r10,r8,0,27,27
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fbd884
	if (cr0.eq) goto loc_82FBD884;
	// lwz r10,36(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(36) );
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// bne 0x82fbd888
	if (!cr0.eq) goto loc_82FBD888;
loc_82FBD884:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82FBD888:
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbd8a4
	if (cr6.eq) goto loc_82FBD8A4;
	// lwz r11,36(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(36) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbd8a4
	if (!cr0.eq) goto loc_82FBD8A4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82FBD8A4:
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82fbe9c8
	if (cr6.eq) goto loc_82FBE9C8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fbe9c8
	if (cr6.eq) goto loc_82FBE9C8;
	// lbz r31,1719(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1719);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82fbd8cc
	if (cr0.eq) goto loc_82FBD8CC;
	// fmr f27,f23
	ctx.fpscr.disableFlushMode();
	f27.f64 = f23.f64;
	// b 0x82fbd8d8
	goto loc_82FBD8D8;
loc_82FBD8CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f663c8
	sub_82F663C8(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f1.f64));
loc_82FBD8D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fbd8e8
	if (cr6.eq) goto loc_82FBD8E8;
	// fmr f26,f23
	ctx.fpscr.disableFlushMode();
	f26.f64 = f23.f64;
	// b 0x82fbd8f4
	goto loc_82FBD8F4;
loc_82FBD8E8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f663e0
	sub_82F663E0(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
loc_82FBD8F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,16(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 16);
	// rlwinm. r11,r11,0,29,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f25,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f25.f64 = double(temp.f32);
	// beq 0x82fbd9f8
	if (cr0.eq) goto loc_82FBD9F8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82fbd9b0
	if (cr6.eq) goto loc_82FBD9B0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82fbd940
	if (cr6.eq) goto loc_82FBD940;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82fbda2c
	if (!cr6.eq) goto loc_82FBDA2C;
	// fmuls f13,f27,f27
	ctx.f13.f64 = double(float(f27.f64 * f27.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f31,f23
	f31.f64 = f23.f64;
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9104);
	f0.f64 = double(temp.f32);
	// fmadds f13,f26,f26,f13
	ctx.f13.f64 = double(std::fma(float(f26.f64), float(f26.f64), float(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBD940:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f663f8
	sub_82F663F8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f0,360(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 360);
	f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = static_cast<float>(f30.f64 - f0.f64);
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f25
	cr6.compare(f31.f64, f25.f64);
	// bgt cr6,0x82fbd96c
	if (cr6.gt) goto loc_82FBD96C;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_82FBD96C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f30,f0,f27
	f30.f64 = double(float(f0.f64 * f27.f64));
	// bl 0x82239e88
	sub_82239E88(ctx, base);
loc_82FBD984:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(f30.f64 * f30.f64));
	// lfs f0,9076(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9076);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f30,f31
	f30.f64 = f31.f64;
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBD9B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f663f8
	sub_82F663F8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f0,360(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 360);
	f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + f0.f64));
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f25
	cr6.compare(f31.f64, f25.f64);
	// bgt cr6,0x82fbd9dc
	if (cr6.gt) goto loc_82FBD9DC;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_82FBD9DC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f30,f0,f27
	f30.f64 = double(float(f0.f64 * f27.f64));
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// b 0x82fbd984
	goto loc_82FBD984;
loc_82FBD9F8:
	// fmuls f13,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 * f27.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,28(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(28) );
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmadds f13,f26,f26,f13
	ctx.f13.f64 = double(std::fma(float(f26.f64), float(f26.f64), float(ctx.f13.f64)));
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9104);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// beq 0x82fbda28
	if (cr0.eq) goto loc_82FBDA28;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// fmr f31,f23
	f31.f64 = f23.f64;
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBDA28:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_82FBDA2C:
	// lfs f0,32(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r16.u32 + 32);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// lfs f12,32(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f29.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82fbda54
	if (cr6.gt) goto loc_82FBDA54;
	// mr r14,r15
	r14.u64 = r15.u64;
loc_82FBDA54:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x82fbda64
	if (!cr6.lt) goto loc_82FBDA64;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fdivs f28,f29,f0
	f28.f64 = double(float(f29.f64 / f0.f64));
loc_82FBDA64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// fmuls f28,f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 * f31.f64));
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,2636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2636);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82fbdba4
	if (cr6.eq) goto loc_82FBDBA4;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U8(r25.u32 + 48);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82fbdb5c
	if (!cr6.eq) goto loc_82FBDB5C;
	// lbz r11,47(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 47);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fbdaa4
	if (cr0.eq) goto loc_82FBDAA4;
	// clrlwi r9,r14,24
	ctx.r9.u64 = r14.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82fbdb5c
	if (!cr6.eq) goto loc_82FBDB5C;
loc_82FBDAA4:
	// lbz r11,45(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 45);
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82fbdb5c
	if (!cr6.eq) goto loc_82FBDB5C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdac8
	if (cr0.eq) goto loc_82FBDAC8;
	// lbz r11,46(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 46);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fbdb5c
	if (cr0.eq) goto loc_82FBDB5C;
loc_82FBDAC8:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(28) );
	// rlwinm. r11,r11,30,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdb58
	if (cr0.eq) goto loc_82FBDB58;
	// lfs f0,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 40);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = static_cast<float>(f0.f64 - f31.f64);
	// fcmpu cr6,f28,f13
	cr6.compare(f28.f64, ctx.f13.f64);
	// ble cr6,0x82fbdb5c
	if (!cr6.gt) goto loc_82FBDB5C;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// bge cr6,0x82fbdb5c
	if (!cr6.lt) goto loc_82FBDB5C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82fbdb58
	if (cr6.eq) goto loc_82FBDB58;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,56(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27008(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27008);
	f0.f64 = double(temp.f32);
	// fmuls f0,f24,f0
	f0.f64 = double(float(f24.f64 * f0.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fcmpu cr6,f26,f12
	cr6.compare(f26.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb5c
	if (cr6.lt) goto loc_82FBDB5C;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f26,f13
	cr6.compare(f26.f64, ctx.f13.f64);
	// bgt cr6,0x82fbdb5c
	if (cr6.gt) goto loc_82FBDB5C;
	// lfs f13,52(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fcmpu cr6,f27,f12
	cr6.compare(f27.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb3c
	if (cr6.lt) goto loc_82FBDB3C;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f27,f12
	cr6.compare(f27.f64, ctx.f12.f64);
	// ble cr6,0x82fbdb58
	if (!cr6.gt) goto loc_82FBDB58;
loc_82FBDB3C:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f12,f12,f0
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// fcmpu cr6,f27,f12
	cr6.compare(f27.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb5c
	if (cr6.lt) goto loc_82FBDB5C;
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f27,f0
	cr6.compare(f27.f64, f0.f64);
	// bgt cr6,0x82fbdb5c
	if (cr6.gt) goto loc_82FBDB5C;
loc_82FBDB58:
	// mr r28,r15
	r28.u64 = r15.u64;
loc_82FBDB5C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbdbcc
	if (!cr0.eq) goto loc_82FBDBCC;
	// bl 0x82fbc528
	sub_82FBC528(ctx, base);
	// addi r3,r25,60
	ctx.r3.s64 = r25.s64 + 60;
	// bl 0x82fc0770
	sub_82FC0770(ctx, base);
	// lwz r3,88(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(88) );
	// addi r31,r25,88
	r31.s64 = r25.s64 + 88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbdb98
	if (cr6.eq) goto loc_82FBDB98;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBDB98:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// b 0x82fbdbcc
	goto loc_82FBDBCC;
loc_82FBDBA4:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbdbbc
	if (cr0.eq) goto loc_82FBDBBC;
	// bl 0x82fbc1b8
	sub_82FBC1B8(ctx, base);
	// b 0x82fbdbc0
	goto loc_82FBDBC0;
loc_82FBDBBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FBDBC0:
	// stw r3,36(r25)
	PPC_STORE_U32(r25.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbea64
	if (cr6.eq) goto loc_82FBEA64;
loc_82FBDBCC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbe92c
	if (!cr0.eq) goto loc_82FBE92C;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(28) );
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdc00
	if (cr0.eq) goto loc_82FBDC00;
	// lwz r11,36(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(36) );
	// rlwinm. r11,r11,0,23,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// bne 0x82fbdc04
	if (!cr0.eq) goto loc_82FBDC04;
loc_82FBDC00:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FBDC04:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdc1c
	if (cr0.eq) goto loc_82FBDC1C;
	// lbz r11,44(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// beq 0x82fbdc20
	if (cr0.eq) goto loc_82FBDC20;
loc_82FBDC1C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FBDC20:
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// clrlwi r24,r11,24
	r24.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82fbdc40
	if (cr6.eq) goto loc_82FBDC40;
	// lwz r11,36(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(36) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbdc40
	if (!cr0.eq) goto loc_82FBDC40;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_82FBDC40:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdc6c
	if (cr0.eq) goto loc_82FBDC6C;
	// lwz r11,40(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(40) );
	// rlwinm. r11,r11,28,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbdc6c
	if (!cr0.eq) goto loc_82FBDC6C;
	// lwz r11,36(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(36) );
	// rlwinm. r11,r11,20,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbdc68
	if (cr0.eq) goto loc_82FBDC68;
	// mr r24,r29
	r24.u64 = r29.u64;
	// b 0x82fbdc6c
	goto loc_82FBDC6C;
loc_82FBDC68:
	// mr r23,r29
	r23.u64 = r29.u64;
loc_82FBDC6C:
	// lbz r20,96(r1)
	r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r20,0
	cr0.compare<uint32_t>(r20.u32, 0, xer);
	// beq 0x82fbdca4
	if (cr0.eq) goto loc_82FBDCA4;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,400(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f12,404(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f11,420(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// bl 0x82f66280
	sub_82F66280(ctx, base);
loc_82FBDCA4:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f430b0
	sub_82F430B0(ctx, base);
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28) );
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbde20
	if (!cr6.gt) goto loc_82FBDE20;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_82FBDCC4:
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwzx r31,r11,r27
	r31.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82fbfeb0
	sub_82FBFEB0(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82fbdd8c
	if (cr6.eq) goto loc_82FBDD8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fbde0c
	if (cr6.eq) goto loc_82FBDE0C;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// rlwinm r30,r28,1,0,30
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
loc_82FBDD08:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// lha r11,2(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, r11.u64);
	// lfd f13,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f0,376(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r11,512(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(512) );
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82fbdd08
	if (!cr0.eq) goto loc_82FBDD08;
	// b 0x82fbde0c
	goto loc_82FBDE0C;
loc_82FBDD8C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fbde0c
	if (cr6.eq) goto loc_82FBDE0C;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// rlwinm r30,r28,1,0,30
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
loc_82FBDDAC:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// std r10,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r10.u64);
	// lha r11,2(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, r11.u64);
	// lfd f13,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,368(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r11,512(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(512) );
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bne 0x82fbddac
	if (!cr0.eq) goto loc_82FBDDAC;
loc_82FBDE0C:
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82fbdcc4
	if (cr6.lt) goto loc_82FBDCC4;
loc_82FBDE20:
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbe3e0
	if (cr0.eq) goto loc_82FBE3E0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fbcc38
	sub_82FBCC38(ctx, base);
	// lhz r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U16(r18.u32 + 16);
	// rlwinm r11,r9,0,24,25
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x82fbde58
	if (cr6.eq) goto loc_82FBDE58;
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// b 0x82fbde5c
	goto loc_82FBDE5C;
loc_82FBDE58:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82FBDE5C:
	// rlwinm r11,r9,30,24,25
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xC0;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x82fbde84
	if (cr6.eq) goto loc_82FBDE84;
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82fbde88
	goto loc_82FBDE88;
loc_82FBDE84:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FBDE88:
	// rlwinm r10,r9,0,26,27
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// li r19,3
	r19.s64 = 3;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// beq cr6,0x82fbdeb4
	if (cr6.eq) goto loc_82FBDEB4;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x82fbdeac
	if (cr6.eq) goto loc_82FBDEAC;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x82fbdeb8
	goto loc_82FBDEB8;
loc_82FBDEAC:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82fbdeb8
	goto loc_82FBDEB8;
loc_82FBDEB4:
	// li r11,4
	r11.s64 = 4;
loc_82FBDEB8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x82fbded0
	if (!cr6.eq) goto loc_82FBDED0;
	// lfs f0,20(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
loc_82FBDED0:
	// fmuls f0,f24,f22
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f24.f64 * f22.f64));
	// stfs f0,280(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// clrlwi. r31,r24,24
	r31.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fbdf0c
	if (cr0.eq) goto loc_82FBDF0C;
	// lfs f0,32(r16)
	temp.u32 = PPC_LOAD_U32(r16.u32 + 32);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// fdivs f0,f24,f0
	f0.f64 = double(float(f24.f64 / f0.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// bne cr6,0x82fbdef8
	if (!cr6.eq) goto loc_82FBDEF8;
	// fdivs f0,f0,f30
	f0.f64 = double(float(f0.f64 / f30.f64));
loc_82FBDEF8:
	// fmsubs f13,f28,f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(std::fma(float(f28.f64), float(f24.f64), -float(f0.f64)));
	// stfs f0,276(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsel f13,f13,f13,f25
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f25.f64;
	// b 0x82fbdf18
	goto loc_82FBDF18;
loc_82FBDF0C:
	// stfs f25,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmuls f13,f28,f24
	ctx.f13.f64 = double(float(f28.f64 * f24.f64));
	// stfs f25,272(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
loc_82FBDF18:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82fd58b8
	sub_82FD58B8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fbe1c0
	if (cr6.eq) goto loc_82FBE1C0;
	// stb r23,46(r25)
	PPC_STORE_U8(r25.u32 + 46, r23.u8);
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r31,-1
	r31.s64 = -1;
	// mr r24,r29
	r24.u64 = r29.u64;
	// mr r23,r29
	r23.u64 = r29.u64;
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(8) );
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// bne 0x82fbdfa0
	if (!cr0.eq) goto loc_82FBDFA0;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbdfa0
	if (!cr6.eq) goto loc_82FBDFA0;
	// addi r28,r25,60
	r28.s64 = r25.s64 + 60;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// lwz r22,112(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// clrlwi r21,r22,8
	r21.u64 = r22.u32 & 0xFFFFFF;
	// b 0x82fbdfdc
	goto loc_82FBDFDC;
loc_82FBDFA0:
	// addi r28,r25,60
	r28.s64 = r25.s64 + 60;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbdfcc
	if (cr6.eq) goto loc_82FBDFCC;
	// lis r23,255
	r23.s64 = 16711680;
	// mr r24,r31
	r24.u64 = r31.u64;
	// ori r23,r23,65535
	r23.u64 = r23.u64 | 65535;
	// b 0x82fbdfd4
	goto loc_82FBDFD4;
loc_82FBDFCC:
	// lis r24,-256
	r24.s64 = -16777216;
	// mr r23,r29
	r23.u64 = r29.u64;
loc_82FBDFD4:
	// lwz r22,112(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// mr r21,r22
	r21.u64 = r22.u64;
loc_82FBDFDC:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,208(r11)
	PPC_STORE_U32(r11.u32 + 208, ctx.r10.u32);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// cmplwi cr6,r4,65534
	cr6.compare<uint32_t>(ctx.r4.u32, 65534, xer);
	// bgt cr6,0x82fbe2f8
	if (cr6.gt) goto loc_82FBE2F8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0608
	sub_82FC0608(ctx, base);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82fbe10c
	if (cr6.eq) goto loc_82FBE10C;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe1b8
	if (cr6.eq) goto loc_82FBE1B8;
loc_82FBE034:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(320) );
	// rlwinm r9,r30,28,4,29
	ctx.r9.u64 = rotl64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r30,26
	r11.u64 = r30.u32 & 0x3F;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82fbc258
	sub_82FBC258(ctx, base);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r31,8(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82fbe0b0
	if (cr6.eq) goto loc_82FBE0B0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// bne cr6,0x82fbe0b8
	if (!cr6.eq) goto loc_82FBE0B8;
loc_82FBE0B0:
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x82fbe0bc
	goto loc_82FBE0BC;
loc_82FBE0B8:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82FBE0BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82fbe034
	if (cr6.lt) goto loc_82FBE034;
	// b 0x82fbe1b8
	goto loc_82FBE1B8;
loc_82FBE10C:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe1b8
	if (cr6.eq) goto loc_82FBE1B8;
loc_82FBE118:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(320) );
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	r11.u64 = r31.u32 & 0x3F;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r30,8(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(8) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// beq cr6,0x82fbe160
	if (cr6.eq) goto loc_82FBE160;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// bne cr6,0x82fbe168
	if (!cr6.eq) goto loc_82FBE168;
loc_82FBE160:
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x82fbe16c
	goto loc_82FBE16C;
loc_82FBE168:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82FBE16C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe118
	if (cr6.lt) goto loc_82FBE118;
loc_82FBE1B8:
	// stb r15,45(r25)
	PPC_STORE_U8(r25.u32 + 45, r15.u8);
	// b 0x82fbe2f8
	goto loc_82FBE2F8;
loc_82FBE1C0:
	// addi r30,r25,60
	r30.s64 = r25.s64 + 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// bl 0x82fc0608
	sub_82FC0608(ctx, base);
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// beq cr6,0x82fbe294
	if (cr6.eq) goto loc_82FBE294;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe2f8
	if (cr6.eq) goto loc_82FBE2F8;
loc_82FBE200:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(320) );
	// rlwinm r9,r31,28,4,29
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	r11.u64 = r31.u32 & 0x3F;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82fbc258
	sub_82FBC258(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe200
	if (cr6.lt) goto loc_82FBE200;
	// b 0x82fbe2f8
	goto loc_82FBE2F8;
loc_82FBE294:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe2f8
	if (cr6.eq) goto loc_82FBE2F8;
loc_82FBE29C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFC;
	// lwz r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(320) );
	// clrlwi r9,r31,26
	ctx.r9.u64 = r31.u32 & 0x3F;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe29c
	if (cr6.lt) goto loc_82FBE29C;
loc_82FBE2F8:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe39c
	if (cr6.eq) goto loc_82FBE39C;
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// lwz r30,328(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(328) );
	// addi r31,r11,212
	r31.s64 = r11.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc09b0
	sub_82FC09B0(ctx, base);
	// lwz r11,328(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(328) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe39c
	if (cr6.eq) goto loc_82FBE39C;
loc_82FBE334:
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(340) );
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	r11.u64 = r31.u32 & 0x3F;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r30,r10,212
	r30.s64 = ctx.r10.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc0a48
	sub_82FC0A48(ctx, base);
	// lwz r11,328(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(328) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe334
	if (cr6.lt) goto loc_82FBE334;
loc_82FBE39C:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / r19.u32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe3c4
	if (cr6.eq) goto loc_82FBE3C4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82FBE3C4:
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// b 0x82fbe904
	goto loc_82FBE904;
loc_82FBE3E0:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fbccd8
	sub_82FBCCD8(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stfs f31,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r29.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r29.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// stb r29,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, r29.u8);
	// bl 0x82f430b0
	sub_82F430B0(ctx, base);
	// lfs f13,32(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r16.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f13,f24,f13
	ctx.f13.f64 = double(float(f24.f64 / ctx.f13.f64));
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3148);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bne cr6,0x82fbe430
	if (!cr6.eq) goto loc_82FBE430;
	// fdivs f31,f31,f30
	f31.f64 = double(float(f31.f64 / f30.f64));
loc_82FBE430:
	// clrlwi. r30,r24,24
	r30.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// fmuls f0,f28,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 * f24.f64));
	// beq 0x82fbe454
	if (cr0.eq) goto loc_82FBE454;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f13,f0
	f0.f64 = double(std::fma(float(f31.f64), float(ctx.f13.f64), float(f0.f64)));
	// fcmpu cr6,f0,f23
	cr6.compare(f0.f64, f23.f64);
	// bge cr6,0x82fbe454
	if (!cr6.lt) goto loc_82FBE454;
	// fmr f0,f23
	f0.f64 = f23.f64;
loc_82FBE454:
	// lhz r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U16(r18.u32 + 16);
	// li r19,3
	r19.s64 = 3;
	// rlwinm r8,r9,0,26,27
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// beq cr6,0x82fbe480
	if (cr6.eq) goto loc_82FBE480;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x82fbe478
	if (cr6.eq) goto loc_82FBE478;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// b 0x82fbe484
	goto loc_82FBE484;
loc_82FBE478:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x82fbe484
	goto loc_82FBE484;
loc_82FBE480:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82FBE484:
	// rlwinm r11,r9,0,24,25
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x82fbe4ac
	if (cr6.eq) goto loc_82FBE4AC;
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// b 0x82fbe4b0
	goto loc_82FBE4B0;
loc_82FBE4AC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82FBE4B0:
	// rlwinm r11,r9,30,24,25
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xC0;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x82fbe4d8
	if (cr6.eq) goto loc_82FBE4D8;
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82fbe4dc
	goto loc_82FBE4DC;
loc_82FBE4D8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FBE4DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// lfs f13,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fcmpu cr6,f0,f25
	cr6.compare(f0.f64, f25.f64);
	// bge cr6,0x82fbe4fc
	if (!cr6.lt) goto loc_82FBE4FC;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_82FBE4FC:
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x82fbe514
	if (!cr6.eq) goto loc_82FBE514;
	// lfs f0,20(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
loc_82FBE514:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// fmuls f1,f24,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f24.f64 * f22.f64));
	// bl 0x82fbf9a0
	sub_82FBF9A0(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82fbf9c0
	sub_82FBF9C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82fb8870
	sub_82FB8870(ctx, base);
	// stw r29,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, r29.u32);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(28) );
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r15,868(r1)
	PPC_STORE_U8(ctx.r1.u32 + 868, r15.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,869(r1)
	PPC_STORE_U8(ctx.r1.u32 + 869, r11.u8);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stb r11,870(r1)
	PPC_STORE_U8(ctx.r1.u32 + 870, r11.u8);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stb r11,871(r1)
	PPC_STORE_U8(ctx.r1.u32 + 871, r11.u8);
	// bl 0x82fd04d8
	sub_82FD04D8(ctx, base);
	// lwz r11,1148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1148) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe8e4
	if (cr6.eq) goto loc_82FBE8E4;
	// lwz r3,88(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(88) );
	// addi r31,r25,88
	r31.s64 = r25.s64 + 88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbe5a0
	if (cr6.eq) goto loc_82FBE5A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBE5A0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r29,45(r25)
	PPC_STORE_U8(r25.u32 + 45, r29.u8);
	// beq cr6,0x82fbe750
	if (cr6.eq) goto loc_82FBE750;
	// lwz r31,12(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// beq cr6,0x82fbe5e8
	if (cr6.eq) goto loc_82FBE5E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// b 0x82fbe62c
	goto loc_82FBE62C;
loc_82FBE5E8:
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(8) );
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// stw r11,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// mulli r10,r31,48
	ctx.r10.s64 = r31.s64 * 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
loc_82FBE62C:
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd0790
	sub_82FD0790(ctx, base);
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe654
	if (cr6.eq) goto loc_82FBE654;
	// lis r11,255
	r11.s64 = 16711680;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, r11.u32);
loc_82FBE654:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd0568
	sub_82FD0568(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd05a8
	sub_82FD05A8(ctx, base);
	// cmplwi cr6,r3,65534
	cr6.compare<uint32_t>(ctx.r3.u32, 65534, xer);
	// bgt cr6,0x82fbe72c
	if (cr6.gt) goto loc_82FBE72C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r23,46(r25)
	PPC_STORE_U8(r25.u32 + 46, r23.u8);
	// bne 0x82fbe690
	if (!cr0.eq) goto loc_82FBE690;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe694
	if (cr6.eq) goto loc_82FBE694;
loc_82FBE690:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82FBE694:
	// addi r31,r25,60
	r31.s64 = r25.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// lwz r5,36(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// beq cr6,0x82fbe6c0
	if (cr6.eq) goto loc_82FBE6C0;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// bl 0x82fd14b8
	sub_82FD14B8(ctx, base);
	// b 0x82fbe6c8
	goto loc_82FBE6C8;
loc_82FBE6C0:
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x82fd1330
	sub_82FD1330(ctx, base);
loc_82FBE6C8:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / r19.u32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe6f4
	if (cr6.eq) goto loc_82FBE6F4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82FBE6F4:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbe72c
	if (cr0.eq) goto loc_82FBE72C;
	// stb r15,45(r25)
	PPC_STORE_U8(r25.u32 + 45, r15.u8);
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe72c
	if (cr6.eq) goto loc_82FBE72C;
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// li r31,-1
	r31.s64 = -1;
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// stw r15,208(r11)
	PPC_STORE_U32(r11.u32 + 208, r15.u32);
loc_82FBE72C:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd08f8
	sub_82FD08F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbe750
	if (cr6.eq) goto loc_82FBE750;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBE750:
	// lbz r11,45(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 45);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbe8e4
	if (!cr0.eq) goto loc_82FBE8E4;
	// addi r30,r25,60
	r30.s64 = r25.s64 + 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1148) );
	// bl 0x82fc0608
	sub_82FC0608(ctx, base);
	// lwz r11,1148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1148) );
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// beq cr6,0x82fbe820
	if (cr6.eq) goto loc_82FBE820;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe880
	if (cr6.eq) goto loc_82FBE880;
loc_82FBE790:
	// lwz r10,1160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1160) );
	// rlwinm r9,r31,24,8,29
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFC;
	// rlwinm r11,r31,3,19,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0x1FF8;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82fbc258
	sub_82FBC258(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1148) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe790
	if (cr6.lt) goto loc_82FBE790;
	// b 0x82fbe880
	goto loc_82FBE880;
loc_82FBE820:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe880
	if (cr6.eq) goto loc_82FBE880;
loc_82FBE828:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// rlwinm r8,r31,24,8,29
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFC;
	// lwz r6,1160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1160) );
	// rlwinm r9,r31,3,19,28
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0x1FF8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1148) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe828
	if (cr6.lt) goto loc_82FBE828;
loc_82FBE880:
	// lwz r11,1240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1240) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe8bc
	if (cr6.eq) goto loc_82FBE8BC;
loc_82FBE890:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fcf978
	sub_82FCF978(ctx, base);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// bl 0x82fbc468
	sub_82FBC468(ctx, base);
	// lwz r11,1240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(1240) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fbe890
	if (cr6.lt) goto loc_82FBE890;
loc_82FBE8BC:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / r19.u32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe8e4
	if (cr6.eq) goto loc_82FBE8E4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82FBE8E4:
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fbcf30
	sub_82FBCF30(ctx, base);
loc_82FBE904:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stfs f28,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r25.u32 + 40, temp.u32);
	// stfs f27,52(r25)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r25.u32 + 52, temp.u32);
	// stb r14,47(r25)
	PPC_STORE_U8(r25.u32 + 47, r14.u8);
	// stfs f26,56(r25)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r25.u32 + 56, temp.u32);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// stb r11,48(r25)
	PPC_STORE_U8(r25.u32 + 48, r11.u8);
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
loc_82FBE92C:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbea64
	if (cr6.eq) goto loc_82FBEA64;
	// addi r11,r25,88
	r11.s64 = r25.s64 + 88;
	// stb r29,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r29.u8);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// addi r3,r25,60
	ctx.r3.s64 = r25.s64 + 60;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + int32_t(20) );
	// bl 0x82fc0478
	sub_82FC0478(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(12) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbe984
	if (cr6.eq) goto loc_82FBE984;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// fdivs f1,f23,f24
	ctx.f1.f64 = double(float(f23.f64 / f24.f64));
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// b 0x82fbe99c
	goto loc_82FBE99C;
loc_82FBE984:
	// lbz r11,45(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 45);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbe99c
	if (!cr0.eq) goto loc_82FBE99C;
	// lwz r11,8(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(8) );
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// stw r11,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, r11.u32);
loc_82FBE99C:
	// lbz r11,45(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 45);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,64(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + int32_t(64) );
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(36) );
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// bl 0x82fbc598
	sub_82FBC598(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// b 0x82fbea64
	goto loc_82FBEA64;
loc_82FBE9C8:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + int32_t(20) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(20) );
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28) );
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbea64
	if (!cr6.gt) goto loc_82FBEA64;
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82FBEA20:
	// lwz r3,20(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(20) );
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = rotl64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(24) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fbea20
	if (cr6.lt) goto loc_82FBEA20;
loc_82FBEA64:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca753c
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82FBD7B8) {
	__imp__sub_82FBD7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEA78) {
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
	// bl 0x82fbd3d8
	sub_82FBD3D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbeaac
	if (cr6.eq) goto loc_82FBEAAC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBEAAC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbeabc
	if (cr0.eq) goto loc_82FBEABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBEABC:
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

PPC_WEAK_FUNC(sub_82FBEA78) {
	__imp__sub_82FBEA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEAD8) {
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
	// bl 0x82fbd310
	sub_82FBD310(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbeb0c
	if (cr6.eq) goto loc_82FBEB0C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBEB0C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbeb1c
	if (cr0.eq) goto loc_82FBEB1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBEB1C:
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

PPC_WEAK_FUNC(sub_82FBEAD8) {
	__imp__sub_82FBEAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEB38) {
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
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r26,20(r7)
	r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(20) );
	// lvx128 v62,r0,r21
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r21.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v62.f32, simd::mul_f32(simd::load_f32_aligned(v63.f32), simd::load_f32_aligned(v62.f32)));
	// lvx128 v61,r21,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r21.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v63,v63,v61
	simd::store_f32_aligned(v63.f32, simd::mul_f32(simd::load_f32_aligned(v63.f32), simd::load_f32_aligned(v61.f32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v62), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v63,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v63), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bgt cr6,0x82fbec0c
	if (cr6.gt) goto loc_82FBEC0C;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2364);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82fbec10
	if (!cr6.lt) goto loc_82FBEC10;
loc_82FBEC0C:
	// li r20,1
	r20.s64 = 1;
loc_82FBEC10:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// li r24,1
	r24.s64 = 1;
	// li r16,0
	r16.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbee40
	if (!cr6.gt) goto loc_82FBEE40;
	// li r28,0
	r28.s64 = 0;
loc_82FBEC30:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82fbec94
	if (cr6.eq) goto loc_82FBEC94;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mulli r10,r11,464
	ctx.r10.s64 = r11.s64 * 464;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(448) );
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82fbb820
	sub_82FBB820(ctx, base);
	// b 0x82fbee28
	goto loc_82FBEE28;
loc_82FBEC94:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbed0c
	if (cr0.eq) goto loc_82FBED0C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// beq cr6,0x82fbeccc
	if (cr6.eq) goto loc_82FBECCC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82fc0478
	sub_82FC0478(ctx, base);
	// b 0x82fbed08
	goto loc_82FBED08;
loc_82FBECCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// beq cr6,0x82fbecdc
	if (cr6.eq) goto loc_82FBECDC;
	// li r11,0
	r11.s64 = 0;
loc_82FBECDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbed08
	if (cr6.eq) goto loc_82FBED08;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBED08:
	// li r24,0
	r24.s64 = 0;
loc_82FBED0C:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbed20
	if (cr6.eq) goto loc_82FBED20;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82FBED20:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// li r30,0
	r30.s64 = 0;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbeda8
	if (!cr6.gt) goto loc_82FBEDA8;
	// rlwinm r29,r22,8,0,23
	r29.u64 = rotl64(r22.u32 | (r22.u64 << 32), 8) & 0xFFFFFF00;
loc_82FBED38:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bge cr6,0x82fbeda8
	if (!cr6.lt) goto loc_82FBEDA8;
	// lwz r6,4(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82fbed58
	if (cr6.eq) goto loc_82FBED58;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// b 0x82fbed5c
	goto loc_82FBED5C;
loc_82FBED58:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82FBED5C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + r29.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x82fbc598
	sub_82FBC598(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82fbed38
	if (cr6.lt) goto loc_82FBED38;
loc_82FBEDA8:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbee2c
	if (cr6.eq) goto loc_82FBEE2C;
	// li r29,0
	r29.s64 = 0;
	// mulli r30,r23,96
	r30.s64 = r23.s64 * 96;
loc_82FBEDC4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bge cr6,0x82fbee28
	if (!cr6.lt) goto loc_82FBEE28;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 23);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stb r17,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r17.u8);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r5,r11,r8
	ctx.r5.u64 = r11.u64 + ctx.r8.u64;
	// bl 0x82fbd7b8
	sub_82FBD7B8(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fbedc4
	if (cr6.lt) goto loc_82FBEDC4;
loc_82FBEE28:
	// li r24,1
	r24.s64 = 1;
loc_82FBEE2C:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// blt cr6,0x82fbec30
	if (cr6.lt) goto loc_82FBEC30;
loc_82FBEE40:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c08
	return;
}

PPC_WEAK_FUNC(sub_82FBEB38) {
	__imp__sub_82FBEB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEE48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbee98
	if (!cr6.eq) goto loc_82FBEE98;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbee90
	if (cr0.eq) goto loc_82FBEE90;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// b 0x82fbee94
	goto loc_82FBEE94;
loc_82FBEE90:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82FBEE94:
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
loc_82FBEE98:
	// lwz r27,108(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82fbd3d8
	sub_82FBD3D8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mulli r11,r29,464
	r11.s64 = r29.s64 * 464;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-464
	ctx.r3.s64 = r11.s64 + -464;
	// bl 0x82fbc3f8
	sub_82FBC3F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82fbd4b8
	sub_82FBD4B8(ctx, base);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,21(r30)
	PPC_STORE_U8(r30.u32 + 21, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBEE48) {
	__imp__sub_82FBEE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEF08) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,112(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(112) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fbef58
	if (!cr6.eq) goto loc_82FBEF58;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fbef50
	if (cr0.eq) goto loc_82FBEF50;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// b 0x82fbef54
	goto loc_82FBEF54;
loc_82FBEF50:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82FBEF54:
	// stw r11,112(r27)
	PPC_STORE_U32(r27.u32 + 112, r11.u32);
loc_82FBEF58:
	// lwz r3,112(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(112) );
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x82fbd310
	sub_82FBD310(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbefac
	if (!cr6.gt) goto loc_82FBEFAC;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82FBEF78:
	// lwz r9,112(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(112) );
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fbef78
	if (cr6.lt) goto loc_82FBEF78;
loc_82FBEFAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBEF08) {
	__imp__sub_82FBEF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBEFB8) {
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
	// bge cr6,0x82fbeffc
	if (!cr6.lt) goto loc_82FBEFFC;
	// mulli r30,r28,96
	r30.s64 = r28.s64 * 96;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82FBEFE4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82fbd6e8
	sub_82FBD6E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// bne 0x82fbefe4
	if (!cr0.eq) goto loc_82FBEFE4;
loc_82FBEFFC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbf050
	if (!cr6.eq) goto loc_82FBF050;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fbf02c
	if (cr0.eq) goto loc_82FBF02C;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82fbf024
	if (cr0.eq) goto loc_82FBF024;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fbf078
	if (!cr6.eq) goto loc_82FBF078;
loc_82FBF024:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fbf078
	if (!cr0.eq) goto loc_82FBF078;
loc_82FBF02C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf044
	if (cr6.eq) goto loc_82FBF044;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF044:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82fbf078
	goto loc_82FBF078;
loc_82FBF050:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbf068
	if (cr6.gt) goto loc_82FBF068;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fbf078
	if (cr6.gt) goto loc_82FBF078;
loc_82FBF068:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82fbc9e0
	sub_82FBC9E0(ctx, base);
loc_82FBF078:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82fbf0a4
	if (!cr6.lt) goto loc_82FBF0A4;
	// mulli r31,r27,96
	r31.s64 = r27.s64 * 96;
	// subf r30,r27,r28
	r30.s64 = r28.s64 - r27.s64;
loc_82FBF088:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add. r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fbf098
	if (cr0.eq) goto loc_82FBF098;
	// bl 0x82fbd638
	sub_82FBD638(ctx, base);
loc_82FBF098:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,96
	r31.s64 = r31.s64 + 96;
	// bne 0x82fbf088
	if (!cr0.eq) goto loc_82FBF088;
loc_82FBF0A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FBEFB8) {
	__imp__sub_82FBEFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF0B0) {
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
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x82fbccd8
	sub_82FBCCD8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// li r21,1
	r21.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r25,0
	r25.s64 = 0;
	// stb r21,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r21.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r22,r25
	r22.u64 = r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stb r10,309(r1)
	PPC_STORE_U8(ctx.r1.u32 + 309, ctx.r10.u8);
	// mr r23,r25
	r23.u64 = r25.u64;
	// stb r10,310(r1)
	PPC_STORE_U8(ctx.r1.u32 + 310, ctx.r10.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r10,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r10.u8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// lbz r11,76(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 76);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r11.u32);
	// bl 0x82fd04d8
	sub_82FD04D8(ctx, base);
	// lwz r11,588(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(588) );
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bgt cr6,0x82fbf768
	if (cr6.gt) goto loc_82FBF768;
	// bl 0x82fcbd08
	sub_82FCBD08(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// mr r27,r25
	r27.u64 = r25.u64;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r28,r10,28,31,31
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// beq 0x82fbf170
	if (cr0.eq) goto loc_82FBF170;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm. r11,r11,0,23,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// bne 0x82fbf174
	if (!cr0.eq) goto loc_82FBF174;
loc_82FBF170:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82FBF174:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf1f0
	if (cr0.eq) goto loc_82FBF1F0;
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbf1f0
	if (!cr0.eq) goto loc_82FBF1F0;
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fbf1ac
	if (cr0.eq) goto loc_82FBF1AC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm. r11,r11,20,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf1ac
	if (cr0.eq) goto loc_82FBF1AC;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf1ec
	if (cr0.eq) goto loc_82FBF1EC;
loc_82FBF1AC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fbf1f0
	if (!cr0.eq) goto loc_82FBF1F0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fbf1f0
	if (cr6.eq) goto loc_82FBF1F0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82FBF1CC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x82fbf1ec
	if (!cr0.eq) goto loc_82FBF1EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbf1cc
	if (cr6.lt) goto loc_82FBF1CC;
	// b 0x82fbf1f0
	goto loc_82FBF1F0;
loc_82FBF1EC:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82FBF1F0:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf414
	if (cr0.eq) goto loc_82FBF414;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r27,r25
	r27.u64 = r25.u64;
	// bl 0x82fd0790
	sub_82FD0790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0c08
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,3204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3204);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82fd0568
	sub_82FD0568(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,56(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// bl 0x82fd05a8
	sub_82FD05A8(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bgt cr6,0x82fbf400
	if (cr6.gt) goto loc_82FBF400;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82fbf2b4
	if (!cr6.eq) goto loc_82FBF2B4;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// beq 0x82fbf2b4
	if (cr0.eq) goto loc_82FBF2B4;
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbf2ac
	if (!cr0.eq) goto loc_82FBF2AC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fbf2b4
	if (cr6.eq) goto loc_82FBF2B4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82FBF28C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x82fbf2ac
	if (!cr0.eq) goto loc_82FBF2AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fbf28c
	if (cr6.lt) goto loc_82FBF28C;
	// b 0x82fbf2b4
	goto loc_82FBF2B4;
loc_82FBF2AC:
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r21,23(r30)
	PPC_STORE_U8(r30.u32 + 23, r21.u8);
loc_82FBF2B4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
	// lbz r11,296(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fbf2f8
	if (cr0.eq) goto loc_82FBF2F8;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82fbf2f8
	if (cr6.eq) goto loc_82FBF2F8;
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fd1910
	sub_82FD1910(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82fbf334
	goto loc_82FBF334;
loc_82FBF2F8:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fbd140
	sub_82FBD140(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r5,r11,-256
	ctx.r5.s64 = r11.s64 + -256;
	// bl 0x82fd1330
	sub_82FD1330(ctx, base);
loc_82FBF334:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fbf394
	if (cr6.eq) goto loc_82FBF394;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fbf394
	if (cr6.eq) goto loc_82FBF394;
loc_82FBF348:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
	// bl 0x82efc418
	sub_82EFC418(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// divwu r10,r3,r10
	ctx.r10.u32 = ctx.r3.u32 / ctx.r10.u32;
	// beq cr6,0x82fbf388
	if (cr6.eq) goto loc_82FBF388;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82FBF388:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fbf348
	if (cr6.lt) goto loc_82FBF348;
loc_82FBF394:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// ble cr6,0x82fbf3bc
	if (!cr6.gt) goto loc_82FBF3BC;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// bl 0x82fbd140
	sub_82FBD140(ctx, base);
	// b 0x82fbf404
	goto loc_82FBF404;
loc_82FBF3BC:
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// mr r23,r28
	r23.u64 = r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fbf3ec
	if (!cr6.eq) goto loc_82FBF3EC;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
loc_82FBF3EC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82fc0890
	sub_82FC0890(ctx, base);
	// mr r27,r21
	r27.u64 = r21.u64;
	// b 0x82fbf404
	goto loc_82FBF404;
loc_82FBF400:
	// stb r21,22(r30)
	PPC_STORE_U8(r30.u32 + 22, r21.u8);
loc_82FBF404:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0948
	sub_82FC0948(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fd08f8
	sub_82FD08F8(ctx, base);
loc_82FBF414:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf420
	if (cr0.eq) goto loc_82FBF420;
	// stb r21,21(r30)
	PPC_STORE_U8(r30.u32 + 21, r21.u8);
loc_82FBF420:
	// lbz r11,21(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbf5b8
	if (!cr0.eq) goto loc_82FBF5B8;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// lwz r28,588(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(588) );
	// lwz r27,56(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fbf458
	if (!cr6.eq) goto loc_82FBF458;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82fc0c58
	sub_82FC0C58(ctx, base);
loc_82FBF458:
	// add r31,r28,r27
	r31.u64 = r28.u64 + r27.u64;
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fc0608
	sub_82FC0608(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82fbf764
	if (!cr6.eq) goto loc_82FBF764;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fbf4e8
	if (cr6.eq) goto loc_82FBF4E8;
loc_82FBF484:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// rlwinm r11,r31,24,8,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFC;
	// lwz r6,600(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(600) );
	// rlwinm r10,r31,3,19,28
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0x1FF8;
	// add r5,r27,r31
	ctx.r5.u64 = r27.u64 + r31.u64;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwzx r11,r11,r6
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82fbf484
	if (cr6.lt) goto loc_82FBF484;
loc_82FBF4E8:
	// lwz r11,680(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(680) );
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbf5b8
	if (cr6.eq) goto loc_82FBF5B8;
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
loc_82FBF4FC:
	// lwz r11,692(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(692) );
	// rlwinm r9,r28,28,4,29
	ctx.r9.u64 = rotl64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r28,26
	ctx.r10.u64 = r28.u32 & 0x3F;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// bl 0x82fcf978
	sub_82FCF978(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fbf54c
	if (cr6.eq) goto loc_82FBF54C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-252) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x82fbf560
	if (cr6.eq) goto loc_82FBF560;
loc_82FBF54C:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82fbd140
	sub_82FBD140(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_82FBF560:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x82fbc468
	sub_82FBC468(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fbf5a4
	if (cr6.eq) goto loc_82FBF5A4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fbf5a4
	if (cr6.eq) goto loc_82FBF5A4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(740) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82FBF5A4:
	// lwz r11,680(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(680) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82fbf4fc
	if (cr6.lt) goto loc_82FBF4FC;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
loc_82FBF5B8:
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r26,104(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// ble cr6,0x82fbf5f8
	if (!cr6.gt) goto loc_82FBF5F8;
loc_82FBF5E4:
	// stbx r25,r26,r11
	PPC_STORE_U8(r26.u32 + r11.u32, r25.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fbf5e4
	if (cr6.lt) goto loc_82FBF5E4;
loc_82FBF5F8:
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbf73c
	if (!cr6.gt) goto loc_82FBF73C;
	// addi r25,r26,-1
	r25.s64 = r26.s64 + -1;
loc_82FBF60C:
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// lbzx r11,r28,r25
	r11.u64 = PPC_LOAD_U8(r28.u32 + r25.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fbf728
	if (!cr0.eq) goto loc_82FBF728;
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// rlwinm r9,r29,28,4,29
	ctx.r9.u64 = rotl64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r29,26
	ctx.r10.u64 = r29.u32 & 0x3F;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82fbf728
	if (cr6.lt) goto loc_82FBF728;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fbf728
	if (!cr6.gt) goto loc_82FBF728;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fbefb8
	sub_82FBEFB8(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stb r9,-52(r11)
	PPC_STORE_U8(r11.u32 + -52, ctx.r9.u8);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-96
	ctx.r3.s64 = r11.s64 + -96;
	// bl 0x82fbd510
	sub_82FBD510(ctx, base);
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82fbf728
	if (!cr6.lt) goto loc_82FBF728;
loc_82FBF6B0:
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(40) );
	// rlwinm r9,r29,28,4,29
	ctx.r9.u64 = rotl64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r29,26
	ctx.r10.u64 = r29.u32 & 0x3F;
	// lwz r8,20(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82fbf718
	if (!cr6.eq) goto loc_82FBF718;
	// stbx r21,r26,r29
	PPC_STORE_U8(r26.u32 + r29.u32, r21.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82fbf718
	if (cr6.lt) goto loc_82FBF718;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82fbf718
	if (!cr6.gt) goto loc_82FBF718;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-96
	ctx.r3.s64 = r11.s64 + -96;
	// bl 0x82fbd510
	sub_82FBD510(ctx, base);
loc_82FBF718:
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fbf6b0
	if (cr6.lt) goto loc_82FBF6B0;
loc_82FBF728:
	// lwz r11,28(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82fbf60c
	if (cr6.lt) goto loc_82FBF60C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
loc_82FBF73C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82fbd4b8
	sub_82FBD4B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf764
	if (cr6.eq) goto loc_82FBF764;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF764:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
loc_82FBF768:
	// bl 0x82fbcf30
	sub_82FBCF30(ctx, base);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82FBF0B0) {
	__imp__sub_82FBF0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF778) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// b 0x82fbf0b0
	sub_82FBF0B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FBF778) {
	__imp__sub_82FBF778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82ca2be8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,27012
	r11.s64 = r11.s64 + 27012;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x82fc0c08
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r30,22(r31)
	PPC_STORE_U8(r31.u32 + 22, r30.u8);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r30,23(r31)
	PPC_STORE_U8(r31.u32 + 23, r30.u8);
	// stb r28,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r28.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FBF780) {
	__imp__sub_82FBF780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF848) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r11,r11,27012
	r11.s64 = r11.s64 + 27012;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf894
	if (cr6.eq) goto loc_82FBF894;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FBF894:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf8b0
	if (cr6.eq) goto loc_82FBF8B0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF8B0:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf8c4
	if (cr6.eq) goto loc_82FBF8C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbea78
	sub_82FBEA78(ctx, base);
loc_82FBF8C4:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf8d8
	if (cr6.eq) goto loc_82FBF8D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbead8
	sub_82FBEAD8(ctx, base);
loc_82FBF8D8:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd238
	sub_82FBD238(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf8f4
	if (cr6.eq) goto loc_82FBF8F4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF8F4:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82fc0948
	sub_82FC0948(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbefb8
	sub_82FBEFB8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf918
	if (cr6.eq) goto loc_82FBF918;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF918:
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd140
	sub_82FBD140(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbf934
	if (cr6.eq) goto loc_82FBF934;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF934:
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

PPC_WEAK_FUNC(sub_82FBF848) {
	__imp__sub_82FBF848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF950) {
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
	// bl 0x82fbf848
	sub_82FBF848(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fbf980
	if (cr0.eq) goto loc_82FBF980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBF980:
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

PPC_WEAK_FUNC(sub_82FBF950) {
	__imp__sub_82FBF950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2680);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBF9A0) {
	__imp__sub_82FBF9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBF9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// lfs f13,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBF9C0) {
	__imp__sub_82FBF9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82FBFA74:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r10,3,21,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfa9c
	if (!cr6.lt) goto loc_82FBFA9C;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBFA9C:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfab0
	if (!cr6.lt) goto loc_82FBFAB0;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82FBFAB0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfac4
	if (!cr6.gt) goto loc_82FBFAC4;
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82FBFAC4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfad8
	if (!cr6.gt) goto loc_82FBFAD8;
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82FBFAD8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82fbfa74
	if (cr6.lt) goto loc_82FBFA74;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBFA10) {
	__imp__sub_82FBFA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82FBFB00:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r10,3,21,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f3
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f1.f64), float(ctx.f3.f64)));
	// fmadds f13,f13,f2,f4
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f2.f64), float(ctx.f4.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82fbfb00
	if (cr6.lt) goto loc_82FBFB00;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBFAF0) {
	__imp__sub_82FBFAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFB40) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fbfbb0
	if (cr6.lt) goto loc_82FBFBB0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fbfb9c
	if (cr6.eq) goto loc_82FBFB9C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fbfb9c
	if (cr6.eq) goto loc_82FBFB9C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FBFB9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82FBFBB0:
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBFB40) {
	__imp__sub_82FBFB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fbfc6c
	if (!cr6.gt) goto loc_82FBFC6C;
loc_82FBFBEC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r31,r11,26,6,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7F8;
	// lwz r11,20(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(20) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfc20
	if (!cr6.lt) goto loc_82FBFC20;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBFC20:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfc34
	if (!cr6.lt) goto loc_82FBFC34;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82FBFC34:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfc48
	if (!cr6.gt) goto loc_82FBFC48;
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82FBFC48:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfc5c
	if (!cr6.gt) goto loc_82FBFC5C;
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82FBFC5C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82fbfbec
	if (cr6.lt) goto loc_82FBFBEC;
loc_82FBFC6C:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBFBD8) {
	__imp__sub_82FBFBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFC78) {
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
	// mflr r12
	// bl 0x82ca2bdc
	// lwz r26,28(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fbfde4
	if (cr6.eq) goto loc_82FBFDE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r27,40(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// lfs f11,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
loc_82FBFCA0:
	// rlwinm r10,r31,28,4,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	r11.u64 = r31.u32 & 0x3F;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x82fbfdd8
	if (cr6.eq) goto loc_82FBFDD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82fbfdd8
	if (!cr6.gt) goto loc_82FBFDD8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
loc_82FBFCE4:
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r9,r7,26,6,29
	ctx.r9.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,26,6,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFC;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r7,3,21,28
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// ldx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// ldx r25,r11,r10
	r25.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// std r5,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r5.u64);
	// lfs f0,-76(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	f0.f64 = double(temp.f32);
	// std r25,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r25.u64);
	// lfs f12,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x82fbfdcc
	if (cr6.eq) goto loc_82FBFDCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fbfd4c
	if (!cr6.gt) goto loc_82FBFD4C;
	// ldx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r25
	r11.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfs f12,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f12.f64 = double(temp.f32);
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r11.u64);
	// lfs f0,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	f0.f64 = double(temp.f32);
loc_82FBFD4C:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82fbfdcc
	if (cr6.lt) goto loc_82FBFDCC;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bge cr6,0x82fbfdcc
	if (!cr6.lt) goto loc_82FBFDCC;
	// lfs f13,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f2,f0
	ctx.f10.f64 = static_cast<float>(ctx.f2.f64 - f0.f64);
	// lfs f9,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f1,f13
	ctx.f8.f64 = static_cast<float>(ctx.f1.f64 - ctx.f13.f64);
	// fsubs f13,f13,f9
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f9.f64);
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f0,f8,f0,f13
	f0.f64 = double(std::fma(float(ctx.f8.f64), float(f0.f64), -float(ctx.f13.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82fbfdcc
	if (!cr6.gt) goto loc_82FBFDCC;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fbfdb8
	if (cr0.eq) goto loc_82FBFDB8;
	// blt cr6,0x82fbfda0
	if (cr6.lt) goto loc_82FBFDA0;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mullw r11,r11,r5
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
loc_82FBFDA0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82fbfdcc
	if (cr6.lt) goto loc_82FBFDCC;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mullw r11,r11,r5
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
	// b 0x82fbfdcc
	goto loc_82FBFDCC;
loc_82FBFDB8:
	// blt cr6,0x82fbfdc0
	if (cr6.lt) goto loc_82FBFDC0;
	// xori r29,r29,1
	r29.u64 = r29.u64 ^ 1;
loc_82FBFDC0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82fbfdcc
	if (cr6.lt) goto loc_82FBFDCC;
	// xori r29,r29,1
	r29.u64 = r29.u64 ^ 1;
loc_82FBFDCC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x82fbfce4
	if (!cr0.eq) goto loc_82FBFCE4;
loc_82FBFDD8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x82fbfca0
	if (cr6.lt) goto loc_82FBFCA0;
loc_82FBFDE4:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FBFC78) {
	__imp__sub_82FBFC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFDF8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r30,r11,26,6,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fbfe2c
	if (cr6.lt) goto loc_82FBFE2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fbfb40
	sub_82FBFB40(ctx, base);
loc_82FBFE2C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mulli r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_82FBFDF8) {
	__imp__sub_82FBFDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFE60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82fbfdf8
	sub_82FBFDF8(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

PPC_WEAK_FUNC(sub_82FBFE60) {
	__imp__sub_82FBFE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFEB0) {
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
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82fbfe60
	sub_82FBFE60(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// mulli r10,r11,24
	ctx.r10.s64 = r11.s64 * 24;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// blt cr6,0x82fbff40
	if (cr6.lt) goto loc_82FBFF40;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82fbff30
	if (!cr6.lt) goto loc_82FBFF30;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_82FBFF30:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82fbff40
	if (!cr6.gt) goto loc_82FBFF40;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
loc_82FBFF40:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82fbff68
	if (cr6.lt) goto loc_82FBFF68;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82fbff58
	if (!cr6.lt) goto loc_82FBFF58;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
loc_82FBFF58:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x82fbff68
	if (!cr6.gt) goto loc_82FBFF68;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
loc_82FBFF68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FBFEB0) {
	__imp__sub_82FBFEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82fbfeb0
	sub_82FBFEB0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FBFF70) {
	__imp__sub_82FBFF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FBFFD8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc004c
	if (cr6.eq) goto loc_82FC004C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82fc004c
	if (!cr6.gt) goto loc_82FC004C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// rlwinm r9,r11,26,6,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_82FC004C:
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

PPC_WEAK_FUNC(sub_82FBFFD8) {
	__imp__sub_82FBFFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0060) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
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
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca74fc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f5
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f5.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f6
	f29.f64 = ctx.f6.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32252
	r30.s64 = -2113667072;
	// fadds f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f31,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f31.f64 = double(temp.f32);
	// fsubs f0,f30,f1
	f0.f64 = static_cast<float>(f30.f64 - ctx.f1.f64);
	// fsubs f12,f4,f29
	ctx.f12.f64 = static_cast<float>(ctx.f4.f64 - f29.f64);
	// fsubs f13,f29,f2
	ctx.f13.f64 = static_cast<float>(f29.f64 - ctx.f2.f64);
	// fsubs f10,f3,f30
	ctx.f10.f64 = static_cast<float>(ctx.f3.f64 - f30.f64);
	// fadds f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 + f30.f64));
	// fadds f6,f4,f29
	ctx.f6.f64 = double(float(ctx.f4.f64 + f29.f64));
	// b 0x82fc011c
	goto loc_82FC011C;
loc_82FC00B8:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82fc0144
	if (!cr6.gt) goto loc_82FC0144;
	// fadds f0,f28,f3
	f0.f64 = double(float(f28.f64 + ctx.f3.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f13,f27,f4
	ctx.f13.f64 = double(float(f27.f64 + ctx.f4.f64));
	// fmuls f26,f0,f31
	f26.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f25,f13,f31
	f25.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmr f5,f26
	ctx.f5.f64 = f26.f64;
	// fmr f6,f25
	ctx.f6.f64 = f25.f64;
	// bl 0x82fc0060
	sub_82FC0060(ctx, base);
	// fsubs f12,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = static_cast<float>(f27.f64 - f29.f64);
	// fsubs f0,f30,f26
	f0.f64 = static_cast<float>(f30.f64 - f26.f64);
	// fsubs f10,f28,f30
	ctx.f10.f64 = static_cast<float>(f28.f64 - f30.f64);
	// fsubs f13,f29,f25
	ctx.f13.f64 = static_cast<float>(f29.f64 - f25.f64);
	// fadds f9,f26,f28
	ctx.f9.f64 = double(float(f26.f64 + f28.f64));
	// fadds f8,f25,f27
	ctx.f8.f64 = double(float(f25.f64 + f27.f64));
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(f28.f64 + f30.f64));
	// fadds f6,f27,f29
	ctx.f6.f64 = double(float(f27.f64 + f29.f64));
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
loc_82FC011C:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f11,27016(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 27016);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f6,f31
	f27.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmuls f28,f7,f31
	f28.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f3,f9,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmsubs f12,f10,f13,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f10.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82fc00b8
	if (cr6.gt) goto loc_82FC00B8;
loc_82FC0144:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7548
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

PPC_WEAK_FUNC(sub_82FC0060) {
	__imp__sub_82FC0060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0188) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lfs f11,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r8,r11,26,6,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7F8;
	// fsubs f12,f6,f13
	ctx.f12.f64 = static_cast<float>(ctx.f6.f64 - ctx.f13.f64);
	// fsubs f10,f5,f0
	ctx.f10.f64 = static_cast<float>(ctx.f5.f64 - f0.f64);
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f0,f1
	ctx.f9.f64 = static_cast<float>(f0.f64 - ctx.f1.f64);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f13,f2
	ctx.f8.f64 = static_cast<float>(ctx.f13.f64 - ctx.f2.f64);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f12,f8,f10,f12
	ctx.f12.f64 = double(std::fma(float(ctx.f8.f64), float(ctx.f10.f64), -float(ctx.f12.f64)));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82fc0200
	if (!cr6.lt) goto loc_82FC0200;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82FC0200:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f11,27016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27016);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82fc0234
	if (!cr6.lt) goto loc_82FC0234;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82fc0244
	goto loc_82FC0244;
loc_82FC0234:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f13.f64;
	// fmr f3,f0
	ctx.f3.f64 = f0.f64;
	// bl 0x82fc0060
	sub_82FC0060(ctx, base);
loc_82FC0244:
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

PPC_WEAK_FUNC(sub_82FC0188) {
	__imp__sub_82FC0188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0258) {
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
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0258) {
	__imp__sub_82FC0258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lha r11,0(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 0));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lha r11,2(r4)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 2));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0270) {
	__imp__sub_82FC0270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC02A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC02A8) {
	__imp__sub_82FC02A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC02B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC02B8) {
	__imp__sub_82FC02B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC02D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lhz r11,-10(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC02D0) {
	__imp__sub_82FC02D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC02F8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC02F8) {
	__imp__sub_82FC02F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0300) {
	__imp__sub_82FC0300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lhz r11,-10(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0308) {
	__imp__sub_82FC0308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lhz r11,-10(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0338) {
	__imp__sub_82FC0338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0360) {
	PPC_FUNC_PROLOGUE();
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0360) {
	__imp__sub_82FC0360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0368) {
	__imp__sub_82FC0368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0370) {
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
	// addi r11,r11,27020
	r11.s64 = r11.s64 + 27020;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82fc039c
	if (cr0.eq) goto loc_82FC039C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FC039C:
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

PPC_WEAK_FUNC(sub_82FC0370) {
	__imp__sub_82FC0370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC03B8) {
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
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc0464
	if (!cr0.eq) goto loc_82FC0464;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// bne cr6,0x82fc0408
	if (!cr6.eq) goto loc_82FC0408;
	// bl 0x82ef6ea0
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// b 0x82fc0424
	goto loc_82FC0424;
loc_82FC0408:
	// bl 0x82ef6ea0
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
loc_82FC0424:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc0464
	if (cr6.eq) goto loc_82FC0464;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rotlwi r3,r3,0
	ctx.r3.u64 = rotl32(ctx.r3.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82FC0464:
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

PPC_WEAK_FUNC(sub_82FC03B8) {
	__imp__sub_82FC03B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0478) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc04a4
	if (!cr0.eq) goto loc_82FC04A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82fc03b8
	sub_82FC03B8(ctx, base);
loc_82FC04A4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC0478) {
	__imp__sub_82FC0478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC04E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC04E0) {
	__imp__sub_82FC04E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0500) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc0594
	if (!cr0.eq) goto loc_82FC0594;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// bne cr6,0x82fc0548
	if (!cr6.eq) goto loc_82FC0548;
	// bl 0x82ef6ea0
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82fc055c
	goto loc_82FC055C;
loc_82FC0548:
	// bl 0x82ef6ea0
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
loc_82FC055C:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc0594
	if (cr6.eq) goto loc_82FC0594;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rotlwi r3,r3,0
	ctx.r3.u64 = rotl32(ctx.r3.u32, 0);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82FC0594:
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

PPC_WEAK_FUNC(sub_82FC0500) {
	__imp__sub_82FC0500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC05A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc05d4
	if (!cr0.eq) goto loc_82FC05D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82fc0500
	sub_82FC0500(ctx, base);
loc_82FC05D4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC05A8) {
	__imp__sub_82FC05A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0608) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82fc06a0
	if (cr6.eq) goto loc_82FC06A0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82fc06a0
	if (cr6.eq) goto loc_82FC06A0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x82fc069c
	if (!cr6.gt) goto loc_82FC069C;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82fc069c
	if (!cr6.gt) goto loc_82FC069C;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82fc06a0
	if (cr0.eq) goto loc_82FC06A0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc0694
	if (cr6.eq) goto loc_82FC0694;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc0694
	if (cr6.eq) goto loc_82FC0694;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC0694:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_82FC069C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82FC06A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC0608) {
	__imp__sub_82FC0608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC06A8) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82fc0764
	if (cr6.eq) goto loc_82FC0764;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fc0764
	if (cr6.eq) goto loc_82FC0764;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82fc06e8
	if (!cr6.lt) goto loc_82FC06E8;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82FC06E8:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fc0700
	if (cr6.gt) goto loc_82FC0700;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc0764
	if (cr0.eq) goto loc_82FC0764;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82fc0764
	if (cr6.eq) goto loc_82FC0764;
loc_82FC0700:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fc071c
	if (cr6.eq) goto loc_82FC071C;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82fc0720
	goto loc_82FC0720;
loc_82FC071C:
	// li r29,0
	r29.s64 = 0;
loc_82FC0720:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fc0764
	if (cr6.eq) goto loc_82FC0764;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc075c
	if (cr6.eq) goto loc_82FC075C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc075c
	if (cr6.eq) goto loc_82FC075C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC075C:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_82FC0764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC06A8) {
	__imp__sub_82FC06A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0770) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc0794
	if (cr6.eq) goto loc_82FC0794;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC0794:
	// li r11,0
	r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

PPC_WEAK_FUNC(sub_82FC0770) {
	__imp__sub_82FC0770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC07B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82fc07f4
	if (cr6.gt) goto loc_82FC07F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc06a8
	sub_82FC06A8(ctx, base);
loc_82FC07F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82fc0830
	if (!cr6.gt) goto loc_82FC0830;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82fc0870
	goto loc_82FC0870;
loc_82FC0830:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-27408
	r31.s64 = r11.s64 + -27408;
	// lwz r11,-27404(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-27404) );
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fc0868
	if (!cr0.eq) goto loc_82FC0868;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,27020
	ctx.r9.s64 = ctx.r9.s64 + 27020;
	// stw r11,-27404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27404, r11.u32);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7160
	ctx.r3.s64 = r11.s64 + 7160;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82FC0868:
	// li r11,0
	r11.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_82FC0870:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_82FC07B8) {
	__imp__sub_82FC07B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0890) {
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
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82fc092c
	if (!cr6.eq) goto loc_82FC092C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fc092c
	if (cr6.eq) goto loc_82FC092C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82fc06a8
	sub_82FC06A8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82fc092c
	if (cr6.lt) goto loc_82FC092C;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc092c
	if (cr6.eq) goto loc_82FC092C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
loc_82FC092C:
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

PPC_WEAK_FUNC(sub_82FC0890) {
	__imp__sub_82FC0890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82ef6f38
	sub_82EF6F38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FC0948) {
	__imp__sub_82FC0948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0958) {
	__imp__sub_82FC0958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0960) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc0984
	if (cr6.eq) goto loc_82FC0984;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC0984:
	// li r11,0
	r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

PPC_WEAK_FUNC(sub_82FC0960) {
	__imp__sub_82FC0960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC09B0) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82fc0a2c
	if (!cr6.gt) goto loc_82FC0A2C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc09e4
	if (!cr6.eq) goto loc_82FC09E4;
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// b 0x82fc09ec
	goto loc_82FC09EC;
loc_82FC09E4:
	// rlwinm r11,r11,30,2,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
loc_82FC09EC:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82fc0a28
	if (cr6.eq) goto loc_82FC0A28;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc0a28
	if (cr6.eq) goto loc_82FC0A28;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC0A28:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82FC0A2C:
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

PPC_WEAK_FUNC(sub_82FC09B0) {
	__imp__sub_82FC09B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0A48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fc09b0
	sub_82FC09B0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sth r29,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, r29.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC0A48) {
	__imp__sub_82FC0A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0A88) {
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
	// lis r31,-31946
	r31.s64 = -2093613056;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-27380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27380) );
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fc0ad8
	if (!cr0.eq) goto loc_82FC0AD8;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r10,r10,27020
	ctx.r10.s64 = ctx.r10.s64 + 27020;
	// stw r11,-27380(r31)
	PPC_STORE_U32(r31.u32 + -27380, r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27384(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27384, ctx.r10.u32);
	// addi r3,r8,7136
	ctx.r3.s64 = ctx.r8.s64 + 7136;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27380) );
loc_82FC0AD8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fc0b08
	if (!cr0.eq) goto loc_82FC0B08;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// addi r10,r10,27052
	ctx.r10.s64 = ctx.r10.s64 + 27052;
	// stw r11,-27380(r31)
	PPC_STORE_U32(r31.u32 + -27380, r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27388(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27388, ctx.r10.u32);
	// addi r3,r8,7256
	ctx.r3.s64 = ctx.r8.s64 + 7256;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27380) );
loc_82FC0B08:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fc0b38
	if (!cr0.eq) goto loc_82FC0B38;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// addi r10,r10,27084
	ctx.r10.s64 = ctx.r10.s64 + 27084;
	// stw r11,-27380(r31)
	PPC_STORE_U32(r31.u32 + -27380, r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27392(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27392, ctx.r10.u32);
	// addi r3,r8,7232
	ctx.r3.s64 = ctx.r8.s64 + 7232;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27380) );
loc_82FC0B38:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fc0b68
	if (!cr0.eq) goto loc_82FC0B68;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// addi r10,r10,27116
	ctx.r10.s64 = ctx.r10.s64 + 27116;
	// stw r11,-27380(r31)
	PPC_STORE_U32(r31.u32 + -27380, r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27396(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27396, ctx.r10.u32);
	// addi r3,r8,7208
	ctx.r3.s64 = ctx.r8.s64 + 7208;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-27380) );
loc_82FC0B68:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82fc0b94
	if (!cr0.eq) goto loc_82FC0B94;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// addi r10,r10,27148
	ctx.r10.s64 = ctx.r10.s64 + 27148;
	// stw r11,-27380(r31)
	PPC_STORE_U32(r31.u32 + -27380, r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27400, ctx.r10.u32);
	// addi r3,r8,7184
	ctx.r3.s64 = ctx.r8.s64 + 7184;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82FC0B94:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// blt cr6,0x82fc0be8
	if (cr6.lt) goto loc_82FC0BE8;
	// beq cr6,0x82fc0bdc
	if (cr6.eq) goto loc_82FC0BDC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x82fc0bd0
	if (cr6.lt) goto loc_82FC0BD0;
	// beq cr6,0x82fc0bc4
	if (cr6.eq) goto loc_82FC0BC4;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(r30.u32, 5, xer);
	// bge cr6,0x82fc0be8
	if (!cr6.lt) goto loc_82FC0BE8;
	// addi r11,r11,-3492
	r11.s64 = r11.s64 + -3492;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BC4:
	// addi r11,r11,-3492
	r11.s64 = r11.s64 + -3492;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BD0:
	// addi r11,r11,-3492
	r11.s64 = r11.s64 + -3492;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BDC:
	// addi r11,r11,-3492
	r11.s64 = r11.s64 + -3492;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BE8:
	// addi r3,r11,-3492
	ctx.r3.s64 = r11.s64 + -3492;
loc_82FC0BEC:
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

PPC_WEAK_FUNC(sub_82FC0A88) {
	__imp__sub_82FC0A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0C08) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	r31.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stb r31,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r31.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x82fc0a88
	sub_82FC0A88(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fc0608
	sub_82FC0608(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC0C08) {
	__imp__sub_82FC0C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0C58) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc0c84
	if (cr6.eq) goto loc_82FC0C84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc0cb8
	goto loc_82FC0CB8;
loc_82FC0C84:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mullw r30,r11,r10
	r30.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82fc0a88
	sub_82FC0A88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// twllei r11,0
	// divwu r11,r30,r11
	r11.u32 = r30.u32 / r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82FC0CB8:
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

PPC_WEAK_FUNC(sub_82FC0C58) {
	__imp__sub_82FC0C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82fc0ce4
	if (!cr6.eq) goto loc_82FC0CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FC0CE4:
	// srawi r9,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82FC0CF0:
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82fc0d00
	if (!cr6.lt) goto loc_82FC0D00;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82FC0D00:
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r8
	ctx.r10.u64 = r11.u64 + ctx.r8.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// ble cr6,0x82fc0d2c
	if (!cr6.gt) goto loc_82FC0D2C;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x82fc0d50
	if (cr6.eq) goto loc_82FC0D50;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// b 0x82fc0cf0
	goto loc_82FC0CF0;
loc_82FC0D2C:
	// bge cr6,0x82fc0d58
	if (!cr6.lt) goto loc_82FC0D58;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,-4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// b 0x82fc0cf0
	goto loc_82FC0CF0;
loc_82FC0D50:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_82FC0D58:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82FC0D6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bne 0x82fc0d6c
	if (!cr0.eq) goto loc_82FC0D6C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0CD0) {
	__imp__sub_82FC0CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0D90) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x82fc0dcc
	if (!cr6.lt) goto loc_82FC0DCC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82fc0dd0
	if (cr6.eq) goto loc_82FC0DD0;
loc_82FC0DCC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FC0DD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0D90) {
	__imp__sub_82FC0D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0DE0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x82fc0d90
	sub_82FC0D90(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82fc0e18
	if (cr6.eq) goto loc_82FC0E18;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82fc0e1c
	if (cr6.eq) goto loc_82FC0E1C;
loc_82FC0E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC0E1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0DE0) {
	__imp__sub_82FC0DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc0e54
	if (cr6.eq) goto loc_82FC0E54;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// blr 
	return;
loc_82FC0E54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC0E30) {
	__imp__sub_82FC0E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0E60) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc0e8c
	if (!cr6.eq) goto loc_82FC0E8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc0f6c
	goto loc_82FC0F6C;
loc_82FC0E8C:
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r28,4(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// subfic r11,r11,6
	xer.ca = r11.u32 <= 6;
	r11.s64 = 6 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc0efc
	if (cr0.eq) goto loc_82FC0EFC;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82fc0f68
	if (!cr6.gt) goto loc_82FC0F68;
	// li r30,0
	r30.s64 = 0;
loc_82FC0EB8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82fc0f64
	if (cr6.eq) goto loc_82FC0F64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// blt cr6,0x82fc0eb8
	if (cr6.lt) goto loc_82FC0EB8;
	// b 0x82fc0f68
	goto loc_82FC0F68;
loc_82FC0EFC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc0f0c
	if (!cr6.eq) goto loc_82FC0F0C;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82FC0F0C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82fc0f68
	if (!cr6.gt) goto loc_82FC0F68;
	// li r30,0
	r30.s64 = 0;
loc_82FC0F1C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f11068
	sub_82F11068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fc0f64
	if (!cr0.eq) goto loc_82FC0F64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// blt cr6,0x82fc0f1c
	if (cr6.lt) goto loc_82FC0F1C;
	// b 0x82fc0f68
	goto loc_82FC0F68;
loc_82FC0F64:
	// mr r25,r31
	r25.u64 = r31.u64;
loc_82FC0F68:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82FC0F6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FC0E60) {
	__imp__sub_82FC0E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC0F78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82fc106c
	if (!cr6.lt) goto loc_82FC106C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x82fc106c
	if (!cr6.eq) goto loc_82FC106C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
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
	// beq 0x82fc106c
	if (cr0.eq) goto loc_82FC106C;
	// lbz r11,83(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc101c
	if (cr0.eq) goto loc_82FC101C;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// std r11,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,56(r31)
	PPC_STORE_U64(r31.u32 + 56, r11.u64);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r11,64(r31)
	PPC_STORE_U64(r31.u32 + 64, r11.u64);
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
loc_82FC101C:
	// lbz r11,82(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc1034
	if (cr0.eq) goto loc_82FC1034;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
loc_82FC1034:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fc1044
	if (cr6.eq) goto loc_82FC1044;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
loc_82FC1044:
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82fc1064
	if (cr6.eq) goto loc_82FC1064;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1064:
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_82FC106C:
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

PPC_WEAK_FUNC(sub_82FC0F78) {
	__imp__sub_82FC0F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1088) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc10f4
	if (cr6.eq) goto loc_82FC10F4;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82FC10AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82fc10d8
	if (cr6.eq) goto loc_82FC10D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc10e8
	if (cr0.eq) goto loc_82FC10E8;
loc_82FC10D8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
loc_82FC10E8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82fc10ac
	if (!cr0.eq) goto loc_82FC10AC;
loc_82FC10F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC1088) {
	__imp__sub_82FC1088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1100) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addic. r30,r28,-1
	xer.ca = r28.u32 > 0;
	r30.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82fc1180
	if (cr0.lt) goto loc_82FC1180;
	// rlwinm r29,r30,3,0,28
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_82FC112C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82fc1180
	if (!cr6.eq) goto loc_82FC1180;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82fc116c
	if (!cr0.eq) goto loc_82FC116C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82fc1174
	goto loc_82FC1174;
loc_82FC116C:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FC1174:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x82fc112c
	if (!cr0.lt) goto loc_82FC112C;
loc_82FC1180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FC1100) {
	__imp__sub_82FC1100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1190) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r28,20(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// beq cr6,0x82fc1410
	if (cr6.eq) goto loc_82FC1410;
	// li r25,0
	r25.s64 = 0;
	// mr r23,r11
	r23.u64 = r11.u64;
loc_82FC11CC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r11,120(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc13ec
	if (cr0.eq) goto loc_82FC13EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fc13ec
	if (!cr0.eq) goto loc_82FC13EC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fc1220
	if (cr6.eq) goto loc_82FC1220;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// ble cr6,0x82fc1220
	if (!cr6.gt) goto loc_82FC1220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// bl 0x82fb6868
	sub_82FB6868(ctx, base);
loc_82FC1220:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82fc1310
	if (!cr6.gt) goto loc_82FC1310;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc1310
	if (!cr6.eq) goto loc_82FC1310;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82FC1244:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bgt cr6,0x82fc12e8
	if (cr6.gt) goto loc_82FC12E8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// ld r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,22
	r11.s64 = r11.s64 + 22;
	// ld r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// ld r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r6,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r6.u64);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,22
	r11.s64 = r11.s64 + 22;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
loc_82FC12E8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82fc1244
	if (cr6.gt) goto loc_82FC1244;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82FC1310:
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc1374
	if (cr0.eq) goto loc_82FC1374;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc1374
	if (!cr6.eq) goto loc_82FC1374;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// ld r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// bl 0x82fb6748
	sub_82FB6748(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lhz r24,36(r29)
	r24.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// b 0x82fc13ec
	goto loc_82FC13EC;
loc_82FC1374:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(116) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lwz r11,80(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC13EC:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bne 0x82fc11cc
	if (!cr0.eq) goto loc_82FC11CC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fc1410
	if (cr6.eq) goto loc_82FC1410;
loc_82FC1400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fb6868
	sub_82FB6868(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x82fc1400
	if (!cr0.eq) goto loc_82FC1400;
loc_82FC1410:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82FC1190) {
	__imp__sub_82FC1190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1418) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82fc1480
	if (cr0.lt) goto loc_82FC1480;
	// rlwinm r29,r31,3,0,28
	r29.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82FC143C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r11,120(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc1474
	if (cr0.eq) goto loc_82FC1474;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82fc1480
	if (!cr6.lt) goto loc_82FC1480;
loc_82FC1474:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x82fc143c
	if (!cr0.lt) goto loc_82FC143C;
loc_82FC1480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FC1418) {
	__imp__sub_82FC1418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1488) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fc1500
	if (cr6.eq) goto loc_82FC1500;
	// li r29,0
	r29.s64 = 0;
loc_82FC14B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lbz r11,120(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc14f0
	if (cr0.eq) goto loc_82FC14F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82fc1500
	if (!cr6.lt) goto loc_82FC1500;
loc_82FC14F0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82fc14b4
	if (cr6.lt) goto loc_82FC14B4;
loc_82FC1500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FC1488) {
	__imp__sub_82FC1488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1508) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fc1608
	if (!cr6.gt) goto loc_82FC1608;
	// li r28,0
	r28.s64 = 0;
loc_82FC1530:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(132) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82fc1564
	if (cr6.lt) goto loc_82FC1564;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82fc1568
	if (!cr6.gt) goto loc_82FC1568;
loc_82FC1564:
	// li r11,0
	r11.s64 = 0;
loc_82FC1568:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc15f4
	if (cr0.eq) goto loc_82FC15F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc15f4
	if (cr6.eq) goto loc_82FC15F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ac50
	sub_82F6AC50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fc15f4
	if (cr6.lt) goto loc_82FC15F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FC15F4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82fc1530
	if (cr6.lt) goto loc_82FC1530;
loc_82FC1608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FC1508) {
	__imp__sub_82FC1508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1610) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82fc1650
	if (cr6.eq) goto loc_82FC1650;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1650:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc1670
	if (cr6.eq) goto loc_82FC1670;
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
loc_82FC1670:
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

PPC_WEAK_FUNC(sub_82FC1610) {
	__imp__sub_82FC1610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1690) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82fc16bc
	if (!cr6.eq) goto loc_82FC16BC;
	// bl 0x82f52428
	sub_82F52428(ctx, base);
	// b 0x82fc16f8
	goto loc_82FC16F8;
loc_82FC16BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r30,r29,3,0,28
	r30.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f2c088
	sub_82F2C088(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82FC16F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC1690) {
	__imp__sub_82FC1690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1700) {
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
	// bl 0x82f52428
	sub_82F52428(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82fc1754
	if (!cr6.lt) goto loc_82FC1754;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82FC1754:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r30,3,0,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fc1774
	if (cr0.eq) goto loc_82FC1774;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x82fc1610
	sub_82FC1610(ctx, base);
loc_82FC1774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC1700) {
	__imp__sub_82FC1700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1780) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(r26.s32, r25.s32, xer);
	// beq cr6,0x82fc18e0
	if (cr6.eq) goto loc_82FC18E0;
	// bl 0x82fc0d90
	sub_82FC0D90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x82fc17b8
	if (!cr6.eq) goto loc_82FC17B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc18e4
	goto loc_82FC18E4;
loc_82FC17B8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x82fc1860
	if (!cr6.lt) goto loc_82FC1860;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// bne cr6,0x82fc1860
	if (!cr6.eq) goto loc_82FC1860;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r28,r29,3,0,28
	r28.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fc1610
	sub_82FC1610(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fc1610
	sub_82FC1610(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc1610
	sub_82FC1610(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc1844
	if (cr6.eq) goto loc_82FC1844;
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
loc_82FC1844:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fc18c4
	if (cr6.eq) goto loc_82FC18C4;
	// stw r26,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r26.u32);
	// b 0x82fc18c4
	goto loc_82FC18C4;
loc_82FC1860:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r29,3,0,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82fc1610
	sub_82FC1610(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc1690
	sub_82FC1690(ctx, base);
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// bge cr6,0x82fc1894
	if (!cr6.lt) goto loc_82FC1894;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_82FC1894:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fc1700
	sub_82FC1700(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc18c4
	if (cr6.eq) goto loc_82FC18C4;
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
loc_82FC18C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fc18e0
	if (cr6.eq) goto loc_82FC18E0;
	// stw r25,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r25.u32);
loc_82FC18E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FC18E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FC1780) {
	__imp__sub_82FC1780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC18F0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,4(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fc194c
	if (cr6.eq) goto loc_82FC194C;
	// li r31,0
	r31.s64 = 0;
loc_82FC1910:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r30,r31,r11
	r30.u64 = r31.u64 + r11.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82fc1934
	if (cr6.eq) goto loc_82FC1934;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1934:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// bne 0x82fc1910
	if (!cr0.eq) goto loc_82FC1910;
loc_82FC194C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f52428
	sub_82F52428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FC18F0) {
	__imp__sub_82FC18F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1960) {
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
	// rlwinm r11,r30,3,0,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82fc19a4
	if (cr6.eq) goto loc_82FC19A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC19A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc1690
	sub_82FC1690(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC1960) {
	__imp__sub_82FC1960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC19C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r29,72(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// beq 0x82fc1a34
	if (cr0.eq) goto loc_82FC1A34;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82fc1a34
	if (cr6.lt) goto loc_82FC1A34;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x82fc1a34
	if (!cr6.lt) goto loc_82FC1A34;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82fc1a34
	if (!cr6.eq) goto loc_82FC1A34;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc1960
	sub_82FC1960(ctx, base);
loc_82FC1A34:
	// li r11,0
	r11.s64 = 0;
	// stw r29,24(r26)
	PPC_STORE_U32(r26.u32 + 24, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f4d0b0
	sub_82F4D0B0(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,56(r31)
	PPC_STORE_U64(r31.u32 + 56, r11.u64);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r11,64(r31)
	PPC_STORE_U64(r31.u32 + 64, r11.u64);
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82fc1ac0
	if (cr6.eq) goto loc_82FC1AC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1AC0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc1700
	sub_82FC1700(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc1b04
	if (cr6.eq) goto loc_82FC1B04;
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
loc_82FC1B04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FC19C8) {
	__imp__sub_82FC19C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1B10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r27,72(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82fc1b58
	if (cr6.lt) goto loc_82FC1B58;
loc_82FC1B40:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fc19c8
	sub_82FC19C8(ctx, base);
	// b 0x82fc1c7c
	goto loc_82FC1C7C;
loc_82FC1B58:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x82fc1b40
	if (!cr6.eq) goto loc_82FC1B40;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82fc1b90
	if (cr6.eq) goto loc_82FC1B90;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1B90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,31,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82f4d0b0
	sub_82F4D0B0(ctx, base);
	// lbz r11,83(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x82fc1bd8
	if (!cr0.eq) goto loc_82FC1BD8;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
loc_82FC1BD8:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r9,r31,48
	ctx.r9.s64 = r31.s64 + 48;
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// std r10,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,56(r31)
	PPC_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r10,64(r31)
	PPC_STORE_U64(r31.u32 + 64, ctx.r10.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// lbz r11,82(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc1c10
	if (!cr0.eq) goto loc_82FC1C10;
	// addi r4,r29,80
	ctx.r4.s64 = r29.s64 + 80;
loc_82FC1C10:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(64) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fc1c28
	if (!cr6.eq) goto loc_82FC1C28;
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(116) );
loc_82FC1C28:
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// lwz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82fc1c5c
	if (cr6.eq) goto loc_82FC1C5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FC1C5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fc1c7c
	if (cr6.eq) goto loc_82FC1C7C;
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
loc_82FC1C7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FC1B10) {
	__imp__sub_82FC1B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1C88) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r31,4(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// bl 0x82fc0cd0
	sub_82FC0CD0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bge cr6,0x82fc1d2c
	if (!cr6.lt) goto loc_82FC1D2C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x82fc1d2c
	if (!cr6.eq) goto loc_82FC1D2C;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lis r7,4
	ctx.r7.s64 = 262144;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82fc1d20
	if (cr6.eq) goto loc_82FC1D20;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82fc1d20
	if (cr6.eq) goto loc_82FC1D20;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
loc_82FC1CE8:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bge cr6,0x82fc1d2c
	if (!cr6.lt) goto loc_82FC1D2C;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82fc1d2c
	if (!cr6.eq) goto loc_82FC1D2C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r3,3,0,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(20) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82fc1ce8
	if (!cr6.eq) goto loc_82FC1CE8;
loc_82FC1D20:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82fc1960
	sub_82FC1960(ctx, base);
loc_82FC1D2C:
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

PPC_WEAK_FUNC(sub_82FC1C88) {
	__imp__sub_82FC1C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1D40) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fc1d9c
	if (!cr6.gt) goto loc_82FC1D9C;
	// li r30,0
	r30.s64 = 0;
loc_82FC1D64:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc1d88
	if (cr0.eq) goto loc_82FC1D88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fc1960
	sub_82FC1960(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
loc_82FC1D88:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82fc1d64
	if (cr6.lt) goto loc_82FC1D64;
loc_82FC1D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC1D40) {
	__imp__sub_82FC1D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stb r11,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC1DA8) {
	__imp__sub_82FC1DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC1DB8) {
	__imp__sub_82FC1DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// li r6,0
	ctx.r6.s64 = 0;
	// fctiwz f13,f1
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC1DC8) {
	__imp__sub_82FC1DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1E08) {
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
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// fctiwz f13,f1
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82f44978
	sub_82F44978(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r11.u8);
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

PPC_WEAK_FUNC(sub_82FC1E08) {
	__imp__sub_82FC1E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1E58) {
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
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f4.f64)));
	// fctiwz f13,f3
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f3.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// fctiwz f12,f2
	ctx.f12.u64 = uint64_t(int32_t(std::trunc(ctx.f2.f64)));
	// fctiwz f11,f1
	ctx.f11.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82f44990
	sub_82F44990(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r11.u8);
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

PPC_WEAK_FUNC(sub_82FC1E58) {
	__imp__sub_82FC1E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1EC0) {
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
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f41380
	sub_82F41380(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fc1f00
	if (cr0.eq) goto loc_82FC1F00;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82fc1f04
	goto loc_82FC1F04;
loc_82FC1F00:
	// li r30,0
	r30.s64 = 0;
loc_82FC1F04:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc1f14
	if (cr6.eq) goto loc_82FC1F14;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82FC1F14:
	// li r11,0
	r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r11,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r11.u8);
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

PPC_WEAK_FUNC(sub_82FC1EC0) {
	__imp__sub_82FC1EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fc1f50
	if (cr0.eq) goto loc_82FC1F50;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 68);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x82fc1f58
	goto loc_82FC1F58;
loc_82FC1F50:
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 68);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82FC1F58:
	// stb r10,68(r11)
	PPC_STORE_U8(r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC1F38) {
	__imp__sub_82FC1F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1F60) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82fc1f9c
	if (cr6.eq) goto loc_82FC1F9C;
	// addi r5,r31,52
	ctx.r5.s64 = r31.s64 + 52;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r11.u8);
loc_82FC1F9C:
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

PPC_WEAK_FUNC(sub_82FC1F60) {
	__imp__sub_82FC1F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC1FB0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stb r11,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r11.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r30,48
	r11.s64 = r30.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC1FB0) {
	__imp__sub_82FC1FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2008) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stb r11,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r11.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f43a70
	sub_82F43A70(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
	// bl 0x82fba290
	sub_82FBA290(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2008) {
	__imp__sub_82FC2008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2060) {
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
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,132(r31)
	PPC_STORE_U16(r31.u32 + 132, r11.u16);
	// stw r5,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r5.u32);
	// lhz r11,144(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 144);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r11,144(r31)
	PPC_STORE_U16(r31.u32 + 144, r11.u16);
	// beq 0x82fc20b0
	if (cr0.eq) goto loc_82FC20B0;
	// rlwimi r11,r30,0,31,15
	r11.u64 = (rotl32(r30.u32, 0) & 0xFFFFFFFFFFFF0001) | (r11.u64 & 0xFFFE);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, r11.u16);
loc_82FC20B0:
	// lhz r11,16(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwinm r10,r8,0,24,25
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// rlwimi r11,r7,0,29,30
	r11.u64 = (rotl32(ctx.r7.u32, 0) & 0x6) | (r11.u64 & 0xFFFFFFFFFFFFFFF9);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,26,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r8,2,22,23
	r11.u64 = (rotl32(ctx.r8.u32, 2) & 0x300) | (r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwimi r11,r9,0,26,27
	r11.u64 = (rotl32(ctx.r9.u32, 0) & 0x30) | (r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, r11.u16);
	// stfs f2,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82fc2008
	sub_82FC2008(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stb r30,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r30.u8);
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

PPC_WEAK_FUNC(sub_82FC2060) {
	__imp__sub_82FC2060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2110) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb9048
	sub_82FB9048(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bl 0x82fc1fb0
	sub_82FC1FB0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2110) {
	__imp__sub_82FC2110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2170) {
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
	// lbz r11,153(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc21a0
	if (!cr0.eq) goto loc_82FC21A0;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82fc2008
	sub_82FC2008(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82FC21A0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
	// bl 0x82fb9558
	sub_82FB9558(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2170) {
	__imp__sub_82FC2170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC21D0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb9048
	sub_82FB9048(ctx, base);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82fc1fb0
	sub_82FC1FB0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC21D0) {
	__imp__sub_82FC21D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82fc2110
	sub_82FC2110(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fc224c
	if (cr0.eq) goto loc_82FC224C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fb9418
	sub_82FB9418(ctx, base);
loc_82FC224C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2218) {
	__imp__sub_82FC2218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2258) {
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
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r3,148
	ctx.r3.s64 = 148;
	// addi r11,r11,12432
	r11.s64 = r11.s64 + 12432;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fc22a0
	if (cr0.eq) goto loc_82FC22A0;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// b 0x82fc22a4
	goto loc_82FC22A4;
loc_82FC22A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FC22A4:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f452e8
	sub_82F452E8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fb90b0
	sub_82FB90B0(ctx, base);
	// stb r30,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r30.u8);
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

PPC_WEAK_FUNC(sub_82FC2258) {
	__imp__sub_82FC2258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC22E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f452e8
	sub_82F452E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r5,r31,52
	ctx.r5.s64 = r31.s64 + 52;
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, r11.u8);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,105(r31)
	PPC_STORE_U8(r31.u32 + 105, r11.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82f43be0
	sub_82F43BE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fc2340
	if (cr6.eq) goto loc_82FC2340;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FC2340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC22E8) {
	__imp__sub_82FC22E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2358) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc240c
	if (cr6.eq) goto loc_82FC240C;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc2390
	if (cr6.eq) goto loc_82FC2390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f449b0
	sub_82F449B0(ctx, base);
loc_82FC2390:
	// lbz r11,152(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fc23a4
	if (cr0.eq) goto loc_82FC23A4;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x82fc22e8
	sub_82FC22E8(ctx, base);
loc_82FC23A4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// li r30,0
	r30.s64 = 0;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc23cc
	if (cr6.eq) goto loc_82FC23CC;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// stb r30,105(r28)
	PPC_STORE_U8(r28.u32 + 105, r30.u8);
loc_82FC23CC:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x82f449f0
	sub_82F449F0(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,104(r11)
	PPC_STORE_U8(r11.u32 + 104, r30.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stb r30,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r30.u8);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
	// stb r27,152(r29)
	PPC_STORE_U8(r29.u32 + 152, r27.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fc2410
	goto loc_82FC2410;
loc_82FC240C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC2410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FC2358) {
	__imp__sub_82FC2358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2418) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82fc2358
	sub_82FC2358(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2418) {
	__imp__sub_82FC2418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2460) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82fc2358
	sub_82FC2358(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc24ac
	if (!cr6.eq) goto loc_82FC24AC;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82fc24b0
	if (cr6.eq) goto loc_82FC24B0;
loc_82FC24AC:
	// li r11,0
	r11.s64 = 0;
loc_82FC24B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fc2528
	if (!cr0.eq) goto loc_82FC2528;
	// lbz r11,104(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fc24fc
	if (!cr0.eq) goto loc_82FC24FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stfs f12,76(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 76, temp.u32);
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stb r10,104(r11)
	PPC_STORE_U8(r11.u32 + 104, ctx.r10.u8);
loc_82FC24FC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r11,0
	r11.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f44ac8
	sub_82F44AC8(ctx, base);
loc_82FC2528:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FC2460) {
	__imp__sub_82FC2460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82fc2358
	sub_82FC2358(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FC2530) {
	__imp__sub_82FC2530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2580) {
	__imp__sub_82FC2580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addic. r7,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble 0x82fc25f0
	if (!cr0.gt) goto loc_82FC25F0;
loc_82FC25A4:
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82fc25f0
	if (cr6.eq) goto loc_82FC25F0;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + r11.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fc2630
	if (cr0.eq) goto loc_82FC2630;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82fc25e4
	if (!cr6.lt) goto loc_82FC25E4;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// b 0x82fc25e8
	goto loc_82FC25E8;
loc_82FC25E4:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
loc_82FC25E8:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82fc25a4
	if (cr6.lt) goto loc_82FC25A4;
loc_82FC25F0:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x82fc2628
	if (cr6.gt) goto loc_82FC2628;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mulli r10,r11,28
	ctx.r10.s64 = r11.s64 * 28;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82FC260C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82fc2628
	if (!cr0.lt) goto loc_82FC2628;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x82fc260c
	if (!cr6.gt) goto loc_82FC260C;
loc_82FC2628:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82FC2630:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2598) {
	__imp__sub_82FC2598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fc266c
	if (cr6.eq) goto loc_82FC266C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
loc_82FC2650:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82fc2674
	if (cr6.eq) goto loc_82FC2674;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fc2650
	if (cr6.lt) goto loc_82FC2650;
loc_82FC266C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FC2674:
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2638) {
	__imp__sub_82FC2638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82fc26a4
	if (!cr6.lt) goto loc_82FC26A4;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82fc26a8
	if (!cr6.eq) goto loc_82FC26A8;
loc_82FC26A4:
	// li r11,1
	r11.s64 = 1;
loc_82FC26A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2680) {
	__imp__sub_82FC2680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC26B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc26c8
	if (cr0.eq) goto loc_82FC26C8;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
loc_82FC26C8:
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc26e0
	if (cr0.eq) goto loc_82FC26E0;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
loc_82FC26E0:
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc26f8
	if (cr0.eq) goto loc_82FC26F8;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
loc_82FC26F8:
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc2718
	if (cr0.eq) goto loc_82FC2718;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
loc_82FC2718:
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc2738
	if (cr0.eq) goto loc_82FC2738;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82FC2738:
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC26B0) {
	__imp__sub_82FC26B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2760) {
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
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,-1
	r26.s64 = -1;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// stb r25,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r25.u8);
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82FC2798:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82fc28ec
	if (cr6.eq) goto loc_82FC28EC;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_82FC27B4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// lbz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// and. r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82fc28e0
	if (cr0.eq) goto loc_82FC28E0;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82fc27fc
	if (cr6.eq) goto loc_82FC27FC;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82fc27fc
	if (cr6.lt) goto loc_82FC27FC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82fc2800
	if (cr6.lt) goto loc_82FC2800;
loc_82FC27FC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82FC2800:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82fc28a8
	if (cr0.eq) goto loc_82FC28A8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fc2864
	if (!cr6.eq) goto loc_82FC2864;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// subf r11,r8,r5
	r11.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lbz r24,24(r9)
	r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stb r24,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r24.u8);
	// ble cr6,0x82fc28a8
	if (!cr6.gt) goto loc_82FC28A8;
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// b 0x82fc28a0
	goto loc_82FC28A0;
loc_82FC2864:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82fc28a8
	if (cr6.eq) goto loc_82FC28A8;
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82fc26b0
	sub_82FC26B0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82fc289c
	if (!cr6.lt) goto loc_82FC289C;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82FC289C:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82FC28A0:
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82FC28A8:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82fc28e0
	if (!cr6.gt) goto loc_82FC28E0;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// blt cr6,0x82fc28c4
	if (cr6.lt) goto loc_82FC28C4;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82FC28C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc28e0
	if (cr6.eq) goto loc_82FC28E0;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// ble cr6,0x82fc28e0
	if (!cr6.gt) goto loc_82FC28E0;
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82FC28E0:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bne 0x82fc27b4
	if (!cr0.eq) goto loc_82FC27B4;
loc_82FC28EC:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lbz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stb r4,12(r30)
	PPC_STORE_U8(r30.u32 + 12, ctx.r4.u8);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bne cr6,0x82fc2930
	if (!cr6.eq) goto loc_82FC2930;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82fc2798
	if (!cr6.eq) goto loc_82FC2798;
loc_82FC2930:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FC2760) {
	__imp__sub_82FC2760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(28) );
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lbz r11,36(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2938) {
	__imp__sub_82FC2938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82fc299c
	if (!cr6.lt) goto loc_82FC299C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82fc29a0
	if (!cr6.eq) goto loc_82FC29A0;
loc_82FC299C:
	// li r11,1
	r11.s64 = 1;
loc_82FC29A0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x82fc2760
	sub_82FC2760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FC2978) {
	__imp__sub_82FC2978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC29AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC29AC) {
	__imp__sub_82FC29AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC29B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82fc2aa8
	if (!cr6.lt) goto loc_82FC2AA8;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r31.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fc2a60
	if (cr6.eq) goto loc_82FC2A60;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_82FC2A04:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82fc2a3c
	if (cr6.eq) goto loc_82FC2A3C;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82fc2a3c
	if (cr6.lt) goto loc_82FC2A3C;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82fc2a40
	if (cr6.lt) goto loc_82FC2A40;
loc_82FC2A3C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82FC2A40:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc2a54
	if (cr0.eq) goto loc_82FC2A54;
	// addi r4,r7,12
	ctx.r4.s64 = ctx.r7.s64 + 12;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82fc26b0
	sub_82FC26B0(ctx, base);
loc_82FC2A54:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// bne 0x82fc2a04
	if (!cr0.eq) goto loc_82FC2A04;
loc_82FC2A60:
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lbz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r11.u32);
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stw r5,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r5.u32);
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
	// stb r3,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, ctx.r3.u8);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// b 0x82fc2ab0
	goto loc_82FC2AB0;
loc_82FC2AA8:
	// stb r31,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, r31.u8);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
loc_82FC2AB0:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r31,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r31.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
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

PPC_WEAK_FUNC(sub_82FC29B0) {
	__imp__sub_82FC29B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82fc29b0
	sub_82FC29B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FC2AD0) {
	__imp__sub_82FC2AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FC2AEC) {
	__imp__sub_82FC2AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2AF0) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// bl 0x82fc2760
	sub_82FC2760(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2AF0) {
	__imp__sub_82FC2AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2B48) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// bl 0x82fc29b0
	sub_82FC29B0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2B48) {
	__imp__sub_82FC2B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2BA0) {
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
	// bl 0x82fc2b48
	sub_82FC2B48(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2BA0) {
	__imp__sub_82FC2BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2BD0) {
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
	// bl 0x82fc2af0
	sub_82FC2AF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FC2BD0) {
	__imp__sub_82FC2BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2C00) {
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
	// bl 0x82f71350
	sub_82F71350(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82fc2c54
	if (!cr6.lt) goto loc_82FC2C54;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r10,r30,28
	ctx.r10.s64 = r30.s64 * 28;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 + 28;
	// mulli r5,r11,28
	ctx.r5.s64 = r11.s64 * 28;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82FC2C54:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fc2c9c
	if (cr0.eq) goto loc_82FC2C9C;
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
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lbz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
loc_82FC2C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2C00) {
	__imp__sub_82FC2C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2CA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82fc2638
	sub_82FC2638(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fc2d04
	if (!cr0.eq) goto loc_82FC2D04;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc2598
	sub_82FC2598(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc2c00
	sub_82FC2C00(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82fc2d08
	goto loc_82FC2D08;
loc_82FC2D04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC2D08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2CA8) {
	__imp__sub_82FC2CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2D10) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-16944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16944);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(std::fma(float(ctx.f1.f64), float(f0.f64), float(ctx.f13.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lbz r11,87(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
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

PPC_WEAK_FUNC(sub_82FC2D10) {
	__imp__sub_82FC2D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FC2D60) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fadds f12,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r29,256
	r31.s64 = r29.s64 + 256;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f1
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f1.f64)));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f31,f0,f1
	f31.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmuls f30,f0,f2
	f30.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f29,f0,f3
	f29.f64 = double(float(f0.f64 * ctx.f3.f64));
loc_82FC2DA8:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// fmuls f1,f28,f31
	ctx.f1.f64 = double(float(f28.f64 * f31.f64));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lbz r11,95(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fmuls f1,f28,f30
	ctx.f1.f64 = double(float(f28.f64 * f30.f64));
	// stb r11,-256(r31)
	PPC_STORE_U8(r31.u32 + -256, r11.u8);
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lbz r11,95(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// fmuls f1,f28,f29
	ctx.f1.f64 = double(float(f28.f64 * f29.f64));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r11,95(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,256(r31)
	PPC_STORE_U8(r31.u32 + 256, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// blt cr6,0x82fc2da8
	if (cr6.lt) goto loc_82FC2DA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FC2D60) {
	__imp__sub_82FC2D60(ctx, base);
}

