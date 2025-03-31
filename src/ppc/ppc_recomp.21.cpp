#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8239D0A0"))) PPC_WEAK_FUNC(sub_8239D0A0);
PPC_FUNC_IMPL(__imp__sub_8239D0A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d0d8
	if (cr6.eq) goto loc_8239D0D8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D0D8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239d16c
	if (cr6.eq) goto loc_8239D16C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d170
	if (cr6.eq) goto loc_8239D170;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239d174
	goto loc_8239D174;
loc_8239D16C:
	// li r28,0
	r28.s64 = 0;
loc_8239D170:
	// li r29,0
	r29.s64 = 0;
loc_8239D174:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d188
	if (cr6.eq) goto loc_8239D188;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D188:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d208
	if (cr6.eq) goto loc_8239D208;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-9480
	r30.s64 = r11.s64 + -9480;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239D208:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239d234
	if (cr6.eq) goto loc_8239D234;
loc_8239D218:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d218
	if (!cr0.eq) goto loc_8239D218;
loc_8239D234:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239d290
	if (cr6.eq) goto loc_8239D290;
loc_8239D254:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d254
	if (!cr0.eq) goto loc_8239D254;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239d290
	if (!cr6.eq) goto loc_8239D290;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239D290:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239D2A0"))) PPC_WEAK_FUNC(sub_8239D2A0);
PPC_FUNC_IMPL(__imp__sub_8239D2A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d2d8
	if (cr6.eq) goto loc_8239D2D8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D2D8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239d36c
	if (cr6.eq) goto loc_8239D36C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d370
	if (cr6.eq) goto loc_8239D370;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239d374
	goto loc_8239D374;
loc_8239D36C:
	// li r28,0
	r28.s64 = 0;
loc_8239D370:
	// li r29,0
	r29.s64 = 0;
loc_8239D374:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d388
	if (cr6.eq) goto loc_8239D388;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D388:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d408
	if (cr6.eq) goto loc_8239D408;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-9104
	r30.s64 = r11.s64 + -9104;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239D408:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239d434
	if (cr6.eq) goto loc_8239D434;
loc_8239D418:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d418
	if (!cr0.eq) goto loc_8239D418;
loc_8239D434:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239d490
	if (cr6.eq) goto loc_8239D490;
loc_8239D454:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d454
	if (!cr0.eq) goto loc_8239D454;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239d490
	if (!cr6.eq) goto loc_8239D490;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239D490:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239D4A0"))) PPC_WEAK_FUNC(sub_8239D4A0);
PPC_FUNC_IMPL(__imp__sub_8239D4A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,-23048
	r29.s64 = ctx.r10.s64 + -23048;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x8239d4dc
	if (cr6.eq) goto loc_8239D4DC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D4DC:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239d570
	if (cr6.eq) goto loc_8239D570;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d574
	if (cr6.eq) goto loc_8239D574;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239d578
	goto loc_8239D578;
loc_8239D570:
	// li r28,0
	r28.s64 = 0;
loc_8239D574:
	// li r29,0
	r29.s64 = 0;
loc_8239D578:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d58c
	if (cr6.eq) goto loc_8239D58C;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D58C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d60c
	if (cr6.eq) goto loc_8239D60C;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-8728
	r30.s64 = r11.s64 + -8728;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239D60C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239d638
	if (cr6.eq) goto loc_8239D638;
loc_8239D61C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d61c
	if (!cr0.eq) goto loc_8239D61C;
loc_8239D638:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239d694
	if (cr6.eq) goto loc_8239D694;
loc_8239D658:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d658
	if (!cr0.eq) goto loc_8239D658;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239d694
	if (!cr6.eq) goto loc_8239D694;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239D694:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239D6A8"))) PPC_WEAK_FUNC(sub_8239D6A8);
PPC_FUNC_IMPL(__imp__sub_8239D6A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,-18776
	r29.s64 = ctx.r10.s64 + -18776;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x8239d6e4
	if (cr6.eq) goto loc_8239D6E4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D6E4:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239d778
	if (cr6.eq) goto loc_8239D778;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d77c
	if (cr6.eq) goto loc_8239D77C;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239d780
	goto loc_8239D780;
loc_8239D778:
	// li r28,0
	r28.s64 = 0;
loc_8239D77C:
	// li r29,0
	r29.s64 = 0;
loc_8239D780:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d794
	if (cr6.eq) goto loc_8239D794;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D794:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d814
	if (cr6.eq) goto loc_8239D814;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-8376
	r30.s64 = r11.s64 + -8376;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-24104
	ctx.r4.s64 = ctx.r10.s64 + -24104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239D814:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239d840
	if (cr6.eq) goto loc_8239D840;
loc_8239D824:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d824
	if (!cr0.eq) goto loc_8239D824;
loc_8239D840:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239d89c
	if (cr6.eq) goto loc_8239D89C;
loc_8239D860:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239d860
	if (!cr0.eq) goto loc_8239D860;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239d89c
	if (!cr6.eq) goto loc_8239D89C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239D89C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239D8B0"))) PPC_WEAK_FUNC(sub_8239D8B0);
PPC_FUNC_IMPL(__imp__sub_8239D8B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,-18648
	r29.s64 = ctx.r10.s64 + -18648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x8239d8ec
	if (cr6.eq) goto loc_8239D8EC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D8EC:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239d980
	if (cr6.eq) goto loc_8239D980;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d984
	if (cr6.eq) goto loc_8239D984;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239d988
	goto loc_8239D988;
loc_8239D980:
	// li r28,0
	r28.s64 = 0;
loc_8239D984:
	// li r29,0
	r29.s64 = 0;
loc_8239D988:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239d99c
	if (cr6.eq) goto loc_8239D99C;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239D99C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239da1c
	if (cr6.eq) goto loc_8239DA1C;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-8376
	r30.s64 = r11.s64 + -8376;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-19000
	ctx.r4.s64 = ctx.r10.s64 + -19000;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239DA1C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239da48
	if (cr6.eq) goto loc_8239DA48;
loc_8239DA2C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239da2c
	if (!cr0.eq) goto loc_8239DA2C;
loc_8239DA48:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239daa4
	if (cr6.eq) goto loc_8239DAA4;
loc_8239DA68:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239da68
	if (!cr0.eq) goto loc_8239DA68;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239daa4
	if (!cr6.eq) goto loc_8239DAA4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239DAA4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239DAB8"))) PPC_WEAK_FUNC(sub_8239DAB8);
PPC_FUNC_IMPL(__imp__sub_8239DAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239dad4
	if (cr6.eq) goto loc_8239DAD4;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239dad8
	if (!cr6.eq) goto loc_8239DAD8;
loc_8239DAD4:
	// li r11,0
	r11.s64 = 0;
loc_8239DAD8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239daf0
	if (cr6.eq) goto loc_8239DAF0;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
loc_8239DAF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DAF8"))) PPC_WEAK_FUNC(sub_8239DAF8);
PPC_FUNC_IMPL(__imp__sub_8239DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239db24
	if (cr6.eq) goto loc_8239DB24;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239db28
	if (!cr6.eq) goto loc_8239DB28;
loc_8239DB24:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239DB28:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239dc60
	if (cr6.eq) goto loc_8239DC60;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8239dc3c
	if (cr6.eq) goto loc_8239DC3C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239db74
	if (cr6.eq) goto loc_8239DB74;
	// lbz r9,23(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239dc40
	goto loc_8239DC40;
loc_8239DB74:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239dbe4
	if (!cr0.gt) goto loc_8239DBE4;
loc_8239DB94:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,23
	cr6.compare<int32_t>(ctx.r7.s32, 23, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239dbb4
	if (cr6.lt) goto loc_8239DBB4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239DBB4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239dbd0
	if (cr6.eq) goto loc_8239DBD0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239dbd8
	goto loc_8239DBD8;
loc_8239DBD0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239DBD8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239db94
	if (cr6.gt) goto loc_8239DB94;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239DBE4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239dc28
	if (cr6.eq) goto loc_8239DC28;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239dc00
	if (cr6.gt) goto loc_8239DC00;
	// li r11,0
	r11.s64 = 0;
loc_8239DC00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239dc28
	if (!cr6.eq) goto loc_8239DC28;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239dc40
	goto loc_8239DC40;
loc_8239DC28:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239dc40
	goto loc_8239DC40;
loc_8239DC3C:
	// li r11,0
	r11.s64 = 0;
loc_8239DC40:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239dc60
	if (cr6.eq) goto loc_8239DC60;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239DC60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DC70"))) PPC_WEAK_FUNC(sub_8239DC70);
PPC_FUNC_IMPL(__imp__sub_8239DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239dc98
	if (cr6.eq) goto loc_8239DC98;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239dc9c
	if (!cr6.eq) goto loc_8239DC9C;
loc_8239DC98:
	// li r11,0
	r11.s64 = 0;
loc_8239DC9C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ddd0
	if (cr6.eq) goto loc_8239DDD0;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239dda0
	if (cr6.eq) goto loc_8239DDA0;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239dce4
	if (cr6.eq) goto loc_8239DCE4;
	// lbz r11,23(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8239dda4
	goto loc_8239DDA4;
loc_8239DCE4:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239dd50
	if (!cr0.gt) goto loc_8239DD50;
loc_8239DD00:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,23
	cr6.compare<int32_t>(ctx.r7.s32, 23, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239dd20
	if (cr6.lt) goto loc_8239DD20;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239DD20:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239dd3c
	if (cr6.eq) goto loc_8239DD3C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239dd44
	goto loc_8239DD44;
loc_8239DD3C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239DD44:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239dd00
	if (cr6.gt) goto loc_8239DD00;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239DD50:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239dd90
	if (cr6.eq) goto loc_8239DD90;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239dd6c
	if (cr6.gt) goto loc_8239DD6C;
	// li r11,0
	r11.s64 = 0;
loc_8239DD6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239dd90
	if (!cr6.eq) goto loc_8239DD90;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239dda4
	goto loc_8239DDA4;
loc_8239DD90:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239dda4
	goto loc_8239DDA4;
loc_8239DDA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239DDA4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239ddd0
	if (cr6.eq) goto loc_8239DDD0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8239DDD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DDE8"))) PPC_WEAK_FUNC(sub_8239DDE8);
PPC_FUNC_IMPL(__imp__sub_8239DDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239de10
	if (cr6.eq) goto loc_8239DE10;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239de14
	if (!cr6.eq) goto loc_8239DE14;
loc_8239DE10:
	// li r11,0
	r11.s64 = 0;
loc_8239DE14:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239df38
	if (cr6.eq) goto loc_8239DF38;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239df18
	if (cr6.eq) goto loc_8239DF18;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239de5c
	if (cr6.eq) goto loc_8239DE5C;
	// lbz r11,23(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 23);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8239df1c
	goto loc_8239DF1C;
loc_8239DE5C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239dec8
	if (!cr0.gt) goto loc_8239DEC8;
loc_8239DE78:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,23
	cr6.compare<int32_t>(ctx.r7.s32, 23, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239de98
	if (cr6.lt) goto loc_8239DE98;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239DE98:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239deb4
	if (cr6.eq) goto loc_8239DEB4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239debc
	goto loc_8239DEBC;
loc_8239DEB4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239DEBC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239de78
	if (cr6.gt) goto loc_8239DE78;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239DEC8:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239df08
	if (cr6.eq) goto loc_8239DF08;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239dee4
	if (cr6.gt) goto loc_8239DEE4;
	// li r11,0
	r11.s64 = 0;
loc_8239DEE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239df08
	if (!cr6.eq) goto loc_8239DF08;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239df1c
	goto loc_8239DF1C;
loc_8239DF08:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239df1c
	goto loc_8239DF1C;
loc_8239DF18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239DF1C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239df38
	if (cr6.eq) goto loc_8239DF38;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239DF38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DF48"))) PPC_WEAK_FUNC(sub_8239DF48);
PPC_FUNC_IMPL(__imp__sub_8239DF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239df74
	if (cr6.eq) goto loc_8239DF74;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239df78
	if (!cr6.eq) goto loc_8239DF78;
loc_8239DF74:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239DF78:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239e0c0
	if (cr6.eq) goto loc_8239E0C0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8239e08c
	if (cr6.eq) goto loc_8239E08C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239dfc4
	if (cr6.eq) goto loc_8239DFC4;
	// lbz r9,23(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e090
	goto loc_8239E090;
loc_8239DFC4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239e034
	if (!cr0.gt) goto loc_8239E034;
loc_8239DFE4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,23
	cr6.compare<int32_t>(ctx.r7.s32, 23, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239e004
	if (cr6.lt) goto loc_8239E004;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239E004:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239e020
	if (cr6.eq) goto loc_8239E020;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239e028
	goto loc_8239E028;
loc_8239E020:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239E028:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239dfe4
	if (cr6.gt) goto loc_8239DFE4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239E034:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239e078
	if (cr6.eq) goto loc_8239E078;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239e050
	if (cr6.gt) goto loc_8239E050;
	// li r11,0
	r11.s64 = 0;
loc_8239E050:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e078
	if (!cr6.eq) goto loc_8239E078;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e090
	goto loc_8239E090;
loc_8239E078:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e090
	goto loc_8239E090;
loc_8239E08C:
	// li r11,0
	r11.s64 = 0;
loc_8239E090:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e0c0
	if (cr6.eq) goto loc_8239E0C0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8239E0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E0D8"))) PPC_WEAK_FUNC(sub_8239E0D8);
PPC_FUNC_IMPL(__imp__sub_8239E0D8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4a98
	sub_821D4A98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239e13c
	if (cr6.eq) goto loc_8239E13C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8239e11c
	if (!cr6.eq) goto loc_8239E11C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
loc_8239E11C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8239E13C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E158"))) PPC_WEAK_FUNC(sub_8239E158);
PPC_FUNC_IMPL(__imp__sub_8239E158) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// lbz r10,21(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// stb r10,21(r31)
	PPC_STORE_U8(r31.u32 + 21, ctx.r10.u8);
	// lbz r9,22(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// stb r9,22(r31)
	PPC_STORE_U8(r31.u32 + 22, ctx.r9.u8);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239E200"))) PPC_WEAK_FUNC(sub_8239E200);
PPC_FUNC_IMPL(__imp__sub_8239E200) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8229ad78
	sub_8229AD78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239e2ac
	if (cr6.eq) goto loc_8239E2AC;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e264
	if (!cr6.eq) goto loc_8239E264;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e2ac
	if (cr6.eq) goto loc_8239E2AC;
loc_8239E264:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r30,27600(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// bne cr6,0x8239e284
	if (!cr6.eq) goto loc_8239E284;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8239e288
	goto loc_8239E288;
loc_8239E284:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239E288:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ec80
	sub_8217EC80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821e3e10
	sub_821E3E10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8239E2AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8239E2C8"))) PPC_WEAK_FUNC(sub_8239E2C8);
PPC_FUNC_IMPL(__imp__sub_8239E2C8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e35c
	if (cr6.eq) goto loc_8239E35C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,27600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27600);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8239E318:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239e328
	if (cr6.eq) goto loc_8239E328;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8239e32c
	if (cr6.eq) goto loc_8239E32C;
loc_8239E328:
	// twi 31,r0,22
loc_8239E32C:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x8239e35c
	if (cr6.eq) goto loc_8239E35C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239e340
	if (!cr6.eq) goto loc_8239E340;
	// twi 31,r0,22
loc_8239E340:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8239e354
	if (!cr6.eq) goto loc_8239E354;
	// twi 31,r0,22
	// twi 31,r0,22
loc_8239E354:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8239e318
	goto loc_8239E318;
loc_8239E35C:
	// lis r11,-31926
	r11.s64 = -2092302336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23404
	ctx.r4.s64 = r11.s64 + 23404;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E388"))) PPC_WEAK_FUNC(sub_8239E388);
PPC_FUNC_IMPL(__imp__sub_8239E388) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29360
	ctx.r4.s64 = r11.s64 + -29360;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8239E3C8"))) PPC_WEAK_FUNC(sub_8239E3C8);
PPC_FUNC_IMPL(__imp__sub_8239E3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r10,-29348
	ctx.r4.s64 = ctx.r10.s64 + -29348;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8239cd80
	sub_8239CD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E3E8"))) PPC_WEAK_FUNC(sub_8239E3E8);
PPC_FUNC_IMPL(__imp__sub_8239E3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E3F0"))) PPC_WEAK_FUNC(sub_8239E3F0);
PPC_FUNC_IMPL(__imp__sub_8239E3F0) {
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
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8239e484
	if (!cr6.eq) goto loc_8239E484;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29340
	ctx.r4.s64 = r11.s64 + -29340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e440
	if (!cr6.eq) goto loc_8239E440;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8239e444
	goto loc_8239E444;
loc_8239E440:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239E444:
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cbb08
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29328
	ctx.r4.s64 = r11.s64 + -29328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16e20
	sub_82A16E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8239E484:
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

__attribute__((alias("__imp__sub_8239E4A0"))) PPC_WEAK_FUNC(sub_8239E4A0);
PPC_FUNC_IMPL(__imp__sub_8239E4A0) {
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
	// addi r3,r4,120
	ctx.r3.s64 = ctx.r4.s64 + 120;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ee1df0
	sub_82EE1DF0(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// subf. r4,r30,r11
	ctx.r4.s64 = r11.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8239e67c
	if (cr0.eq) goto loc_8239E67C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r8,r9,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8239e5e0
	if (cr6.eq) goto loc_8239E5E0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239e518
	if (cr6.eq) goto loc_8239E518;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e5e4
	goto loc_8239E5E4;
loc_8239E518:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239e588
	if (!cr0.gt) goto loc_8239E588;
loc_8239E538:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239e558
	if (cr6.lt) goto loc_8239E558;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239E558:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239e574
	if (cr6.eq) goto loc_8239E574;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239e57c
	goto loc_8239E57C;
loc_8239E574:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239E57C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239e538
	if (cr6.gt) goto loc_8239E538;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239E588:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239e5cc
	if (cr6.eq) goto loc_8239E5CC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239e5a4
	if (cr6.gt) goto loc_8239E5A4;
	// li r11,0
	r11.s64 = 0;
loc_8239E5A4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e5cc
	if (!cr6.eq) goto loc_8239E5CC;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e5e4
	goto loc_8239E5E4;
loc_8239E5CC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e5e4
	goto loc_8239E5E4;
loc_8239E5E0:
	// li r11,0
	r11.s64 = 0;
loc_8239E5E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e67c
	if (cr6.eq) goto loc_8239E67C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r5,26912(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8239e60c
	if (cr6.eq) goto loc_8239E60C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 26821);
	// b 0x8239e610
	goto loc_8239E610;
loc_8239E60C:
	// li r11,0
	r11.s64 = 0;
loc_8239E610:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e67c
	if (cr6.eq) goto loc_8239E67C;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239e640
	if (cr6.eq) goto loc_8239E640;
	// lbz r11,53(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8239e644
	if (!cr6.eq) goto loc_8239E644;
loc_8239E640:
	// li r11,0
	r11.s64 = 0;
loc_8239E644:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e67c
	if (cr6.eq) goto loc_8239E67C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r9,r11,16892
	ctx.r9.s64 = r11.s64 + 16892;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821b25a8
	sub_821B25A8(ctx, base);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x8238b7e8
	sub_8238B7E8(ctx, base);
loc_8239E67C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8239E698"))) PPC_WEAK_FUNC(sub_8239E698);
PPC_FUNC_IMPL(__imp__sub_8239E698) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239e7c4
	if (cr6.eq) goto loc_8239E7C4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239e700
	if (cr6.eq) goto loc_8239E700;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e7c8
	goto loc_8239E7C8;
loc_8239E700:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239e76c
	if (!cr0.gt) goto loc_8239E76C;
loc_8239E71C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239e73c
	if (cr6.lt) goto loc_8239E73C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8239E73C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239e758
	if (cr6.eq) goto loc_8239E758;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239e760
	goto loc_8239E760;
loc_8239E758:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239E760:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239e71c
	if (cr6.gt) goto loc_8239E71C;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8239E76C:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x8239e7b0
	if (cr6.eq) goto loc_8239E7B0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239e788
	if (cr6.gt) goto loc_8239E788;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239E788:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e7b0
	if (!cr6.eq) goto loc_8239E7B0;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e7c8
	goto loc_8239E7C8;
loc_8239E7B0:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239e7c8
	goto loc_8239E7C8;
loc_8239E7C4:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239E7C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r27,-31927
	r27.s64 = -2092367872;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e824
	if (cr6.eq) goto loc_8239E824;
	// lbz r11,107(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 107);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e824
	if (cr6.eq) goto loc_8239E824;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lis r9,15258
	ctx.r9.s64 = 999948288;
	// addi r11,r26,12
	r11.s64 = r26.s64 + 12;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// ori r7,r9,51711
	ctx.r7.u64 = ctx.r9.u64 | 51711;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r8.u32);
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subf r3,r10,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 31;
	// and r9,r11,r3
	ctx.r9.u64 = r11.u64 & ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// b 0x8239eda0
	goto loc_8239EDA0;
loc_8239E824:
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,140(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239e84c
	if (cr6.eq) goto loc_8239E84C;
	// lbz r11,53(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8239e850
	if (!cr6.eq) goto loc_8239E850;
loc_8239E84C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239E850:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239eda0
	if (cr6.eq) goto loc_8239EDA0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8239ea5c
	if (!cr6.gt) goto loc_8239EA5C;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ea5c
	if (cr6.eq) goto loc_8239EA5C;
	// lwz r11,88(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x828beec0
	sub_828BEEC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239e8a0
	if (cr6.eq) goto loc_8239E8A0;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239e8a4
	if (!cr6.eq) goto loc_8239E8A4;
loc_8239E8A0:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239E8A4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ea5c
	if (cr6.eq) goto loc_8239EA5C;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// lwz r23,4(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, xer);
	// bne cr6,0x8239eb28
	if (!cr6.eq) goto loc_8239EB28;
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// lfs f0,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f0.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lfs f10,176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f31,f0,f9
	f31.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fsubs f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 - f0.f64));
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r11,r25
	r11.u64 = r25.u64;
	// fsubs f5,f31,f0
	ctx.f5.f64 = double(float(f31.f64 - f0.f64));
	// stfs f5,16(r26)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r26.u32 + 16, temp.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r6,r7,15,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8239ea2c
	if (cr6.eq) goto loc_8239EA2C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e970
	if (cr6.eq) goto loc_8239E970;
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 81);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8239ea30
	goto loc_8239EA30;
loc_8239E970:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239e9dc
	if (!cr0.gt) goto loc_8239E9DC;
loc_8239E98C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	cr6.compare<int32_t>(ctx.r7.s32, 81, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239e9ac
	if (cr6.lt) goto loc_8239E9AC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8239E9AC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239e9c8
	if (cr6.eq) goto loc_8239E9C8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239e9d0
	goto loc_8239E9D0;
loc_8239E9C8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239E9D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239e98c
	if (cr6.gt) goto loc_8239E98C;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8239E9DC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239ea1c
	if (cr6.eq) goto loc_8239EA1C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239e9f8
	if (cr6.gt) goto loc_8239E9F8;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239E9F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ea1c
	if (!cr6.eq) goto loc_8239EA1C;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239ea30
	goto loc_8239EA30;
loc_8239EA1C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239ea30
	goto loc_8239EA30;
loc_8239EA2C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8239EA30:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239ea5c
	if (cr6.eq) goto loc_8239EA5C;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239e698
	sub_8239E698(ctx, base);
loc_8239EA5C:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// addi r30,r26,12
	r30.s64 = r26.s64 + 12;
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
	// ori r8,r10,51711
	ctx.r8.u64 = ctx.r10.u64 | 51711;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r9.u32);
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// subf. r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239eae8
	if (cr0.eq) goto loc_8239EAE8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239eae8
	if (cr6.eq) goto loc_8239EAE8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r9,r10,16892
	ctx.r9.s64 = ctx.r10.s64 + 16892;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x821b25a8
	sub_821B25A8(ctx, base);
	// lwz r8,26912(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r3,140(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// bl 0x8238b7e8
	sub_8238B7E8(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r5,r6,11192
	ctx.r5.s64 = ctx.r6.s64 + 11192;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
loc_8239EAE8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239ed4c
	if (cr6.eq) goto loc_8239ED4C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239ec90
	if (cr6.eq) goto loc_8239EC90;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8239ed50
	goto loc_8239ED50;
loc_8239EB28:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8239ea5c
	if (!cr6.eq) goto loc_8239EA5C;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ea5c
	if (!cr6.eq) goto loc_8239EA5C;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r7,r8,15,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239ec60
	if (cr6.eq) goto loc_8239EC60;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239eb9c
	if (cr6.eq) goto loc_8239EB9C;
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239ec64
	goto loc_8239EC64;
loc_8239EB9C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239ec08
	if (!cr0.gt) goto loc_8239EC08;
loc_8239EBB8:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	cr6.compare<int32_t>(ctx.r7.s32, 81, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239ebd8
	if (cr6.lt) goto loc_8239EBD8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8239EBD8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239ebf4
	if (cr6.eq) goto loc_8239EBF4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239ebfc
	goto loc_8239EBFC;
loc_8239EBF4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239EBFC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239ebb8
	if (cr6.gt) goto loc_8239EBB8;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8239EC08:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239ec4c
	if (cr6.eq) goto loc_8239EC4C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239ec24
	if (cr6.gt) goto loc_8239EC24;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239EC24:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ec4c
	if (!cr6.eq) goto loc_8239EC4C;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239ec64
	goto loc_8239EC64;
loc_8239EC4C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239ec64
	goto loc_8239EC64;
loc_8239EC60:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239EC64:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ee88
	if (cr6.eq) goto loc_8239EE88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239e698
	sub_8239E698(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	return;
loc_8239EC90:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239ecfc
	if (!cr0.gt) goto loc_8239ECFC;
loc_8239ECAC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239eccc
	if (cr6.lt) goto loc_8239ECCC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8239ECCC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239ece8
	if (cr6.eq) goto loc_8239ECE8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239ecf0
	goto loc_8239ECF0;
loc_8239ECE8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239ECF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239ecac
	if (cr6.gt) goto loc_8239ECAC;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8239ECFC:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239ed3c
	if (cr6.eq) goto loc_8239ED3C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239ed18
	if (cr6.gt) goto loc_8239ED18;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239ED18:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ed3c
	if (!cr6.eq) goto loc_8239ED3C;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x8239ed50
	goto loc_8239ED50;
loc_8239ED3C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x8239ed50
	goto loc_8239ED50;
loc_8239ED4C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8239ED50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239eda0
	if (cr6.eq) goto loc_8239EDA0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9508
	sub_822D9508(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8239eda4
	if (!cr6.gt) goto loc_8239EDA4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9508
	sub_822D9508(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239eda0
	if (cr6.eq) goto loc_8239EDA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9508
	sub_822D9508(ctx, base);
loc_8239EDA0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
loc_8239EDA4:
	// beq cr6,0x8239ee58
	if (cr6.eq) goto loc_8239EE58;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239edf0
	if (!cr6.eq) goto loc_8239EDF0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29312
	ctx.r4.s64 = r11.s64 + -29312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,26788(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r30,28(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x82303f98
	sub_82303F98(ctx, base);
	// li r7,36
	ctx.r7.s64 = 36;
	// b 0x8239ee34
	goto loc_8239EE34;
loc_8239EDF0:
	// lbz r11,20(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ee58
	if (cr6.eq) goto loc_8239EE58;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29312
	ctx.r4.s64 = r11.s64 + -29312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,26788(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r30,28(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x82303f98
	sub_82303F98(ctx, base);
	// li r7,37
	ctx.r7.s64 = 37;
loc_8239EE34:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b6d98
	sub_823B6D98(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	sub_821C6868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8239EE58:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmpwi cr6,r11,8000
	cr6.compare<int32_t>(r11.s32, 8000, xer);
	// blt cr6,0x8239ee88
	if (cr6.lt) goto loc_8239EE88;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cmpwi cr6,r11,8000
	cr6.compare<int32_t>(r11.s32, 8000, xer);
	// bge cr6,0x8239ee88
	if (!cr6.lt) goto loc_8239EE88;
	// lwz r11,26912(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 26912);
	// li r4,202
	ctx.r4.s64 = 202;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x821b5478
	sub_821B5478(ctx, base);
loc_8239EE88:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_8239EE98"))) PPC_WEAK_FUNC(sub_8239EE98);
PPC_FUNC_IMPL(__imp__sub_8239EE98) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8239e698
	sub_8239E698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239EEA8"))) PPC_WEAK_FUNC(sub_8239EEA8);
PPC_FUNC_IMPL(__imp__sub_8239EEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r9,15258
	ctx.r9.s64 = 999948288;
	// srawi r8,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// ori r7,r9,51711
	ctx.r7.u64 = ctx.r9.u64 | 51711;
	// subf r11,r6,r10
	r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - r11.s64;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239EEE0"))) PPC_WEAK_FUNC(sub_8239EEE0);
PPC_FUNC_IMPL(__imp__sub_8239EEE0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-29348
	r30.s64 = r11.s64 + -29348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239f020
	sub_8239F020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-29300
	ctx.r4.s64 = ctx.r10.s64 + -29300;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r9,6320
	ctx.r6.s64 = ctx.r9.s64 + 6320;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239f268
	sub_8239F268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-29296
	ctx.r4.s64 = ctx.r8.s64 + -29296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r7,-4456
	ctx.r6.s64 = ctx.r7.s64 + -4456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8239f470
	sub_8239F470(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-29288
	ctx.r4.s64 = ctx.r6.s64 + -29288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r4,-4440
	ctx.r6.s64 = ctx.r4.s64 + -4440;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239f470
	sub_8239F470(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_8239F020"))) PPC_WEAK_FUNC(sub_8239F020);
PPC_FUNC_IMPL(__imp__sub_8239F020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239f048
	if (!cr6.eq) goto loc_8239F048;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r31,r11,63
	r31.s64 = r11.s64 + 63;
	// b 0x8239f04c
	goto loc_8239F04C;
loc_8239F048:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239F04C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eef40
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239f0c4
	if (cr6.eq) goto loc_8239F0C4;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239f0c8
	if (cr6.eq) goto loc_8239F0C8;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239f0cc
	goto loc_8239F0CC;
loc_8239F0C4:
	// li r29,0
	r29.s64 = 0;
loc_8239F0C8:
	// li r28,0
	r28.s64 = 0;
loc_8239F0CC:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239f1d0
	if (cr6.eq) goto loc_8239F1D0;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r11,-2448
	r30.s64 = r11.s64 + -2448;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r30,r9,-29448
	r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,-2384
	r31.s64 = r11.s64 + -2384;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r5,-29436
	r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
loc_8239F1D0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x8239f1fc
	if (cr6.eq) goto loc_8239F1FC;
loc_8239F1E0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f1e0
	if (!cr0.eq) goto loc_8239F1E0;
loc_8239F1FC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8239f258
	if (cr6.eq) goto loc_8239F258;
loc_8239F21C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f21c
	if (!cr0.eq) goto loc_8239F21C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239f258
	if (!cr6.eq) goto loc_8239F258;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239F258:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_8239F268"))) PPC_WEAK_FUNC(sub_8239F268);
PPC_FUNC_IMPL(__imp__sub_8239F268) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r27,r9,63
	r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r10,6320
	r29.s64 = ctx.r10.s64 + 6320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq cr6,0x8239f2a4
	if (cr6.eq) goto loc_8239F2A4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239F2A4:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239f338
	if (cr6.eq) goto loc_8239F338;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239f33c
	if (cr6.eq) goto loc_8239F33C;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239f340
	goto loc_8239F340;
loc_8239F338:
	// li r28,0
	r28.s64 = 0;
loc_8239F33C:
	// li r29,0
	r29.s64 = 0;
loc_8239F340:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f354
	if (cr6.eq) goto loc_8239F354;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239F354:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f3d4
	if (cr6.eq) goto loc_8239F3D4;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-2376
	r30.s64 = r11.s64 + -2376;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-16992
	ctx.r4.s64 = ctx.r10.s64 + -16992;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239F3D4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239f400
	if (cr6.eq) goto loc_8239F400;
loc_8239F3E4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f3e4
	if (!cr0.eq) goto loc_8239F3E4;
loc_8239F400:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239f45c
	if (cr6.eq) goto loc_8239F45C;
loc_8239F420:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f420
	if (!cr0.eq) goto loc_8239F420;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239f45c
	if (!cr6.eq) goto loc_8239F45C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239F45C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239F470"))) PPC_WEAK_FUNC(sub_8239F470);
PPC_FUNC_IMPL(__imp__sub_8239F470) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f4a8
	if (cr6.eq) goto loc_8239F4A8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239F4A8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239f53c
	if (cr6.eq) goto loc_8239F53C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239f540
	if (cr6.eq) goto loc_8239F540;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8239f544
	goto loc_8239F544;
loc_8239F53C:
	// li r28,0
	r28.s64 = 0;
loc_8239F540:
	// li r29,0
	r29.s64 = 0;
loc_8239F544:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f558
	if (cr6.eq) goto loc_8239F558;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8239F558:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f5d8
	if (cr6.eq) goto loc_8239F5D8;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,-2000
	r30.s64 = r11.s64 + -2000;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-17904
	ctx.r4.s64 = ctx.r10.s64 + -17904;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_8239F5D8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8239f604
	if (cr6.eq) goto loc_8239F604;
loc_8239F5E8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f5e8
	if (!cr0.eq) goto loc_8239F5E8;
loc_8239F604:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8239f660
	if (cr6.eq) goto loc_8239F660;
loc_8239F624:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x8239f624
	if (!cr0.eq) goto loc_8239F624;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239f660
	if (!cr6.eq) goto loc_8239F660;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8239F660:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_8239F670"))) PPC_WEAK_FUNC(sub_8239F670);
PPC_FUNC_IMPL(__imp__sub_8239F670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239f68c
	if (cr6.eq) goto loc_8239F68C;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239f690
	if (!cr6.eq) goto loc_8239F690;
loc_8239F68C:
	// li r11,0
	r11.s64 = 0;
loc_8239F690:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f6a8
	if (cr6.eq) goto loc_8239F6A8;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
loc_8239F6A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F6B0"))) PPC_WEAK_FUNC(sub_8239F6B0);
PPC_FUNC_IMPL(__imp__sub_8239F6B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F6B8"))) PPC_WEAK_FUNC(sub_8239F6B8);
PPC_FUNC_IMPL(__imp__sub_8239F6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239f6e0
	if (cr6.eq) goto loc_8239F6E0;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239f6e4
	if (!cr6.eq) goto loc_8239F6E4;
loc_8239F6E0:
	// li r11,0
	r11.s64 = 0;
loc_8239F6E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f818
	if (cr6.eq) goto loc_8239F818;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239f7e8
	if (cr6.eq) goto loc_8239F7E8;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f72c
	if (cr6.eq) goto loc_8239F72C;
	// lbz r11,81(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 81);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8239f7ec
	goto loc_8239F7EC;
loc_8239F72C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239f798
	if (!cr0.gt) goto loc_8239F798;
loc_8239F748:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	cr6.compare<int32_t>(ctx.r7.s32, 81, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239f768
	if (cr6.lt) goto loc_8239F768;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239F768:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239f784
	if (cr6.eq) goto loc_8239F784;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239f78c
	goto loc_8239F78C;
loc_8239F784:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239F78C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239f748
	if (cr6.gt) goto loc_8239F748;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239F798:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239f7d8
	if (cr6.eq) goto loc_8239F7D8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239f7b4
	if (cr6.gt) goto loc_8239F7B4;
	// li r11,0
	r11.s64 = 0;
loc_8239F7B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239f7d8
	if (!cr6.eq) goto loc_8239F7D8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239f7ec
	goto loc_8239F7EC;
loc_8239F7D8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239f7ec
	goto loc_8239F7EC;
loc_8239F7E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239F7EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239f818
	if (cr6.eq) goto loc_8239F818;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8239F818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F830"))) PPC_WEAK_FUNC(sub_8239F830);
PPC_FUNC_IMPL(__imp__sub_8239F830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f85c
	if (cr6.eq) goto loc_8239F85C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239f860
	if (!cr6.eq) goto loc_8239F860;
loc_8239F85C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239F860:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239f998
	if (cr6.eq) goto loc_8239F998;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,15,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8239f974
	if (cr6.eq) goto loc_8239F974;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239f8ac
	if (cr6.eq) goto loc_8239F8AC;
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239f978
	goto loc_8239F978;
loc_8239F8AC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239f91c
	if (!cr0.gt) goto loc_8239F91C;
loc_8239F8CC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	cr6.compare<int32_t>(ctx.r7.s32, 81, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239f8ec
	if (cr6.lt) goto loc_8239F8EC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8239F8EC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239f908
	if (cr6.eq) goto loc_8239F908;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239f910
	goto loc_8239F910;
loc_8239F908:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239F910:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239f8cc
	if (cr6.gt) goto loc_8239F8CC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239F91C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239f960
	if (cr6.eq) goto loc_8239F960;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239f938
	if (cr6.gt) goto loc_8239F938;
	// li r11,0
	r11.s64 = 0;
loc_8239F938:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239f960
	if (!cr6.eq) goto loc_8239F960;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239f978
	goto loc_8239F978;
loc_8239F960:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239f978
	goto loc_8239F978;
loc_8239F974:
	// li r11,0
	r11.s64 = 0;
loc_8239F978:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239f998
	if (cr6.eq) goto loc_8239F998;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239F998:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F9A8"))) PPC_WEAK_FUNC(sub_8239F9A8);
PPC_FUNC_IMPL(__imp__sub_8239F9A8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-28828
	ctx.r9.s64 = r11.s64 + -28828;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8239f9dc
	if (cr6.eq) goto loc_8239F9DC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239F9DC:
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

__attribute__((alias("__imp__sub_8239F9F0"))) PPC_WEAK_FUNC(sub_8239F9F0);
PPC_FUNC_IMPL(__imp__sub_8239F9F0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30312
	ctx.r4.s64 = r11.s64 + 30312;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8239FA30"))) PPC_WEAK_FUNC(sub_8239FA30);
PPC_FUNC_IMPL(__imp__sub_8239FA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a1e620
	sub_82A1E620(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8239fa70
	if (cr6.eq) goto loc_8239FA70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222d580
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8239fa70
	if (!cr6.eq) goto loc_8239FA70;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// b 0x8239fa74
	goto loc_8239FA74;
loc_8239FA70:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
loc_8239FA74:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FA90"))) PPC_WEAK_FUNC(sub_8239FA90);
PPC_FUNC_IMPL(__imp__sub_8239FA90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r30,0
	r30.s64 = 0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// addi r4,r11,-28828
	ctx.r4.s64 = r11.s64 + -28828;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// addi r11,r8,-28812
	r11.s64 = ctx.r8.s64 + -28812;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r7,r7,14744
	ctx.r7.s64 = ctx.r7.s64 + 14744;
	// addi r6,r6,4704
	ctx.r6.s64 = ctx.r6.s64 + 4704;
	// addi r5,r5,-28800
	ctx.r5.s64 = ctx.r5.s64 + -28800;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r4,r3,-32268
	ctx.r4.s64 = ctx.r3.s64 + -32268;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r3,r8,-32268
	ctx.r3.s64 = ctx.r8.s64 + -32268;
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_8239FB20:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8239fb20
	if (!cr0.eq) goto loc_8239FB20;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8246c600
	sub_8246C600(ctx, base);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8239FB68"))) PPC_WEAK_FUNC(sub_8239FB68);
PPC_FUNC_IMPL(__imp__sub_8239FB68) {
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
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x823566f8
	sub_823566F8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8229a410
	sub_8229A410(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8229a410
	sub_8229A410(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x8239fbb4
	if (!cr6.eq) goto loc_8239FBB4;
	// li r11,0
	r11.s64 = 0;
loc_8239FBB4:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r9,r10,-28812
	ctx.r9.s64 = ctx.r10.s64 + -28812;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// bne cr6,0x8239fbd0
	if (!cr6.eq) goto loc_8239FBD0;
	// li r11,0
	r11.s64 = 0;
loc_8239FBD0:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r10,-28828
	ctx.r8.s64 = ctx.r10.s64 + -28828;
	// addi r7,r9,-29424
	ctx.r7.s64 = ctx.r9.s64 + -29424;
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8239fc00
	if (cr6.eq) goto loc_8239FC00;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239FC00:
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

__attribute__((alias("__imp__sub_8239FC18"))) PPC_WEAK_FUNC(sub_8239FC18);
PPC_FUNC_IMPL(__imp__sub_8239FC18) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-28812
	ctx.r9.s64 = r11.s64 + -28812;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8239fc4c
	if (cr6.eq) goto loc_8239FC4C;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239FC4C:
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

__attribute__((alias("__imp__sub_8239FC60"))) PPC_WEAK_FUNC(sub_8239FC60);
PPC_FUNC_IMPL(__imp__sub_8239FC60) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r9,r10,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239fd7c
	if (cr6.eq) goto loc_8239FD7C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239fcb8
	if (cr6.eq) goto loc_8239FCB8;
	// lbz r10,19(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fd80
	goto loc_8239FD80;
loc_8239FCB8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239fd24
	if (!cr0.gt) goto loc_8239FD24;
loc_8239FCD4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,19
	cr6.compare<int32_t>(ctx.r7.s32, 19, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239fcf4
	if (cr6.lt) goto loc_8239FCF4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_8239FCF4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239fd10
	if (cr6.eq) goto loc_8239FD10;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239fd18
	goto loc_8239FD18;
loc_8239FD10:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239FD18:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239fcd4
	if (cr6.gt) goto loc_8239FCD4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239FD24:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239fd68
	if (cr6.eq) goto loc_8239FD68;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239fd40
	if (cr6.gt) goto loc_8239FD40;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239FD40:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239fd68
	if (!cr6.eq) goto loc_8239FD68;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fd80
	goto loc_8239FD80;
loc_8239FD68:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fd80
	goto loc_8239FD80;
loc_8239FD7C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239FD80:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239fdbc
	if (cr6.eq) goto loc_8239FDBC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3600
	ctx.r4.s64 = r11.s64 + 3600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223e410
	sub_8223E410(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8239FDBC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239fec4
	if (cr6.eq) goto loc_8239FEC4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239fe00
	if (cr6.eq) goto loc_8239FE00;
	// lbz r10,31(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fec8
	goto loc_8239FEC8;
loc_8239FE00:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8239fe6c
	if (!cr0.gt) goto loc_8239FE6C;
loc_8239FE1C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,31
	cr6.compare<int32_t>(ctx.r7.s32, 31, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8239fe3c
	if (cr6.lt) goto loc_8239FE3C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_8239FE3C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239fe58
	if (cr6.eq) goto loc_8239FE58;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8239fe60
	goto loc_8239FE60;
loc_8239FE58:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8239FE60:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8239fe1c
	if (cr6.gt) goto loc_8239FE1C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239FE6C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8239feb0
	if (cr6.eq) goto loc_8239FEB0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8239fe88
	if (cr6.gt) goto loc_8239FE88;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239FE88:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239feb0
	if (!cr6.eq) goto loc_8239FEB0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fec8
	goto loc_8239FEC8;
loc_8239FEB0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x8239fec8
	goto loc_8239FEC8;
loc_8239FEC4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239FEC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239fee4
	if (cr6.eq) goto loc_8239FEE4;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x82483858
	sub_82483858(ctx, base);
loc_8239FEE4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9f40
	sub_821D9F40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ff50
	if (cr6.eq) goto loc_8239FF50;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9f40
	sub_821D9F40(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// addi r7,r11,-29284
	ctx.r7.s64 = r11.s64 + -29284;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82345978
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239ff50
	if (cr6.eq) goto loc_8239FF50;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8239ff50
	if (cr6.eq) goto loc_8239FF50;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
loc_8239FF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_8239FF58"))) PPC_WEAK_FUNC(sub_8239FF58);
PPC_FUNC_IMPL(__imp__sub_8239FF58) {
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
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239ff90
	if (cr6.eq) goto loc_8239FF90;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,27596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27596);
	// bl 0x829f83a0
	sub_829F83A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
loc_8239FF90:
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

__attribute__((alias("__imp__sub_8239FFA8"))) PPC_WEAK_FUNC(sub_8239FFA8);
PPC_FUNC_IMPL(__imp__sub_8239FFA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0128
	if (cr6.eq) goto loc_823A0128;
	// lbz r11,64(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a035c
	if (cr6.eq) goto loc_823A035C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-29264
	ctx.r4.s64 = ctx.r10.s64 + -29264;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r26,r28,52
	r26.s64 = r28.s64 + 52;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r28,r11,-29232
	r28.s64 = r11.s64 + -29232;
	// addi r27,r10,-29244
	r27.s64 = ctx.r10.s64 + -29244;
	// addi r25,r9,-29256
	r25.s64 = ctx.r9.s64 + -29256;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
loc_823A0024:
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a003c
	if (cr6.eq) goto loc_823A003C;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// beq cr6,0x823a0040
	if (cr6.eq) goto loc_823A0040;
loc_823A003C:
	// twi 31,r0,22
loc_823A0040:
	// lwz r29,108(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x823a0350
	if (cr6.eq) goto loc_823A0350;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a0070
	if (!cr6.eq) goto loc_823A0070;
	// twi 31,r0,22
loc_823A0070:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823a0080
	if (!cr6.eq) goto loc_823A0080;
	// twi 31,r0,22
loc_823A0080:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823a009c
	if (!cr6.eq) goto loc_823A009C;
	// twi 31,r0,22
loc_823A009C:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a16ec0
	sub_82A16EC0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16ec0
	sub_82A16EC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8273f9d8
	sub_8273F9D8(ctx, base);
	// b 0x823a0024
	goto loc_823A0024;
loc_823A0128:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r3,r28,52
	ctx.r3.s64 = r28.s64 + 52;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82357060
	sub_82357060(ctx, base);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-29264
	ctx.r4.s64 = ctx.r10.s64 + -29264;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r29,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r29.u32);
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,56(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a035c
	if (cr6.eq) goto loc_823A035C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stb r10,64(r28)
	PPC_STORE_U8(r28.u32 + 64, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r25,r11,-29256
	r25.s64 = r11.s64 + -29256;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a0348
	if (cr6.eq) goto loc_823A0348;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r10,28344
	r30.s64 = ctx.r10.s64 + 28344;
	// addi r27,r9,-29232
	r27.s64 = ctx.r9.s64 + -29232;
	// addi r26,r11,-29244
	r26.s64 = r11.s64 + -29244;
loc_823A01CC:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_823A01D4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a01d4
	if (!cr0.eq) goto loc_823A01D4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_823A01F8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823a01f8
	if (!cr0.eq) goto loc_823A01F8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a16ec0
	sub_82A16EC0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823A0240:
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
	// bne 0x823a0240
	if (!cr0.eq) goto loc_823A0240;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16ec0
	sub_82A16EC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823A028C:
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
	// bne 0x823a028c
	if (!cr0.eq) goto loc_823A028C;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a0668
	sub_823A0668(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_823A02DC:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r6,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x823a02dc
	if (!cr0.eq) goto loc_823A02DC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823A0308:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r3,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x823a0308
	if (!cr0.eq) goto loc_823A0308;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823a01cc
	if (!cr6.eq) goto loc_823A01CC;
loc_823A0348:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A0350:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A035C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A0368"))) PPC_WEAK_FUNC(sub_823A0368);
PPC_FUNC_IMPL(__imp__sub_823A0368) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a0484
	if (cr6.eq) goto loc_823A0484;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a03c8
	if (cr6.eq) goto loc_823A03C8;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a0488
	goto loc_823A0488;
loc_823A03C8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a0434
	if (!cr0.gt) goto loc_823A0434;
loc_823A03E4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a0404
	if (cr6.lt) goto loc_823A0404;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_823A0404:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a0420
	if (cr6.eq) goto loc_823A0420;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0428
	goto loc_823A0428;
loc_823A0420:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0428:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a03e4
	if (cr6.gt) goto loc_823A03E4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A0434:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a0474
	if (cr6.eq) goto loc_823A0474;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a0450
	if (cr6.gt) goto loc_823A0450;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823A0450:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a0474
	if (!cr6.eq) goto loc_823A0474;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x823a0488
	goto loc_823A0488;
loc_823A0474:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x823a0488
	goto loc_823A0488;
loc_823A0484:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823A0488:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a04a0
	if (cr6.eq) goto loc_823A04A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82388cb8
	sub_82388CB8(ctx, base);
loc_823A04A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A04B0"))) PPC_WEAK_FUNC(sub_823A04B0);
PPC_FUNC_IMPL(__imp__sub_823A04B0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a05f4
	if (cr6.eq) goto loc_823A05F4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a0530
	if (cr6.eq) goto loc_823A0530;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a05f8
	goto loc_823A05F8;
loc_823A0530:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a059c
	if (!cr0.gt) goto loc_823A059C;
loc_823A054C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a056c
	if (cr6.lt) goto loc_823A056C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A056C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a0588
	if (cr6.eq) goto loc_823A0588;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0590
	goto loc_823A0590;
loc_823A0588:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0590:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a054c
	if (cr6.gt) goto loc_823A054C;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A059C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a05e0
	if (cr6.eq) goto loc_823A05E0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a05b8
	if (cr6.gt) goto loc_823A05B8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A05B8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a05e0
	if (!cr6.eq) goto loc_823A05E0;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a05f8
	goto loc_823A05F8;
loc_823A05E0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a05f8
	goto loc_823A05F8;
loc_823A05F4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A05F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0610
	if (cr6.eq) goto loc_823A0610;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82388cb8
	sub_82388CB8(ctx, base);
loc_823A0610:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r9,1
	r31.u64 = ctx.r9.u64 ^ 1;
	// beq cr6,0x823a063c
	if (cr6.eq) goto loc_823A063C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A063C:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82289530
	sub_82289530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_823A0668"))) PPC_WEAK_FUNC(sub_823A0668);
PPC_FUNC_IMPL(__imp__sub_823A0668) {
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
	// bl 0x823a04b0
	sub_823A04B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0744
	if (cr6.eq) goto loc_823A0744;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,144(r11)
	PPC_STORE_U8(r11.u32 + 144, ctx.r8.u8);
	// stb r10,64(r31)
	PPC_STORE_U8(r31.u32 + 64, ctx.r10.u8);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a1d50
	sub_823A1D50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
loc_823A0744:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A0750"))) PPC_WEAK_FUNC(sub_823A0750);
PPC_FUNC_IMPL(__imp__sub_823A0750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82bfc868
	sub_82BFC868(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a08a8
	if (cr6.eq) goto loc_823A08A8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a07e4
	if (cr6.eq) goto loc_823A07E4;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a08ac
	goto loc_823A08AC;
loc_823A07E4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a0850
	if (!cr0.gt) goto loc_823A0850;
loc_823A0800:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a0820
	if (cr6.lt) goto loc_823A0820;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_823A0820:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a083c
	if (cr6.eq) goto loc_823A083C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0844
	goto loc_823A0844;
loc_823A083C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0844:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a0800
	if (cr6.gt) goto loc_823A0800;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A0850:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a0894
	if (cr6.eq) goto loc_823A0894;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a086c
	if (cr6.gt) goto loc_823A086C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A086C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a0894
	if (!cr6.eq) goto loc_823A0894;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a08ac
	goto loc_823A08AC;
loc_823A0894:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a08ac
	goto loc_823A08AC;
loc_823A08A8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823A08AC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a08c4
	if (cr6.eq) goto loc_823A08C4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82388cb8
	sub_82388CB8(ctx, base);
loc_823A08C4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r9,1
	r31.u64 = ctx.r9.u64 ^ 1;
	// beq cr6,0x823a08f0
	if (cr6.eq) goto loc_823A08F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A08F0:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82289530
	sub_82289530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
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

__attribute__((alias("__imp__sub_823A0920"))) PPC_WEAK_FUNC(sub_823A0920);
PPC_FUNC_IMPL(__imp__sub_823A0920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a0930
	if (cr6.eq) goto loc_823A0930;
	// b 0x829f9000
	sub_829F9000(ctx, base);
	return;
loc_823A0930:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0938"))) PPC_WEAK_FUNC(sub_823A0938);
PPC_FUNC_IMPL(__imp__sub_823A0938) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a0960
	if (cr6.eq) goto loc_823A0960;
	// bl 0x829f9128
	sub_829F9128(ctx, base);
loc_823A0960:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a0a68
	if (cr6.eq) goto loc_823A0A68;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a09a4
	if (cr6.eq) goto loc_823A09A4;
	// lbz r10,91(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a0a6c
	goto loc_823A0A6C;
loc_823A09A4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a0a10
	if (!cr0.gt) goto loc_823A0A10;
loc_823A09C0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	cr6.compare<int32_t>(ctx.r7.s32, 91, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a09e0
	if (cr6.lt) goto loc_823A09E0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823A09E0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a09fc
	if (cr6.eq) goto loc_823A09FC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0a04
	goto loc_823A0A04;
loc_823A09FC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0A04:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a09c0
	if (cr6.gt) goto loc_823A09C0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A0A10:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a0a54
	if (cr6.eq) goto loc_823A0A54;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a0a2c
	if (cr6.gt) goto loc_823A0A2C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A0A2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a0a54
	if (!cr6.eq) goto loc_823A0A54;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a0a6c
	goto loc_823A0A6C;
loc_823A0A54:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a0a6c
	goto loc_823A0A6C;
loc_823A0A68:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A0A6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0ae8
	if (cr6.eq) goto loc_823A0AE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214c28
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0ae8
	if (cr6.eq) goto loc_823A0AE8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r10,17000
	ctx.r9.s64 = ctx.r10.s64 + 17000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x823a0ab0
	if (!cr6.eq) goto loc_823A0AB0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x823a0ab4
	goto loc_823A0AB4;
loc_823A0AB0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A0AB4:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822cd828
	sub_822CD828(ctx, base);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821b25a8
	sub_821B25A8(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x8238b488
	sub_8238B488(ctx, base);
loc_823A0AE8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A0AF0"))) PPC_WEAK_FUNC(sub_823A0AF0);
PPC_FUNC_IMPL(__imp__sub_823A0AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A0B18"))) PPC_WEAK_FUNC(sub_823A0B18);
PPC_FUNC_IMPL(__imp__sub_823A0B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0B20"))) PPC_WEAK_FUNC(sub_823A0B20);
PPC_FUNC_IMPL(__imp__sub_823A0B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x829f94b8
	sub_829F94B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A0B30"))) PPC_WEAK_FUNC(sub_823A0B30);
PPC_FUNC_IMPL(__imp__sub_823A0B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0B38"))) PPC_WEAK_FUNC(sub_823A0B38);
PPC_FUNC_IMPL(__imp__sub_823A0B38) {
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
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a0c4c
	if (cr6.eq) goto loc_823A0C4C;
	// lwz r11,140(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0b90
	if (cr6.eq) goto loc_823A0B90;
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 74);
	// lwz r11,72(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a0c50
	goto loc_823A0C50;
loc_823A0B90:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a0bfc
	if (!cr0.gt) goto loc_823A0BFC;
loc_823A0BAC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,74
	cr6.compare<int32_t>(ctx.r7.s32, 74, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a0bcc
	if (cr6.lt) goto loc_823A0BCC;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_823A0BCC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a0be8
	if (cr6.eq) goto loc_823A0BE8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0bf0
	goto loc_823A0BF0;
loc_823A0BE8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0BF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a0bac
	if (cr6.gt) goto loc_823A0BAC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A0BFC:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x823a0c3c
	if (cr6.eq) goto loc_823A0C3C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,74
	cr6.compare<int32_t>(r11.s32, 74, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a0c18
	if (cr6.gt) goto loc_823A0C18;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823A0C18:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a0c3c
	if (!cr6.eq) goto loc_823A0C3C;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a0c50
	goto loc_823A0C50;
loc_823A0C3C:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a0c50
	goto loc_823A0C50;
loc_823A0C4C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823A0C50:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a0cb4
	if (cr6.eq) goto loc_823A0CB4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82750d00
	sub_82750D00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0e14
	if (cr6.eq) goto loc_823A0E14;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-29220
	ctx.r7.s64 = r11.s64 + -29220;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82345978
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// b 0x823a0e24
	goto loc_823A0E24;
loc_823A0CB4:
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a0dac
	if (cr6.eq) goto loc_823A0DAC;
	// lwz r11,140(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0cf0
	if (cr6.eq) goto loc_823A0CF0;
	// lbz r10,67(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 67);
	// lwz r11,72(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a0db0
	goto loc_823A0DB0;
loc_823A0CF0:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a0d5c
	if (!cr0.gt) goto loc_823A0D5C;
loc_823A0D0C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,67
	cr6.compare<int32_t>(ctx.r7.s32, 67, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a0d2c
	if (cr6.lt) goto loc_823A0D2C;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_823A0D2C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a0d48
	if (cr6.eq) goto loc_823A0D48;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a0d50
	goto loc_823A0D50;
loc_823A0D48:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A0D50:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a0d0c
	if (cr6.gt) goto loc_823A0D0C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A0D5C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a0d9c
	if (cr6.eq) goto loc_823A0D9C;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a0d78
	if (cr6.gt) goto loc_823A0D78;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823A0D78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a0d9c
	if (!cr6.eq) goto loc_823A0D9C;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a0db0
	goto loc_823A0DB0;
loc_823A0D9C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a0db0
	goto loc_823A0DB0;
loc_823A0DAC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823A0DB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a0e14
	if (cr6.eq) goto loc_823A0E14;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82750d00
	sub_82750D00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0e14
	if (cr6.eq) goto loc_823A0E14;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-29220
	ctx.r7.s64 = r11.s64 + -29220;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82345978
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// b 0x823a0e24
	goto loc_823A0E24;
loc_823A0E14:
	// lis r11,-31926
	r11.s64 = -2092302336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23404
	ctx.r4.s64 = r11.s64 + 23404;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
loc_823A0E24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0E40"))) PPC_WEAK_FUNC(sub_823A0E40);
PPC_FUNC_IMPL(__imp__sub_823A0E40) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x823a0f78
	if (cr6.eq) goto loc_823A0F78;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a0f78
	if (cr6.eq) goto loc_823A0F78;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c6de8
	sub_822C6DE8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0f78
	if (cr6.eq) goto loc_823A0F78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-29220
	ctx.r4.s64 = r11.s64 + -29220;
	// bl 0x82345978
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a0f70
	if (cr6.eq) goto loc_823A0F70;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a0f70
	if (cr6.eq) goto loc_823A0F70;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29208
	ctx.r4.s64 = r11.s64 + -29208;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,2928
	ctx.r4.s64 = ctx.r10.s64 + 2928;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
loc_823A0F70:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A0F78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a0b38
	sub_823A0B38(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1024
	if (cr6.eq) goto loc_823A1024;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a1024
	if (cr6.eq) goto loc_823A1024;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29208
	ctx.r4.s64 = r11.s64 + -29208;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,2928
	ctx.r4.s64 = ctx.r10.s64 + 2928;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A1024:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A1038"))) PPC_WEAK_FUNC(sub_823A1038);
PPC_FUNC_IMPL(__imp__sub_823A1038) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823a1078
	if (cr6.eq) goto loc_823A1078;
	// lbz r11,144(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a107c
	if (!cr6.eq) goto loc_823A107C;
loc_823A1078:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A107C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r26,-31927
	r26.s64 = -2092367872;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r25,r11,-29208
	r25.s64 = r11.s64 + -29208;
	// beq cr6,0x823a146c
	if (cr6.eq) goto loc_823A146C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a10b0
	if (cr6.eq) goto loc_823A10B0;
	// lbz r11,144(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a10b4
	if (!cr6.eq) goto loc_823A10B4;
loc_823A10B0:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A10B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a146c
	if (cr6.eq) goto loc_823A146C;
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// mr r31,r28
	r31.u64 = r28.u64;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a11c4
	if (cr6.eq) goto loc_823A11C4;
	// lwz r11,140(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1100
	if (cr6.eq) goto loc_823A1100;
	// lbz r10,135(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 135);
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a11c8
	goto loc_823A11C8;
loc_823A1100:
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// lwz r6,76(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a116c
	if (!cr0.gt) goto loc_823A116C;
loc_823A111C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a113c
	if (cr6.lt) goto loc_823A113C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A113C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a1158
	if (cr6.eq) goto loc_823A1158;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a1160
	goto loc_823A1160;
loc_823A1158:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A1160:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a111c
	if (cr6.gt) goto loc_823A111C;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_823A116C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a11b0
	if (cr6.eq) goto loc_823A11B0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a1188
	if (cr6.gt) goto loc_823A1188;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A1188:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a11b0
	if (!cr6.eq) goto loc_823A11B0;
	// ld r11,104(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a11c8
	goto loc_823A11C8;
loc_823A11B0:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a11c8
	goto loc_823A11C8;
loc_823A11C4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A11C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a146c
	if (cr6.eq) goto loc_823A146C;
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mr r11,r28
	r11.u64 = r28.u64;
	// rlwinm r9,r10,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a12cc
	if (cr6.eq) goto loc_823A12CC;
	// lwz r11,140(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1210
	if (cr6.eq) goto loc_823A1210;
	// lbz r10,179(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 179);
	// lwz r11,72(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a12d0
	goto loc_823A12D0;
loc_823A1210:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a127c
	if (!cr0.gt) goto loc_823A127C;
loc_823A122C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,179
	cr6.compare<int32_t>(ctx.r7.s32, 179, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a124c
	if (cr6.lt) goto loc_823A124C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A124C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a1268
	if (cr6.eq) goto loc_823A1268;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a1270
	goto loc_823A1270;
loc_823A1268:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A1270:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a122c
	if (cr6.gt) goto loc_823A122C;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_823A127C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a12bc
	if (cr6.eq) goto loc_823A12BC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,179
	cr6.compare<int32_t>(r11.s32, 179, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a1298
	if (cr6.gt) goto loc_823A1298;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A1298:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a12bc
	if (!cr6.eq) goto loc_823A12BC;
	// ld r11,104(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a12d0
	goto loc_823A12D0;
loc_823A12BC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a12d0
	goto loc_823A12D0;
loc_823A12CC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823A12D0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a146c
	if (cr6.eq) goto loc_823A146C;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d9f40
	sub_821D9F40(ctx, base);
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,-15972
	ctx.r4.s64 = r11.s64 + -15972;
	// bl 0x82345978
	sub_82345978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1464
	if (cr6.eq) goto loc_823A1464;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a1464
	if (cr6.eq) goto loc_823A1464;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1338
	if (cr6.eq) goto loc_823A1338;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-29196
	ctx.r4.s64 = r11.s64 + -29196;
	// b 0x823a1340
	goto loc_823A1340;
loc_823A1338:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-29172
	ctx.r4.s64 = r11.s64 + -29172;
loc_823A1340:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,26912(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 26912);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a1374
	if (cr6.eq) goto loc_823A1374;
	// lbz r11,53(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823a1378
	if (!cr6.eq) goto loc_823A1378;
loc_823A1374:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A1378:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// beq cr6,0x823a13e4
	if (cr6.eq) goto loc_823A13E4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2928
	ctx.r4.s64 = r11.s64 + 2928;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a0368
	sub_823A0368(ctx, base);
	// b 0x823a1434
	goto loc_823A1434;
loc_823A13E4:
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2928
	ctx.r4.s64 = r11.s64 + 2928;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
loc_823A1434:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A1464:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A146C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a1724
	if (!cr6.eq) goto loc_823A1724;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823a1494
	if (cr6.eq) goto loc_823A1494;
	// lbz r11,144(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a1498
	if (!cr6.eq) goto loc_823A1498;
loc_823A1494:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A1498:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a14b4
	if (cr6.eq) goto loc_823A14B4;
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a1724
	if (!cr6.eq) goto loc_823A1724;
loc_823A14B4:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a15bc
	if (cr6.eq) goto loc_823A15BC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a14f8
	if (cr6.eq) goto loc_823A14F8;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a15c0
	goto loc_823A15C0;
loc_823A14F8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a1564
	if (!cr0.gt) goto loc_823A1564;
loc_823A1514:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	cr6.compare<int32_t>(ctx.r7.s32, 20, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a1534
	if (cr6.lt) goto loc_823A1534;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A1534:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a1550
	if (cr6.eq) goto loc_823A1550;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a1558
	goto loc_823A1558;
loc_823A1550:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A1558:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a1514
	if (cr6.gt) goto loc_823A1514;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_823A1564:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a15a8
	if (cr6.eq) goto loc_823A15A8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a1580
	if (cr6.gt) goto loc_823A1580;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A1580:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a15a8
	if (!cr6.eq) goto loc_823A15A8;
	// ld r11,104(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a15c0
	goto loc_823A15C0;
loc_823A15A8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a15c0
	goto loc_823A15C0;
loc_823A15BC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A15C0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a16f8
	if (cr6.eq) goto loc_823A16F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436990
	sub_82436990(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a16e8
	if (cr6.eq) goto loc_823A16E8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a16e8
	if (cr6.eq) goto loc_823A16E8;
	// lwz r11,26912(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 26912);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x828beec0
	sub_828BEEC0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bne cr6,0x823a1688
	if (!cr6.eq) goto loc_823A1688;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-29156
	ctx.r4.s64 = r11.s64 + -29156;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d9258
	sub_821D9258(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c24
	return;
loc_823A1688:
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29156
	ctx.r4.s64 = r11.s64 + -29156;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82267168
	sub_82267168(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a0368
	sub_823A0368(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ade08
	sub_822ADE08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82289530
	sub_82289530(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A16E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c24
	return;
loc_823A16F8:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29144
	ctx.r4.s64 = r11.s64 + -29144;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823a0e40
	sub_823A0E40(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A1724:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_823A1730"))) PPC_WEAK_FUNC(sub_823A1730);
PPC_FUNC_IMPL(__imp__sub_823A1730) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a175c
	if (cr6.eq) goto loc_823A175C;
	// lbz r11,31(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 31);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a17f8
	if (!cr6.eq) goto loc_823A17F8;
loc_823A175C:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a1780
	if (!cr6.eq) goto loc_823A1780;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25888);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x823a1784
	if (cr6.gt) goto loc_823A1784;
loc_823A1780:
	// li r11,1
	r11.s64 = 1;
loc_823A1784:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a17b0
	if (cr6.eq) goto loc_823A17B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a17ac
	if (cr6.eq) goto loc_823A17AC;
	// rotlwi r30,r10,0
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823a17b4
	goto loc_823A17B4;
loc_823A17AC:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A17B0:
	// li r30,0
	r30.s64 = 0;
loc_823A17B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a17dc
	if (cr6.eq) goto loc_823A17DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a17d4
	if (cr6.eq) goto loc_823A17D4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823a17e0
	goto loc_823A17E0;
loc_823A17D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A17DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823A17E0:
	// li r8,-1
	ctx.r8.s64 = -1;
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r28,-16
	ctx.r3.s64 = r28.s64 + -16;
	// bl 0x823a1038
	sub_823A1038(ctx, base);
loc_823A17F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A1800"))) PPC_WEAK_FUNC(sub_823A1800);
PPC_FUNC_IMPL(__imp__sub_823A1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A1810"))) PPC_WEAK_FUNC(sub_823A1810);
PPC_FUNC_IMPL(__imp__sub_823A1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,27596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27596);
	// b 0x82297f88
	sub_82297F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1820"))) PPC_WEAK_FUNC(sub_823A1820);
PPC_FUNC_IMPL(__imp__sub_823A1820) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,30456
	r30.s64 = r11.s64 + 30456;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// beq cr6,0x823a18ac
	if (cr6.eq) goto loc_823A18AC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r11,63
	r29.s64 = r11.s64 + 63;
loc_823A1868:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a187c
	if (cr6.eq) goto loc_823A187C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A187C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1890
	if (cr6.eq) goto loc_823A1890;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A1890:
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a18b8
	if (cr6.eq) goto loc_823A18B8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823a1868
	if (!cr6.eq) goto loc_823A1868;
loc_823A18AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82343b68
	sub_82343B68(ctx, base);
loc_823A18B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A18C0"))) PPC_WEAK_FUNC(sub_823A18C0);
PPC_FUNC_IMPL(__imp__sub_823A18C0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,30456
	r31.s64 = r11.s64 + 30456;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x823a1968
	if (cr6.eq) goto loc_823A1968;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r29,r11,63
	r29.s64 = r11.s64 + 63;
loc_823A18F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1904
	if (cr6.eq) goto loc_823A1904;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A1904:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1918
	if (cr6.eq) goto loc_823A1918;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A1918:
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a193c
	if (cr6.eq) goto loc_823A193C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823a18f0
	if (!cr6.eq) goto loc_823A18F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_823A193C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82171640
	sub_82171640(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// bl 0x822d52c0
	sub_822D52C0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_823A1968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A1970"))) PPC_WEAK_FUNC(sub_823A1970);
PPC_FUNC_IMPL(__imp__sub_823A1970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,30456
	ctx.r3.s64 = r11.s64 + 30456;
	// b 0x823a1cf0
	sub_823A1CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1980"))) PPC_WEAK_FUNC(sub_823A1980);
PPC_FUNC_IMPL(__imp__sub_823A1980) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-29132
	r29.s64 = r11.s64 + -29132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1e38
	sub_823A1E38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r10,1200
	ctx.r8.s64 = ctx.r10.s64 + 1200;
	// li r31,0
	r31.s64 = 0;
	// addi r4,r9,-29124
	ctx.r4.s64 = ctx.r9.s64 + -29124;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2080
	sub_823A2080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r7,1640
	ctx.r3.s64 = ctx.r7.s64 + 1640;
	// addi r4,r6,-29112
	ctx.r4.s64 = ctx.r6.s64 + -29112;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a2080
	sub_823A2080(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r11,1872
	ctx.r9.s64 = r11.s64 + 1872;
	// addi r4,r10,-29092
	ctx.r4.s64 = ctx.r10.s64 + -29092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a2290
	sub_823A2290(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r8,2336
	ctx.r6.s64 = ctx.r8.s64 + 2336;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-29072
	ctx.r4.s64 = ctx.r7.s64 + -29072;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a24a0
	sub_823A24A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r5,2360
	ctx.r3.s64 = ctx.r5.s64 + 2360;
	// addi r4,r4,-29048
	ctx.r4.s64 = ctx.r4.s64 + -29048;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a26b0
	sub_823A26B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r11,2800
	ctx.r9.s64 = r11.s64 + 2800;
	// addi r4,r10,-29020
	ctx.r4.s64 = ctx.r10.s64 + -29020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a28c0
	sub_823A28C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r6,r8,2848
	ctx.r6.s64 = ctx.r8.s64 + 2848;
	// addi r4,r7,-28996
	ctx.r4.s64 = ctx.r7.s64 + -28996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a2ad0
	sub_823A2AD0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824eef40
	sub_824EEF40(ctx, base);
	// lis r4,-32233
	ctx.r4.s64 = -2112421888;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r5,r4,23960
	ctx.r5.s64 = ctx.r4.s64 + 23960;
	// addi r4,r3,-28968
	ctx.r4.s64 = ctx.r3.s64 + -28968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	sub_82395C68(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,6160
	ctx.r5.s64 = r11.s64 + 6160;
	// addi r4,r10,-28944
	ctx.r4.s64 = ctx.r10.s64 + -28944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2ce0
	sub_823A2CE0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x823b09b0
	sub_823B09B0(ctx, base);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,6176
	ctx.r5.s64 = ctx.r8.s64 + 6176;
	// addi r4,r7,-28920
	ctx.r4.s64 = ctx.r7.s64 + -28920;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,6336
	ctx.r5.s64 = ctx.r6.s64 + 6336;
	// addi r4,r4,-28892
	ctx.r4.s64 = ctx.r4.s64 + -28892;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823588e8
	sub_823588E8(ctx, base);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r3,6512
	ctx.r5.s64 = ctx.r3.s64 + 6512;
	// addi r4,r11,-28860
	ctx.r4.s64 = r11.s64 + -28860;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a2d78
	sub_823A2D78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A1CF0"))) PPC_WEAK_FUNC(sub_823A1CF0);
PPC_FUNC_IMPL(__imp__sub_823A1CF0) {
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
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x823a1d34
	if (cr6.eq) goto loc_823A1D34;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82171640
	sub_82171640(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d52c0
	sub_822D52C0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_823A1D34:
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

__attribute__((alias("__imp__sub_823A1D50"))) PPC_WEAK_FUNC(sub_823A1D50);
PPC_FUNC_IMPL(__imp__sub_823A1D50) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a1df4
	if (!cr6.eq) goto loc_823A1DF4;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_823A1D88:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x823a1da0
	if (!cr6.eq) goto loc_823A1DA0;
	// li r11,0
	r11.s64 = 0;
	// b 0x823a1dd0
	goto loc_823A1DD0;
loc_823A1DA0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a1db0
	if (!cr6.eq) goto loc_823A1DB0;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a1dd0
	goto loc_823A1DD0;
loc_823A1DB0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a1dd0
	if (cr6.eq) goto loc_823A1DD0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8226d7a8
	sub_8226D7A8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_823A1DD0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a1de4
	if (cr6.eq) goto loc_823A1DE4;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x823a1de8
	goto loc_823A1DE8;
loc_823A1DE4:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_823A1DE8:
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a1d88
	if (cr6.eq) goto loc_823A1D88;
loc_823A1DF4:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ee6c0
	sub_824EE6C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r10,8(r28)
	PPC_STORE_U8(r28.u32 + 8, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_823A1E38"))) PPC_WEAK_FUNC(sub_823A1E38);
PPC_FUNC_IMPL(__imp__sub_823A1E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a1e60
	if (!cr6.eq) goto loc_823A1E60;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r31,r11,63
	r31.s64 = r11.s64 + 63;
	// b 0x823a1e64
	goto loc_823A1E64;
loc_823A1E60:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A1E64:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eef40
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a1edc
	if (cr6.eq) goto loc_823A1EDC;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a1ee0
	if (cr6.eq) goto loc_823A1EE0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a1ee4
	goto loc_823A1EE4;
loc_823A1EDC:
	// li r29,0
	r29.s64 = 0;
loc_823A1EE0:
	// li r28,0
	r28.s64 = 0;
loc_823A1EE4:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a1fe8
	if (cr6.eq) goto loc_823A1FE8;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r11,11792
	r30.s64 = r11.s64 + 11792;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r30,r9,-29448
	r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,11856
	r31.s64 = r11.s64 + 11856;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r5,-29436
	r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
loc_823A1FE8:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x823a2014
	if (cr6.eq) goto loc_823A2014;
loc_823A1FF8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a1ff8
	if (!cr0.eq) goto loc_823A1FF8;
loc_823A2014:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823a2070
	if (cr6.eq) goto loc_823A2070;
loc_823A2034:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r28
	reserved.u32 = *(uint32_t*)(base + r28.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r28
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r28.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2034
	if (!cr0.eq) goto loc_823A2034;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a2070
	if (!cr6.eq) goto loc_823A2070;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A2070:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_823A2080"))) PPC_WEAK_FUNC(sub_823A2080);
PPC_FUNC_IMPL(__imp__sub_823A2080) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a20b8
	if (cr6.eq) goto loc_823A20B8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A20B8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a215c
	if (cr6.eq) goto loc_823A215C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a2160
	if (cr6.eq) goto loc_823A2160;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a2164
	goto loc_823A2164;
loc_823A215C:
	// li r28,0
	r28.s64 = 0;
loc_823A2160:
	// li r29,0
	r29.s64 = 0;
loc_823A2164:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2178
	if (cr6.eq) goto loc_823A2178;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A2178:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a21f8
	if (cr6.eq) goto loc_823A21F8;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,11864
	r30.s64 = r11.s64 + 11864;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,14040
	ctx.r4.s64 = ctx.r10.s64 + 14040;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A21F8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2224
	if (cr6.eq) goto loc_823A2224;
loc_823A2208:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2208
	if (!cr0.eq) goto loc_823A2208;
loc_823A2224:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a2280
	if (cr6.eq) goto loc_823A2280;
loc_823A2244:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2244
	if (!cr0.eq) goto loc_823A2244;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a2280
	if (!cr6.eq) goto loc_823A2280;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A2280:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A2290"))) PPC_WEAK_FUNC(sub_823A2290);
PPC_FUNC_IMPL(__imp__sub_823A2290) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a22c8
	if (cr6.eq) goto loc_823A22C8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A22C8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a236c
	if (cr6.eq) goto loc_823A236C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a2370
	if (cr6.eq) goto loc_823A2370;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a2374
	goto loc_823A2374;
loc_823A236C:
	// li r28,0
	r28.s64 = 0;
loc_823A2370:
	// li r29,0
	r29.s64 = 0;
loc_823A2374:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2388
	if (cr6.eq) goto loc_823A2388;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A2388:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2408
	if (cr6.eq) goto loc_823A2408;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,11864
	r30.s64 = r11.s64 + 11864;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,14096
	ctx.r4.s64 = ctx.r10.s64 + 14096;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A2408:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2434
	if (cr6.eq) goto loc_823A2434;
loc_823A2418:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2418
	if (!cr0.eq) goto loc_823A2418;
loc_823A2434:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a2490
	if (cr6.eq) goto loc_823A2490;
loc_823A2454:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2454
	if (!cr0.eq) goto loc_823A2454;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a2490
	if (!cr6.eq) goto loc_823A2490;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A2490:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A24A0"))) PPC_WEAK_FUNC(sub_823A24A0);
PPC_FUNC_IMPL(__imp__sub_823A24A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a24d8
	if (cr6.eq) goto loc_823A24D8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A24D8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a257c
	if (cr6.eq) goto loc_823A257C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a2580
	if (cr6.eq) goto loc_823A2580;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a2584
	goto loc_823A2584;
loc_823A257C:
	// li r28,0
	r28.s64 = 0;
loc_823A2580:
	// li r29,0
	r29.s64 = 0;
loc_823A2584:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2598
	if (cr6.eq) goto loc_823A2598;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A2598:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2618
	if (cr6.eq) goto loc_823A2618;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,12280
	r30.s64 = r11.s64 + 12280;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-6920
	ctx.r4.s64 = ctx.r10.s64 + -6920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A2618:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2644
	if (cr6.eq) goto loc_823A2644;
loc_823A2628:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2628
	if (!cr0.eq) goto loc_823A2628;
loc_823A2644:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a26a0
	if (cr6.eq) goto loc_823A26A0;
loc_823A2664:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2664
	if (!cr0.eq) goto loc_823A2664;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a26a0
	if (!cr6.eq) goto loc_823A26A0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A26A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A26B0"))) PPC_WEAK_FUNC(sub_823A26B0);
PPC_FUNC_IMPL(__imp__sub_823A26B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a26e8
	if (cr6.eq) goto loc_823A26E8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A26E8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a278c
	if (cr6.eq) goto loc_823A278C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a2790
	if (cr6.eq) goto loc_823A2790;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a2794
	goto loc_823A2794;
loc_823A278C:
	// li r28,0
	r28.s64 = 0;
loc_823A2790:
	// li r29,0
	r29.s64 = 0;
loc_823A2794:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a27a8
	if (cr6.eq) goto loc_823A27A8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A27A8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2828
	if (cr6.eq) goto loc_823A2828;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,12680
	r30.s64 = r11.s64 + 12680;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,14152
	ctx.r4.s64 = ctx.r10.s64 + 14152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A2828:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2854
	if (cr6.eq) goto loc_823A2854;
loc_823A2838:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2838
	if (!cr0.eq) goto loc_823A2838;
loc_823A2854:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a28b0
	if (cr6.eq) goto loc_823A28B0;
loc_823A2874:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2874
	if (!cr0.eq) goto loc_823A2874;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a28b0
	if (!cr6.eq) goto loc_823A28B0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A28B0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A28C0"))) PPC_WEAK_FUNC(sub_823A28C0);
PPC_FUNC_IMPL(__imp__sub_823A28C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a28f8
	if (cr6.eq) goto loc_823A28F8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A28F8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a299c
	if (cr6.eq) goto loc_823A299C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a29a0
	if (cr6.eq) goto loc_823A29A0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a29a4
	goto loc_823A29A4;
loc_823A299C:
	// li r28,0
	r28.s64 = 0;
loc_823A29A0:
	// li r29,0
	r29.s64 = 0;
loc_823A29A4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a29b8
	if (cr6.eq) goto loc_823A29B8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A29B8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2a38
	if (cr6.eq) goto loc_823A2A38;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,13072
	r30.s64 = r11.s64 + 13072;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A2A38:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2a64
	if (cr6.eq) goto loc_823A2A64;
loc_823A2A48:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2a48
	if (!cr0.eq) goto loc_823A2A48;
loc_823A2A64:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a2ac0
	if (cr6.eq) goto loc_823A2AC0;
loc_823A2A84:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2a84
	if (!cr0.eq) goto loc_823A2A84;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a2ac0
	if (!cr6.eq) goto loc_823A2AC0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A2AC0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A2AD0"))) PPC_WEAK_FUNC(sub_823A2AD0);
PPC_FUNC_IMPL(__imp__sub_823A2AD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2b08
	if (cr6.eq) goto loc_823A2B08;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A2B08:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ef300
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x824eee50
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a2bac
	if (cr6.eq) goto loc_823A2BAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12324
	ctx.r8.s64 = r11.s64 + 12324;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a2bb0
	if (cr6.eq) goto loc_823A2BB0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a2bb4
	goto loc_823A2BB4;
loc_823A2BAC:
	// li r28,0
	r28.s64 = 0;
loc_823A2BB0:
	// li r29,0
	r29.s64 = 0;
loc_823A2BB4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2bc8
	if (cr6.eq) goto loc_823A2BC8;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A2BC8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2c48
	if (cr6.eq) goto loc_823A2C48;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r11,13432
	r30.s64 = r11.s64 + 13432;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,14320
	ctx.r4.s64 = ctx.r10.s64 + 14320;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
loc_823A2C48:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x823a2c74
	if (cr6.eq) goto loc_823A2C74;
loc_823A2C58:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2c58
	if (!cr0.eq) goto loc_823A2C58;
loc_823A2C74:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x827f18f0
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a2cd0
	if (cr6.eq) goto loc_823A2CD0;
loc_823A2C94:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a2c94
	if (!cr0.eq) goto loc_823A2C94;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a2cd0
	if (!cr6.eq) goto loc_823A2CD0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A2CD0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_823A2CE0"))) PPC_WEAK_FUNC(sub_823A2CE0);
PPC_FUNC_IMPL(__imp__sub_823A2CE0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2d6c
	if (cr6.eq) goto loc_823A2D6C;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,13832
	ctx.r4.s64 = ctx.r10.s64 + 13832;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823A2D6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A2D78"))) PPC_WEAK_FUNC(sub_823A2D78);
PPC_FUNC_IMPL(__imp__sub_823A2D78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2e04
	if (cr6.eq) goto loc_823A2E04;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82229208
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822279a0
	sub_822279A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,13984
	ctx.r4.s64 = ctx.r10.s64 + 13984;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8219ab28
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef160
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82a1ec08
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
loc_823A2E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_823A2E10"))) PPC_WEAK_FUNC(sub_823A2E10);
PPC_FUNC_IMPL(__imp__sub_823A2E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a2e2c
	if (cr6.eq) goto loc_823A2E2C;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a2e30
	if (!cr6.eq) goto loc_823A2E30;
loc_823A2E2C:
	// li r11,0
	r11.s64 = 0;
loc_823A2E30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2e48
	if (cr6.eq) goto loc_823A2E48;
	// lwz r11,52(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_823A2E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2E50"))) PPC_WEAK_FUNC(sub_823A2E50);
PPC_FUNC_IMPL(__imp__sub_823A2E50) {
	PPC_FUNC_PROLOGUE();
	// li r3,135
	ctx.r3.s64 = 135;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2E58"))) PPC_WEAK_FUNC(sub_823A2E58);
PPC_FUNC_IMPL(__imp__sub_823A2E58) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2e8c
	if (cr6.eq) goto loc_823A2E8C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a2e90
	if (!cr6.eq) goto loc_823A2E90;
loc_823A2E8C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A2E90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a2fe0
	if (cr6.eq) goto loc_823A2FE0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a2fa4
	if (cr6.eq) goto loc_823A2FA4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a2edc
	if (cr6.eq) goto loc_823A2EDC;
	// lbz r9,135(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 135);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a2fa8
	goto loc_823A2FA8;
loc_823A2EDC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,76(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r31
	ctx.r8.s64 = r31.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a2f4c
	if (!cr0.gt) goto loc_823A2F4C;
loc_823A2EFC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a2f1c
	if (cr6.lt) goto loc_823A2F1C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A2F1C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a2f38
	if (cr6.eq) goto loc_823A2F38;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a2f40
	goto loc_823A2F40;
loc_823A2F38:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A2F40:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a2efc
	if (cr6.gt) goto loc_823A2EFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A2F4C:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x823a2f90
	if (cr6.eq) goto loc_823A2F90;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a2f68
	if (cr6.gt) goto loc_823A2F68;
	// li r11,0
	r11.s64 = 0;
loc_823A2F68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a2f90
	if (!cr6.eq) goto loc_823A2F90;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a2fa8
	goto loc_823A2FA8;
loc_823A2F90:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a2fa8
	goto loc_823A2FA8;
loc_823A2FA4:
	// li r11,0
	r11.s64 = 0;
loc_823A2FA8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2fe0
	if (cr6.eq) goto loc_823A2FE0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A2FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2FF8"))) PPC_WEAK_FUNC(sub_823A2FF8);
PPC_FUNC_IMPL(__imp__sub_823A2FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3024
	if (cr6.eq) goto loc_823A3024;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a3028
	if (!cr6.eq) goto loc_823A3028;
loc_823A3024:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A3028:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3174
	if (cr6.eq) goto loc_823A3174;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a313c
	if (cr6.eq) goto loc_823A313C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3074
	if (cr6.eq) goto loc_823A3074;
	// lbz r9,135(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 135);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a3140
	goto loc_823A3140;
loc_823A3074:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a30e4
	if (!cr0.gt) goto loc_823A30E4;
loc_823A3094:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a30b4
	if (cr6.lt) goto loc_823A30B4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A30B4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a30d0
	if (cr6.eq) goto loc_823A30D0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a30d8
	goto loc_823A30D8;
loc_823A30D0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A30D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a3094
	if (cr6.gt) goto loc_823A3094;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A30E4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a3128
	if (cr6.eq) goto loc_823A3128;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3100
	if (cr6.gt) goto loc_823A3100;
	// li r11,0
	r11.s64 = 0;
loc_823A3100:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3128
	if (!cr6.eq) goto loc_823A3128;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a3140
	goto loc_823A3140;
loc_823A3128:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a3140
	goto loc_823A3140;
loc_823A313C:
	// li r11,0
	r11.s64 = 0;
loc_823A3140:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3174
	if (cr6.eq) goto loc_823A3174;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_823A3174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3188"))) PPC_WEAK_FUNC(sub_823A3188);
PPC_FUNC_IMPL(__imp__sub_823A3188) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a31bc
	if (cr6.eq) goto loc_823A31BC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a31c0
	if (!cr6.eq) goto loc_823A31C0;
loc_823A31BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A31C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a32fc
	if (cr6.eq) goto loc_823A32FC;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a32d4
	if (cr6.eq) goto loc_823A32D4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a320c
	if (cr6.eq) goto loc_823A320C;
	// lbz r9,135(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 135);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a32d8
	goto loc_823A32D8;
loc_823A320C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,76(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r31
	ctx.r8.s64 = r31.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a327c
	if (!cr0.gt) goto loc_823A327C;
loc_823A322C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a324c
	if (cr6.lt) goto loc_823A324C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A324C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a3268
	if (cr6.eq) goto loc_823A3268;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a3270
	goto loc_823A3270;
loc_823A3268:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A3270:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a322c
	if (cr6.gt) goto loc_823A322C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A327C:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x823a32c0
	if (cr6.eq) goto loc_823A32C0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3298
	if (cr6.gt) goto loc_823A3298;
	// li r11,0
	r11.s64 = 0;
loc_823A3298:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a32c0
	if (!cr6.eq) goto loc_823A32C0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a32d8
	goto loc_823A32D8;
loc_823A32C0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a32d8
	goto loc_823A32D8;
loc_823A32D4:
	// li r11,0
	r11.s64 = 0;
loc_823A32D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a32fc
	if (cr6.eq) goto loc_823A32FC;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A32FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3310"))) PPC_WEAK_FUNC(sub_823A3310);
PPC_FUNC_IMPL(__imp__sub_823A3310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a3338
	if (cr6.eq) goto loc_823A3338;
	// lbz r11,144(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a333c
	if (!cr6.eq) goto loc_823A333C;
loc_823A3338:
	// li r11,0
	r11.s64 = 0;
loc_823A333C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3464
	if (cr6.eq) goto loc_823A3464;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a3440
	if (cr6.eq) goto loc_823A3440;
	// lwz r11,140(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3384
	if (cr6.eq) goto loc_823A3384;
	// lbz r11,135(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 135);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823a3444
	goto loc_823A3444;
loc_823A3384:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a33f0
	if (!cr0.gt) goto loc_823A33F0;
loc_823A33A0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,135
	cr6.compare<int32_t>(ctx.r7.s32, 135, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a33c0
	if (cr6.lt) goto loc_823A33C0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A33C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a33dc
	if (cr6.eq) goto loc_823A33DC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a33e4
	goto loc_823A33E4;
loc_823A33DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A33E4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a33a0
	if (cr6.gt) goto loc_823A33A0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A33F0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a3430
	if (cr6.eq) goto loc_823A3430;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a340c
	if (cr6.gt) goto loc_823A340C;
	// li r11,0
	r11.s64 = 0;
loc_823A340C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3430
	if (!cr6.eq) goto loc_823A3430;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a3444
	goto loc_823A3444;
loc_823A3430:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a3444
	goto loc_823A3444;
loc_823A3440:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A3444:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3464
	if (cr6.eq) goto loc_823A3464;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A3464:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3478"))) PPC_WEAK_FUNC(sub_823A3478);
PPC_FUNC_IMPL(__imp__sub_823A3478) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a34ac
	if (cr6.eq) goto loc_823A34AC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a34b0
	if (!cr6.eq) goto loc_823A34B0;
loc_823A34AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A34B0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a35f0
	if (cr6.eq) goto loc_823A35F0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a35c4
	if (cr6.eq) goto loc_823A35C4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a34fc
	if (cr6.eq) goto loc_823A34FC;
	// lbz r9,135(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 135);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r11,r9,3
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a35c8
	goto loc_823A35C8;
loc_823A34FC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,76(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r30
	ctx.r8.s64 = r30.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a356c
	if (!cr0.gt) goto loc_823A356C;
loc_823A351C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// li r31,1
	r31.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,135
	cr6.compare<int32_t>(ctx.r6.s32, 135, xer);
	// blt cr6,0x823a353c
	if (cr6.lt) goto loc_823A353C;
	// li r31,0
	r31.s64 = 0;
loc_823A353C:
	// clrlwi r6,r31,24
	ctx.r6.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823a3558
	if (cr6.eq) goto loc_823A3558;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a3560
	goto loc_823A3560;
loc_823A3558:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A3560:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a351c
	if (cr6.gt) goto loc_823A351C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A356C:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x823a35b0
	if (cr6.eq) goto loc_823A35B0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,135
	cr6.compare<int32_t>(r11.s32, 135, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3588
	if (cr6.gt) goto loc_823A3588;
	// li r11,0
	r11.s64 = 0;
loc_823A3588:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a35b0
	if (!cr6.eq) goto loc_823A35B0;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a35c8
	goto loc_823A35C8;
loc_823A35B0:
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a35c8
	goto loc_823A35C8;
loc_823A35C4:
	// li r11,0
	r11.s64 = 0;
loc_823A35C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a35f0
	if (cr6.eq) goto loc_823A35F0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A35F0:
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

__attribute__((alias("__imp__sub_823A3608"))) PPC_WEAK_FUNC(sub_823A3608);
PPC_FUNC_IMPL(__imp__sub_823A3608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
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

__attribute__((alias("__imp__sub_823A36A0"))) PPC_WEAK_FUNC(sub_823A36A0);
PPC_FUNC_IMPL(__imp__sub_823A36A0) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A36D8"))) PPC_WEAK_FUNC(sub_823A36D8);
PPC_FUNC_IMPL(__imp__sub_823A36D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823a38c0
	sub_823A38C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3710"))) PPC_WEAK_FUNC(sub_823A3710);
PPC_FUNC_IMPL(__imp__sub_823A3710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823a3998
	sub_823A3998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3748"))) PPC_WEAK_FUNC(sub_823A3748);
PPC_FUNC_IMPL(__imp__sub_823A3748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lwz r30,4(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,0(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8239fa30
	sub_8239FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_823A37F0"))) PPC_WEAK_FUNC(sub_823A37F0);
PPC_FUNC_IMPL(__imp__sub_823A37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lwz r30,4(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,0(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8239fa30
	sub_8239FA30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_823A38C0"))) PPC_WEAK_FUNC(sub_823A38C0);
PPC_FUNC_IMPL(__imp__sub_823A38C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	sub_82227680(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// clrlwi r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_823A3998"))) PPC_WEAK_FUNC(sub_823A3998);
PPC_FUNC_IMPL(__imp__sub_823A3998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// bl 0x822281f8
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	sub_82227680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309580
	sub_82309580(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823a5228
	sub_823A5228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// clrlwi r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r4,1
	r11.u64 = ctx.r4.u64 ^ 1;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_823A3A98"))) PPC_WEAK_FUNC(sub_823A3A98);
PPC_FUNC_IMPL(__imp__sub_823A3A98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x8239fb68
	sub_8239FB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A3AA0"))) PPC_WEAK_FUNC(sub_823A3AA0);
PPC_FUNC_IMPL(__imp__sub_823A3AA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8239fb68
	sub_8239FB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A3AA8"))) PPC_WEAK_FUNC(sub_823A3AA8);
PPC_FUNC_IMPL(__imp__sub_823A3AA8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3bbc
	if (cr6.eq) goto loc_823A3BBC;
	// lwz r11,140(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3b04
	if (cr6.eq) goto loc_823A3B04;
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x823a3bc0
	goto loc_823A3BC0;
loc_823A3B04:
	// lwz r6,76(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a3b6c
	if (!cr0.gt) goto loc_823A3B6C;
loc_823A3B1C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a3b3c
	if (cr6.lt) goto loc_823A3B3C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A3B3C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a3b58
	if (cr6.eq) goto loc_823A3B58;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a3b60
	goto loc_823A3B60;
loc_823A3B58:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A3B60:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a3b1c
	if (cr6.gt) goto loc_823A3B1C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A3B6C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a3bac
	if (cr6.eq) goto loc_823A3BAC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3b88
	if (cr6.gt) goto loc_823A3B88;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A3B88:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3bac
	if (!cr6.eq) goto loc_823A3BAC;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x823a3bc0
	goto loc_823A3BC0;
loc_823A3BAC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x823a3bc0
	goto loc_823A3BC0;
loc_823A3BBC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A3BC0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3d2c
	if (cr6.eq) goto loc_823A3D2C;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// bl 0x8261bb48
	sub_8261BB48(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x823a3bf4
	if (!cr6.gt) goto loc_823A3BF4;
	// twi 31,r0,22
loc_823A3BF4:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r29,r11,-29244
	r29.s64 = r11.s64 + -29244;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823A3C18:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x823a3c24
	if (!cr6.gt) goto loc_823A3C24;
	// twi 31,r0,22
loc_823A3C24:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a3c38
	if (cr6.eq) goto loc_823A3C38;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x823a3c3c
	if (cr6.eq) goto loc_823A3C3C;
loc_823A3C38:
	// twi 31,r0,22
loc_823A3C3C:
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a3d24
	if (cr6.eq) goto loc_823A3D24;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a3c50
	if (!cr6.eq) goto loc_823A3C50;
	// twi 31,r0,22
loc_823A3C50:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823a3c60
	if (cr6.lt) goto loc_823A3C60;
	// twi 31,r0,22
loc_823A3C60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a3d04
	if (cr6.eq) goto loc_823A3D04;
	// bl 0x827410f8
	sub_827410F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3d04
	if (cr6.eq) goto loc_823A3D04;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// bl 0x8218df70
	sub_8218DF70(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823a3d38
	sub_823A3D38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a3d04
	if (cr6.eq) goto loc_823A3D04;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5128
	sub_823A5128(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// bne cr6,0x823a3cd0
	if (!cr6.eq) goto loc_823A3CD0;
	// li r11,2
	r11.s64 = 2;
loc_823A3CD0:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823a3d04
	if (!cr6.eq) goto loc_823A3D04;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823A3D04:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823a3d14
	if (cr6.lt) goto loc_823A3D14;
	// twi 31,r0,22
loc_823A3D14:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x823a3c18
	goto loc_823A3C18;
loc_823A3D24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233d9a8
	sub_8233D9A8(ctx, base);
loc_823A3D2C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_823A3D38"))) PPC_WEAK_FUNC(sub_823A3D38);
PPC_FUNC_IMPL(__imp__sub_823A3D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
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
	// bl 0x82ca2bc8
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a3d8c
	if (cr6.eq) goto loc_823A3D8C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r21,r11,-28544
	r21.s64 = r11.s64 + -28544;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x823a3da0
	if (!cr6.eq) goto loc_823A3DA0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823A3D8C:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	return;
loc_823A3DA0:
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r23,0
	r23.s64 = 0;
	// rlwinm r11,r5,17,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0x1;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3e90
	if (cr6.eq) goto loc_823A3E90;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3de0
	if (cr6.eq) goto loc_823A3DE0;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a3e8c
	goto loc_823A3E8C;
loc_823A3DE0:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a3e4c
	if (!cr0.gt) goto loc_823A3E4C;
loc_823A3DFC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a3e1c
	if (cr6.lt) goto loc_823A3E1C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823A3E1C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a3e38
	if (cr6.eq) goto loc_823A3E38;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a3e40
	goto loc_823A3E40;
loc_823A3E38:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A3E40:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a3dfc
	if (cr6.gt) goto loc_823A3DFC;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A3E4C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a3e84
	if (cr6.eq) goto loc_823A3E84;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3e68
	if (cr6.gt) goto loc_823A3E68;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A3E68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3e84
	if (!cr6.eq) goto loc_823A3E84;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823a3e88
	goto loc_823A3E88;
loc_823A3E84:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_823A3E88:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823A3E8C:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_823A3E90:
	// rlwinm r11,r5,8,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3f70
	if (cr6.eq) goto loc_823A3F70;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3ec0
	if (cr6.eq) goto loc_823A3EC0;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a3f6c
	goto loc_823A3F6C;
loc_823A3EC0:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a3f2c
	if (!cr0.gt) goto loc_823A3F2C;
loc_823A3EDC:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	cr6.compare<int32_t>(ctx.r7.s32, 24, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a3efc
	if (cr6.lt) goto loc_823A3EFC;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823A3EFC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a3f18
	if (cr6.eq) goto loc_823A3F18;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a3f20
	goto loc_823A3F20;
loc_823A3F18:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A3F20:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a3edc
	if (cr6.gt) goto loc_823A3EDC;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A3F2C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a3f64
	if (cr6.eq) goto loc_823A3F64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a3f48
	if (cr6.gt) goto loc_823A3F48;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A3F48:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3f64
	if (!cr6.eq) goto loc_823A3F64;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823a3f68
	goto loc_823A3F68;
loc_823A3F64:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_823A3F68:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823A3F6C:
	// mr r31,r11
	r31.u64 = r11.u64;
loc_823A3F70:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a4070
	if (cr6.eq) goto loc_823A4070;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3fb4
	if (cr6.eq) goto loc_823A3FB4;
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 77);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a4074
	goto loc_823A4074;
loc_823A3FB4:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a4020
	if (!cr0.gt) goto loc_823A4020;
loc_823A3FD0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,77
	cr6.compare<int32_t>(ctx.r7.s32, 77, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a3ff0
	if (cr6.lt) goto loc_823A3FF0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823A3FF0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a400c
	if (cr6.eq) goto loc_823A400C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a4014
	goto loc_823A4014;
loc_823A400C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A4014:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a3fd0
	if (cr6.gt) goto loc_823A3FD0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A4020:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a4060
	if (cr6.eq) goto loc_823A4060;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a403c
	if (cr6.gt) goto loc_823A403C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A403C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4060
	if (!cr6.eq) goto loc_823A4060;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a4074
	goto loc_823A4074;
loc_823A4060:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a4074
	goto loc_823A4074;
loc_823A4070:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823A4074:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a41e0
	if (cr6.eq) goto loc_823A41E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823a40b4
	if (cr6.eq) goto loc_823A40B4;
	// lbz r11,144(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a40b8
	if (!cr6.eq) goto loc_823A40B8;
loc_823A40B4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A40B8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a41e0
	if (cr6.eq) goto loc_823A41E0;
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// mr r11,r23
	r11.u64 = r23.u64;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a41bc
	if (cr6.eq) goto loc_823A41BC;
	// lwz r11,140(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4100
	if (cr6.eq) goto loc_823A4100;
	// lbz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 122);
	// lwz r11,72(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a41c0
	goto loc_823A41C0;
loc_823A4100:
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// lwz r6,76(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a416c
	if (!cr0.gt) goto loc_823A416C;
loc_823A411C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,122
	cr6.compare<int32_t>(ctx.r7.s32, 122, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a413c
	if (cr6.lt) goto loc_823A413C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823A413C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a4158
	if (cr6.eq) goto loc_823A4158;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a4160
	goto loc_823A4160;
loc_823A4158:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A4160:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a411c
	if (cr6.gt) goto loc_823A411C;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823A416C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a41ac
	if (cr6.eq) goto loc_823A41AC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a4188
	if (cr6.gt) goto loc_823A4188;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A4188:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a41ac
	if (!cr6.eq) goto loc_823A41AC;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a41c0
	goto loc_823A41C0;
loc_823A41AC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a41c0
	goto loc_823A41C0;
loc_823A41BC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823A41C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a41e0
	if (cr6.eq) goto loc_823A41E0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821c2c18
	sub_821C2C18(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x823a41e0
	if (!cr6.lt) goto loc_823A41E0;
	// li r29,1
	r29.s64 = 1;
loc_823A41E0:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// bgt cr6,0x823a42f0
	if (cr6.gt) goto loc_823A42F0;
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,16908
	r12.s64 = r12.s64 + 16908;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823A4270;
	case 1:
		goto loc_823A42F0;
	case 2:
		goto loc_823A42F0;
	case 3:
		goto loc_823A42F0;
	case 4:
		goto loc_823A42F0;
	case 5:
		goto loc_823A42F0;
	case 6:
		goto loc_823A42F0;
	case 7:
		goto loc_823A42F0;
	case 8:
		goto loc_823A42F0;
	case 9:
		goto loc_823A42F0;
	case 10:
		goto loc_823A42F0;
	case 11:
		goto loc_823A42F0;
	case 12:
		goto loc_823A42F0;
	case 13:
		goto loc_823A42F0;
	case 14:
		goto loc_823A42F0;
	case 15:
		goto loc_823A42F0;
	case 16:
		goto loc_823A42C0;
	case 17:
		goto loc_823A42C0;
	case 18:
		goto loc_823A42C0;
	case 19:
		goto loc_823A42C0;
	case 20:
		goto loc_823A42C0;
	case 21:
		goto loc_823A42C0;
	case 22:
		goto loc_823A42F0;
	case 23:
		goto loc_823A42F0;
	case 24:
		goto loc_823A42A0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,17008(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17008);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17088(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17088);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17136(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17136);
	// lwz r17,17056(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 17056);
loc_823A4270:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a42f0
	if (cr6.eq) goto loc_823A42F0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffa08
	sub_824FFA08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a42f0
	if (cr6.eq) goto loc_823A42F0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x823a42f0
	if (cr6.gt) goto loc_823A42F0;
loc_823A42A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a42b0
	if (cr6.eq) goto loc_823A42B0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823A42B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	return;
loc_823A42C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823a42f0
	if (cr6.eq) goto loc_823A42F0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82574e70
	sub_82574E70(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a42f0
	if (cr6.eq) goto loc_823A42F0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a4370
	if (!cr6.gt) goto loc_823A4370;
loc_823A42F0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823a4304
	if (cr6.eq) goto loc_823A4304;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x823a45d0
	if (!cr6.eq) goto loc_823A45D0;
loc_823A4304:
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r7,r11,-28520
	ctx.r7.s64 = r11.s64 + -28520;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a4350
	if (!cr6.eq) goto loc_823A4350;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a4340
	if (cr6.eq) goto loc_823A4340;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823A4340:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	return;
loc_823A4350:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28556
	ctx.r4.s64 = r11.s64 + -28556;
	// bl 0x82303f38
	sub_82303F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a4390
	if (!cr6.eq) goto loc_823A4390;
loc_823A436C:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_823A4370:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a42b0
	if (cr6.eq) goto loc_823A42B0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	return;
loc_823A4390:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a43b8
	if (cr6.eq) goto loc_823A43B8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28504
	ctx.r4.s64 = r11.s64 + -28504;
	// bl 0x82303f38
	sub_82303F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a436c
	if (!cr6.eq) goto loc_823A436C;
loc_823A43B8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x823a45d0
	if (!cr6.eq) goto loc_823A45D0;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82404800
	sub_82404800(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a44d4
	if (cr6.eq) goto loc_823A44D4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r23
	r25.u64 = r23.u64;
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823a44d4
	if (cr0.eq) goto loc_823A44D4;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r27,30560(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30560);
loc_823A440C:
	// add r7,r11,r28
	ctx.r7.u64 = r11.u64 + r28.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a4464
	if (cr6.eq) goto loc_823A4464;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a4464
	if (cr6.eq) goto loc_823A4464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829fb660
	sub_829FB660(ctx, base);
	// lbz r30,80(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_823A4464:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a44a8
	if (cr6.eq) goto loc_823A44A8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a44a8
	if (cr6.eq) goto loc_823A44A8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a44a8
	if (cr6.eq) goto loc_823A44A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829fb660
	sub_829FB660(ctx, base);
	// lbz r30,80(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_823A44A8:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a436c
	if (cr6.eq) goto loc_823A436C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, xer);
	// blt cr6,0x823a440c
	if (cr6.lt) goto loc_823A440C;
loc_823A44D4:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x822a97a8
	sub_822A97A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a45d0
	if (cr6.eq) goto loc_823A45D0;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,-19664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -19664);
	// bl 0x829fb6c8
	sub_829FB6C8(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a45d0
	if (cr6.eq) goto loc_823A45D0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823a452c
	if (cr6.eq) goto loc_823A452C;
	// lbz r11,144(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a4530
	if (!cr6.eq) goto loc_823A4530;
loc_823A452C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A4530:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a436c
	if (cr6.eq) goto loc_823A436C;
	// lwz r11,60(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 60);
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a45c0
	if (cr6.eq) goto loc_823A45C0;
	// lwz r11,140(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a45b8
	if (!cr6.eq) goto loc_823A45B8;
	// lwz r11,76(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a45b8
	if (!cr0.gt) goto loc_823A45B8;
loc_823A456C:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,217
	cr6.compare<int32_t>(ctx.r7.s32, 217, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a458c
	if (cr6.lt) goto loc_823A458C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823A458C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a45a8
	if (cr6.eq) goto loc_823A45A8;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a45b0
	goto loc_823A45B0;
loc_823A45A8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A45B0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a456c
	if (cr6.gt) goto loc_823A456C;
loc_823A45B8:
	// li r11,1
	r11.s64 = 1;
	// b 0x823a45c4
	goto loc_823A45C4;
loc_823A45C0:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823A45C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a436c
	if (cr6.eq) goto loc_823A436C;
loc_823A45D0:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a45e4
	if (cr6.eq) goto loc_823A45E4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82741bd8
	sub_82741BD8(ctx, base);
loc_823A45E4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	return;
}

__attribute__((alias("__imp__sub_823A45F8"))) PPC_WEAK_FUNC(sub_823A45F8);
PPC_FUNC_IMPL(__imp__sub_823A45F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28492
	ctx.r4.s64 = r11.s64 + -28492;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r21,-31927
	r21.s64 = -2092367872;
	// lwz r11,26788(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 26788);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x823fe8f8
	sub_823FE8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f8908
	sub_823F8908(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r28
	r26.u64 = r28.u64;
	// lwz r11,26912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,140(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a4674
	if (cr6.eq) goto loc_823A4674;
	// lbz r11,53(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823a4678
	if (!cr6.eq) goto loc_823A4678;
loc_823A4674:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A4678:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4690
	if (!cr6.eq) goto loc_823A4690;
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A4690:
	// bl 0x822641f0
	sub_822641F0(ctx, base);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4ccc
	if (cr6.eq) goto loc_823A4CCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a46f8
	if (cr6.eq) goto loc_823A46F8;
	// rotlwi r24,r10,0
	r24.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823a4ccc
	if (cr6.eq) goto loc_823A4CCC;
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a47c8
	if (cr6.eq) goto loc_823A47C8;
	// lwz r11,140(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4704
	if (cr6.eq) goto loc_823A4704;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// lwz r11,72(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r26,r11
	r26.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a47cc
	goto loc_823A47CC;
loc_823A46F8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82ca2c10
	return;
loc_823A4704:
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// lwz r6,76(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a4770
	if (!cr0.gt) goto loc_823A4770;
loc_823A4720:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a4740
	if (cr6.lt) goto loc_823A4740;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A4740:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a475c
	if (cr6.eq) goto loc_823A475C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a4764
	goto loc_823A4764;
loc_823A475C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A4764:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a4720
	if (cr6.gt) goto loc_823A4720;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_823A4770:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a47b4
	if (cr6.eq) goto loc_823A47B4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a478c
	if (cr6.gt) goto loc_823A478C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A478C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a47b4
	if (!cr6.eq) goto loc_823A47B4;
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r26,r11
	r26.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a47cc
	goto loc_823A47CC;
loc_823A47B4:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r26,r11
	r26.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a47cc
	goto loc_823A47CC;
loc_823A47C8:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A47CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4ccc
	if (cr6.eq) goto loc_823A4CCC;
	// lwz r9,26788(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 26788);
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r11,r1,216
	r11.s64 = ctx.r1.s64 + 216;
	// li r27,-1
	r27.s64 = -1;
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r22,152(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
loc_823A47F0:
	// stw r28,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r28.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r28.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bge 0x823a47f0
	if (!cr0.lt) goto loc_823A47F0;
	// addi r25,r20,20
	r25.s64 = r20.s64 + 20;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823a3aa8
	sub_823A3AA8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28456
	ctx.r4.s64 = r11.s64 + -28456;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r31,r27
	r31.u64 = r27.u64;
	// addi r30,r1,208
	r30.s64 = ctx.r1.s64 + 208;
	// li r29,27
	r29.s64 = 27;
	// addi r23,r11,28344
	r23.s64 = r11.s64 + 28344;
loc_823A4848:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823a491c
	if (!cr6.gt) goto loc_823A491C;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
loc_823A485C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a485c
	if (!cr0.eq) goto loc_823A485C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
loc_823A4880:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823a4880
	if (!cr0.eq) goto loc_823A4880;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(r31.u32, 24, xer);
	// bgt cr6,0x823a48b8
	if (cr6.gt) goto loc_823A48B8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a4cd8
	sub_823A4CD8(ctx, base);
	// b 0x823a48bc
	goto loc_823A48BC;
loc_823A48B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823A48BC:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a490c
	if (cr6.eq) goto loc_823A490C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82408b88
	sub_82408B88(ctx, base);
loc_823A490C:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A491C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x823a4848
	if (!cr0.eq) goto loc_823A4848;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r28.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// bl 0x8261bb48
	sub_8261BB48(ctx, base);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a4958
	if (!cr6.gt) goto loc_823A4958;
	// twi 31,r0,22
loc_823A4958:
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r31,148(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_823A4974:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a4980
	if (!cr6.gt) goto loc_823A4980;
	// twi 31,r0,22
loc_823A4980:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a4994
	if (cr6.eq) goto loc_823A4994;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x823a4998
	if (cr6.eq) goto loc_823A4998;
loc_823A4994:
	// twi 31,r0,22
loc_823A4998:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a4b10
	if (cr6.eq) goto loc_823A4B10;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823a49ac
	if (!cr6.eq) goto loc_823A49AC;
	// twi 31,r0,22
loc_823A49AC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823a49bc
	if (cr6.lt) goto loc_823A49BC;
	// twi 31,r0,22
loc_823A49BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4af0
	if (cr6.eq) goto loc_823A4AF0;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// bl 0x8218df70
	sub_8218DF70(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823a3d38
	sub_823A3D38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a4af0
	if (cr6.eq) goto loc_823A4AF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827410f8
	sub_827410F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4af0
	if (cr6.eq) goto loc_823A4AF0;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
loc_823A4A1C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a4a1c
	if (!cr0.eq) goto loc_823A4A1C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
loc_823A4A40:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823a4a40
	if (!cr0.eq) goto loc_823A4A40;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bgt cr6,0x823a4a80
	if (cr6.gt) goto loc_823A4A80;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a4cd8
	sub_823A4CD8(ctx, base);
	// b 0x823a4a84
	goto loc_823A4A84;
loc_823A4A80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823A4A84:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4ae0
	if (cr6.eq) goto loc_823A4AE0;
	// lwz r11,26788(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 26788);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x827be0f0
	sub_827BE0F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stb r28,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r28.u8);
	// li r9,24
	ctx.r9.s64 = 24;
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r28.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r28,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r28.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82407d20
	sub_82407D20(ctx, base);
loc_823A4AE0:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A4AF0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823a4b00
	if (cr6.lt) goto loc_823A4B00;
	// twi 31,r0,22
loc_823A4B00:
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x823a4974
	goto loc_823A4974;
loc_823A4B10:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// mr r11,r28
	r11.u64 = r28.u64;
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a4bf4
	if (cr6.eq) goto loc_823A4BF4;
	// lwz r11,140(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4b48
	if (cr6.eq) goto loc_823A4B48;
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 81);
	// lwz r11,72(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823a4bf4
	goto loc_823A4BF4;
loc_823A4B48:
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// lwz r6,76(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a4bb4
	if (!cr0.gt) goto loc_823A4BB4;
loc_823A4B64:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	cr6.compare<int32_t>(ctx.r7.s32, 81, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a4b84
	if (cr6.lt) goto loc_823A4B84;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_823A4B84:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a4ba0
	if (cr6.eq) goto loc_823A4BA0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a4ba8
	goto loc_823A4BA8;
loc_823A4BA0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A4BA8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a4b64
	if (cr6.gt) goto loc_823A4B64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_823A4BB4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a4bec
	if (cr6.eq) goto loc_823A4BEC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a4bd0
	if (cr6.gt) goto loc_823A4BD0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823A4BD0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4bec
	if (!cr6.eq) goto loc_823A4BEC;
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x823a4bf0
	goto loc_823A4BF0;
loc_823A4BEC:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_823A4BF0:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823A4BF4:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823a4ca0
	if (!cr6.gt) goto loc_823A4CA0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22936
	ctx.r4.s64 = r11.s64 + 22936;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-28416
	ctx.r4.s64 = ctx.r10.s64 + -28416;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,30556
	ctx.r5.s64 = ctx.r9.s64 + 30556;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82408338
	sub_82408338(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
loc_823A4C5C:
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
	// bne 0x823a4c5c
	if (!cr0.eq) goto loc_823A4C5C;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823A4C84:
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
	// bne 0x823a4c84
	if (!cr0.eq) goto loc_823A4C84;
loc_823A4CA0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8233d9a8
	sub_8233D9A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_823A4CB0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r23
	reserved.u32 = *(uint32_t*)(base + r23.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r23
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r23.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a4cb0
	if (!cr0.eq) goto loc_823A4CB0;
loc_823A4CCC:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_823A4CD8"))) PPC_WEAK_FUNC(sub_823A4CD8);
PPC_FUNC_IMPL(__imp__sub_823A4CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r26{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,19716
	r12.s64 = r12.s64 + 19716;
	// rlwinm r0,r5,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r17,20284(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20284);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,19972(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19972);
	// lwz r17,20024(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20024);
	// lwz r17,19868(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19868);
	// lwz r17,19920(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19920);
	// lwz r17,20076(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20076);
	// lwz r17,20128(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20128);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,19816(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 19816);
	// lwz r17,20752(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20752);
	// lwz r17,20232(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20232);
	// lwz r17,20180(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20180);
	// lwz r17,20388(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20388);
	// lwz r17,20440(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20440);
	// lwz r17,20492(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20492);
	// lwz r17,20544(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20544);
	// lwz r17,20596(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20596);
	// lwz r17,20648(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20648);
	// lwz r17,20700(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20700);
	// lwz r17,20752(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20752);
	// lwz r17,20336(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 20336);
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30480
	ctx.r4.s64 = r11.s64 + 30480;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28392
	ctx.r4.s64 = ctx.r10.s64 + -28392;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30492
	ctx.r4.s64 = r11.s64 + 30492;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28352
	ctx.r4.s64 = ctx.r10.s64 + -28352;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30496
	ctx.r4.s64 = r11.s64 + 30496;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28312
	ctx.r4.s64 = ctx.r10.s64 + -28312;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30484
	ctx.r4.s64 = r11.s64 + 30484;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28272
	ctx.r4.s64 = ctx.r10.s64 + -28272;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30488
	ctx.r4.s64 = r11.s64 + 30488;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28232
	ctx.r4.s64 = ctx.r10.s64 + -28232;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30500
	ctx.r4.s64 = r11.s64 + 30500;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28188
	ctx.r4.s64 = ctx.r10.s64 + -28188;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30504
	ctx.r4.s64 = r11.s64 + 30504;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28140
	ctx.r4.s64 = ctx.r10.s64 + -28140;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30516
	ctx.r4.s64 = r11.s64 + 30516;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28100
	ctx.r4.s64 = ctx.r10.s64 + -28100;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r4,r11,30512
	ctx.r4.s64 = r11.s64 + 30512;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28060
	ctx.r4.s64 = ctx.r10.s64 + -28060;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28016
	ctx.r4.s64 = r11.s64 + -28016;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-28008
	ctx.r4.s64 = ctx.r10.s64 + -28008;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28604
	ctx.r4.s64 = r11.s64 + -28604;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27968
	ctx.r4.s64 = ctx.r10.s64 + -27968;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28664
	ctx.r4.s64 = r11.s64 + -28664;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27928
	ctx.r4.s64 = ctx.r10.s64 + -27928;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28656
	ctx.r4.s64 = r11.s64 + -28656;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27888
	ctx.r4.s64 = ctx.r10.s64 + -27888;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28648
	ctx.r4.s64 = r11.s64 + -28648;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27848
	ctx.r4.s64 = ctx.r10.s64 + -27848;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28640
	ctx.r4.s64 = r11.s64 + -28640;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27808
	ctx.r4.s64 = ctx.r10.s64 + -27808;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28632
	ctx.r4.s64 = r11.s64 + -28632;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27768
	ctx.r4.s64 = ctx.r10.s64 + -27768;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28624
	ctx.r4.s64 = r11.s64 + -28624;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27728
	ctx.r4.s64 = ctx.r10.s64 + -27728;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,-28616
	ctx.r4.s64 = r11.s64 + -28616;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27688
	ctx.r4.s64 = ctx.r10.s64 + -27688;
	// bl 0x82275368
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823A5128"))) PPC_WEAK_FUNC(sub_823A5128);
PPC_FUNC_IMPL(__imp__sub_823A5128) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-29244
	ctx.r3.s64 = r11.s64 + -29244;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a517c
	if (cr6.eq) goto loc_823A517C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// b 0x823a5184
	goto loc_823A5184;
loc_823A517C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
loc_823A5184:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a519c
	if (cr6.eq) goto loc_823A519C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x823a51a0
	goto loc_823A51A0;
loc_823A519C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A51A0:
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

__attribute__((alias("__imp__sub_823A51B8"))) PPC_WEAK_FUNC(sub_823A51B8);
PPC_FUNC_IMPL(__imp__sub_823A51B8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a520c
	if (cr6.eq) goto loc_823A520C;
	// li r11,-1
	r11.s64 = -1;
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x823a520c
	if (!cr6.lt) goto loc_823A520C;
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
loc_823A520C:
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5228"))) PPC_WEAK_FUNC(sub_823A5228);
PPC_FUNC_IMPL(__imp__sub_823A5228) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1e620
	sub_82A1E620(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x823a529c
	if (cr6.eq) goto loc_823A529C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229e9e8
	sub_8229E9E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823a5274
	if (!cr6.eq) goto loc_823A5274;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a52a4
	goto loc_823A52A4;
loc_823A5274:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823a5290
	if (cr6.lt) goto loc_823A5290;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82179350
	sub_82179350(ctx, base);
loc_823A5290:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1e620
	sub_82A1E620(ctx, base);
loc_823A529C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
loc_823A52A4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A52C0"))) PPC_WEAK_FUNC(sub_823A52C0);
PPC_FUNC_IMPL(__imp__sub_823A52C0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a1e620
	sub_82A1E620(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,3224
	ctx.r5.s64 = ctx.r9.s64 + 3224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// bl 0x822b9510
	sub_822B9510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A5340"))) PPC_WEAK_FUNC(sub_823A5340);
PPC_FUNC_IMPL(__imp__sub_823A5340) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r10,r11,-17216
	ctx.r10.s64 = r11.s64 + -17216;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82b4a380
	sub_82B4A380(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a5384
	if (cr6.eq) goto loc_823A5384;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_823A5384:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,27144
	ctx.r9.s64 = ctx.r10.s64 + 27144;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823A53B8"))) PPC_WEAK_FUNC(sub_823A53B8);
PPC_FUNC_IMPL(__imp__sub_823A53B8) {
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
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A53F0"))) PPC_WEAK_FUNC(sub_823A53F0);
PPC_FUNC_IMPL(__imp__sub_823A53F0) {
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
	// bl 0x823a5340
	sub_823A5340(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5428
	if (cr6.eq) goto loc_823A5428;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A5428:
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

__attribute__((alias("__imp__sub_823A5440"))) PPC_WEAK_FUNC(sub_823A5440);
PPC_FUNC_IMPL(__imp__sub_823A5440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27431(r11)
	PPC_STORE_U8(r11.u32 + 27431, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5450"))) PPC_WEAK_FUNC(sub_823A5450);
PPC_FUNC_IMPL(__imp__sub_823A5450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27452(r11)
	PPC_STORE_U8(r11.u32 + 27452, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5460"))) PPC_WEAK_FUNC(sub_823A5460);
PPC_FUNC_IMPL(__imp__sub_823A5460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27453(r11)
	PPC_STORE_U8(r11.u32 + 27453, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5470"))) PPC_WEAK_FUNC(sub_823A5470);
PPC_FUNC_IMPL(__imp__sub_823A5470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27501(r11)
	PPC_STORE_U8(r11.u32 + 27501, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5480"))) PPC_WEAK_FUNC(sub_823A5480);
PPC_FUNC_IMPL(__imp__sub_823A5480) {
	PPC_FUNC_PROLOGUE();
	// stb r4,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5488"))) PPC_WEAK_FUNC(sub_823A5488);
PPC_FUNC_IMPL(__imp__sub_823A5488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28190(r11)
	PPC_STORE_U8(r11.u32 + -28190, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5498"))) PPC_WEAK_FUNC(sub_823A5498);
PPC_FUNC_IMPL(__imp__sub_823A5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,28344
	r31.s64 = r11.s64 + 28344;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_823A54C0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a54c0
	if (!cr0.eq) goto loc_823A54C0;
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r27,0(r7)
	r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r24,r8,2864
	r24.s64 = ctx.r8.s64 + 2864;
	// addi r20,r7,63
	r20.s64 = ctx.r7.s64 + 63;
	// addi r25,r9,-27472
	r25.s64 = ctx.r9.s64 + -27472;
	// addi r23,r10,-17152
	r23.s64 = ctx.r10.s64 + -17152;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// addi r21,r11,29924
	r21.s64 = r11.s64 + 29924;
loc_823A5518:
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823a552c
	if (cr6.eq) goto loc_823A552C;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// beq cr6,0x823a5530
	if (cr6.eq) goto loc_823A5530;
loc_823A552C:
	// twi 31,r0,22
loc_823A5530:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x823a5808
	if (cr6.eq) goto loc_823A5808;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x823a5544
	if (!cr6.eq) goto loc_823A5544;
	// twi 31,r0,22
loc_823A5544:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x823a5554
	if (!cr6.eq) goto loc_823A5554;
	// twi 31,r0,22
loc_823A5554:
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82b3aea0
	sub_82B3AEA0(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5588
	if (cr6.eq) goto loc_823A5588;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A5588:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cc0f20
	sub_82CC0F20(ctx, base);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823A55B0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a55b0
	if (!cr0.eq) goto loc_823A55B0;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// bne cr6,0x823a55e0
	if (!cr6.eq) goto loc_823A55E0;
	// twi 31,r0,22
loc_823A55E0:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_823A55E8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823a55e8
	if (!cr0.eq) goto loc_823A55E8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// rotlwi r5,r28,0
	ctx.r5.u64 = __builtin_rotateleft32(r28.u32, 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e3a10
	sub_821E3A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lfd f1,8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// bl 0x821ee858
	sub_821EE858(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821ec668
	sub_821EC668(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823A56A4:
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
	// bne 0x823a56a4
	if (!cr0.eq) goto loc_823A56A4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A56D0:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x823a56d0
	if (!cr0.eq) goto loc_823A56D0;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_823A56FC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a56fc
	if (!cr0.eq) goto loc_823A56FC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823A5728:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x823a5728
	if (!cr0.eq) goto loc_823A5728;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A5754:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x823a5754
	if (!cr0.eq) goto loc_823A5754;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_823A5780:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a5780
	if (!cr0.eq) goto loc_823A5780;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823A57A8:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x823a57a8
	if (!cr0.eq) goto loc_823A57A8;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A57D4:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x823a57d4
	if (!cr0.eq) goto loc_823A57D4;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x82a962b0
	sub_82A962B0(ctx, base);
	// lwz r27,156(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r26,152(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x823a5518
	goto loc_823A5518;
loc_823A5808:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5820
	if (!cr6.eq) goto loc_823A5820;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x823a5828
	goto loc_823A5828;
loc_823A5820:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A5828:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_823A5848:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a5848
	if (!cr0.eq) goto loc_823A5848;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c14
	return;
}

__attribute__((alias("__imp__sub_823A5870"))) PPC_WEAK_FUNC(sub_823A5870);
PPC_FUNC_IMPL(__imp__sub_823A5870) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,30604
	r31.s64 = r11.s64 + 30604;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82358830
	sub_82358830(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a58c8
	if (cr6.eq) goto loc_823A58C8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x823a58cc
	if (cr6.eq) goto loc_823A58CC;
loc_823A58C8:
	// twi 31,r0,22
loc_823A58CC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x823a58f4
	if (!cr6.eq) goto loc_823A58F4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x823077b8
	sub_823077B8(ctx, base);
loc_823A58F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_823A5900"))) PPC_WEAK_FUNC(sub_823A5900);
PPC_FUNC_IMPL(__imp__sub_823A5900) {
	PPC_FUNC_PROLOGUE();
	// twi 7,r0,0
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5908"))) PPC_WEAK_FUNC(sub_823A5908);
PPC_FUNC_IMPL(__imp__sub_823A5908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30632
	ctx.r3.s64 = r11.s64 + 30632;
	// b 0x82265160
	sub_82265160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5918"))) PPC_WEAK_FUNC(sub_823A5918);
PPC_FUNC_IMPL(__imp__sub_823A5918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26975(r11)
	PPC_STORE_U8(r11.u32 + 26975, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5928"))) PPC_WEAK_FUNC(sub_823A5928);
PPC_FUNC_IMPL(__imp__sub_823A5928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26985(r11)
	PPC_STORE_U8(r11.u32 + 26985, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5938"))) PPC_WEAK_FUNC(sub_823A5938);
PPC_FUNC_IMPL(__imp__sub_823A5938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26984(r11)
	PPC_STORE_U8(r11.u32 + 26984, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5948"))) PPC_WEAK_FUNC(sub_823A5948);
PPC_FUNC_IMPL(__imp__sub_823A5948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26986(r11)
	PPC_STORE_U8(r11.u32 + 26986, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5958"))) PPC_WEAK_FUNC(sub_823A5958);
PPC_FUNC_IMPL(__imp__sub_823A5958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26987(r11)
	PPC_STORE_U8(r11.u32 + 26987, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5968"))) PPC_WEAK_FUNC(sub_823A5968);
PPC_FUNC_IMPL(__imp__sub_823A5968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27668(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27668, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5978"))) PPC_WEAK_FUNC(sub_823A5978);
PPC_FUNC_IMPL(__imp__sub_823A5978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27048(r11)
	PPC_STORE_U8(r11.u32 + 27048, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5988"))) PPC_WEAK_FUNC(sub_823A5988);
PPC_FUNC_IMPL(__imp__sub_823A5988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27800(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27800, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82363ee0
	sub_82363EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A59B0"))) PPC_WEAK_FUNC(sub_823A59B0);
PPC_FUNC_IMPL(__imp__sub_823A59B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27796(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27796, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82363ee0
	sub_82363EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A59D8"))) PPC_WEAK_FUNC(sub_823A59D8);
PPC_FUNC_IMPL(__imp__sub_823A59D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27788(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27788, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82363ee0
	sub_82363EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5A00"))) PPC_WEAK_FUNC(sub_823A5A00);
PPC_FUNC_IMPL(__imp__sub_823A5A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27792(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27792, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82363ee0
	sub_82363EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5A28"))) PPC_WEAK_FUNC(sub_823A5A28);
PPC_FUNC_IMPL(__imp__sub_823A5A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r26{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,23116
	r12.s64 = r12.s64 + 23116;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823A5A5C;
	case 1:
		goto loc_823A5AA4;
	case 2:
		goto loc_823A5AEC;
	case 3:
		goto loc_823A5AFC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,23132(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 23132);
	// lwz r17,23204(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 23204);
	// lwz r17,23276(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 23276);
	// lwz r17,23292(r26)
	r17.u64 = PPC_LOAD_U32(r26.u32 + 23292);
loc_823A5A5C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r7,r11,-27852
	ctx.r7.s64 = r11.s64 + -27852;
	// li r11,0
	r11.s64 = 0;
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// stb r11,27056(r8)
	PPC_STORE_U8(ctx.r8.u32 + 27056, r11.u8);
	// lis r3,-31950
	ctx.r3.s64 = -2093875200;
	// lfs f0,384(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,-27644(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -27644, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,-27654(r5)
	PPC_STORE_U8(ctx.r5.u32 + -27654, ctx.r10.u8);
	// stb r9,-27653(r4)
	PPC_STORE_U8(ctx.r4.u32 + -27653, ctx.r9.u8);
	// stb r8,-27652(r3)
	PPC_STORE_U8(ctx.r3.u32 + -27652, ctx.r8.u8);
	// blr 
	return;
loc_823A5AA4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r7,r11,-27852
	ctx.r7.s64 = r11.s64 + -27852;
	// li r11,0
	r11.s64 = 0;
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// stb r11,27056(r8)
	PPC_STORE_U8(ctx.r8.u32 + 27056, r11.u8);
	// lis r3,-31950
	ctx.r3.s64 = -2093875200;
	// lfs f0,384(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,-27644(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -27644, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,-27654(r5)
	PPC_STORE_U8(ctx.r5.u32 + -27654, ctx.r10.u8);
	// stb r9,-27653(r4)
	PPC_STORE_U8(ctx.r4.u32 + -27653, ctx.r9.u8);
	// stb r8,-27652(r3)
	PPC_STORE_U8(ctx.r3.u32 + -27652, ctx.r8.u8);
	// blr 
	return;
loc_823A5AEC:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823a5b08
	goto loc_823A5B08;
loc_823A5AFC:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_823A5B08:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r6,-31950
	ctx.r6.s64 = -2093875200;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// stb r11,27056(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27056, r11.u8);
	// li r11,1
	r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,-27652(r5)
	PPC_STORE_U8(ctx.r5.u32 + -27652, r11.u8);
	// stb r9,-27653(r6)
	PPC_STORE_U8(ctx.r6.u32 + -27653, ctx.r9.u8);
	// stfs f0,-27644(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -27644, temp.u32);
	// stb r10,-27654(r7)
	PPC_STORE_U8(ctx.r7.u32 + -27654, ctx.r10.u8);
	// blr 
	return;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27049(r11)
	PPC_STORE_U8(r11.u32 + 27049, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B50"))) PPC_WEAK_FUNC(sub_823A5B50);
PPC_FUNC_IMPL(__imp__sub_823A5B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27656(r11)
	PPC_STORE_U8(r11.u32 + -27656, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B60"))) PPC_WEAK_FUNC(sub_823A5B60);
PPC_FUNC_IMPL(__imp__sub_823A5B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27655(r11)
	PPC_STORE_U8(r11.u32 + -27655, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B70"))) PPC_WEAK_FUNC(sub_823A5B70);
PPC_FUNC_IMPL(__imp__sub_823A5B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27050(r11)
	PPC_STORE_U8(r11.u32 + 27050, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B80"))) PPC_WEAK_FUNC(sub_823A5B80);
PPC_FUNC_IMPL(__imp__sub_823A5B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27051(r11)
	PPC_STORE_U8(r11.u32 + 27051, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B90"))) PPC_WEAK_FUNC(sub_823A5B90);
PPC_FUNC_IMPL(__imp__sub_823A5B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27052(r11)
	PPC_STORE_U8(r11.u32 + 27052, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BA0"))) PPC_WEAK_FUNC(sub_823A5BA0);
PPC_FUNC_IMPL(__imp__sub_823A5BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27053(r11)
	PPC_STORE_U8(r11.u32 + 27053, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BB0"))) PPC_WEAK_FUNC(sub_823A5BB0);
PPC_FUNC_IMPL(__imp__sub_823A5BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27054(r11)
	PPC_STORE_U8(r11.u32 + 27054, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BC0"))) PPC_WEAK_FUNC(sub_823A5BC0);
PPC_FUNC_IMPL(__imp__sub_823A5BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27055(r11)
	PPC_STORE_U8(r11.u32 + 27055, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BD0"))) PPC_WEAK_FUNC(sub_823A5BD0);
PPC_FUNC_IMPL(__imp__sub_823A5BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27056(r11)
	PPC_STORE_U8(r11.u32 + 27056, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BE0"))) PPC_WEAK_FUNC(sub_823A5BE0);
PPC_FUNC_IMPL(__imp__sub_823A5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27654(r11)
	PPC_STORE_U8(r11.u32 + -27654, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BF0"))) PPC_WEAK_FUNC(sub_823A5BF0);
PPC_FUNC_IMPL(__imp__sub_823A5BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27653(r11)
	PPC_STORE_U8(r11.u32 + -27653, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C00"))) PPC_WEAK_FUNC(sub_823A5C00);
PPC_FUNC_IMPL(__imp__sub_823A5C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27652(r11)
	PPC_STORE_U8(r11.u32 + -27652, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C10"))) PPC_WEAK_FUNC(sub_823A5C10);
PPC_FUNC_IMPL(__imp__sub_823A5C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27648(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27648, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C20"))) PPC_WEAK_FUNC(sub_823A5C20);
PPC_FUNC_IMPL(__imp__sub_823A5C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27644, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C30"))) PPC_WEAK_FUNC(sub_823A5C30);
PPC_FUNC_IMPL(__imp__sub_823A5C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27636, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C40"))) PPC_WEAK_FUNC(sub_823A5C40);
PPC_FUNC_IMPL(__imp__sub_823A5C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27640(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27640, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C50"))) PPC_WEAK_FUNC(sub_823A5C50);
PPC_FUNC_IMPL(__imp__sub_823A5C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stfs f1,27060(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 27060, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C60"))) PPC_WEAK_FUNC(sub_823A5C60);
PPC_FUNC_IMPL(__imp__sub_823A5C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27632(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27632, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C70"))) PPC_WEAK_FUNC(sub_823A5C70);
PPC_FUNC_IMPL(__imp__sub_823A5C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27628(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27628, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C80"))) PPC_WEAK_FUNC(sub_823A5C80);
PPC_FUNC_IMPL(__imp__sub_823A5C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27624(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27624, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C90"))) PPC_WEAK_FUNC(sub_823A5C90);
PPC_FUNC_IMPL(__imp__sub_823A5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27620(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27620, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CA0"))) PPC_WEAK_FUNC(sub_823A5CA0);
PPC_FUNC_IMPL(__imp__sub_823A5CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27616(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27616, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CB0"))) PPC_WEAK_FUNC(sub_823A5CB0);
PPC_FUNC_IMPL(__imp__sub_823A5CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27612(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27612, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CC0"))) PPC_WEAK_FUNC(sub_823A5CC0);
PPC_FUNC_IMPL(__imp__sub_823A5CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27608, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CD0"))) PPC_WEAK_FUNC(sub_823A5CD0);
PPC_FUNC_IMPL(__imp__sub_823A5CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27604(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27604, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CE0"))) PPC_WEAK_FUNC(sub_823A5CE0);
PPC_FUNC_IMPL(__imp__sub_823A5CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27600(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27600, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CF0"))) PPC_WEAK_FUNC(sub_823A5CF0);
PPC_FUNC_IMPL(__imp__sub_823A5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27057(r11)
	PPC_STORE_U8(r11.u32 + 27057, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D00"))) PPC_WEAK_FUNC(sub_823A5D00);
PPC_FUNC_IMPL(__imp__sub_823A5D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27596, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D10"))) PPC_WEAK_FUNC(sub_823A5D10);
PPC_FUNC_IMPL(__imp__sub_823A5D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f1,-27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27596);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D20"))) PPC_WEAK_FUNC(sub_823A5D20);
PPC_FUNC_IMPL(__imp__sub_823A5D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27592(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D30"))) PPC_WEAK_FUNC(sub_823A5D30);
PPC_FUNC_IMPL(__imp__sub_823A5D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f1,-27592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27592);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D40"))) PPC_WEAK_FUNC(sub_823A5D40);
PPC_FUNC_IMPL(__imp__sub_823A5D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D50"))) PPC_WEAK_FUNC(sub_823A5D50);
PPC_FUNC_IMPL(__imp__sub_823A5D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27584(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27584, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D60"))) PPC_WEAK_FUNC(sub_823A5D60);
PPC_FUNC_IMPL(__imp__sub_823A5D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27580(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27580, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D70"))) PPC_WEAK_FUNC(sub_823A5D70);
PPC_FUNC_IMPL(__imp__sub_823A5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f1,-27580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27580);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D80"))) PPC_WEAK_FUNC(sub_823A5D80);
PPC_FUNC_IMPL(__imp__sub_823A5D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27576(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27576, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D90"))) PPC_WEAK_FUNC(sub_823A5D90);
PPC_FUNC_IMPL(__imp__sub_823A5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lfs f1,-27576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27576);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DA0"))) PPC_WEAK_FUNC(sub_823A5DA0);
PPC_FUNC_IMPL(__imp__sub_823A5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27572(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27572, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DB0"))) PPC_WEAK_FUNC(sub_823A5DB0);
PPC_FUNC_IMPL(__imp__sub_823A5DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27568(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27568, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DC0"))) PPC_WEAK_FUNC(sub_823A5DC0);
PPC_FUNC_IMPL(__imp__sub_823A5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27564(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27564, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DD0"))) PPC_WEAK_FUNC(sub_823A5DD0);
PPC_FUNC_IMPL(__imp__sub_823A5DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27560(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27560, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DE0"))) PPC_WEAK_FUNC(sub_823A5DE0);
PPC_FUNC_IMPL(__imp__sub_823A5DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27556(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27556, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DF0"))) PPC_WEAK_FUNC(sub_823A5DF0);
PPC_FUNC_IMPL(__imp__sub_823A5DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27552(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27552, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E00"))) PPC_WEAK_FUNC(sub_823A5E00);
PPC_FUNC_IMPL(__imp__sub_823A5E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27548(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27548, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E10"))) PPC_WEAK_FUNC(sub_823A5E10);
PPC_FUNC_IMPL(__imp__sub_823A5E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27544(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27544, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E20"))) PPC_WEAK_FUNC(sub_823A5E20);
PPC_FUNC_IMPL(__imp__sub_823A5E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27651(r11)
	PPC_STORE_U8(r11.u32 + -27651, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E30"))) PPC_WEAK_FUNC(sub_823A5E30);
PPC_FUNC_IMPL(__imp__sub_823A5E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27058(r11)
	PPC_STORE_U8(r11.u32 + 27058, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E40"))) PPC_WEAK_FUNC(sub_823A5E40);
PPC_FUNC_IMPL(__imp__sub_823A5E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27650(r11)
	PPC_STORE_U8(r11.u32 + -27650, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E50"))) PPC_WEAK_FUNC(sub_823A5E50);
PPC_FUNC_IMPL(__imp__sub_823A5E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27540(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27540, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E60"))) PPC_WEAK_FUNC(sub_823A5E60);
PPC_FUNC_IMPL(__imp__sub_823A5E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27536(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27536, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E70"))) PPC_WEAK_FUNC(sub_823A5E70);
PPC_FUNC_IMPL(__imp__sub_823A5E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27532(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27532, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E80"))) PPC_WEAK_FUNC(sub_823A5E80);
PPC_FUNC_IMPL(__imp__sub_823A5E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27528(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5E90"))) PPC_WEAK_FUNC(sub_823A5E90);
PPC_FUNC_IMPL(__imp__sub_823A5E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EA0"))) PPC_WEAK_FUNC(sub_823A5EA0);
PPC_FUNC_IMPL(__imp__sub_823A5EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27649(r11)
	PPC_STORE_U8(r11.u32 + -27649, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EB0"))) PPC_WEAK_FUNC(sub_823A5EB0);
PPC_FUNC_IMPL(__imp__sub_823A5EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27520(r11)
	PPC_STORE_U8(r11.u32 + -27520, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EC0"))) PPC_WEAK_FUNC(sub_823A5EC0);
PPC_FUNC_IMPL(__imp__sub_823A5EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27059(r11)
	PPC_STORE_U8(r11.u32 + 27059, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5ED0"))) PPC_WEAK_FUNC(sub_823A5ED0);
PPC_FUNC_IMPL(__imp__sub_823A5ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27519(r11)
	PPC_STORE_U8(r11.u32 + -27519, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EE0"))) PPC_WEAK_FUNC(sub_823A5EE0);
PPC_FUNC_IMPL(__imp__sub_823A5EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27518(r11)
	PPC_STORE_U8(r11.u32 + -27518, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5EF0"))) PPC_WEAK_FUNC(sub_823A5EF0);
PPC_FUNC_IMPL(__imp__sub_823A5EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27517(r11)
	PPC_STORE_U8(r11.u32 + -27517, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5F00"))) PPC_WEAK_FUNC(sub_823A5F00);
PPC_FUNC_IMPL(__imp__sub_823A5F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27516(r11)
	PPC_STORE_U8(r11.u32 + -27516, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5F10"))) PPC_WEAK_FUNC(sub_823A5F10);
PPC_FUNC_IMPL(__imp__sub_823A5F10) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r8,-27515(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -27515);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x823a609c
	if (cr6.eq) goto loc_823A609C;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stb r3,-27515(r11)
	PPC_STORE_U8(r11.u32 + -27515, ctx.r3.u8);
	// lwz r11,26912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8222c210
	sub_8222C210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5f70
	if (cr6.eq) goto loc_823A5F70;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a5f74
	if (!cr6.eq) goto loc_823A5F74;
loc_823A5F70:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A5F74:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a609c
	if (cr6.eq) goto loc_823A609C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a6088
	if (cr6.eq) goto loc_823A6088;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a5fc0
	if (cr6.eq) goto loc_823A5FC0;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a608c
	goto loc_823A608C;
loc_823A5FC0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a6030
	if (!cr0.gt) goto loc_823A6030;
loc_823A5FE0:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a6000
	if (cr6.lt) goto loc_823A6000;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6000:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a601c
	if (cr6.eq) goto loc_823A601C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a6024
	goto loc_823A6024;
loc_823A601C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A6024:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a5fe0
	if (cr6.gt) goto loc_823A5FE0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6030:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a6074
	if (cr6.eq) goto loc_823A6074;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a604c
	if (cr6.gt) goto loc_823A604C;
	// li r11,0
	r11.s64 = 0;
loc_823A604C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6074
	if (!cr6.eq) goto loc_823A6074;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a608c
	goto loc_823A608C;
loc_823A6074:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a608c
	goto loc_823A608C;
loc_823A6088:
	// li r11,0
	r11.s64 = 0;
loc_823A608C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a609c
	if (cr6.eq) goto loc_823A609C;
	// bl 0x823f23b0
	sub_823F23B0(ctx, base);
loc_823A609C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60B0"))) PPC_WEAK_FUNC(sub_823A60B0);
PPC_FUNC_IMPL(__imp__sub_823A60B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,28432(r11)
	PPC_STORE_U8(r11.u32 + 28432, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60C0"))) PPC_WEAK_FUNC(sub_823A60C0);
PPC_FUNC_IMPL(__imp__sub_823A60C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// stb r3,17930(r11)
	PPC_STORE_U8(r11.u32 + 17930, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A60D0"))) PPC_WEAK_FUNC(sub_823A60D0);
PPC_FUNC_IMPL(__imp__sub_823A60D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b6ec08
	sub_82B6EC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A60D8"))) PPC_WEAK_FUNC(sub_823A60D8);
PPC_FUNC_IMPL(__imp__sub_823A60D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b5d5f0
	sub_82B5D5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A60E0"))) PPC_WEAK_FUNC(sub_823A60E0);
PPC_FUNC_IMPL(__imp__sub_823A60E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27512(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27512, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a619c
	if (cr6.eq) goto loc_823A619C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6198
	if (cr6.eq) goto loc_823A6198;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6148
	if (cr6.eq) goto loc_823A6148;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a614c
	if (!cr6.eq) goto loc_823A614C;
loc_823A6148:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A614C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6280
	if (cr6.eq) goto loc_823A6280;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a626c
	if (cr6.eq) goto loc_823A626C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a61a4
	if (cr6.eq) goto loc_823A61A4;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6270
	goto loc_823A6270;
loc_823A6198:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A619C:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a6148
	goto loc_823A6148;
loc_823A61A4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a6214
	if (!cr0.gt) goto loc_823A6214;
loc_823A61C4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a61e4
	if (cr6.lt) goto loc_823A61E4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A61E4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a6200
	if (cr6.eq) goto loc_823A6200;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a6208
	goto loc_823A6208;
loc_823A6200:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A6208:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a61c4
	if (cr6.gt) goto loc_823A61C4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6214:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a6258
	if (cr6.eq) goto loc_823A6258;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a6230
	if (cr6.gt) goto loc_823A6230;
	// li r11,0
	r11.s64 = 0;
loc_823A6230:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6258
	if (!cr6.eq) goto loc_823A6258;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6270
	goto loc_823A6270;
loc_823A6258:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6270
	goto loc_823A6270;
loc_823A626C:
	// li r11,0
	r11.s64 = 0;
loc_823A6270:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6280
	if (cr6.eq) goto loc_823A6280;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A6280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6290"))) PPC_WEAK_FUNC(sub_823A6290);
PPC_FUNC_IMPL(__imp__sub_823A6290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27508(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27508, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a634c
	if (cr6.eq) goto loc_823A634C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6348
	if (cr6.eq) goto loc_823A6348;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a62f8
	if (cr6.eq) goto loc_823A62F8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a62fc
	if (!cr6.eq) goto loc_823A62FC;
loc_823A62F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A62FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6430
	if (cr6.eq) goto loc_823A6430;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a641c
	if (cr6.eq) goto loc_823A641C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6354
	if (cr6.eq) goto loc_823A6354;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6420
	goto loc_823A6420;
loc_823A6348:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A634C:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a62f8
	goto loc_823A62F8;
loc_823A6354:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a63c4
	if (!cr0.gt) goto loc_823A63C4;
loc_823A6374:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a6394
	if (cr6.lt) goto loc_823A6394;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6394:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a63b0
	if (cr6.eq) goto loc_823A63B0;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a63b8
	goto loc_823A63B8;
loc_823A63B0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A63B8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a6374
	if (cr6.gt) goto loc_823A6374;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A63C4:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a6408
	if (cr6.eq) goto loc_823A6408;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a63e0
	if (cr6.gt) goto loc_823A63E0;
	// li r11,0
	r11.s64 = 0;
loc_823A63E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6408
	if (!cr6.eq) goto loc_823A6408;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6420
	goto loc_823A6420;
loc_823A6408:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6420
	goto loc_823A6420;
loc_823A641C:
	// li r11,0
	r11.s64 = 0;
loc_823A6420:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6430
	if (cr6.eq) goto loc_823A6430;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A6430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6440"))) PPC_WEAK_FUNC(sub_823A6440);
PPC_FUNC_IMPL(__imp__sub_823A6440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27504(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27504, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a64fc
	if (cr6.eq) goto loc_823A64FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a64f8
	if (cr6.eq) goto loc_823A64F8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a64a8
	if (cr6.eq) goto loc_823A64A8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a64ac
	if (!cr6.eq) goto loc_823A64AC;
loc_823A64A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A64AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a65e0
	if (cr6.eq) goto loc_823A65E0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a65cc
	if (cr6.eq) goto loc_823A65CC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6504
	if (cr6.eq) goto loc_823A6504;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A64F8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A64FC:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a64a8
	goto loc_823A64A8;
loc_823A6504:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a6574
	if (!cr0.gt) goto loc_823A6574;
loc_823A6524:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a6544
	if (cr6.lt) goto loc_823A6544;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A6544:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a6560
	if (cr6.eq) goto loc_823A6560;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a6568
	goto loc_823A6568;
loc_823A6560:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A6568:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a6524
	if (cr6.gt) goto loc_823A6524;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6574:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a65b8
	if (cr6.eq) goto loc_823A65B8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a6590
	if (cr6.gt) goto loc_823A6590;
	// li r11,0
	r11.s64 = 0;
loc_823A6590:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a65b8
	if (!cr6.eq) goto loc_823A65B8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A65B8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a65d0
	goto loc_823A65D0;
loc_823A65CC:
	// li r11,0
	r11.s64 = 0;
loc_823A65D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a65e0
	if (cr6.eq) goto loc_823A65E0;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A65E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A65F0"))) PPC_WEAK_FUNC(sub_823A65F0);
PPC_FUNC_IMPL(__imp__sub_823A65F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// stfs f1,-27500(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27500, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a66ac
	if (cr6.eq) goto loc_823A66AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a66a8
	if (cr6.eq) goto loc_823A66A8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6658
	if (cr6.eq) goto loc_823A6658;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a665c
	if (!cr6.eq) goto loc_823A665C;
loc_823A6658:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A665C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6790
	if (cr6.eq) goto loc_823A6790;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a677c
	if (cr6.eq) goto loc_823A677C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a66b4
	if (cr6.eq) goto loc_823A66B4;
	// lbz r10,57(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6780
	goto loc_823A6780;
loc_823A66A8:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A66AC:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a6658
	goto loc_823A6658;
loc_823A66B4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a6724
	if (!cr0.gt) goto loc_823A6724;
loc_823A66D4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	cr6.compare<int32_t>(ctx.r7.s32, 57, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a66f4
	if (cr6.lt) goto loc_823A66F4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823A66F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a6710
	if (cr6.eq) goto loc_823A6710;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a6718
	goto loc_823A6718;
loc_823A6710:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A6718:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a66d4
	if (cr6.gt) goto loc_823A66D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6724:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a6768
	if (cr6.eq) goto loc_823A6768;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a6740
	if (cr6.gt) goto loc_823A6740;
	// li r11,0
	r11.s64 = 0;
loc_823A6740:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6768
	if (!cr6.eq) goto loc_823A6768;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6780
	goto loc_823A6780;
loc_823A6768:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6780
	goto loc_823A6780;
loc_823A677C:
	// li r11,0
	r11.s64 = 0;
loc_823A6780:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6790
	if (cr6.eq) goto loc_823A6790;
	// bl 0x824a23b0
	sub_824A23B0(ctx, base);
loc_823A6790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67A0"))) PPC_WEAK_FUNC(sub_823A67A0);
PPC_FUNC_IMPL(__imp__sub_823A67A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27496(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27496, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67B0"))) PPC_WEAK_FUNC(sub_823A67B0);
PPC_FUNC_IMPL(__imp__sub_823A67B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27664(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27664, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67C0"))) PPC_WEAK_FUNC(sub_823A67C0);
PPC_FUNC_IMPL(__imp__sub_823A67C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27660(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27660, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67D0"))) PPC_WEAK_FUNC(sub_823A67D0);
PPC_FUNC_IMPL(__imp__sub_823A67D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27727(r11)
	PPC_STORE_U8(r11.u32 + -27727, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67E0"))) PPC_WEAK_FUNC(sub_823A67E0);
PPC_FUNC_IMPL(__imp__sub_823A67E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27045(r11)
	PPC_STORE_U8(r11.u32 + 27045, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67F0"))) PPC_WEAK_FUNC(sub_823A67F0);
PPC_FUNC_IMPL(__imp__sub_823A67F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27046(r11)
	PPC_STORE_U8(r11.u32 + 27046, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6800"))) PPC_WEAK_FUNC(sub_823A6800);
PPC_FUNC_IMPL(__imp__sub_823A6800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27047(r11)
	PPC_STORE_U8(r11.u32 + 27047, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6810"))) PPC_WEAK_FUNC(sub_823A6810);
PPC_FUNC_IMPL(__imp__sub_823A6810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27726(r11)
	PPC_STORE_U8(r11.u32 + -27726, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6820"))) PPC_WEAK_FUNC(sub_823A6820);
PPC_FUNC_IMPL(__imp__sub_823A6820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27725(r11)
	PPC_STORE_U8(r11.u32 + -27725, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6830"))) PPC_WEAK_FUNC(sub_823A6830);
PPC_FUNC_IMPL(__imp__sub_823A6830) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,26912(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26912);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v2,v11,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// vrlimi128 v2,v13,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x82623648
	sub_82623648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A68C0"))) PPC_WEAK_FUNC(sub_823A68C0);
PPC_FUNC_IMPL(__imp__sub_823A68C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a68ec
	if (cr6.eq) goto loc_823A68EC;
	// lbz r11,144(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a68f0
	if (!cr6.eq) goto loc_823A68F0;
loc_823A68EC:
	// li r11,0
	r11.s64 = 0;
loc_823A68F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a696c
	if (cr6.eq) goto loc_823A696C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,26912(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26912);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v2,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v2,v12,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// vrlimi128 v2,v13,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x826236c8
	sub_826236C8(ctx, base);
loc_823A696C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6980"))) PPC_WEAK_FUNC(sub_823A6980);
PPC_FUNC_IMPL(__imp__sub_823A6980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6ad4
	if (cr6.eq) goto loc_823A6AD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6ad0
	if (cr6.eq) goto loc_823A6AD0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a69e8
	if (cr6.eq) goto loc_823A69E8;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a69ec
	if (!cr6.eq) goto loc_823A69EC;
loc_823A69E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A69EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6ab8
	if (cr6.eq) goto loc_823A6AB8;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-27456
	ctx.r10.s64 = r11.s64 + -27456;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-27468
	ctx.r4.s64 = ctx.r6.s64 + -27468;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,13128
	ctx.r4.s64 = ctx.r4.s64 + 13128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// lvlx v0,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,1
	ctx.r6.s64 = 1;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vaddfp128 v1,v127,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v13.f32)));
	// bl 0x82391198
	sub_82391198(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_823A6AB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823A6AD0:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A6AD4:
	// li r11,0
	r11.s64 = 0;
	// b 0x823a69e8
	goto loc_823A69E8;
}

__attribute__((alias("__imp__sub_823A6AE0"))) PPC_WEAK_FUNC(sub_823A6AE0);
PPC_FUNC_IMPL(__imp__sub_823A6AE0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,26912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6ba0
	if (cr6.eq) goto loc_823A6BA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6b9c
	if (cr6.eq) goto loc_823A6B9C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6b50
	if (cr6.eq) goto loc_823A6B50;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a6b54
	if (!cr6.eq) goto loc_823A6B54;
loc_823A6B50:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823A6B54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6c9c
	if (cr6.eq) goto loc_823A6C9C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a6c6c
	if (cr6.eq) goto loc_823A6C6C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6ba8
	if (cr6.eq) goto loc_823A6BA8;
	// lbz r10,154(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 154);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6B9C:
	// bl 0x821940c8
	sub_821940C8(ctx, base);
loc_823A6BA0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x823a6b50
	goto loc_823A6B50;
loc_823A6BA8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823a6c14
	if (!cr0.gt) goto loc_823A6C14;
loc_823A6BC4:
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,154
	cr6.compare<int32_t>(ctx.r7.s32, 154, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823a6be4
	if (cr6.lt) goto loc_823A6BE4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823A6BE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a6c00
	if (cr6.eq) goto loc_823A6C00;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a6c08
	goto loc_823A6C08;
loc_823A6C00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823A6C08:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x823a6bc4
	if (cr6.gt) goto loc_823A6BC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A6C14:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a6c58
	if (cr6.eq) goto loc_823A6C58;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,154
	cr6.compare<int32_t>(r11.s32, 154, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a6c30
	if (cr6.gt) goto loc_823A6C30;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A6C30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6c58
	if (!cr6.eq) goto loc_823A6C58;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6C58:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x823a6c70
	goto loc_823A6C70;
loc_823A6C6C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823A6C70:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6c9c
	if (cr6.eq) goto loc_823A6C9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219c690
	sub_8219C690(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6c9c
	if (cr6.eq) goto loc_823A6C9C;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,120(r31)
	PPC_STORE_U64(r31.u32 + 120, r11.u64);
loc_823A6C9C:
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

__attribute__((alias("__imp__sub_823A6CB8"))) PPC_WEAK_FUNC(sub_823A6CB8);
PPC_FUNC_IMPL(__imp__sub_823A6CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-28189(r11)
	PPC_STORE_U8(r11.u32 + -28189, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CC8"))) PPC_WEAK_FUNC(sub_823A6CC8);
PPC_FUNC_IMPL(__imp__sub_823A6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27892(r11)
	PPC_STORE_U8(r11.u32 + -27892, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CD8"))) PPC_WEAK_FUNC(sub_823A6CD8);
PPC_FUNC_IMPL(__imp__sub_823A6CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27891(r11)
	PPC_STORE_U8(r11.u32 + -27891, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CE8"))) PPC_WEAK_FUNC(sub_823A6CE8);
PPC_FUNC_IMPL(__imp__sub_823A6CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26994(r11)
	PPC_STORE_U8(r11.u32 + 26994, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6CF8"))) PPC_WEAK_FUNC(sub_823A6CF8);
PPC_FUNC_IMPL(__imp__sub_823A6CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26995(r11)
	PPC_STORE_U8(r11.u32 + 26995, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D08"))) PPC_WEAK_FUNC(sub_823A6D08);
PPC_FUNC_IMPL(__imp__sub_823A6D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26996(r11)
	PPC_STORE_U8(r11.u32 + 26996, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D18"))) PPC_WEAK_FUNC(sub_823A6D18);
PPC_FUNC_IMPL(__imp__sub_823A6D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26997(r11)
	PPC_STORE_U8(r11.u32 + 26997, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D28"))) PPC_WEAK_FUNC(sub_823A6D28);
PPC_FUNC_IMPL(__imp__sub_823A6D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27887(r11)
	PPC_STORE_U8(r11.u32 + -27887, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D38"))) PPC_WEAK_FUNC(sub_823A6D38);
PPC_FUNC_IMPL(__imp__sub_823A6D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26998(r11)
	PPC_STORE_U8(r11.u32 + 26998, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D48"))) PPC_WEAK_FUNC(sub_823A6D48);
PPC_FUNC_IMPL(__imp__sub_823A6D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,26999(r11)
	PPC_STORE_U8(r11.u32 + 26999, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D58"))) PPC_WEAK_FUNC(sub_823A6D58);
PPC_FUNC_IMPL(__imp__sub_823A6D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27000(r11)
	PPC_STORE_U8(r11.u32 + 27000, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D68"))) PPC_WEAK_FUNC(sub_823A6D68);
PPC_FUNC_IMPL(__imp__sub_823A6D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27001(r11)
	PPC_STORE_U8(r11.u32 + 27001, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D78"))) PPC_WEAK_FUNC(sub_823A6D78);
PPC_FUNC_IMPL(__imp__sub_823A6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27886(r11)
	PPC_STORE_U8(r11.u32 + -27886, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D88"))) PPC_WEAK_FUNC(sub_823A6D88);
PPC_FUNC_IMPL(__imp__sub_823A6D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27885(r11)
	PPC_STORE_U8(r11.u32 + -27885, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6D98"))) PPC_WEAK_FUNC(sub_823A6D98);
PPC_FUNC_IMPL(__imp__sub_823A6D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,26788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,68(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r3,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x827cc6a8
	sub_827CC6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A6DDC"))) PPC_WEAK_FUNC(sub_823A6DDC);
PPC_FUNC_IMPL(__imp__sub_823A6DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6DE0"))) PPC_WEAK_FUNC(sub_823A6DE0);
PPC_FUNC_IMPL(__imp__sub_823A6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27884(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27884, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6DF0"))) PPC_WEAK_FUNC(sub_823A6DF0);
PPC_FUNC_IMPL(__imp__sub_823A6DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stfs f1,27072(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 27072, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E00"))) PPC_WEAK_FUNC(sub_823A6E00);
PPC_FUNC_IMPL(__imp__sub_823A6E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27484(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27484, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E10"))) PPC_WEAK_FUNC(sub_823A6E10);
PPC_FUNC_IMPL(__imp__sub_823A6E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27480(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27480, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E20"))) PPC_WEAK_FUNC(sub_823A6E20);
PPC_FUNC_IMPL(__imp__sub_823A6E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27476, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E30"))) PPC_WEAK_FUNC(sub_823A6E30);
PPC_FUNC_IMPL(__imp__sub_823A6E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27002(r11)
	PPC_STORE_U8(r11.u32 + 27002, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E40"))) PPC_WEAK_FUNC(sub_823A6E40);
PPC_FUNC_IMPL(__imp__sub_823A6E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27003(r11)
	PPC_STORE_U8(r11.u32 + 27003, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E50"))) PPC_WEAK_FUNC(sub_823A6E50);
PPC_FUNC_IMPL(__imp__sub_823A6E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27005(r11)
	PPC_STORE_U8(r11.u32 + 27005, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E60"))) PPC_WEAK_FUNC(sub_823A6E60);
PPC_FUNC_IMPL(__imp__sub_823A6E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27880(r11)
	PPC_STORE_U8(r11.u32 + -27880, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E70"))) PPC_WEAK_FUNC(sub_823A6E70);
PPC_FUNC_IMPL(__imp__sub_823A6E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27006(r11)
	PPC_STORE_U8(r11.u32 + 27006, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E80"))) PPC_WEAK_FUNC(sub_823A6E80);
PPC_FUNC_IMPL(__imp__sub_823A6E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27879(r11)
	PPC_STORE_U8(r11.u32 + -27879, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6E90"))) PPC_WEAK_FUNC(sub_823A6E90);
PPC_FUNC_IMPL(__imp__sub_823A6E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27878(r11)
	PPC_STORE_U8(r11.u32 + -27878, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EA0"))) PPC_WEAK_FUNC(sub_823A6EA0);
PPC_FUNC_IMPL(__imp__sub_823A6EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27007(r11)
	PPC_STORE_U8(r11.u32 + 27007, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EB0"))) PPC_WEAK_FUNC(sub_823A6EB0);
PPC_FUNC_IMPL(__imp__sub_823A6EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27008(r11)
	PPC_STORE_U8(r11.u32 + 27008, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EC0"))) PPC_WEAK_FUNC(sub_823A6EC0);
PPC_FUNC_IMPL(__imp__sub_823A6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27009(r11)
	PPC_STORE_U8(r11.u32 + 27009, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6ED0"))) PPC_WEAK_FUNC(sub_823A6ED0);
PPC_FUNC_IMPL(__imp__sub_823A6ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27010(r11)
	PPC_STORE_U8(r11.u32 + 27010, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EE0"))) PPC_WEAK_FUNC(sub_823A6EE0);
PPC_FUNC_IMPL(__imp__sub_823A6EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27004(r11)
	PPC_STORE_U8(r11.u32 + 27004, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6EF0"))) PPC_WEAK_FUNC(sub_823A6EF0);
PPC_FUNC_IMPL(__imp__sub_823A6EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27876(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27876, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F00"))) PPC_WEAK_FUNC(sub_823A6F00);
PPC_FUNC_IMPL(__imp__sub_823A6F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27011(r11)
	PPC_STORE_U8(r11.u32 + 27011, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F10"))) PPC_WEAK_FUNC(sub_823A6F10);
PPC_FUNC_IMPL(__imp__sub_823A6F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27872(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27872, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F20"))) PPC_WEAK_FUNC(sub_823A6F20);
PPC_FUNC_IMPL(__imp__sub_823A6F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27012(r11)
	PPC_STORE_U8(r11.u32 + 27012, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F30"))) PPC_WEAK_FUNC(sub_823A6F30);
PPC_FUNC_IMPL(__imp__sub_823A6F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stb r3,-27877(r11)
	PPC_STORE_U8(r11.u32 + -27877, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F40"))) PPC_WEAK_FUNC(sub_823A6F40);
PPC_FUNC_IMPL(__imp__sub_823A6F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// stb r3,27013(r11)
	PPC_STORE_U8(r11.u32 + 27013, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F50"))) PPC_WEAK_FUNC(sub_823A6F50);
PPC_FUNC_IMPL(__imp__sub_823A6F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27868(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27868, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F60"))) PPC_WEAK_FUNC(sub_823A6F60);
PPC_FUNC_IMPL(__imp__sub_823A6F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27864(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27864, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F70"))) PPC_WEAK_FUNC(sub_823A6F70);
PPC_FUNC_IMPL(__imp__sub_823A6F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27860(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F80"))) PPC_WEAK_FUNC(sub_823A6F80);
PPC_FUNC_IMPL(__imp__sub_823A6F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27856(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27856, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6F90"))) PPC_WEAK_FUNC(sub_823A6F90);
PPC_FUNC_IMPL(__imp__sub_823A6F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27852, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FA0"))) PPC_WEAK_FUNC(sub_823A6FA0);
PPC_FUNC_IMPL(__imp__sub_823A6FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27848, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FB0"))) PPC_WEAK_FUNC(sub_823A6FB0);
PPC_FUNC_IMPL(__imp__sub_823A6FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27844(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27844, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FC0"))) PPC_WEAK_FUNC(sub_823A6FC0);
PPC_FUNC_IMPL(__imp__sub_823A6FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27840(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27840, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FD0"))) PPC_WEAK_FUNC(sub_823A6FD0);
PPC_FUNC_IMPL(__imp__sub_823A6FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,-26460(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -26460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FE0"))) PPC_WEAK_FUNC(sub_823A6FE0);
PPC_FUNC_IMPL(__imp__sub_823A6FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,-26456(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -26456, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6FF0"))) PPC_WEAK_FUNC(sub_823A6FF0);
PPC_FUNC_IMPL(__imp__sub_823A6FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27836(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27836, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7000"))) PPC_WEAK_FUNC(sub_823A7000);
PPC_FUNC_IMPL(__imp__sub_823A7000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stw r3,-27832(r11)
	PPC_STORE_U32(r11.u32 + -27832, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7010"))) PPC_WEAK_FUNC(sub_823A7010);
PPC_FUNC_IMPL(__imp__sub_823A7010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27828(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27828, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7020"))) PPC_WEAK_FUNC(sub_823A7020);
PPC_FUNC_IMPL(__imp__sub_823A7020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27824(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27824, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7030"))) PPC_WEAK_FUNC(sub_823A7030);
PPC_FUNC_IMPL(__imp__sub_823A7030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// stfs f1,-27820(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -27820, temp.u32);
	// blr 
	return;
}

