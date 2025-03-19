#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F456F0"))) PPC_WEAK_FUNC(sub_82F456F0);
PPC_FUNC_IMPL(__imp__sub_82F456F0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// stb r23,105(r28)
	PPC_STORE_U8(r28.u32 + 105, r23.u8);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r25,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r25.u32);
	// clrlwi. r30,r6,24
	r30.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r29.u32);
	// addi r31,r25,48
	r31.s64 = r25.s64 + 48;
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// lwz r18,28(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// beq 0x82f457d0
	if (cr0.eq) goto loc_82F457D0;
	// li r11,1
	r11.s64 = 1;
	// addi r4,r28,72
	ctx.r4.s64 = r28.s64 + 72;
	// stb r11,104(r28)
	PPC_STORE_U8(r28.u32 + 104, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// lfs f0,84(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r28,88
	ctx.r4.s64 = r28.s64 + 88;
	// lfs f12,76(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r29,83
	cr6.compare<int32_t>(r29.s32, 83, xer);
	// lfs f11,72(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 88, temp.u32);
	// stfs f12,92(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 92, temp.u32);
	// stfs f13,96(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 96, temp.u32);
	// stfs f0,100(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 100, temp.u32);
	// beq cr6,0x82f4577c
	if (cr6.eq) goto loc_82F4577C;
	// cmpwi cr6,r29,75
	cr6.compare<int32_t>(r29.s32, 75, xer);
	// bne cr6,0x82f457b0
	if (!cr6.eq) goto loc_82F457B0;
loc_82F4577C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r23,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r23.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f457a4
	if (!cr6.lt) goto loc_82F457A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F457A4:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82F457B0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x82f44190
	sub_82F44190(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82f44238
	sub_82F44238(ctx, base);
loc_82F457D0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r29,75
	cr6.compare<int32_t>(r29.s32, 75, xer);
	// lfs f30,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// bne cr6,0x82f457f8
	if (!cr6.eq) goto loc_82F457F8;
	// lbz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 68);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,68(r28)
	PPC_STORE_U8(r28.u32 + 68, ctx.r10.u8);
	// lfs f31,2736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f31.f64 = double(temp.f32);
loc_82F457F8:
	// stb r23,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r23.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4583c
	if (cr6.eq) goto loc_82F4583C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4583C:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// addi r9,r9,4900
	ctx.r9.s64 = ctx.r9.s64 + 4900;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// addi r8,r8,4864
	ctx.r8.s64 = ctx.r8.s64 + 4864;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// addi r7,r7,4828
	ctx.r7.s64 = ctx.r7.s64 + 4828;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// addi r9,r6,4792
	ctx.r9.s64 = ctx.r6.s64 + 4792;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// mr r17,r23
	r17.u64 = r23.u64;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// mr r15,r23
	r15.u64 = r23.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// mr r26,r23
	r26.u64 = r23.u64;
	// stb r23,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r23.u8);
	// mr r22,r23
	r22.u64 = r23.u64;
	// stb r23,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r23.u8);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r20,r11,4732
	r20.s64 = r11.s64 + 4732;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// addi r21,r10,4664
	r21.s64 = ctx.r10.s64 + 4664;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r16,r5,4620
	r16.s64 = ctx.r5.s64 + 4620;
loc_82F458D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f296c8
	sub_82F296C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82f45b84
	if (!cr0.eq) goto loc_82F45B84;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f45e24
	if (cr0.eq) goto loc_82F45E24;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f459ac
	if (cr0.eq) goto loc_82F459AC;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4591c
	if (cr6.eq) goto loc_82F4591C;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
loc_82F4591C:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// extsw r11,r27
	r11.s64 = r27.s32;
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// lfd f13,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, r11.u64);
	// lfd f0,248(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// fmuls f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
loc_82F459AC:
	// rlwinm. r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f45a14
	if (cr0.eq) goto loc_82F45A14;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82f45a14
	if (!cr6.gt) goto loc_82F45A14;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f459ec
	if (cr6.eq) goto loc_82F459EC;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
loc_82F459EC:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x82f45a04
	if (!cr0.gt) goto loc_82F45A04;
	// add r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 + r17.u64;
loc_82F45A04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
loc_82F45A14:
	// rlwinm. r11,r30,0,29,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f45a7c
	if (cr0.eq) goto loc_82F45A7C;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82f45a7c
	if (!cr6.gt) goto loc_82F45A7C;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f45a54
	if (cr6.eq) goto loc_82F45A54;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
loc_82F45A54:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x82f45a6c
	if (!cr0.gt) goto loc_82F45A6C;
	// add r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 + r17.u64;
loc_82F45A6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
loc_82F45A7C:
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f45ae4
	if (cr0.eq) goto loc_82F45AE4;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// ble cr6,0x82f45ae4
	if (!cr6.gt) goto loc_82F45AE4;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f45abc
	if (cr6.eq) goto loc_82F45ABC;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f424e8
	sub_82F424E8(ctx, base);
loc_82F45ABC:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x82f45ad4
	if (!cr0.gt) goto loc_82F45AD4;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + r15.u64;
loc_82F45AD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
loc_82F45AE4:
	// rlwinm. r11,r30,0,27,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f458d4
	if (cr0.eq) goto loc_82F458D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f45b20
	if (cr6.eq) goto loc_82F45B20;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r23.u32);
loc_82F45B20:
	// li r11,1
	r11.s64 = 1;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r11.u8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lwz r17,20(r28)
	r17.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r15,32(r28)
	r15.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// bl 0x82f44190
	sub_82F44190(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82f44238
	sub_82F44238(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x82f458d4
	goto loc_82F458D4;
loc_82F45B84:
	// bl 0x82f296c8
	sub_82F296C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82f45d0c
	if (!cr0.eq) goto loc_82F45D0C;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f44860
	sub_82F44860(ctx, base);
	// add r11,r24,r29
	r11.u64 = r24.u64 + r29.u64;
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
	// add r11,r25,r30
	r11.u64 = r25.u64 + r30.u64;
	// add r9,r30,r27
	ctx.r9.u64 = r30.u64 + r27.u64;
	// extsw r8,r27
	ctx.r8.s64 = r27.s32;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r11.u64);
	// extsw r11,r27
	r11.s64 = r27.s32;
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, r11.u64);
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// extsw r9,r26
	ctx.r9.s64 = r26.s32;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r11.u64);
	// lfd f9,184(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lfd f10,216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lfd f11,232(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfd f6,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f6.u64);
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * f31.f64));
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f5,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f5.u64);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
	// mr r26,r29
	r26.u64 = r29.u64;
	// lwz r25,460(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r29,468(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// b 0x82f458d4
	goto loc_82F458D4;
loc_82F45D0C:
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// addi r24,r3,2
	r24.s64 = ctx.r3.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// bl 0x82f296c8
	sub_82F296C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82f45e04
	if (cr0.eq) goto loc_82F45E04;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82F45D3C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82F45D4C:
	// extsw r11,r27
	r11.s64 = r27.s32;
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, r11.u64);
	// add r30,r29,r26
	r30.u64 = r29.u64 + r26.u64;
	// extsw r11,r27
	r11.s64 = r27.s32;
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lfd f12,224(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r11.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f13,208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82f42fc0
	sub_82F42FC0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f44760
	sub_82F44760(ctx, base);
	// lwz r25,460(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r29,468(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x82f458d4
	goto loc_82F458D4;
loc_82F45E04:
	// bl 0x82f296c8
	sub_82F296C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82f45d3c
	if (!cr0.eq) goto loc_82F45D3C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29778
	sub_82F29778(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82f45d4c
	goto loc_82F45D4C;
loc_82F45E24:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f45e40
	if (cr6.eq) goto loc_82F45E40;
	// addi r5,r28,52
	ctx.r5.s64 = r28.s64 + 52;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f41dd0
	sub_82F41DD0(ctx, base);
loc_82F45E40:
	// lbz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 68);
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r8,68(r28)
	PPC_STORE_U8(r28.u32 + 68, ctx.r8.u8);
	// beq cr6,0x82f45e8c
	if (cr6.eq) goto loc_82F45E8C;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 16);
loc_82F45E60:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x82f45e80
	if (!cr0.eq) goto loc_82F45E80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f45e60
	if (cr6.lt) goto loc_82F45E60;
	// b 0x82f45e8c
	goto loc_82F45E8C;
loc_82F45E80:
	// li r11,1
	r11.s64 = 1;
	// rlwimi r8,r11,0,31,23
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r8.u64 & 0xFE);
	// stb r8,68(r28)
	PPC_STORE_U8(r28.u32 + 68, ctx.r8.u8);
loc_82F45E8C:
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// stfs f30,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 108, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f45eec
	if (cr6.eq) goto loc_82F45EEC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lfs f0,3052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3052);
	f0.f64 = double(temp.f32);
loc_82F45EAC:
	// lhz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -16);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f13,108(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 108, temp.u32);
	// bne 0x82f45eac
	if (!cr0.eq) goto loc_82F45EAC;
loc_82F45EEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82f43be0
	sub_82F43BE0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f45f08
	if (cr6.eq) goto loc_82F45F08;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F45F08:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82F45F18"))) PPC_WEAK_FUNC(sub_82F45F18);
PPC_FUNC_IMPL(__imp__sub_82F45F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82f602f0
	sub_82F602F0(ctx, base);
	// lhz r11,36(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 36);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f44ac8
	sub_82F44AC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F45F78"))) PPC_WEAK_FUNC(sub_82F45F78);
PPC_FUNC_IMPL(__imp__sub_82F45F78) {
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
	// bl 0x82f45420
	sub_82F45420(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f45fa8
	if (cr0.eq) goto loc_82F45FA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F45FA8:
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

__attribute__((alias("__imp__sub_82F45FC8"))) PPC_WEAK_FUNC(sub_82F45FC8);
PPC_FUNC_IMPL(__imp__sub_82F45FC8) {
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
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,5000
	r11.s64 = r11.s64 + 5000;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lfs f13,-31620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31620);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F46030"))) PPC_WEAK_FUNC(sub_82F46030);
PPC_FUNC_IMPL(__imp__sub_82F46030) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f46068
	if (cr6.eq) goto loc_82F46068;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F46068:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f46088
	if (cr6.eq) goto loc_82F46088;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F46088:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f460bc
	if (cr6.eq) goto loc_82F460BC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// b 0x82f460c4
	goto loc_82F460C4;
loc_82F460BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82F460C4:
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
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

__attribute__((alias("__imp__sub_82F460E0"))) PPC_WEAK_FUNC(sub_82F460E0);
PPC_FUNC_IMPL(__imp__sub_82F460E0) {
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
	// bl 0x82ef93b8
	sub_82EF93B8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f46110
	if (cr0.eq) goto loc_82F46110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F46110:
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

__attribute__((alias("__imp__sub_82F46130"))) PPC_WEAK_FUNC(sub_82F46130);
PPC_FUNC_IMPL(__imp__sub_82F46130) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,5000
	ctx.r8.s64 = r11.s64 + 5000;
	// li r11,0
	r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lfs f13,-31620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31620);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f46030
	sub_82F46030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F461A0"))) PPC_WEAK_FUNC(sub_82F461A0);
PPC_FUNC_IMPL(__imp__sub_82F461A0) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f461cc
	if (cr6.eq) goto loc_82F461CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F461CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f461e8
	if (!cr6.eq) goto loc_82F461E8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f461e8
	if (cr6.eq) goto loc_82F461E8;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F461E8:
	// li r11,0
	r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82F46210"))) PPC_WEAK_FUNC(sub_82F46210);
PPC_FUNC_IMPL(__imp__sub_82F46210) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fbff70
	sub_82FBFF70(ctx, base);
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f46288
	if (cr6.eq) goto loc_82F46288;
	// li r29,0
	r29.s64 = 0;
loc_82F4625C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fc0188
	sub_82FC0188(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82f4625c
	if (!cr0.eq) goto loc_82F4625C;
loc_82F46288:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F46290"))) PPC_WEAK_FUNC(sub_82F46290);
PPC_FUNC_IMPL(__imp__sub_82F46290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7504
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lfs f31,32(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 32);
	f31.f64 = double(temp.f32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	f0.f64 = double(temp.f32);
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f9,76(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,80(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f7,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fmadds f0,f0,f31,f13
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// fmadds f0,f9,f31,f12
	f0.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f12.f64));
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// fmadds f0,f8,f31,f11
	f0.f64 = double(float(ctx.f8.f64 * f31.f64 + ctx.f11.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fmadds f0,f7,f31,f10
	f0.f64 = double(float(ctx.f7.f64 * f31.f64 + ctx.f10.f64));
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f46358
	if (cr6.eq) goto loc_82F46358;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82F46324:
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// bl 0x82fba030
	sub_82FBA030(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x82f46324
	if (!cr0.eq) goto loc_82F46324;
loc_82F46358:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f46488
	if (cr6.eq) goto loc_82F46488;
	// mr r25,r11
	r25.u64 = r11.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r23
	r27.u64 = r23.u64;
	// lfs f30,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f30.f64 = double(temp.f32);
loc_82F46374:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// add r29,r27,r11
	r29.u64 = r27.u64 + r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r30,r11,r27
	r30.u64 = r11.u64 + r27.u64;
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// sth r11,16(r29)
	PPC_STORE_U16(r29.u32 + 16, r11.u16);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// sth r11,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r11.u16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82fb3030
	sub_82FB3030(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4647c
	if (cr6.eq) goto loc_82F4647C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r26,12(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f46444
	if (cr6.eq) goto loc_82F46444;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fba030
	sub_82FBA030(ctx, base);
	// b 0x82f4647c
	goto loc_82F4647C;
loc_82F46444:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f46460
	if (cr0.eq) goto loc_82F46460;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82f46464
	goto loc_82F46464;
loc_82F46460:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82F46464:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fba030
	sub_82FBA030(ctx, base);
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
loc_82F4647C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// bne 0x82f46374
	if (!cr0.eq) goto loc_82F46374;
loc_82F46488:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// mr r26,r23
	r26.u64 = r23.u64;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// fmr f28,f30
	f28.f64 = f30.f64;
	// fmr f27,f30
	f27.f64 = f30.f64;
	// bl 0x82f41878
	sub_82F41878(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82f41878
	sub_82F41878(ctx, base);
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r23.u32);
	// stw r23,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r23.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r23.u32);
	// stw r23,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r23.u32);
loc_82F464DC:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82f464fc
	if (cr6.lt) goto loc_82F464FC;
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82f466d4
	if (!cr6.lt) goto loc_82F466D4;
loc_82F464FC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82f46574
	if (!cr6.eq) goto loc_82F46574;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f42560
	sub_82F42560(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwa r10,320(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 320));
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwa r11,316(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 316));
	// lfs f0,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	f0.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r27,312(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x82f42708
	sub_82F42708(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f43050
	sub_82F43050(ctx, base);
loc_82F46574:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82f465d8
	if (!cr6.eq) goto loc_82F465D8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f42560
	sub_82F42560(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwa r10,272(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 272));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwa r11,268(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 268));
	// lfs f0,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	f0.f64 = double(temp.f32);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r26,264(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f27,f12,f0
	f27.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x82f43050
	sub_82F43050(ctx, base);
loc_82F465D8:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// fsubs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 - f30.f64));
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fsubs f13,f27,f29
	ctx.f13.f64 = double(float(f27.f64 - f29.f64));
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// stwx r10,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmadds f0,f0,f31,f30
	f0.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// fmadds f13,f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + f29.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq cr6,0x82f466a4
	if (cr6.eq) goto loc_82F466A4;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82F46620:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f413b8
	sub_82F413B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f413b8
	sub_82F413B8(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bne 0x82f46620
	if (!cr0.eq) goto loc_82F46620;
loc_82F466A4:
	// addi r25,r25,36
	r25.s64 = r25.s64 + 36;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bne cr6,0x82f466b8
	if (!cr6.eq) goto loc_82F466B8;
	// mr r27,r23
	r27.u64 = r23.u64;
	// b 0x82f466cc
	goto loc_82F466CC;
loc_82F466B8:
	// bge cr6,0x82f466c8
	if (!cr6.lt) goto loc_82F466C8;
	// subf r26,r27,r26
	r26.s64 = r26.s64 - r27.s64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// b 0x82f464dc
	goto loc_82F464DC;
loc_82F466C8:
	// subf r27,r26,r27
	r27.s64 = r27.s64 - r26.s64;
loc_82F466CC:
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x82f464dc
	goto loc_82F464DC;
loc_82F466D4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// ld r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U64(r24.u32 + 32);
	// addi r11,r1,480
	r11.s64 = ctx.r1.s64 + 480;
	// ld r9,40(r24)
	ctx.r9.u64 = PPC_LOAD_U64(r24.u32 + 40);
	// ld r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U64(r24.u32 + 48);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// ld r7,56(r24)
	ctx.r7.u64 = PPC_LOAD_U64(r24.u32 + 56);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lfs f30,32(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 32);
	f30.f64 = double(temp.f32);
	// bl 0x82f664d8
	sub_82F664D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 / ctx.f1.f64));
	// lfs f0,2756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	f0.f64 = double(temp.f32);
	// lfs f1,32(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 / f30.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82f604b8
	sub_82F604B8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U16(r21.u32 + 36);
	// lwz r30,184(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// cntlzw r9,r30
	ctx.r9.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r28,r9,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// beq 0x82f46778
	if (cr0.eq) goto loc_82F46778;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82f4677c
	if (!cr0.eq) goto loc_82F4677C;
loc_82F46778:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82F4677C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f467b4
	if (cr0.eq) goto loc_82F467B4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4679c
	if (!cr0.eq) goto loc_82F4679C;
	// lbz r11,68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f467b4
	if (!cr0.eq) goto loc_82F467B4;
loc_82F4679C:
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f467b4
	if (!cr0.eq) goto loc_82F467B4;
	// lwz r11,80(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f467b8
	if (cr6.eq) goto loc_82F467B8;
loc_82F467B4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82F467B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f467d4
	if (cr6.eq) goto loc_82F467D4;
	// lbz r10,21(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82f467d4
	if (cr6.eq) goto loc_82F467D4;
	// li r28,1
	r28.s64 = 1;
loc_82F467D4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f46808
	if (cr6.eq) goto loc_82F46808;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f410e0
	sub_82F410E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f46804
	if (cr6.eq) goto loc_82F46804;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fbc3b0
	sub_82FBC3B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f46808
	if (!cr0.eq) goto loc_82F46808;
loc_82F46804:
	// li r28,1
	r28.s64 = 1;
loc_82F46808:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82f4681c
	if (!cr6.eq) goto loc_82F4681C;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f468c0
	if (cr0.eq) goto loc_82F468C0;
loc_82F4681C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4683c
	if (cr6.eq) goto loc_82F4683C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4683C:
	// stfs f31,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f46880
	if (cr0.eq) goto loc_82F46880;
	// lhz r11,36(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfs f0,3196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3196);
	f0.f64 = double(temp.f32);
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x82fbf780
	sub_82FBF780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82f46884
	goto loc_82F46884;
loc_82F46880:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_82F46884:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r4,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r4.u32);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f468c0
	if (cr6.eq) goto loc_82F468C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82fbc358
	sub_82FBC358(ctx, base);
loc_82F468C0:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// xori r28,r11,1
	r28.u64 = r11.u64 ^ 1;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// bl 0x82f602f0
	sub_82F602F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bl 0x82fbeb38
	sub_82FBEB38(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f46920
	if (cr6.eq) goto loc_82F46920;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F46920:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7550
	// b 0x82ca2c1c
	return;
}

__attribute__((alias("__imp__sub_82F46930"))) PPC_WEAK_FUNC(sub_82F46930);
PPC_FUNC_IMPL(__imp__sub_82F46930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,3016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3016);
	f0.f64 = double(temp.f32);
	// lfs f13,4468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4468);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f6,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,3140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3140);
	ctx.f7.f64 = double(temp.f32);
loc_82F4697C:
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x82f469a0
	if (!cr6.lt) goto loc_82F469A0;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82f469a4
	goto loc_82F469A4;
loc_82F469A0:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_82F469A4:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x82f469bc
	if (!cr6.lt) goto loc_82F469BC;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82f469c0
	goto loc_82F469C0;
loc_82F469BC:
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
loc_82F469C0:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// bge cr6,0x82f469d8
	if (!cr6.lt) goto loc_82F469D8;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82f469dc
	goto loc_82F469DC;
loc_82F469D8:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_82F469DC:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// blt cr6,0x82f469f0
	if (cr6.lt) goto loc_82F469F0;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
loc_82F469F0:
	// stfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r11,24(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f46c0c
	if (cr6.eq) goto loc_82F46C0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82F46A08:
	// lwz r11,20(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f7,f9
	f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f9.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// beq cr6,0x82f46ad0
	if (cr6.eq) goto loc_82F46AD0;
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fdivs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 / f0.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// ble cr6,0x82f46ad0
	if (!cr6.gt) goto loc_82F46AD0;
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// bge cr6,0x82f46ad0
	if (!cr6.lt) goto loc_82F46AD0;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f4,f0,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f4,f2,f0,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f5,f3,f0,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f5.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f11,f5,f0,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 * f0.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82f46a88
	if (cr6.lt) goto loc_82F46A88;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82F46A88:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82f46aa0
	if (!cr6.lt) goto loc_82F46AA0;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// b 0x82f46aa4
	goto loc_82F46AA4;
loc_82F46AA0:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_82F46AA4:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f46ab8
	if (!cr6.lt) goto loc_82F46AB8;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82F46AB8:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x82f46acc
	if (cr6.lt) goto loc_82F46ACC;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_82F46ACC:
	// stfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_82F46AD0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f13,f7,f10
	f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f10.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// beq cr6,0x82f46b90
	if (cr6.eq) goto loc_82F46B90;
	// fsubs f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(f0.f64, ctx.f8.f64);
	// ble cr6,0x82f46b90
	if (!cr6.gt) goto loc_82F46B90;
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// bge cr6,0x82f46b90
	if (!cr6.lt) goto loc_82F46B90;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fsubs f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f4,f0,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f9,f3,f0,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f10,f2,f0,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f10.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f13,f9,f0,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f11,f5,f0,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82f46b48
	if (cr6.lt) goto loc_82F46B48;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82F46B48:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82f46b60
	if (!cr6.lt) goto loc_82F46B60;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// b 0x82f46b64
	goto loc_82F46B64;
loc_82F46B60:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_82F46B64:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f46b78
	if (!cr6.lt) goto loc_82F46B78;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82F46B78:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x82f46b8c
	if (cr6.lt) goto loc_82F46B8C;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_82F46B8C:
	// stfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_82F46B90:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f46bac
	if (!cr6.lt) goto loc_82F46BAC;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// b 0x82f46bb0
	goto loc_82F46BB0;
loc_82F46BAC:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82F46BB0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82f46bc8
	if (!cr6.lt) goto loc_82F46BC8;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// b 0x82f46bcc
	goto loc_82F46BCC;
loc_82F46BC8:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_82F46BCC:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f46be0
	if (!cr6.lt) goto loc_82F46BE0;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82F46BE0:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x82f46bf4
	if (cr6.lt) goto loc_82F46BF4;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_82F46BF4:
	// stfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// bne 0x82f46a08
	if (!cr0.eq) goto loc_82F46A08;
loc_82F46C0C:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// bne 0x82f4697c
	if (!cr0.eq) goto loc_82F4697C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F46C20"))) PPC_WEAK_FUNC(sub_82F46C20);
PPC_FUNC_IMPL(__imp__sub_82F46C20) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r22,0
	r22.s64 = 0;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,88(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// addi r31,r23,48
	r31.s64 = r23.s64 + 48;
	// lwz r10,84(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 84);
	// stb r22,69(r23)
	PPC_STORE_U8(r23.u32 + 69, r22.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f46c68
	if (!cr6.lt) goto loc_82F46C68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F46C68:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r4,r10,5132
	ctx.r4.s64 = ctx.r10.s64 + 5132;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r10,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r10.u8);
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f46d18
	if (!cr0.eq) goto loc_82F46D18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a1b8
	sub_82F2A1B8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a1b8
	sub_82F2A1B8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5100
	ctx.r4.s64 = r11.s64 + 5100;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82f2a230
	sub_82F2A230(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5068
	ctx.r4.s64 = r11.s64 + 5068;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82f2a230
	sub_82F2A230(ctx, base);
	// b 0x82f47014
	goto loc_82F47014;
loc_82F46D18:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f46f74
	if (cr0.eq) goto loc_82F46F74;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r22,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r22.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f46d58
	if (!cr6.lt) goto loc_82F46D58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F46D58:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmpwi cr6,r24,84
	cr6.compare<int32_t>(r24.s32, 84, xer);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r27,48(r10)
	r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// beq cr6,0x82f46d84
	if (cr6.eq) goto loc_82F46D84;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bne cr6,0x82f46d98
	if (!cr6.eq) goto loc_82F46D98;
loc_82F46D84:
	// rlwinm. r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// beq 0x82f46d94
	if (cr0.eq) goto loc_82F46D94;
	// li r26,1
	r26.s64 = 1;
loc_82F46D94:
	// clrlwi r27,r11,28
	r27.u64 = r11.u32 & 0xF;
loc_82F46D98:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r28,r11,7817
	r28.u64 = r11.u64 | 7817;
	// ori r30,r10,9034
	r30.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f46dd8
	if (cr0.eq) goto loc_82F46DD8;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// clrlwi r5,r27,24
	ctx.r5.u64 = r27.u32 & 0xFF;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// bl 0x82fb95f0
	sub_82FB95F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82f46ddc
	goto loc_82F46DDC;
loc_82F46DD8:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82F46DDC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f46e0c
	if (cr0.eq) goto loc_82F46E0C;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// clrlwi r5,r27,24
	ctx.r5.u64 = r27.u32 & 0xFF;
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// bl 0x82fb95f0
	sub_82FB95F0(ctx, base);
	// b 0x82f46e10
	goto loc_82F46E10;
loc_82F46E0C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82F46E10:
	// stw r3,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f46f68
	if (cr6.eq) goto loc_82F46F68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f46f68
	if (cr6.eq) goto loc_82F46F68;
	// clrlwi. r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82f46e74
	if (cr0.eq) goto loc_82F46E74;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82F46E38:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82fb8bf0
	sub_82FB8BF0(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82fb8bf0
	sub_82FB8BF0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82f46e38
	if (!cr0.eq) goto loc_82F46E38;
loc_82F46E74:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,5036
	ctx.r4.s64 = r11.s64 + 5036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bne cr6,0x82f47014
	if (!cr6.eq) goto loc_82F47014;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r22,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r22.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f46eb8
	if (!cr6.lt) goto loc_82F46EB8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F46EB8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f31,2700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2700);
	f31.f64 = double(temp.f32);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r22,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r22.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f46f24
	if (!cr6.lt) goto loc_82F46F24;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F46F24:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
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
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,24(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// b 0x82f47014
	goto loc_82F47014;
loc_82F46F68:
	// stb r22,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r22.u8);
	// stb r22,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r22.u8);
	// b 0x82f47014
	goto loc_82F47014;
loc_82F46F74:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f47014
	if (cr0.eq) goto loc_82F47014;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r22,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r22.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f46fa0
	if (!cr6.lt) goto loc_82F46FA0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F46FA0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r4,r9,5008
	ctx.r4.s64 = ctx.r9.s64 + 5008;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lwz r3,40(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 40);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f2ed98
	sub_82F2ED98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29b10
	sub_82F29B10(ctx, base);
loc_82F47014:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82F47020"))) PPC_WEAK_FUNC(sub_82F47020);
PPC_FUNC_IMPL(__imp__sub_82F47020) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f47090
	if (!cr6.eq) goto loc_82F47090;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f4706c
	if (cr0.eq) goto loc_82F4706C;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f47064
	if (cr0.eq) goto loc_82F47064;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f470b4
	if (!cr6.eq) goto loc_82F470B4;
loc_82F47064:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f470b4
	if (!cr0.eq) goto loc_82F470B4;
loc_82F4706C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f47084
	if (cr6.eq) goto loc_82F47084;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F47084:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82f470b4
	goto loc_82F470B4;
loc_82F47090:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f470a4
	if (cr6.gt) goto loc_82F470A4;
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82f470b4
	if (cr6.gt) goto loc_82F470B4;
loc_82F470A4:
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82f14c68
	sub_82F14C68(ctx, base);
loc_82F470B4:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x82f470f4
	if (!cr6.lt) goto loc_82F470F4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r29,r31
	ctx.r9.s64 = r31.s64 - r29.s64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82F470CC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f470e8
	if (cr0.eq) goto loc_82F470E8;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_82F470E8:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82f470cc
	if (!cr0.eq) goto loc_82F470CC;
loc_82F470F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F47100"))) PPC_WEAK_FUNC(sub_82F47100);
PPC_FUNC_IMPL(__imp__sub_82F47100) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82f430b0
	sub_82F430B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82fbf9a0
	sub_82FBF9A0(ctx, base);
	// lbz r11,68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// rlwinm r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r11.u8);
	// beq 0x82f47160
	if (cr0.eq) goto loc_82F47160;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fbc2b8
	sub_82FBC2B8(ctx, base);
loc_82F47160:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f471a0
	if (cr6.eq) goto loc_82F471A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fbb0b8
	sub_82FBB0B8(ctx, base);
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f471a0
	if (cr0.eq) goto loc_82F471A0;
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
	// lfs f31,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f31.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fbb940
	sub_82FBB940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82fbc2b8
	sub_82FBC2B8(ctx, base);
loc_82F471A0:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f47200
	if (cr6.eq) goto loc_82F47200;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82F471B4:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f471ec
	if (cr0.eq) goto loc_82F471EC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f43138
	sub_82F43138(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbf9c0
	sub_82FBF9C0(ctx, base);
	// b 0x82f471f4
	goto loc_82F471F4;
loc_82F471EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f46210
	sub_82F46210(ctx, base);
loc_82F471F4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// bne 0x82f471b4
	if (!cr0.eq) goto loc_82F471B4;
loc_82F47200:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f43138
	sub_82F43138(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f47240
	if (cr6.eq) goto loc_82F47240;
	// lwz r11,468(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f47240
	if (cr6.eq) goto loc_82F47240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fbb758
	sub_82FBB758(ctx, base);
	// addi r4,r30,464
	ctx.r4.s64 = r30.s64 + 464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fbef08
	sub_82FBEF08(ctx, base);
loc_82F47240:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F47260"))) PPC_WEAK_FUNC(sub_82F47260);
PPC_FUNC_IMPL(__imp__sub_82F47260) {
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
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f472dc
	if (!cr6.gt) goto loc_82F472DC;
	// li r11,0
	r11.s64 = 0;
loc_82F47298:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f47298
	if (cr6.lt) goto loc_82F47298;
loc_82F472DC:
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

__attribute__((alias("__imp__sub_82F472F8"))) PPC_WEAK_FUNC(sub_82F472F8);
PPC_FUNC_IMPL(__imp__sub_82F472F8) {
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
	PPCRegister temp{};
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4733c
	if (cr6.eq) goto loc_82F4733C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82f47340
	goto loc_82F47340;
loc_82F4733C:
	// li r27,0
	r27.s64 = 0;
loc_82F47340:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82f47378
	if (cr6.eq) goto loc_82F47378;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f604b8
	sub_82F604B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f47378
	if (cr0.eq) goto loc_82F47378;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fbb0b8
	sub_82FBB0B8(ctx, base);
loc_82F47378:
	// lbz r11,104(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 104);
	// lfs f0,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 72);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f11,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne 0x82f473b0
	if (!cr0.eq) goto loc_82F473B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f46930
	sub_82F46930(ctx, base);
loc_82F473B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f473e8
	if (cr6.eq) goto loc_82F473E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbb940
	sub_82FBB940(ctx, base);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82F473E8:
	// lfs f11,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x82f47424
	if (cr6.gt) goto loc_82F47424;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x82f47424
	if (cr6.lt) goto loc_82F47424;
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f47424
	if (cr6.gt) goto loc_82F47424;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f47428
	if (!cr6.lt) goto loc_82F47428;
loc_82F47424:
	// li r11,0
	r11.s64 = 0;
loc_82F47428:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f47458
	if (!cr0.eq) goto loc_82F47458;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f47450
	if (cr6.eq) goto loc_82F47450;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F47450:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f47600
	goto loc_82F47600;
loc_82F47458:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f47488
	if (!cr0.eq) goto loc_82F47488;
loc_82F47460:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f47480
	if (cr6.eq) goto loc_82F47480;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F47480:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f47600
	goto loc_82F47600;
loc_82F47488:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f474fc
	if (cr6.eq) goto loc_82F474FC;
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82f474f8
	if (!cr6.eq) goto loc_82F474F8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r27,8
	r11.s64 = r27.s64 + 8;
	// lfs f0,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	f0.f64 = double(temp.f32);
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82f474ec
	if (!cr6.lt) goto loc_82F474EC;
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82f474ec
	if (!cr6.gt) goto loc_82F474EC;
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x82f474ec
	if (!cr6.lt) goto loc_82F474EC;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82f474ec
	if (!cr6.gt) goto loc_82F474EC;
	// lbz r31,16(r27)
	r31.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// b 0x82f475dc
	goto loc_82F475DC;
loc_82F474EC:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_82F474F8:
	// stfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r27.u32 + 20, temp.u32);
loc_82F474FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f430b0
	sub_82F430B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fbf9a0
	sub_82FBF9A0(ctx, base);
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f47594
	if (!cr6.gt) goto loc_82F47594;
	// li r31,0
	r31.s64 = 0;
loc_82F47528:
	// lwz r11,156(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f47578
	if (cr0.eq) goto loc_82F47578;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f47550
	if (cr6.eq) goto loc_82F47550;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f42958
	sub_82F42958(ctx, base);
loc_82F47550:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fbfc78
	sub_82FBFC78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4760c
	if (!cr0.eq) goto loc_82F4760C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fbf9c0
	sub_82FBF9C0(ctx, base);
	// b 0x82f47580
	goto loc_82F47580;
loc_82F47578:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82f46210
	sub_82F46210(ctx, base);
loc_82F47580:
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82f47528
	if (cr6.lt) goto loc_82F47528;
loc_82F47594:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f475a8
	if (cr6.eq) goto loc_82F475A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f42958
	sub_82F42958(ctx, base);
loc_82F475A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fbfc78
	sub_82FBFC78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f475cc
	if (cr6.eq) goto loc_82F475CC;
	// stb r31,16(r27)
	PPC_STORE_U8(r27.u32 + 16, r31.u8);
loc_82F475CC:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
loc_82F475DC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f475fc
	if (cr6.eq) goto loc_82F475FC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F475FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F47600:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
loc_82F4760C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f4761c
	if (cr6.eq) goto loc_82F4761C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r27)
	PPC_STORE_U8(r27.u32 + 16, r11.u8);
loc_82F4761C:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82fbc7b8
	sub_82FBC7B8(ctx, base);
	// b 0x82f47460
	goto loc_82F47460;
}

__attribute__((alias("__imp__sub_82F47630"))) PPC_WEAK_FUNC(sub_82F47630);
PPC_FUNC_IMPL(__imp__sub_82F47630) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x82f47260
	sub_82F47260(ctx, base);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
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

__attribute__((alias("__imp__sub_82F476A8"))) PPC_WEAK_FUNC(sub_82F476A8);
PPC_FUNC_IMPL(__imp__sub_82F476A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82f47020
	sub_82F47020(ctx, base);
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

__attribute__((alias("__imp__sub_82F47710"))) PPC_WEAK_FUNC(sub_82F47710);
PPC_FUNC_IMPL(__imp__sub_82F47710) {
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
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f47748
	if (cr6.eq) goto loc_82F47748;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F47748:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f47758
	if (cr0.eq) goto loc_82F47758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F47758:
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

__attribute__((alias("__imp__sub_82F47778"))) PPC_WEAK_FUNC(sub_82F47778);
PPC_FUNC_IMPL(__imp__sub_82F47778) {
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
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bge cr6,0x82f477c0
	if (!cr6.lt) goto loc_82F477C0;
	// mulli r30,r28,36
	r30.s64 = r28.s64 * 36;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82F477A4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f47710
	sub_82F47710(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// bne 0x82f477a4
	if (!cr0.eq) goto loc_82F477A4;
loc_82F477C0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f47814
	if (!cr6.eq) goto loc_82F47814;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f477f0
	if (cr0.eq) goto loc_82F477F0;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f477e8
	if (cr0.eq) goto loc_82F477E8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f4783c
	if (!cr6.eq) goto loc_82F4783C;
loc_82F477E8:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f4783c
	if (!cr0.eq) goto loc_82F4783C;
loc_82F477F0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f47808
	if (cr6.eq) goto loc_82F47808;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F47808:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82f4783c
	goto loc_82F4783C;
loc_82F47814:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f4782c
	if (cr6.gt) goto loc_82F4782C;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f4783c
	if (cr6.gt) goto loc_82F4783C;
loc_82F4782C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f5bdb0
	sub_82F5BDB0(ctx, base);
loc_82F4783C:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82f47868
	if (!cr6.lt) goto loc_82F47868;
	// mulli r31,r27,36
	r31.s64 = r27.s64 * 36;
	// subf r30,r27,r28
	r30.s64 = r28.s64 - r27.s64;
loc_82F4784C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add. r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f4785c
	if (cr0.eq) goto loc_82F4785C;
	// bl 0x82f476a8
	sub_82F476A8(ctx, base);
loc_82F4785C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// bne 0x82f4784c
	if (!cr0.eq) goto loc_82F4784C;
loc_82F47868:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F47870"))) PPC_WEAK_FUNC(sub_82F47870);
PPC_FUNC_IMPL(__imp__sub_82F47870) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r24,48
	r31.s64 = r24.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r25,84
	cr6.compare<int32_t>(r25.s32, 84, xer);
	// bne cr6,0x82f478fc
	if (!cr6.eq) goto loc_82F478FC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f478ec
	if (!cr6.lt) goto loc_82F478EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F478EC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// b 0x82f4793c
	goto loc_82F4793C;
loc_82F478FC:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82F4793C:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
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
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82f479f0
	if (!cr6.lt) goto loc_82F479F0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F479F0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f47a4c
	if (!cr6.lt) goto loc_82F47A4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F47A4C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r11,48(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82f47aac
	if (!cr6.eq) goto loc_82F47AAC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f47a88
	if (!cr6.lt) goto loc_82F47A88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47A88:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_82F47AAC:
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f47b6c
	if (cr6.eq) goto loc_82F47B6C;
loc_82F47ABC:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f46c20
	sub_82F46C20(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r29,r11,16
	r29.s64 = r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r10,r27,48
	ctx.r10.s64 = r27.s64 * 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// addi r29,r11,16
	r29.s64 = r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r10,r27,48
	ctx.r10.s64 = r27.s64 * 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// bl 0x82fb9358
	sub_82FB9358(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82f47abc
	if (cr6.lt) goto loc_82F47ABC;
loc_82F47B6C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f47b8c
	if (!cr6.lt) goto loc_82F47B8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F47B8C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r11,48(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82f47bec
	if (!cr6.eq) goto loc_82F47BEC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f47bc8
	if (!cr6.lt) goto loc_82F47BC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47BC8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_82F47BEC:
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r11,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f47e90
	if (cr6.eq) goto loc_82F47E90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2700);
	f31.f64 = double(temp.f32);
loc_82F47C04:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82f43a70
	sub_82F43A70(ctx, base);
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82f43a70
	sub_82F43A70(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mulli r10,r7,24
	ctx.r10.s64 = ctx.r7.s64 * 24;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r11,-24
	r29.s64 = r11.s64 + -24;
	// addi r28,r10,-24
	r28.s64 = ctx.r10.s64 + -24;
	// bge cr6,0x82f47c80
	if (!cr6.lt) goto loc_82F47C80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47C80:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// sth r11,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r11.u16);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f47cc8
	if (!cr6.lt) goto loc_82F47CC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47CC8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r25,84
	cr6.compare<int32_t>(r25.s32, 84, xer);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// sth r11,4(r28)
	PPC_STORE_U16(r28.u32 + 4, r11.u16);
	// bne cr6,0x82f47db0
	if (!cr6.eq) goto loc_82F47DB0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f47d18
	if (!cr6.lt) goto loc_82F47D18;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47D18:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,16(r28)
	PPC_STORE_U16(r28.u32 + 16, r11.u16);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,16(r29)
	PPC_STORE_U16(r29.u32 + 16, r11.u16);
	// beq 0x82f47db0
	if (cr0.eq) goto loc_82F47DB0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f47d70
	if (!cr6.lt) goto loc_82F47D70;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F47D70:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,20(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 20, temp.u32);
	// stfs f0,20(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
loc_82F47DB0:
	// lhz r11,16(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f47e60
	if (cr0.eq) goto loc_82F47E60;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fb9300
	sub_82FB9300(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f46c20
	sub_82F46C20(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fba340
	sub_82FBA340(ctx, base);
	// lbz r11,272(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f47e0c
	if (cr0.eq) goto loc_82F47E0C;
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82f47e10
	goto loc_82F47E10;
loc_82F47E0C:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_82F47E10:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x82fba340
	sub_82FBA340(ctx, base);
	// lbz r11,224(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f47e40
	if (cr0.eq) goto loc_82F47E40;
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82f47e44
	goto loc_82F47E44;
loc_82F47E40:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_82F47E44:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82fb8fd8
	sub_82FB8FD8(ctx, base);
	// b 0x82f47e80
	goto loc_82F47E80;
loc_82F47E60:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f3e5a0
	sub_82F3E5A0(ctx, base);
loc_82F47E80:
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82f47c04
	if (cr6.lt) goto loc_82F47C04;
loc_82F47E90:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82f456f0
	sub_82F456F0(ctx, base);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82f456f0
	sub_82F456F0(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f43978
	sub_82F43978(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f47f20
	if (!cr6.gt) goto loc_82F47F20;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82F47EE4:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r31.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82f461a0
	sub_82F461A0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f47ee4
	if (cr6.lt) goto loc_82F47EE4;
loc_82F47F20:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x82f43a70
	sub_82F43A70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// bl 0x82f41878
	sub_82F41878(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x82f41878
	sub_82F41878(ctx, base);
	// addi r28,r30,156
	r28.s64 = r30.s64 + 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f47778
	sub_82F47778(ctx, base);
loc_82F47F60:
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82f47f80
	if (cr6.lt) goto loc_82F47F80;
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82f48094
	if (!cr6.lt) goto loc_82F48094;
loc_82F47F80:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f476a8
	sub_82F476A8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f47778
	sub_82F47778(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r10,r27,36
	ctx.r10.s64 = r27.s64 * 36;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,-36
	ctx.r3.s64 = r11.s64 + -36;
	// bl 0x82f47630
	sub_82F47630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f47fd4
	if (cr6.eq) goto loc_82F47FD4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F47FD4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f47ff4
	if (!cr6.eq) goto loc_82F47FF4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f42560
	sub_82F42560(ctx, base);
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f43050
	sub_82F43050(ctx, base);
loc_82F47FF4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82f48014
	if (!cr6.eq) goto loc_82F48014;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f42560
	sub_82F42560(ctx, base);
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f43050
	sub_82F43050(ctx, base);
loc_82F48014:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82f48040
	if (!cr6.eq) goto loc_82F48040;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82f4808c
	goto loc_82F4808C;
loc_82F48040:
	// bge cr6,0x82f4806c
	if (!cr6.lt) goto loc_82F4806C;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// subf r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82f47f60
	goto loc_82F47F60;
loc_82F4806C:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f47020
	sub_82F47020(ctx, base);
	// subf r31,r29,r31
	r31.s64 = r31.s64 - r29.s64;
loc_82F4808C:
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82f47f60
	goto loc_82F47F60;
loc_82F48094:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82F480A0"))) PPC_WEAK_FUNC(sub_82F480A0);
PPC_FUNC_IMPL(__imp__sub_82F480A0) {
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
	// li r4,8178
	ctx.r4.s64 = 8178;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5164
	r11.s64 = r11.s64 + 5164;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// lfs f0,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f48108
	if (cr0.eq) goto loc_82F48108;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// b 0x82f4810c
	goto loc_82F4810C;
loc_82F48108:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F4810C:
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4812c
	if (cr0.eq) goto loc_82F4812C;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// b 0x82f48130
	goto loc_82F48130;
loc_82F4812C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F48130:
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82F48150"))) PPC_WEAK_FUNC(sub_82F48150);
PPC_FUNC_IMPL(__imp__sub_82F48150) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82f46930
	sub_82F46930(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F48180"))) PPC_WEAK_FUNC(sub_82F48180);
PPC_FUNC_IMPL(__imp__sub_82F48180) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,5164
	r11.s64 = r11.s64 + 5164;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f481d0
	if (cr6.eq) goto loc_82F481D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F481D0:
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f47778
	sub_82F47778(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f481ec
	if (cr6.eq) goto loc_82F481EC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F481EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f45420
	sub_82F45420(ctx, base);
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

__attribute__((alias("__imp__sub_82F48208"))) PPC_WEAK_FUNC(sub_82F48208);
PPC_FUNC_IMPL(__imp__sub_82F48208) {
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
	// bl 0x82f48180
	sub_82F48180(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48238
	if (cr0.eq) goto loc_82F48238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F48238:
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

__attribute__((alias("__imp__sub_82F48258"))) PPC_WEAK_FUNC(sub_82F48258);
PPC_FUNC_IMPL(__imp__sub_82F48258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwa r11,16(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 16));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,26440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26440);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F48280"))) PPC_WEAK_FUNC(sub_82F48280);
PPC_FUNC_IMPL(__imp__sub_82F48280) {
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
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,5204
	ctx.r10.s64 = ctx.r10.s64 + 5204;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_82F482E0"))) PPC_WEAK_FUNC(sub_82F482E0);
PPC_FUNC_IMPL(__imp__sub_82F482E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,5204
	r11.s64 = r11.s64 + 5204;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4831c
	if (cr0.eq) goto loc_82F4831C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4831C:
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

__attribute__((alias("__imp__sub_82F48338"))) PPC_WEAK_FUNC(sub_82F48338);
PPC_FUNC_IMPL(__imp__sub_82F48338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f48354
	if (!cr6.lt) goto loc_82F48354;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82F48354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F48360"))) PPC_WEAK_FUNC(sub_82F48360);
PPC_FUNC_IMPL(__imp__sub_82F48360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82f48374
	if (!cr6.eq) goto loc_82F48374;
loc_82F48368:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3212);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82F48374:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4839c
	if (!cr6.eq) goto loc_82F4839C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lbz r10,-27700(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -27700);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f48368
	if (!cr0.eq) goto loc_82F48368;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-27700(r11)
	PPC_STORE_U8(r11.u32 + -27700, ctx.r10.u8);
	// b 0x82f48368
	goto loc_82F48368;
loc_82F4839C:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f483b4
	if (!cr6.lt) goto loc_82F483B4;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82F483B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F483C0"))) PPC_WEAK_FUNC(sub_82F483C0);
PPC_FUNC_IMPL(__imp__sub_82F483C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82f483e0
	if (!cr6.eq) goto loc_82F483E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3212);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82f4843c
	goto loc_82F4843C;
loc_82F483E0:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f4842c
	if (!cr6.lt) goto loc_82F4842C;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lfs f0,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f13,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x82f4843c
	if (!cr6.eq) goto loc_82F4843C;
loc_82F4842C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4843C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F48450"))) PPC_WEAK_FUNC(sub_82F48450);
PPC_FUNC_IMPL(__imp__sub_82F48450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82f484ac
	if (cr6.eq) goto loc_82F484AC;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f484ac
	if (cr6.eq) goto loc_82F484AC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f484a0
	if (!cr6.lt) goto loc_82F484A0;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,10(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lfs f0,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
loc_82F484A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82F484AC:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f1,1344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1344);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F484B8"))) PPC_WEAK_FUNC(sub_82F484B8);
PPC_FUNC_IMPL(__imp__sub_82F484B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82f4852c
	if (!cr6.eq) goto loc_82F4852C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,-1
	r29.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// b 0x82f4866c
	goto loc_82F4866C;
loc_82F4852C:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f485e0
	if (!cr6.lt) goto loc_82F485E0;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lfs f0,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfs f12,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82f4857c
	if (!cr6.eq) goto loc_82F4857C;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_82F4857C:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lha r10,4(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 4));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lha r11,6(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 6));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82f4866c
	goto loc_82F4866C;
loc_82F485E0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82f48670
	if (!cr6.lt) goto loc_82F48670;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48670
	if (cr6.eq) goto loc_82F48670;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82f48644
	if (cr6.lt) goto loc_82F48644;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x82f48648
	if (!cr6.lt) goto loc_82F48648;
loc_82F48644:
	// li r11,0
	r11.s64 = 0;
loc_82F48648:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48670
	if (cr0.eq) goto loc_82F48670;
	// fsubs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f0,f11,f13
	f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
loc_82F4866C:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82F48670:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F48680"))) PPC_WEAK_FUNC(sub_82F48680);
PPC_FUNC_IMPL(__imp__sub_82F48680) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82f486f4
	if (cr6.eq) goto loc_82F486F4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f486f4
	if (cr0.eq) goto loc_82F486F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// b 0x82f486f8
	goto loc_82F486F8;
loc_82F486F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F486F8:
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

__attribute__((alias("__imp__sub_82F48710"))) PPC_WEAK_FUNC(sub_82F48710);
PPC_FUNC_IMPL(__imp__sub_82F48710) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f487e8
	if (cr6.eq) goto loc_82F487E8;
	// lhz r11,40(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f487e8
	if (!cr6.eq) goto loc_82F487E8;
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f487e8
	if (!cr6.eq) goto loc_82F487E8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,5368
	ctx.r4.s64 = r11.s64 + 5368;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5360
	ctx.r4.s64 = r11.s64 + 5360;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// b 0x82f487a4
	goto loc_82F487A4;
loc_82F48784:
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f48680
	sub_82F48680(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsh. r11,r29
	r11.s64 = r29.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f487ac
	if (!cr0.eq) goto loc_82F487AC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
loc_82F487A4:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f48784
	if (!cr0.eq) goto loc_82F48784;
loc_82F487AC:
	// extsh. r11,r29
	r11.s64 = r29.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f487e8
	if (cr0.eq) goto loc_82F487E8;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// b 0x82f487e0
	goto loc_82F487E0;
loc_82F487C0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f48680
	sub_82F48680(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsh. r11,r28
	r11.s64 = r28.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f487e8
	if (!cr0.eq) goto loc_82F487E8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
loc_82F487E0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f487c0
	if (!cr0.eq) goto loc_82F487C0;
loc_82F487E8:
	// extsh. r11,r28
	r11.s64 = r28.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48804
	if (cr0.eq) goto loc_82F48804;
	// extsh. r11,r29
	r11.s64 = r29.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48804
	if (cr0.eq) goto loc_82F48804;
	// sth r28,40(r30)
	PPC_STORE_U16(r30.u32 + 40, r28.u16);
	// sth r29,42(r30)
	PPC_STORE_U16(r30.u32 + 42, r29.u16);
	// b 0x82f4887c
	goto loc_82F4887C;
loc_82F48804:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f48870
	if (cr6.eq) goto loc_82F48870;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,3224
	r31.s64 = r11.s64 + 3224;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f48830
	if (cr0.eq) goto loc_82F48830;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r10,2568
	r29.s64 = ctx.r10.s64 + 2568;
	// b 0x82f48834
	goto loc_82F48834;
loc_82F48830:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82F48834:
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48844
	if (cr0.eq) goto loc_82F48844;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r31,r11,2560
	r31.s64 = r11.s64 + 2560;
loc_82F48844:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5256
	ctx.r4.s64 = r11.s64 + 5256;
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82f271c8
	sub_82F271C8(ctx, base);
loc_82F48870:
	// li r11,-1
	r11.s64 = -1;
	// sth r11,40(r30)
	PPC_STORE_U16(r30.u32 + 40, r11.u16);
	// sth r11,42(r30)
	PPC_STORE_U16(r30.u32 + 42, r11.u16);
loc_82F4887C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F48888"))) PPC_WEAK_FUNC(sub_82F48888);
PPC_FUNC_IMPL(__imp__sub_82F48888) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,5380
	r11.s64 = r11.s64 + 5380;
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82f48904
	if (cr0.eq) goto loc_82F48904;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f48924
	if (!cr6.gt) goto loc_82F48924;
	// li r30,0
	r30.s64 = 0;
loc_82F488C8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f488c8
	if (cr6.lt) goto loc_82F488C8;
	// b 0x82f48924
	goto loc_82F48924;
loc_82F48904:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48924
	if (cr6.eq) goto loc_82F48924;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48924:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48944
	if (cr6.eq) goto loc_82F48944;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48944:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48964
	if (cr6.eq) goto loc_82F48964;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48964:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48984
	if (cr6.eq) goto loc_82F48984;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48984:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-9512
	r11.s64 = r11.s64 + -9512;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F48998"))) PPC_WEAK_FUNC(sub_82F48998);
PPC_FUNC_IMPL(__imp__sub_82F48998) {
	PPC_FUNC_PROLOGUE();
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F489A0"))) PPC_WEAK_FUNC(sub_82F489A0);
PPC_FUNC_IMPL(__imp__sub_82F489A0) {
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
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef0ac8
	sub_82EF0AC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F489D8"))) PPC_WEAK_FUNC(sub_82F489D8);
PPC_FUNC_IMPL(__imp__sub_82F489D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5392
	r11.s64 = r11.s64 + 5392;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef70f0
	sub_82EF70F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef8708
	sub_82EF8708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,-1
	r30.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F48A58:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f48a58
	if (!cr0.eq) goto loc_82F48A58;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f48a84
	if (!cr0.eq) goto loc_82F48A84;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F48A84:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F48A90:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f48a90
	if (!cr0.eq) goto loc_82F48A90;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f48abc
	if (!cr0.eq) goto loc_82F48ABC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F48ABC:
	// clrlwi r11,r28,30
	r11.u64 = r28.u32 & 0x3;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// beq cr6,0x82f48ae0
	if (cr6.eq) goto loc_82F48AE0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48AE0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48b00
	if (cr6.eq) goto loc_82F48B00;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48B00:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F48B10"))) PPC_WEAK_FUNC(sub_82F48B10);
PPC_FUNC_IMPL(__imp__sub_82F48B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
loc_82F48B20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f48b44
	if (cr0.eq) goto loc_82F48B44;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f48b20
	if (cr6.eq) goto loc_82F48B20;
loc_82F48B44:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f48b70
	if (!cr0.eq) goto loc_82F48B70;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f48b70
	if (!cr6.eq) goto loc_82F48B70;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f48b74
	if (cr6.eq) goto loc_82F48B74;
loc_82F48B70:
	// li r11,0
	r11.s64 = 0;
loc_82F48B74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F48B80"))) PPC_WEAK_FUNC(sub_82F48B80);
PPC_FUNC_IMPL(__imp__sub_82F48B80) {
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
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F48BA0:
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
	// bne 0x82f48ba0
	if (!cr0.eq) goto loc_82F48BA0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f48bcc
	if (!cr0.eq) goto loc_82F48BCC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F48BCC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48bec
	if (cr6.eq) goto loc_82F48BEC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48BEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F48C08"))) PPC_WEAK_FUNC(sub_82F48C08);
PPC_FUNC_IMPL(__imp__sub_82F48C08) {
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
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// xor r3,r11,r3
	ctx.r3.u64 = r11.u64 ^ ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82F48C60"))) PPC_WEAK_FUNC(sub_82F48C60);
PPC_FUNC_IMPL(__imp__sub_82F48C60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82f48c08
	sub_82F48C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F48C68"))) PPC_WEAK_FUNC(sub_82F48C68);
PPC_FUNC_IMPL(__imp__sub_82F48C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82f48c7c
	if (cr6.eq) goto loc_82F48C7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F48C7C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x82f48b10
	sub_82F48B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F48C88"))) PPC_WEAK_FUNC(sub_82F48C88);
PPC_FUNC_IMPL(__imp__sub_82F48C88) {
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
	// beq 0x82f48ce4
	if (cr0.eq) goto loc_82F48CE4;
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
	// bl 0x82f489d8
	sub_82F489D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f48ce8
	goto loc_82F48CE8;
loc_82F48CE4:
	// li r31,0
	r31.s64 = 0;
loc_82F48CE8:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,-5356
	r30.s64 = r11.s64 + -5356;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-5356(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5356);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// beq cr6,0x82f48d30
	if (cr6.eq) goto loc_82F48D30;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48D30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F48D40"))) PPC_WEAK_FUNC(sub_82F48D40);
PPC_FUNC_IMPL(__imp__sub_82F48D40) {
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
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82ef8c38
	sub_82EF8C38(ctx, base);
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

__attribute__((alias("__imp__sub_82F48D98"))) PPC_WEAK_FUNC(sub_82F48D98);
PPC_FUNC_IMPL(__imp__sub_82F48D98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_82F48E10"))) PPC_WEAK_FUNC(sub_82F48E10);
PPC_FUNC_IMPL(__imp__sub_82F48E10) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82f48e84
	if (cr6.lt) goto loc_82F48E84;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-27696
	r31.s64 = r11.s64 + -27696;
	// lwz r11,-27648(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f48e7c
	if (!cr0.eq) goto loc_82F48E7C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-27648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27648, r11.u32);
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-11664
	ctx.r10.s64 = ctx.r10.s64 + -11664;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r3,r11,6576
	ctx.r3.s64 = r11.s64 + 6576;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
loc_82F48E7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f48e90
	goto loc_82F48E90;
loc_82F48E84:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82F48E90:
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

__attribute__((alias("__imp__sub_82F48EA8"))) PPC_WEAK_FUNC(sub_82F48EA8);
PPC_FUNC_IMPL(__imp__sub_82F48EA8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,5380
	r11.s64 = r11.s64 + 5380;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// beq cr6,0x82f48f08
	if (cr6.eq) goto loc_82F48F08;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48F08:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48f28
	if (cr6.eq) goto loc_82F48F28;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48F28:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f48f50
	if (cr6.eq) goto loc_82F48F50;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f48f54
	goto loc_82F48F54;
loc_82F48F50:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82F48F54:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f48f70
	if (cr6.eq) goto loc_82F48F70;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48F70:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f48f90
	if (cr6.eq) goto loc_82F48F90;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F48F90:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// sth r30,40(r31)
	PPC_STORE_U16(r31.u32 + 40, r30.u16);
	// sth r30,42(r31)
	PPC_STORE_U16(r31.u32 + 42, r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F48FB0"))) PPC_WEAK_FUNC(sub_82F48FB0);
PPC_FUNC_IMPL(__imp__sub_82F48FB0) {
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
	// bl 0x82f48888
	sub_82F48888(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f48fe0
	if (cr0.eq) goto loc_82F48FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F48FE0:
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

__attribute__((alias("__imp__sub_82F49000"))) PPC_WEAK_FUNC(sub_82F49000);
PPC_FUNC_IMPL(__imp__sub_82F49000) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,5380
	r11.s64 = r11.s64 + 5380;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// beq cr6,0x82f49068
	if (cr6.eq) goto loc_82F49068;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F49068:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f49088
	if (cr6.eq) goto loc_82F49088;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F49088:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f490b0
	if (cr6.eq) goto loc_82F490B0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f490b4
	goto loc_82F490B4;
loc_82F490B0:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82F490B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f490d0
	if (cr6.eq) goto loc_82F490D0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F490D0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f490f0
	if (cr6.eq) goto loc_82F490F0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F490F0:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82ef0b30
	sub_82EF0B30(ctx, base);
	// sth r30,40(r31)
	PPC_STORE_U16(r31.u32 + 40, r30.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,42(r31)
	PPC_STORE_U16(r31.u32 + 42, r30.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F49120"))) PPC_WEAK_FUNC(sub_82F49120);
PPC_FUNC_IMPL(__imp__sub_82F49120) {
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
	// bl 0x82f48b80
	sub_82F48B80(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f49150
	if (cr0.eq) goto loc_82F49150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F49150:
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

__attribute__((alias("__imp__sub_82F49170"))) PPC_WEAK_FUNC(sub_82F49170);
PPC_FUNC_IMPL(__imp__sub_82F49170) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f48c88
	sub_82F48C88(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef2088
	sub_82EF2088(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82f49254
	if (!cr6.eq) goto loc_82F49254;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f49220
	if (cr0.eq) goto loc_82F49220;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f49208
	if (cr0.eq) goto loc_82F49208;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f49000
	sub_82F49000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F49208:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f49220
	if (cr6.eq) goto loc_82F49220;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef1d88
	sub_82EF1D88(ctx, base);
	// b 0x82f49230
	goto loc_82F49230;
loc_82F49220:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// bl 0x82ef1e18
	sub_82EF1E18(ctx, base);
loc_82F49230:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f49260
	if (cr6.eq) goto loc_82F49260;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f49260
	goto loc_82F49260;
loc_82F49254:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1810
	sub_82EF1810(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F49260:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f49278
	if (!cr6.eq) goto loc_82F49278;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82f49298
	goto loc_82F49298;
loc_82F49278:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f49298
	if (cr6.lt) goto loc_82F49298;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F49298:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f492b8
	if (cr6.eq) goto loc_82F492B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F492B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F492C8"))) PPC_WEAK_FUNC(sub_82F492C8);
PPC_FUNC_IMPL(__imp__sub_82F492C8) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f49334
	if (!cr6.eq) goto loc_82F49334;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f49310
	if (cr0.eq) goto loc_82F49310;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f49308
	if (cr0.eq) goto loc_82F49308;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f49358
	if (!cr6.eq) goto loc_82F49358;
loc_82F49308:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f49358
	if (!cr0.eq) goto loc_82F49358;
loc_82F49310:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f49328
	if (cr6.eq) goto loc_82F49328;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F49328:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82f49358
	goto loc_82F49358;
loc_82F49334:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f49348
	if (cr6.gt) goto loc_82F49348;
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82f49358
	if (cr6.gt) goto loc_82F49358;
loc_82F49348:
	// rlwinm r11,r4,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82f6fb50
	sub_82F6FB50(ctx, base);
loc_82F49358:
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

__attribute__((alias("__imp__sub_82F49370"))) PPC_WEAK_FUNC(sub_82F49370);
PPC_FUNC_IMPL(__imp__sub_82F49370) {
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
	// bne cr6,0x82f4938c
	if (!cr6.eq) goto loc_82F4938C;
	// b 0x82f4949c
	goto loc_82F4949C;
loc_82F4938C:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82f4939c
	if (!cr6.lt) goto loc_82F4939C;
	// li r31,8
	r31.s64 = 8;
	// b 0x82f493e4
	goto loc_82F493E4;
loc_82F4939C:
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
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_82F493E4:
	// li r28,0
	r28.s64 = 0;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	r27.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// beq cr6,0x82f49434
	if (cr6.eq) goto loc_82F49434;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82F4941C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// bne 0x82f4941c
	if (!cr0.eq) goto loc_82F4941C;
loc_82F49434:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4948c
	if (cr6.eq) goto loc_82F4948C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82F4944C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f49478
	if (cr6.eq) goto loc_82F49478;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f49798
	sub_82F49798(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82F49478:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82f4944c
	if (!cr0.eq) goto loc_82F4944C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4948C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82F4949C:
	// bl 0x82f14bf0
	sub_82F14BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F494A8"))) PPC_WEAK_FUNC(sub_82F494A8);
PPC_FUNC_IMPL(__imp__sub_82F494A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,12
	r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x82f49514
	if (cr6.eq) goto loc_82F49514;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f49514
	if (!cr6.eq) goto loc_82F49514;
loc_82F494DC:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f494f8
	if (!cr6.eq) goto loc_82F494F8;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82F494F8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f49514
	if (cr6.eq) goto loc_82F49514;
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82f494dc
	goto loc_82F494DC;
loc_82F49514:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F49520"))) PPC_WEAK_FUNC(sub_82F49520);
PPC_FUNC_IMPL(__imp__sub_82F49520) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82f2bea0
	sub_82F2BEA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f49544
	if (cr0.eq) goto loc_82F49544;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82f49548
	goto loc_82F49548;
loc_82F49544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F49548:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F49558"))) PPC_WEAK_FUNC(sub_82F49558);
PPC_FUNC_IMPL(__imp__sub_82F49558) {
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
	// bne cr6,0x82f49574
	if (!cr6.eq) goto loc_82F49574;
	// b 0x82f496a4
	goto loc_82F496A4;
loc_82F49574:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82f49584
	if (!cr6.lt) goto loc_82F49584;
	// li r31,8
	r31.s64 = 8;
	// b 0x82f495cc
	goto loc_82F495CC;
loc_82F49584:
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
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_82F495CC:
	// li r28,0
	r28.s64 = 0;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	r27.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// beq cr6,0x82f4961c
	if (cr6.eq) goto loc_82F4961C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82F49604:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// bne 0x82f49604
	if (!cr0.eq) goto loc_82F49604;
loc_82F4961C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f49694
	if (cr6.eq) goto loc_82F49694;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82F49634:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f49680
	if (cr6.eq) goto loc_82F49680;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r11,4
	r11.s64 = 4;
	// li r5,5381
	ctx.r5.s64 = 5381;
loc_82F49658:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 | 63;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x82f49658
	if (!cr0.eq) goto loc_82F49658;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f49da0
	sub_82F49DA0(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82F49680:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82f49634
	if (!cr0.eq) goto loc_82F49634;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F49694:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82F496A4:
	// bl 0x82f14bf0
	sub_82F14BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F496B0"))) PPC_WEAK_FUNC(sub_82F496B0);
PPC_FUNC_IMPL(__imp__sub_82F496B0) {
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
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,12
	r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f49788
	if (cr6.eq) goto loc_82F49788;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,4
	r11.s64 = 4;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// ori r6,r8,63
	ctx.r6.u64 = ctx.r8.u64 | 63;
loc_82F496F0:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne 0x82f496f0
	if (!cr0.eq) goto loc_82F496F0;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f49788
	if (!cr6.eq) goto loc_82F49788;
loc_82F49710:
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
loc_82F4971C:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne 0x82f4971c
	if (!cr0.eq) goto loc_82F4971C;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f4976c
	if (!cr6.eq) goto loc_82F4976C;
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f49760
	if (!cr6.eq) goto loc_82F49760;
	// lhz r11,2(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f49764
	if (cr6.eq) goto loc_82F49764;
loc_82F49760:
	// li r11,0
	r11.s64 = 0;
loc_82F49764:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4978c
	if (!cr0.eq) goto loc_82F4978C;
loc_82F4976C:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f49788
	if (cr6.eq) goto loc_82F49788;
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// b 0x82f49710
	goto loc_82F49710;
loc_82F49788:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F4978C:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F49798"))) PPC_WEAK_FUNC(sub_82F49798);
PPC_FUNC_IMPL(__imp__sub_82F49798) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f497c4
	if (!cr6.eq) goto loc_82F497C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f497ec
	goto loc_82F497EC;
loc_82F497C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f497f4
	if (!cr6.gt) goto loc_82F497F4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F497EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49370
	sub_82F49370(ctx, base);
loc_82F497F4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x82f49844
	if (!cr6.eq) goto loc_82F49844;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, r11.u16);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// b 0x82f49910
	goto loc_82F49910;
loc_82F49844:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82F4984C:
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// and r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ctx.r6.u64;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82f4984c
	if (!cr6.eq) goto loc_82F4984C;
	// mulli r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 * 12;
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + r11.u64;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f498c0
	if (!cr6.eq) goto loc_82F498C0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f498a4
	if (cr6.eq) goto loc_82F498A4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, r11.u16);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
loc_82F498A4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// b 0x82f49910
	goto loc_82F49910;
loc_82F498BC:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F498C0:
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bne cr6,0x82f498bc
	if (!cr6.eq) goto loc_82F498BC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f498f4
	if (cr6.eq) goto loc_82F498F4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, r11.u16);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
loc_82F498F4:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// li r11,-1
	r11.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82F49910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F49918"))) PPC_WEAK_FUNC(sub_82F49918);
PPC_FUNC_IMPL(__imp__sub_82F49918) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x82f49954
	if (cr6.gt) goto loc_82F49954;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82efa6f8
	sub_82EFA6F8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x82f49968
	if (!cr6.gt) goto loc_82F49968;
loc_82F49954:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mulli r11,r30,48
	r11.s64 = r30.s64 * 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82f48d98
	sub_82F48D98(ctx, base);
loc_82F49968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F49970"))) PPC_WEAK_FUNC(sub_82F49970);
PPC_FUNC_IMPL(__imp__sub_82F49970) {
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
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f499b4
	if (cr6.eq) goto loc_82F499B4;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & r11.u64;
	// bl 0x82f494a8
	sub_82F494A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f499b4
	if (cr0.lt) goto loc_82F499B4;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// b 0x82f499b8
	goto loc_82F499B8;
loc_82F499B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F499B8:
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

__attribute__((alias("__imp__sub_82F499D0"))) PPC_WEAK_FUNC(sub_82F499D0);
PPC_FUNC_IMPL(__imp__sub_82F499D0) {
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
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f49a8c
	if (cr6.eq) goto loc_82F49A8C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,4
	r11.s64 = 4;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// ori r6,r7,63
	ctx.r6.u64 = ctx.r7.u64 | 63;
loc_82F49A10:
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
	// bne 0x82f49a10
	if (!cr0.eq) goto loc_82F49A10;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f49a8c
	if (!cr6.eq) goto loc_82F49A8C;
loc_82F49A30:
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
loc_82F49A3C:
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
	// bne 0x82f49a3c
	if (!cr0.eq) goto loc_82F49A3C;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f49a70
	if (!cr6.eq) goto loc_82F49A70;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82f49a90
	if (cr6.eq) goto loc_82F49A90;
loc_82F49A70:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f49a8c
	if (cr6.eq) goto loc_82F49A8C;
	// rlwinm r11,r3,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// b 0x82f49a30
	goto loc_82F49A30;
loc_82F49A8C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F49A90:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F49AA0"))) PPC_WEAK_FUNC(sub_82F49AA0);
PPC_FUNC_IMPL(__imp__sub_82F49AA0) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f49acc
	if (!cr6.eq) goto loc_82F49ACC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f49af4
	goto loc_82F49AF4;
loc_82F49ACC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f49afc
	if (!cr6.gt) goto loc_82F49AFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F49AF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49370
	sub_82F49370(ctx, base);
loc_82F49AFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mulli r11,r9,12
	r11.s64 = ctx.r9.s64 * 12;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x82f49b54
	if (!cr6.eq) goto loc_82F49B54;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, r11.u16);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// b 0x82f49c30
	goto loc_82F49C30;
loc_82F49B54:
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82F49B5C:
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// and r4,r11,r6
	ctx.r4.u64 = r11.u64 & ctx.r6.u64;
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82f49b5c
	if (!cr6.eq) goto loc_82F49B5C;
	// mulli r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 * 12;
	// lhz r11,4(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r8,r11,r6
	ctx.r8.u64 = r11.u64 & ctx.r6.u64;
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f49bd8
	if (!cr6.eq) goto loc_82F49BD8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f49bb4
	if (cr6.eq) goto loc_82F49BB4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r10,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
loc_82F49BB4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// b 0x82f49c30
	goto loc_82F49C30;
loc_82F49BD4:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F49BD8:
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bne cr6,0x82f49bd4
	if (!cr6.eq) goto loc_82F49BD4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f49c0c
	if (cr6.eq) goto loc_82F49C0C;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r10,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
loc_82F49C0C:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82F49C30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F49C38"))) PPC_WEAK_FUNC(sub_82F49C38);
PPC_FUNC_IMPL(__imp__sub_82F49C38) {
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
	// bne cr6,0x82f49c54
	if (!cr6.eq) goto loc_82F49C54;
	// b 0x82f49d94
	goto loc_82F49D94;
loc_82F49C54:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82f49c64
	if (!cr6.lt) goto loc_82F49C64;
	// li r31,8
	r31.s64 = 8;
	// b 0x82f49cac
	goto loc_82F49CAC;
loc_82F49C64:
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
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_82F49CAC:
	// li r27,0
	r27.s64 = 0;
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
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
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	r26.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// beq cr6,0x82f49cfc
	if (cr6.eq) goto loc_82F49CFC;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F49CE4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// bne 0x82f49ce4
	if (!cr0.eq) goto loc_82F49CE4;
loc_82F49CFC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f49d84
	if (cr6.eq) goto loc_82F49D84;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_82F49D14:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f49d70
	if (cr6.eq) goto loc_82F49D70;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r11,4
	r11.s64 = 4;
	// li r5,5381
	ctx.r5.s64 = 5381;
loc_82F49D38:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 | 63;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x82f49d38
	if (!cr0.eq) goto loc_82F49D38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f4a210
	sub_82F4A210(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2bbd0
	sub_82F2BBD0(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
loc_82F49D70:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82f49d14
	if (!cr0.eq) goto loc_82F49D14;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F49D84:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82F49D94:
	// bl 0x82f2cb58
	sub_82F2CB58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F49DA0"))) PPC_WEAK_FUNC(sub_82F49DA0);
PPC_FUNC_IMPL(__imp__sub_82F49DA0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f49dcc
	if (!cr6.eq) goto loc_82F49DCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f49df4
	goto loc_82F49DF4;
loc_82F49DCC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f49dfc
	if (!cr6.gt) goto loc_82F49DFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F49DF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49558
	sub_82F49558(ctx, base);
loc_82F49DFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 & r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// bne cr6,0x82f49e58
	if (!cr6.eq) goto loc_82F49E58;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lhz r11,2(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 2);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82f49f80
	goto loc_82F49F80;
loc_82F49E58:
	// lwz r30,4(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82F49E60:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r31,r11,r30
	r31.u64 = r11.u64 & r30.u64;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82f49e60
	if (!cr6.eq) goto loc_82F49E60;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,5381
	ctx.r8.s64 = 5381;
	// ori r6,r6,63
	ctx.r6.u64 = ctx.r6.u64 | 63;
loc_82F49E9C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82f49e9c
	if (!cr0.eq) goto loc_82F49E9C;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & r30.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82f49efc
	if (!cr6.eq) goto loc_82F49EFC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f49ee4
	if (cr6.eq) goto loc_82F49EE4;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r9,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r9.u16);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r10,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r10.u16);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82F49EE4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82f49f80
	goto loc_82F49F80;
loc_82F49EFC:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,5381
	ctx.r8.s64 = 5381;
loc_82F49F04:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82f49f04
	if (!cr0.eq) goto loc_82F49F04;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & r30.u64;
	// b 0x82f49f24
	goto loc_82F49F24;
loc_82F49F20:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82F49F24:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x82f49f20
	if (!cr6.eq) goto loc_82F49F20;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f49f64
	if (cr6.eq) goto loc_82F49F64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r9,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r9.u16);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r9,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r9.u16);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82F49F64:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82F49F80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F49F88"))) PPC_WEAK_FUNC(sub_82F49F88);
PPC_FUNC_IMPL(__imp__sub_82F49F88) {
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
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f49fec
	if (cr6.eq) goto loc_82F49FEC;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
loc_82F49FAC:
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
	// bne 0x82f49fac
	if (!cr0.eq) goto loc_82F49FAC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// and r5,r11,r10
	ctx.r5.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x82f496b0
	sub_82F496B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f49fec
	if (cr0.lt) goto loc_82F49FEC;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// b 0x82f49ff0
	goto loc_82F49FF0;
loc_82F49FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F49FF0:
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

__attribute__((alias("__imp__sub_82F4A008"))) PPC_WEAK_FUNC(sub_82F4A008);
PPC_FUNC_IMPL(__imp__sub_82F4A008) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4a034
	if (!cr6.eq) goto loc_82F4A034;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f4a05c
	goto loc_82F4A05C;
loc_82F4A034:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f4a064
	if (!cr6.gt) goto loc_82F4A064;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F4A05C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49558
	sub_82F49558(ctx, base);
loc_82F4A064:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 & r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// bne cr6,0x82f4a0bc
	if (!cr6.eq) goto loc_82F4A0BC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82f4a204
	goto loc_82F4A204;
loc_82F4A0BC:
	// lwz r30,4(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82F4A0C4:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r31,r11,r30
	r31.u64 = r11.u64 & r30.u64;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82f4a0c4
	if (!cr6.eq) goto loc_82F4A0C4;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,5381
	ctx.r8.s64 = 5381;
	// ori r6,r6,63
	ctx.r6.u64 = ctx.r6.u64 | 63;
loc_82F4A100:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82f4a100
	if (!cr0.eq) goto loc_82F4A100;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & r30.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82f4a170
	if (!cr6.eq) goto loc_82F4A170;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f4a148
	if (cr6.eq) goto loc_82F4A148;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r10,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r10,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r10.u16);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82F4A148:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// b 0x82f4a204
	goto loc_82F4A204;
loc_82F4A170:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,5381
	ctx.r8.s64 = 5381;
loc_82F4A178:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82f4a178
	if (!cr0.eq) goto loc_82F4A178;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & r30.u64;
	// b 0x82f4a198
	goto loc_82F4A198;
loc_82F4A194:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82F4A198:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x82f4a194
	if (!cr6.eq) goto loc_82F4A194;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f4a1d8
	if (cr6.eq) goto loc_82F4A1D8;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r9,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r9.u16);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r9,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r9.u16);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82F4A1D8:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82F4A204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4A210"))) PPC_WEAK_FUNC(sub_82F4A210);
PPC_FUNC_IMPL(__imp__sub_82F4A210) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4a23c
	if (!cr6.eq) goto loc_82F4A23C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f4a264
	goto loc_82F4A264;
loc_82F4A23C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f4a26c
	if (!cr6.gt) goto loc_82F4A26C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F4A264:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49c38
	sub_82F49C38(ctx, base);
loc_82F4A26C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 & r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82f4a2c4
	if (!cr6.eq) goto loc_82F4A2C4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// bl 0x82ef8c38
	sub_82EF8C38(ctx, base);
	// b 0x82f4a3c4
	goto loc_82F4A3C4;
loc_82F4A2C4:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82F4A2CC:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// and r28,r11,r5
	r28.u64 = r11.u64 & ctx.r5.u64;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82f4a2cc
	if (!cr6.eq) goto loc_82F4A2CC;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// li r9,5381
	ctx.r9.s64 = 5381;
	// li r11,4
	r11.s64 = 4;
	// ori r8,r8,63
	ctx.r8.u64 = ctx.r8.u64 | 63;
loc_82F4A308:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82f4a308
	if (!cr0.eq) goto loc_82F4A308;
	// and r11,r9,r5
	r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82f4a354
	if (!cr6.eq) goto loc_82F4A354;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a338
	if (cr6.eq) goto loc_82F4A338;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f48d40
	sub_82F48D40(ctx, base);
loc_82F4A338:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82f4a3c4
	goto loc_82F4A3C4;
loc_82F4A354:
	// li r11,4
	r11.s64 = 4;
	// li r9,5381
	ctx.r9.s64 = 5381;
loc_82F4A35C:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82f4a35c
	if (!cr0.eq) goto loc_82F4A35C;
	// and r11,r9,r5
	r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// b 0x82f4a37c
	goto loc_82F4A37C;
loc_82F4A378:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82F4A37C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bne cr6,0x82f4a378
	if (!cr6.eq) goto loc_82F4A378;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a3a4
	if (cr6.eq) goto loc_82F4A3A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f48d40
	sub_82F48D40(ctx, base);
loc_82F4A3A4:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F4A3C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4A3D0"))) PPC_WEAK_FUNC(sub_82F4A3D0);
PPC_FUNC_IMPL(__imp__sub_82F4A3D0) {
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
	// bl 0x82f48280
	sub_82F48280(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,5424
	ctx.r10.s64 = ctx.r10.s64 + 5424;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
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
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_82F4A440"))) PPC_WEAK_FUNC(sub_82F4A440);
PPC_FUNC_IMPL(__imp__sub_82F4A440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A448"))) PPC_WEAK_FUNC(sub_82F4A448);
PPC_FUNC_IMPL(__imp__sub_82F4A448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A450"))) PPC_WEAK_FUNC(sub_82F4A450);
PPC_FUNC_IMPL(__imp__sub_82F4A450) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A458"))) PPC_WEAK_FUNC(sub_82F4A458);
PPC_FUNC_IMPL(__imp__sub_82F4A458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4a468
	if (cr6.eq) goto loc_82F4A468;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82F4A468:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A478"))) PPC_WEAK_FUNC(sub_82F4A478);
PPC_FUNC_IMPL(__imp__sub_82F4A478) {
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
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r11,r11,5424
	r11.s64 = r11.s64 + 5424;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb3468
	sub_82FB3468(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a4c4
	if (cr6.eq) goto loc_82F4A4C4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82F4A4C4:
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82f14bf0
	sub_82F14BF0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f492c8
	sub_82F492C8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a4e8
	if (cr6.eq) goto loc_82F4A4E8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4A4E8:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f14bf0
	sub_82F14BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb3468
	sub_82FB3468(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a50c
	if (cr6.eq) goto loc_82F4A50C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4A50C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a52c
	if (cr6.eq) goto loc_82F4A52C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4A52C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,5204
	r11.s64 = r11.s64 + 5204;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F4A558"))) PPC_WEAK_FUNC(sub_82F4A558);
PPC_FUNC_IMPL(__imp__sub_82F4A558) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82f49970
	sub_82F49970(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4a588
	if (cr0.eq) goto loc_82F4A588;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// b 0x82f4a590
	goto loc_82F4A590;
loc_82F4A588:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
loc_82F4A590:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4a59c
	if (!cr0.eq) goto loc_82F4A59C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F4A59C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A5B0"))) PPC_WEAK_FUNC(sub_82F4A5B0);
PPC_FUNC_IMPL(__imp__sub_82F4A5B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4a5dc
	if (!cr6.eq) goto loc_82F4A5DC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f4a604
	goto loc_82F4A604;
loc_82F4A5DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f4a60c
	if (!cr6.gt) goto loc_82F4A60C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F4A604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f49c38
	sub_82F49C38(ctx, base);
loc_82F4A60C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 & r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82f4a698
	if (!cr6.eq) goto loc_82F4A698;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82ef8c38
	sub_82EF8C38(ctx, base);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82ef8c38
	sub_82EF8C38(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4a7a0
	if (!cr6.eq) goto loc_82F4A7A0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a7a0
	if (cr6.eq) goto loc_82F4A7A0;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82f4a7a0
	goto loc_82F4A7A0;
loc_82F4A698:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82F4A6A0:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// and r28,r11,r5
	r28.u64 = r11.u64 & ctx.r5.u64;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// bne cr6,0x82f4a6a0
	if (!cr6.eq) goto loc_82F4A6A0;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// li r9,5381
	ctx.r9.s64 = 5381;
	// li r11,4
	r11.s64 = 4;
	// ori r8,r8,63
	ctx.r8.u64 = ctx.r8.u64 | 63;
loc_82F4A6DC:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82f4a6dc
	if (!cr0.eq) goto loc_82F4A6DC;
	// and r11,r9,r5
	r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82f4a72c
	if (!cr6.eq) goto loc_82F4A72C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a70c
	if (cr6.eq) goto loc_82F4A70C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f48d40
	sub_82F48D40(ctx, base);
loc_82F4A70C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82f4a7a0
	goto loc_82F4A7A0;
loc_82F4A72C:
	// li r11,4
	r11.s64 = 4;
	// li r9,5381
	ctx.r9.s64 = 5381;
loc_82F4A734:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82f4a734
	if (!cr0.eq) goto loc_82F4A734;
	// and r11,r9,r5
	r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// b 0x82f4a754
	goto loc_82F4A754;
loc_82F4A750:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82F4A754:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bne cr6,0x82f4a750
	if (!cr6.eq) goto loc_82F4A750;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4a77c
	if (cr6.eq) goto loc_82F4A77C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f48d40
	sub_82F48D40(ctx, base);
loc_82F4A77C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F4A7A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4A7A8"))) PPC_WEAK_FUNC(sub_82F4A7A8);
PPC_FUNC_IMPL(__imp__sub_82F4A7A8) {
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
	// bl 0x82f4a478
	sub_82F4A478(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4a7d8
	if (cr0.eq) goto loc_82F4A7D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4A7D8:
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

__attribute__((alias("__imp__sub_82F4A7F8"))) PPC_WEAK_FUNC(sub_82F4A7F8);
PPC_FUNC_IMPL(__imp__sub_82F4A7F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,5476
	ctx.r4.s64 = ctx.r9.s64 + 5476;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r11,r11,17,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82f4a8d4
	if (cr0.eq) goto loc_82F4A8D4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// beq cr6,0x82f4a948
	if (cr6.eq) goto loc_82F4A948;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82F4A864:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4a888
	if (!cr6.lt) goto loc_82F4A888;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4A888:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// bl 0x82f49aa0
	sub_82F49AA0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82f4a864
	if (cr6.lt) goto loc_82F4A864;
	// b 0x82f4a948
	goto loc_82F4A948;
loc_82F4A8D4:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// beq cr6,0x82f4a948
	if (cr6.eq) goto loc_82F4A948;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82F4A8F0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f4a910
	if (!cr6.lt) goto loc_82F4A910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4A910:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// sth r5,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// bl 0x82f49aa0
	sub_82F49AA0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82f4a8f0
	if (cr6.lt) goto loc_82F4A8F0;
loc_82F4A948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4A950"))) PPC_WEAK_FUNC(sub_82F4A950);
PPC_FUNC_IMPL(__imp__sub_82F4A950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r5,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82f49f88
	sub_82F49F88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4a984
	if (cr0.eq) goto loc_82F4A984;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// b 0x82f4a98c
	goto loc_82F4A98C;
loc_82F4A984:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
loc_82F4A98C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4a99c
	if (!cr0.eq) goto loc_82F4A99C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
loc_82F4A99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4A9B0"))) PPC_WEAK_FUNC(sub_82F4A9B0);
PPC_FUNC_IMPL(__imp__sub_82F4A9B0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4aa6c
	if (cr6.eq) goto loc_82F4AA6C;
	// lbz r11,32(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4aa40
	if (!cr0.eq) goto loc_82F4AA40;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4aa04
	if (cr0.eq) goto loc_82F4AA04;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82f4aa08
	goto loc_82F4AA08;
loc_82F4AA04:
	// li r31,0
	r31.s64 = 0;
loc_82F4AA08:
	// stw r31,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4aa70
	if (cr6.eq) goto loc_82F4AA70;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r28.u32);
	// stb r9,32(r29)
	PPC_STORE_U8(r29.u32 + 32, ctx.r9.u8);
loc_82F4AA40:
	// lwz r30,36(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r28.u32);
	// b 0x82f4aa70
	goto loc_82F4AA70;
loc_82F4AA6C:
	// stw r28,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r28.u32);
loc_82F4AA70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4AA78"))) PPC_WEAK_FUNC(sub_82F4AA78);
PPC_FUNC_IMPL(__imp__sub_82F4AA78) {
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
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4aaac
	if (cr6.eq) goto loc_82F4AAAC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4AAAC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4aabc
	if (cr0.eq) goto loc_82F4AABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4AABC:
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

__attribute__((alias("__imp__sub_82F4AAD8"))) PPC_WEAK_FUNC(sub_82F4AAD8);
PPC_FUNC_IMPL(__imp__sub_82F4AAD8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,4
	r11.s64 = 4;
	// li r31,5381
	r31.s64 = 5381;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82F4AAF8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 | 63;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + r11.u32);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x82f4aaf8
	if (!cr0.eq) goto loc_82F4AAF8;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f4ab60
	if (cr6.eq) goto loc_82F4AB60;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// and r5,r11,r31
	ctx.r5.u64 = r11.u64 & r31.u64;
	// bl 0x82f499d0
	sub_82F499D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f4ab60
	if (cr0.lt) goto loc_82F4AB60;
	// rlwinm r11,r3,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// b 0x82f4ab70
	goto loc_82F4AB70;
loc_82F4AB60:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f4a5b0
	sub_82F4A5B0(ctx, base);
loc_82F4AB70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4AB78"))) PPC_WEAK_FUNC(sub_82F4AB78);
PPC_FUNC_IMPL(__imp__sub_82F4AB78) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// li r30,1
	r30.s64 = 1;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// addi r31,r14,48
	r31.s64 = r14.s64 + 48;
	// mr r19,r30
	r19.u64 = r30.u64;
	// cmpwi cr6,r15,10
	cr6.compare<int32_t>(r15.s32, 10, xer);
	// bne cr6,0x82f4adc4
	if (!cr6.eq) goto loc_82F4ADC4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5836
	ctx.r4.s64 = r11.s64 + 5836;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r18,0
	r18.s64 = 0;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + r11.u64;
	// bge cr6,0x82f4abf8
	if (!cr6.lt) goto loc_82F4ABF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4ABF8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5820
	ctx.r4.s64 = r11.s64 + 5820;
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 0);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// srawi r27,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r27.s64 = r11.s32 >> 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// ble cr6,0x82f4ad00
	if (!cr6.gt) goto loc_82F4AD00;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r28,4
	r28.s64 = 4;
	// addi r24,r11,5800
	r24.s64 = r11.s64 + 5800;
loc_82F4AC60:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4ac84
	if (!cr6.lt) goto loc_82F4AC84;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4AC84:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi. r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// beq 0x82f4acfc
	if (cr0.eq) goto loc_82F4ACFC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// stw r26,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r26.u32);
	// lwzx r6,r28,r25
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + r25.u32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x82f4ac60
	if (cr6.lt) goto loc_82F4AC60;
	// b 0x82f4ad00
	goto loc_82F4AD00;
loc_82F4ACFC:
	// mr r19,r18
	r19.u64 = r18.u64;
loc_82F4AD00:
	// addi r26,r17,40
	r26.s64 = r17.s64 + 40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fb3468
	sub_82FB3468(ctx, base);
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4adb4
	if (cr0.eq) goto loc_82F4ADB4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82f4b99c
	if (!cr6.gt) goto loc_82F4B99C;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82F4AD24:
	// lwzx r11,r29,r25
	r11.u64 = PPC_LOAD_U32(r29.u32 + r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// bl 0x82f294b0
	sub_82F294B0(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4ad54
	if (cr0.eq) goto loc_82F4AD54;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f4ad58
	goto loc_82F4AD58;
loc_82F4AD54:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82F4AD58:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f456f0
	sub_82F456F0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// beq cr6,0x82f4ad80
	if (cr6.eq) goto loc_82F4AD80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F4AD80:
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4ad90
	if (cr6.eq) goto loc_82F4AD90;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4AD90:
	// stwx r30,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4ada4
	if (cr6.eq) goto loc_82F4ADA4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4ADA4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82f4ad24
	if (!cr0.eq) goto loc_82F4AD24;
	// b 0x82f4b99c
	goto loc_82F4B99C;
loc_82F4ADB4:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
	// b 0x82f4b99c
	goto loc_82F4B99C;
loc_82F4ADC4:
	// cmpwi cr6,r15,48
	cr6.compare<int32_t>(r15.s32, 48, xer);
	// beq cr6,0x82f4ae10
	if (cr6.eq) goto loc_82F4AE10;
	// cmpwi cr6,r15,75
	cr6.compare<int32_t>(r15.s32, 75, xer);
	// bne cr6,0x82f4b9b8
	if (!cr6.eq) goto loc_82F4B9B8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5776
	ctx.r4.s64 = r11.s64 + 5776;
loc_82F4ADDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi. r16,r11,24
	r16.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// beq 0x82f4ae1c
	if (cr0.eq) goto loc_82F4AE1C;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// b 0x82f4ae20
	goto loc_82F4AE20;
loc_82F4AE10:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5752
	ctx.r4.s64 = r11.s64 + 5752;
	// b 0x82f4addc
	goto loc_82F4ADDC;
loc_82F4AE1C:
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_82F4AE20:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
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
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// beq 0x82f4ae74
	if (cr0.eq) goto loc_82F4AE74;
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// rlwimi r11,r30,9,22,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 9) & 0x300) | (r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// b 0x82f4ae8c
	goto loc_82F4AE8C;
loc_82F4AE74:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// beq 0x82f4ae88
	if (cr0.eq) goto loc_82F4AE88;
	// rlwimi r11,r30,8,22,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0x300) | (r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// b 0x82f4ae8c
	goto loc_82F4AE8C;
loc_82F4AE88:
	// rlwinm r11,r11,0,24,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
loc_82F4AE8C:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
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
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r27,r11,1
	r27.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4aec8
	if (cr0.eq) goto loc_82F4AEC8;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// b 0x82f4aecc
	goto loc_82F4AECC;
loc_82F4AEC8:
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_82F4AECC:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4aef0
	if (cr0.eq) goto loc_82F4AEF0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x82f4aef4
	goto loc_82F4AEF4;
loc_82F4AEF0:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82F4AEF4:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4af18
	if (cr0.eq) goto loc_82F4AF18;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// b 0x82f4af1c
	goto loc_82F4AF1C;
loc_82F4AF18:
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82F4AF1C:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
	// li r18,0
	r18.s64 = 0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f4af44
	if (!cr6.lt) goto loc_82F4AF44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4AF44:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r29,48(r10)
	r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82f297c8
	sub_82F297C8(ctx, base);
	// stw r3,32(r17)
	PPC_STORE_U32(r17.u32 + 32, ctx.r3.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4af88
	if (!cr6.lt) goto loc_82F4AF88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4AF88:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r25,r11,16
	r25.u64 = r11.u32 & 0xFFFF;
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4b048
	if (cr0.eq) goto loc_82F4B048;
	// lwz r5,32(r17)
	ctx.r5.u64 = PPC_LOAD_U32(r17.u32 + 32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82f4afd0
	if (!cr6.eq) goto loc_82F4AFD0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r11,5744
	ctx.r5.s64 = r11.s64 + 5744;
loc_82F4AFD0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r11,5720
	ctx.r4.s64 = r11.s64 + 5720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r11,5712
	ctx.r6.s64 = r11.s64 + 5712;
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// rlwinm r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300;
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bne cr6,0x82f4b008
	if (!cr6.eq) goto loc_82F4B008;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r10,5700
	ctx.r6.s64 = ctx.r10.s64 + 5700;
	// b 0x82f4b018
	goto loc_82F4B018;
loc_82F4B008:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bne cr6,0x82f4b018
	if (!cr6.eq) goto loc_82F4B018;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r10,5692
	ctx.r6.s64 = ctx.r10.s64 + 5692;
loc_82F4B018:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r8,r11,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// addi r4,r10,5632
	ctx.r4.s64 = ctx.r10.s64 + 5632;
	// clrlwi r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi r5,r29,24
	ctx.r5.u64 = r29.u32 & 0xFF;
	// addi r4,r11,5612
	ctx.r4.s64 = r11.s64 + 5612;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4B048:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r21,r18
	r21.u64 = r18.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// add r20,r8,r9
	r20.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ble cr6,0x82f4b138
	if (!cr6.gt) goto loc_82F4B138;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x82f4b0d8
	if (cr0.eq) goto loc_82F4B0D8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82f4b09c
	if (!cr6.lt) goto loc_82F4B09C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B09C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r10,r11
	r29.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82f4b110
	goto loc_82F4B110;
loc_82F4B0D8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b0ec
	if (!cr6.lt) goto loc_82F4B0EC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B0EC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
loc_82F4B110:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82f4b124
	if (!cr6.eq) goto loc_82F4B124;
	// mr r19,r18
	r19.u64 = r18.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
	// b 0x82f4b138
	goto loc_82F4B138;
loc_82F4B124:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r21,112(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r29.u32);
loc_82F4B138:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq 0x82f4b234
	if (cr0.eq) goto loc_82F4B234;
	// ble cr6,0x82f4b1d4
	if (!cr6.gt) goto loc_82F4B1D4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82F4B14C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82f4b170
	if (!cr6.lt) goto loc_82F4B170;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B170:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r29,r9,1
	r29.s64 = ctx.r9.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r27,r10,r11
	r27.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r21,112(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// stw r27,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r27.u32);
	// bne 0x82f4b14c
	if (!cr0.eq) goto loc_82F4B14C;
loc_82F4B1D4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82f4b1f8
	if (!cr6.lt) goto loc_82F4B1F8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B1F8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r22,r10,r11
	r22.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82f4b2f8
	goto loc_82F4B2F8;
loc_82F4B234:
	// ble cr6,0x82f4b2b0
	if (!cr6.gt) goto loc_82F4B2B0;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82F4B23C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b260
	if (!cr6.lt) goto loc_82F4B260;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B260:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	r29.s64 = ctx.r9.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r21,112(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// stw r27,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r27.u32);
	// bne 0x82f4b23c
	if (!cr0.eq) goto loc_82F4B23C;
loc_82F4B2B0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b2d4
	if (!cr6.lt) goto loc_82F4B2D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B2D4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r22,r11,16
	r22.u64 = r11.u32 & 0xFFFF;
loc_82F4B2F8:
	// addi r24,r17,40
	r24.s64 = r17.s64 + 40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fb3468
	sub_82FB3468(ctx, base);
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4b4b8
	if (cr0.eq) goto loc_82F4B4B8;
	// cmpwi cr6,r15,48
	cr6.compare<int32_t>(r15.s32, 48, xer);
	// li r23,22
	r23.s64 = 22;
	// beq cr6,0x82f4b320
	if (cr6.eq) goto loc_82F4B320;
	// mr r23,r15
	r23.u64 = r15.u64;
loc_82F4B320:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82f4b334
	if (cr6.eq) goto loc_82F4B334;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r17,56
	ctx.r3.s64 = r17.s64 + 56;
	// bl 0x82f492c8
	sub_82F492C8(ctx, base);
loc_82F4B334:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82f4b494
	if (!cr6.gt) goto loc_82F4B494;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// lfs f31,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f31.f64 = double(temp.f32);
loc_82F4B34C:
	// lwzx r11,r27,r21
	r11.u64 = PPC_LOAD_U32(r27.u32 + r21.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// bl 0x82f294b0
	sub_82F294B0(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4b37c
	if (cr0.eq) goto loc_82F4B37C;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f4b380
	goto loc_82F4B380;
loc_82F4B37C:
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82F4B380:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f456f0
	sub_82F456F0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r28,0(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// beq cr6,0x82f4b3a8
	if (cr6.eq) goto loc_82F4B3A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F4B3A8:
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4b3b8
	if (cr6.eq) goto loc_82F4B3B8;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4B3B8:
	// stwx r29,r27,r28
	PPC_STORE_U32(r27.u32 + r28.u32, r29.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82f4b474
	if (cr6.eq) goto loc_82F4B474;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f435f8
	sub_82F435F8(ctx, base);
	// lwz r11,56(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 56);
	// lfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82f4b3fc
	if (cr6.lt) goto loc_82F4B3FC;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// bge cr6,0x82f4b400
	if (!cr6.lt) goto loc_82F4B400;
loc_82F4B3FC:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82F4B400:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4b464
	if (cr0.eq) goto loc_82F4B464;
	// fsubs f11,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lhz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
	// fctidz f0,f11
	f0.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// fctidz f0,f13
	f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r10,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r10.u16);
	// sth r8,8(r11)
	PPC_STORE_U16(r11.u32 + 8, ctx.r8.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
	// b 0x82f4b474
	goto loc_82F4B474;
loc_82F4B464:
	// sth r18,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r18.u16);
	// sth r18,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r18.u16);
	// sth r18,10(r11)
	PPC_STORE_U16(r11.u32 + 10, r18.u16);
	// sth r18,8(r11)
	PPC_STORE_U16(r11.u32 + 8, r18.u16);
loc_82F4B474:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f4b484
	if (cr6.eq) goto loc_82F4B484;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4B484:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// bne 0x82f4b34c
	if (!cr0.eq) goto loc_82F4B34C;
loc_82F4B494:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r9,r22,r20
	ctx.r9.u64 = r22.u64 + r20.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x82f4b4e4
	if (cr6.eq) goto loc_82F4B4E4;
	// b 0x82f4b99c
	goto loc_82F4B99C;
loc_82F4B4B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r22,r20
	r30.u64 = r22.u64 + r20.u64;
	// bl 0x82f290b0
	sub_82F290B0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x82f4b99c
	if (!cr6.lt) goto loc_82F4B99C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f294b0
	sub_82F294B0(ctx, base);
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
loc_82F4B4E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82f4a7f8
	sub_82F4A7F8(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82f4b99c
	if (cr6.eq) goto loc_82F4B99C;
	// cmpwi cr6,r15,75
	cr6.compare<int32_t>(r15.s32, 75, xer);
	// bne cr6,0x82f4b50c
	if (!cr6.eq) goto loc_82F4B50C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f31.f64 = double(temp.f32);
	// b 0x82f4b514
	goto loc_82F4B514;
loc_82F4B50C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82F4B514:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b538
	if (!cr6.lt) goto loc_82F4B538;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B538:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
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
	// stfs f0,16(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 16, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b598
	if (!cr6.lt) goto loc_82F4B598;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B598:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
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
	// stfs f0,20(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 20, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b5f8
	if (!cr6.lt) goto loc_82F4B5F8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B5F8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
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
	// stfs f0,24(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 24, temp.u32);
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4b684
	if (cr0.eq) goto loc_82F4B684;
	// lfs f0,20(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lfs f0,16(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r4,r11,5568
	ctx.r4.s64 = r11.s64 + 5568;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lfs f13,24(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4B684:
	// lwz r11,60(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 60);
	// lwz r4,44(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 44);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f4b69c
	if (cr6.eq) goto loc_82F4B69C;
	// addi r3,r17,56
	ctx.r3.s64 = r17.s64 + 56;
	// bl 0x82f492c8
	sub_82F492C8(ctx, base);
loc_82F4B69C:
	// lwz r29,60(r17)
	r29.u64 = PPC_LOAD_U32(r17.u32 + 60);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f4b720
	if (cr6.eq) goto loc_82F4B720;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82F4B6AC:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,56(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 56);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82f4b6d8
	if (!cr6.lt) goto loc_82F4B6D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B6D8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// bne 0x82f4b6ac
	if (!cr0.eq) goto loc_82F4B6AC;
loc_82F4B720:
	// lwz r30,44(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4b740
	if (cr6.eq) goto loc_82F4B740;
loc_82F4B72C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f4b72c
	if (!cr0.eq) goto loc_82F4B72C;
loc_82F4B740:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b764
	if (!cr6.lt) goto loc_82F4B764;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B764:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4b7ac
	if (cr0.eq) goto loc_82F4B7AC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,5544
	ctx.r4.s64 = r11.s64 + 5544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4B7AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82f4b99c
	if (!cr6.gt) goto loc_82F4B99C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r26,r17,68
	r26.s64 = r17.s64 + 68;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r27,r11,5512
	r27.s64 = r11.s64 + 5512;
loc_82F4B7D4:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,17,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x82f4b870
	if (cr0.eq) goto loc_82F4B870;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b804
	if (!cr6.lt) goto loc_82F4B804;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B804:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bge cr6,0x82f4b848
	if (!cr6.lt) goto loc_82F4B848;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B848:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// b 0x82f4b8c4
	goto loc_82F4B8C4;
loc_82F4B870:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f4b880
	if (!cr6.lt) goto loc_82F4B880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4B880:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lbz r29,48(r9)
	r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// bge cr6,0x82f4b8b0
	if (!cr6.lt) goto loc_82F4B8B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4B8B0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r30,48(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82F4B8C4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r18,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r18.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f4b8e8
	if (!cr6.lt) goto loc_82F4B8E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F4B8E8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4b960
	if (cr0.eq) goto loc_82F4B960;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// clrlwi r6,r30,16
	ctx.r6.u64 = r30.u32 & 0xFFFF;
	// clrlwi r5,r29,16
	ctx.r5.u64 = r29.u32 & 0xFFFF;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4B960:
	// li r11,4
	r11.s64 = 4;
	// li r5,5381
	ctx.r5.s64 = 5381;
loc_82F4B968:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 | 63;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82f4b968
	if (!cr0.eq) goto loc_82F4B968;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f4a008
	sub_82F4A008(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82f4b7d4
	if (!cr0.eq) goto loc_82F4B7D4;
loc_82F4B99C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4b9b8
	if (cr6.eq) goto loc_82F4B9B8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4B9B8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82F4B9C8"))) PPC_WEAK_FUNC(sub_82F4B9C8);
PPC_FUNC_IMPL(__imp__sub_82F4B9C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4b9f8
	if (cr6.eq) goto loc_82F4B9F8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// stw r30,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r30.u32);
loc_82F4B9F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f297c8
	sub_82F297C8(ctx, base);
	// stw r3,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f4ba24
	if (!cr6.lt) goto loc_82F4BA24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4BA24:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r27,62
	cr6.compare<int32_t>(r27.s32, 62, xer);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r28,48(r10)
	r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne cr6,0x82f4ba70
	if (!cr6.eq) goto loc_82F4BA70;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f4ba5c
	if (!cr6.lt) goto loc_82F4BA5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F4BA5C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r30,48(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82F4BA70:
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// beq 0x82f4ba8c
	if (cr0.eq) goto loc_82F4BA8C;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,9,22,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 9) & 0x300) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFCFF);
	// b 0x82f4baa8
	goto loc_82F4BAA8;
loc_82F4BA8C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// beq 0x82f4baa4
	if (cr0.eq) goto loc_82F4BAA4;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,8,22,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x300) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFCFF);
	// b 0x82f4baa8
	goto loc_82F4BAA8;
loc_82F4BAA4:
	// rlwinm r10,r10,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
loc_82F4BAA8:
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// beq 0x82f4bac0
	if (cr0.eq) goto loc_82F4BAC0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// b 0x82f4bac4
	goto loc_82F4BAC4;
loc_82F4BAC0:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_82F4BAC4:
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// beq 0x82f4badc
	if (cr0.eq) goto loc_82F4BADC;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82f4bae0
	goto loc_82F4BAE0;
loc_82F4BADC:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82F4BAE0:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq 0x82f4baf8
	if (cr0.eq) goto loc_82F4BAF8;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// b 0x82f4bafc
	goto loc_82F4BAFC;
loc_82F4BAF8:
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_82F4BAFC:
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4bbc0
	if (cr0.eq) goto loc_82F4BBC0;
	// cmpwi cr6,r27,13
	cr6.compare<int32_t>(r27.s32, 13, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82f4bb28
	if (!cr6.eq) goto loc_82F4BB28;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5944
	ctx.r4.s64 = r11.s64 + 5944;
	// b 0x82f4bb30
	goto loc_82F4BB30;
loc_82F4BB28:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5916
	ctx.r4.s64 = r11.s64 + 5916;
loc_82F4BB30:
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82f4bb48
	if (!cr6.eq) goto loc_82F4BB48;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r11,5744
	ctx.r5.s64 = r11.s64 + 5744;
loc_82F4BB48:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5900
	ctx.r4.s64 = r11.s64 + 5900;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r11,5712
	ctx.r5.s64 = r11.s64 + 5712;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300;
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bne cr6,0x82f4bb7c
	if (!cr6.eq) goto loc_82F4BB7C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,5700
	ctx.r5.s64 = ctx.r10.s64 + 5700;
	// b 0x82f4bb8c
	goto loc_82F4BB8C;
loc_82F4BB7C:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bne cr6,0x82f4bb8c
	if (!cr6.eq) goto loc_82F4BB8C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,5692
	ctx.r5.s64 = ctx.r10.s64 + 5692;
loc_82F4BB8C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r7,r11,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// addi r4,r10,5856
	ctx.r4.s64 = ctx.r10.s64 + 5856;
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// cmpwi cr6,r27,62
	cr6.compare<int32_t>(r27.s32, 62, xer);
	// bne cr6,0x82f4bbc0
	if (!cr6.eq) goto loc_82F4BBC0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi r5,r30,24
	ctx.r5.u64 = r30.u32 & 0xFF;
	// addi r4,r11,5612
	ctx.r4.s64 = r11.s64 + 5612;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F4BBC0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4a7f8
	sub_82F4A7F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4BBD8"))) PPC_WEAK_FUNC(sub_82F4BBD8);
PPC_FUNC_IMPL(__imp__sub_82F4BBD8) {
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
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4bc80
	if (cr0.eq) goto loc_82F4BC80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f4bc94
	if (!cr6.gt) goto loc_82F4BC94;
	// li r29,0
	r29.s64 = 0;
loc_82F4BC10:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82f4bc38
	if (!cr6.eq) goto loc_82F4BC38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830eff20
	sub_830EFF20(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82f4bc54
	if (cr6.eq) goto loc_82F4BC54;
loc_82F4BC38:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82f4bc10
	if (cr6.lt) goto loc_82F4BC10;
	// b 0x82f4bc94
	goto loc_82F4BC94;
loc_82F4BC54:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq 0x82f4bc70
	if (cr0.eq) goto loc_82F4BC70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f4aa78
	sub_82F4AA78(ctx, base);
loc_82F4BC70:
	// li r11,0
	r11.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// b 0x82f4bc94
	goto loc_82F4BC94;
loc_82F4BC80:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82f4bc94
	if (!cr6.eq) goto loc_82F4BC94;
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82F4BC94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4BCA0"))) PPC_WEAK_FUNC(sub_82F4BCA0);
PPC_FUNC_IMPL(__imp__sub_82F4BCA0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f4bcd8
	if (cr6.eq) goto loc_82F4BCD8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F4BCD8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82f4aad8
	sub_82F4AAD8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4bd0c
	if (!cr6.eq) goto loc_82F4BD0C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4bd0c
	if (cr6.eq) goto loc_82F4BD0C;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4BD0C:
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

__attribute__((alias("__imp__sub_82F4BD28"))) PPC_WEAK_FUNC(sub_82F4BD28);
PPC_FUNC_IMPL(__imp__sub_82F4BD28) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82f4aad8
	sub_82F4AAD8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4bd90
	if (!cr6.eq) goto loc_82F4BD90;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4bd90
	if (cr6.eq) goto loc_82F4BD90;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F4BD90:
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

__attribute__((alias("__imp__sub_82F4BDA8"))) PPC_WEAK_FUNC(sub_82F4BDA8);
PPC_FUNC_IMPL(__imp__sub_82F4BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f4bdf4
	if (!cr6.eq) goto loc_82F4BDF4;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// blt cr6,0x82f4bdd0
	if (cr6.lt) goto loc_82F4BDD0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f4bdd4
	if (!cr6.gt) goto loc_82F4BDD4;
loc_82F4BDD0:
	// li r11,0
	r11.s64 = 0;
loc_82F4BDD4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4bdec
	if (cr0.eq) goto loc_82F4BDEC;
	// lhz r11,8(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82f4bdf4
	if (!cr6.eq) goto loc_82F4BDF4;
loc_82F4BDEC:
	// li r11,1
	r11.s64 = 1;
	// b 0x82f4bdf8
	goto loc_82F4BDF8;
loc_82F4BDF4:
	// li r11,0
	r11.s64 = 0;
loc_82F4BDF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4BE00"))) PPC_WEAK_FUNC(sub_82F4BE00);
PPC_FUNC_IMPL(__imp__sub_82F4BE00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// b 0x82fc18f0
	sub_82FC18F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4BE08"))) PPC_WEAK_FUNC(sub_82F4BE08);
PPC_FUNC_IMPL(__imp__sub_82F4BE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4BE10"))) PPC_WEAK_FUNC(sub_82F4BE10);
PPC_FUNC_IMPL(__imp__sub_82F4BE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// b 0x82f32ec0
	sub_82F32EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4BE18"))) PPC_WEAK_FUNC(sub_82F4BE18);
PPC_FUNC_IMPL(__imp__sub_82F4BE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,436(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 436);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f4be38
	if (cr0.eq) goto loc_82F4BE38;
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_82F4BE38:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4be4c
	if (cr0.eq) goto loc_82F4BE4C;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f32ec0
	sub_82F32EC0(ctx, base);
	return;
loc_82F4BE4C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F4BE60"))) PPC_WEAK_FUNC(sub_82F4BE60);
PPC_FUNC_IMPL(__imp__sub_82F4BE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4BE68"))) PPC_WEAK_FUNC(sub_82F4BE68);
PPC_FUNC_IMPL(__imp__sub_82F4BE68) {
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
	// b 0x82f4bea0
	goto loc_82F4BEA0;
loc_82F4BE80:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4be9c
	if (cr0.eq) goto loc_82F4BE9C;
	// lwz r11,420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4bec0
	if (!cr6.eq) goto loc_82F4BEC0;
loc_82F4BE9C:
	// lwz r31,40(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_82F4BEA0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f4be80
	if (!cr6.eq) goto loc_82F4BE80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4BEAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82F4BEC0:
	// lwz r11,420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x82f4beac
	goto loc_82F4BEAC;
}

__attribute__((alias("__imp__sub_82F4BED0"))) PPC_WEAK_FUNC(sub_82F4BED0);
PPC_FUNC_IMPL(__imp__sub_82F4BED0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,6792
	ctx.r5.s64 = r11.s64 + 6792;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef0a78
	sub_82EF0A78(ctx, base);
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4bf80
	if (!cr6.eq) goto loc_82F4BF80;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4BF80:
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

__attribute__((alias("__imp__sub_82F4BF98"))) PPC_WEAK_FUNC(sub_82F4BF98);
PPC_FUNC_IMPL(__imp__sub_82F4BF98) {
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
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4bfe0
	if (cr0.eq) goto loc_82F4BFE0;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc1418
	sub_82FC1418(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4BFE0:
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

__attribute__((alias("__imp__sub_82F4BFF8"))) PPC_WEAK_FUNC(sub_82F4BFF8);
PPC_FUNC_IMPL(__imp__sub_82F4BFF8) {
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
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4c040
	if (cr0.eq) goto loc_82F4C040;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc1488
	sub_82FC1488(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4C048"))) PPC_WEAK_FUNC(sub_82F4C048);
PPC_FUNC_IMPL(__imp__sub_82F4C048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// beq 0x82f4c090
	if (cr0.eq) goto loc_82F4C090;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// lwz r11,128(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x82f4c0b4
	goto loc_82F4C0B4;
loc_82F4C090:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// lwz r11,128(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_82F4C0B4:
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
}

__attribute__((alias("__imp__sub_82F4C0D0"))) PPC_WEAK_FUNC(sub_82F4C0D0);
PPC_FUNC_IMPL(__imp__sub_82F4C0D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// b 0x82fc0f78
	sub_82FC0F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4C0D8"))) PPC_WEAK_FUNC(sub_82F4C0D8);
PPC_FUNC_IMPL(__imp__sub_82F4C0D8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4c11c
	if (cr6.eq) goto loc_82F4C11C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C11C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r28,188
	ctx.r3.s64 = r28.s64 + 188;
	// bl 0x82fc1b10
	sub_82FC1B10(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4c198
	if (cr6.eq) goto loc_82F4C198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f4c164
	if (cr6.lt) goto loc_82F4C164;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f4c168
	if (!cr6.gt) goto loc_82F4C168;
loc_82F4C164:
	// li r11,0
	r11.s64 = 0;
loc_82F4C168:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4c198
	if (cr0.eq) goto loc_82F4C198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f3a798
	sub_82F3A798(ctx, base);
loc_82F4C198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4C1A0"))) PPC_WEAK_FUNC(sub_82F4C1A0);
PPC_FUNC_IMPL(__imp__sub_82F4C1A0) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82fc1c88
	sub_82FC1C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C1D0"))) PPC_WEAK_FUNC(sub_82F4C1D0);
PPC_FUNC_IMPL(__imp__sub_82F4C1D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C1D8"))) PPC_WEAK_FUNC(sub_82F4C1D8);
PPC_FUNC_IMPL(__imp__sub_82F4C1D8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subfic r10,r3,6
	xer.ca = ctx.r3.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r3.s64;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r10,31
	r28.u64 = ctx.r10.u32 & 0x1;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4c2e8
	if (cr0.eq) goto loc_82F4C2E8;
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4c280
	if (cr0.eq) goto loc_82F4C280;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4c278
	if (cr6.eq) goto loc_82F4C278;
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4c278
	if (cr6.eq) goto loc_82F4C278;
	// lwz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4c270
	if (cr6.eq) goto loc_82F4C270;
	// lwz r9,220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4c270
	if (cr6.eq) goto loc_82F4C270;
	// lwz r10,216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
loc_82F4C254:
	// bne cr6,0x82f4c2e8
	if (!cr6.eq) goto loc_82F4C2E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4c348
	goto loc_82F4C348;
loc_82F4C270:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// b 0x82f4c348
	goto loc_82F4C348;
loc_82F4C278:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f4c348
	goto loc_82F4C348;
loc_82F4C280:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f4c294
	if (!cr6.eq) goto loc_82F4C294;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82F4C294:
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4c278
	if (cr6.eq) goto loc_82F4C278;
	// lwz r8,204(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f4c278
	if (cr6.eq) goto loc_82F4C278;
	// lwz r8,160(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x82f4c270
	if (cr6.eq) goto loc_82F4C270;
	// lwz r8,220(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f4c270
	if (cr6.eq) goto loc_82F4C270;
	// lwz r10,216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// b 0x82f4c254
	goto loc_82F4C254;
loc_82F4C2E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// bne cr6,0x82f4c338
	if (!cr6.eq) goto loc_82F4C338;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82f322d8
	sub_82F322D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82f4c338
	if (cr6.eq) goto loc_82F4C338;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4c338
	if (!cr6.eq) goto loc_82F4C338;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x82f32ec0
	sub_82F32EC0(ctx, base);
	// b 0x82f4c348
	goto loc_82F4C348;
loc_82F4C338:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc0e60
	sub_82FC0E60(ctx, base);
loc_82F4C348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4C350"))) PPC_WEAK_FUNC(sub_82F4C350);
PPC_FUNC_IMPL(__imp__sub_82F4C350) {
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
	// lbz r11,146(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 146);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4c3b4
	if (cr0.eq) goto loc_82F4C3B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4c3b4
	if (!cr0.eq) goto loc_82F4C3B4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4c3b4
	if (cr6.eq) goto loc_82F4C3B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4c3b8
	goto loc_82F4C3B8;
loc_82F4C3B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4C3B8:
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

__attribute__((alias("__imp__sub_82F4C3D0"))) PPC_WEAK_FUNC(sub_82F4C3D0);
PPC_FUNC_IMPL(__imp__sub_82F4C3D0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc18f0
	sub_82FC18F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
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
}

__attribute__((alias("__imp__sub_82F4C438"))) PPC_WEAK_FUNC(sub_82F4C438);
PPC_FUNC_IMPL(__imp__sub_82F4C438) {
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
	// lbz r11,436(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 436);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4c47c
	if (!cr0.eq) goto loc_82F4C47C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f27160
	sub_82F27160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4c480
	goto loc_82F4C480;
loc_82F4C47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4C480:
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

__attribute__((alias("__imp__sub_82F4C498"))) PPC_WEAK_FUNC(sub_82F4C498);
PPC_FUNC_IMPL(__imp__sub_82F4C498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C4E8"))) PPC_WEAK_FUNC(sub_82F4C4E8);
PPC_FUNC_IMPL(__imp__sub_82F4C4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C538"))) PPC_WEAK_FUNC(sub_82F4C538);
PPC_FUNC_IMPL(__imp__sub_82F4C538) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4c56c
	if (cr0.eq) goto loc_82F4C56C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x82fc1508
	sub_82FC1508(ctx, base);
loc_82F4C56C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f60f88
	sub_82F60F88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82f183b8
	sub_82F183B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4C598"))) PPC_WEAK_FUNC(sub_82F4C598);
PPC_FUNC_IMPL(__imp__sub_82F4C598) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82f64be0
	sub_82F64BE0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4c5c8
	if (cr0.eq) goto loc_82F4C5C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4c5d4
	goto loc_82F4C5D4;
loc_82F4C5C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82f1c748
	sub_82F1C748(ctx, base);
loc_82F4C5D4:
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

__attribute__((alias("__imp__sub_82F4C5F0"))) PPC_WEAK_FUNC(sub_82F4C5F0);
PPC_FUNC_IMPL(__imp__sub_82F4C5F0) {
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
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// bne cr6,0x82f4c64c
	if (!cr6.eq) goto loc_82F4C64C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
	// b 0x82f4c68c
	goto loc_82F4C68C;
loc_82F4C64C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f4c660
	if (!cr6.eq) goto loc_82F4C660;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
loc_82F4C660:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stb r10,112(r31)
	PPC_STORE_U8(r31.u32 + 112, ctx.r10.u8);
loc_82F4C68C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4c6a8
	if (cr0.eq) goto loc_82F4C6A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C6A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4C6B0"))) PPC_WEAK_FUNC(sub_82F4C6B0);
PPC_FUNC_IMPL(__imp__sub_82F4C6B0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f4c6e4
	if (!cr6.eq) goto loc_82F4C6E4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r30,116(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// b 0x82f4c710
	goto loc_82F4C710;
loc_82F4C6E4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f4c710
	if (!cr6.eq) goto loc_82F4C710;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
	// bne cr6,0x82f4c710
	if (!cr6.eq) goto loc_82F4C710;
	// li r30,0
	r30.s64 = 0;
loc_82F4C710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82F4C730"))) PPC_WEAK_FUNC(sub_82F4C730);
PPC_FUNC_IMPL(__imp__sub_82F4C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4c75c
	if (cr0.eq) goto loc_82F4C75C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C770"))) PPC_WEAK_FUNC(sub_82F4C770);
PPC_FUNC_IMPL(__imp__sub_82F4C770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4c79c
	if (cr0.eq) goto loc_82F4C79C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C79C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4C7B0"))) PPC_WEAK_FUNC(sub_82F4C7B0);
PPC_FUNC_IMPL(__imp__sub_82F4C7B0) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f4c818
	if (cr0.eq) goto loc_82F4C818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82f4c800
	if (!cr0.gt) goto loc_82F4C800;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C800:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4C818:
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

__attribute__((alias("__imp__sub_82F4C830"))) PPC_WEAK_FUNC(sub_82F4C830);
PPC_FUNC_IMPL(__imp__sub_82F4C830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4c870
	if (cr0.eq) goto loc_82F4C870;
	// bl 0x82f4be68
	sub_82F4BE68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
loc_82F4C870:
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

__attribute__((alias("__imp__sub_82F4C888"))) PPC_WEAK_FUNC(sub_82F4C888);
PPC_FUNC_IMPL(__imp__sub_82F4C888) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f4c8b0
	if (!cr6.eq) goto loc_82F4C8B0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r31,116(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// b 0x82f4c8f4
	goto loc_82F4C8F4;
loc_82F4C8B0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f4c8d4
	if (cr6.lt) goto loc_82F4C8D4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f4c8d8
	if (!cr6.gt) goto loc_82F4C8D8;
loc_82F4C8D4:
	// li r11,0
	r11.s64 = 0;
loc_82F4C8D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4ca40
	if (cr0.eq) goto loc_82F4CA40;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-128
	r31.s64 = r11.s64 + -128;
	// bne cr6,0x82f4c8f4
	if (!cr6.eq) goto loc_82F4C8F4;
	// li r31,0
	r31.s64 = 0;
loc_82F4C8F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4ca40
	if (cr6.eq) goto loc_82F4CA40;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f4ca40
	if (cr6.lt) goto loc_82F4CA40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x82f4c948
	if (cr6.eq) goto loc_82F4C948;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F4C948:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82f4c988
	if (!cr6.eq) goto loc_82F4C988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r11,16384
	xer.ca = r11.u32 > 4294950911;
	r30.s64 = r11.s64 + 16384;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82f4ca40
	if (cr0.lt) goto loc_82F4CA40;
	// lis r11,32511
	r11.s64 = 2130640896;
	// ori r11,r11,65533
	r11.u64 = r11.u64 | 65533;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82f4ca40
	if (cr6.gt) goto loc_82F4CA40;
	// b 0x82f4c9e8
	goto loc_82F4C9E8;
loc_82F4C988:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f4c9bc
	if (cr6.eq) goto loc_82F4C9BC;
	// lwz r28,116(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82f123d0
	sub_82F123D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82f177b0
	sub_82F177B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82f123d0
	sub_82F123D0(ctx, base);
	// b 0x82f4c9c8
	goto loc_82F4C9C8;
loc_82F4C9BC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f177b0
	sub_82F177B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F4C9C8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f4ca40
	if (cr6.eq) goto loc_82F4CA40;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// beq cr6,0x82f4ca40
	if (cr6.eq) goto loc_82F4CA40;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82f4ca40
	if (!cr6.eq) goto loc_82F4CA40;
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
loc_82F4C9E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f4ca40
	if (cr6.eq) goto loc_82F4CA40;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r27,188
	ctx.r3.s64 = r27.s64 + 188;
	// bl 0x82fc1780
	sub_82FC1780(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4ca40
	if (cr0.eq) goto loc_82F4CA40;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f4ca40
	if (cr6.eq) goto loc_82F4CA40;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4CA40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4CA48"))) PPC_WEAK_FUNC(sub_82F4CA48);
PPC_FUNC_IMPL(__imp__sub_82F4CA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4ca88
	if (cr0.eq) goto loc_82F4CA88;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
loc_82F4CA88:
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

__attribute__((alias("__imp__sub_82F4CAA0"))) PPC_WEAK_FUNC(sub_82F4CAA0);
PPC_FUNC_IMPL(__imp__sub_82F4CAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4cad0
	if (cr0.eq) goto loc_82F4CAD0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, r11.u32);
loc_82F4CAD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4CAE0"))) PPC_WEAK_FUNC(sub_82F4CAE0);
PPC_FUNC_IMPL(__imp__sub_82F4CAE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4cc8c
	if (cr0.eq) goto loc_82F4CC8C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f4cc8c
	if (!cr6.gt) goto loc_82F4CC8C;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f4cc10
	if (!cr6.gt) goto loc_82F4CC10;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67bc8
	sub_82F67BC8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4cb6c
	if (!cr6.eq) goto loc_82F4CB6C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CB6C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6812
	ctx.r10.s64 = r11.s64 + 6812;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F4CB80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f4cba4
	if (cr0.eq) goto loc_82F4CBA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f4cb80
	if (cr6.eq) goto loc_82F4CB80;
loc_82F4CBA4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4cbb4
	if (!cr0.eq) goto loc_82F4CBB4;
	// li r29,1
	r29.s64 = 1;
	// b 0x82f4cbf0
	goto loc_82F4CBF0;
loc_82F4CBB4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,6804
	ctx.r10.s64 = ctx.r10.s64 + 6804;
loc_82F4CBC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f4cbe4
	if (cr0.eq) goto loc_82F4CBE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f4cbc0
	if (cr6.eq) goto loc_82F4CBC0;
loc_82F4CBE4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4cbf0
	if (!cr0.eq) goto loc_82F4CBF0;
	// li r29,2
	r29.s64 = 2;
loc_82F4CBF0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4cc10
	if (!cr6.eq) goto loc_82F4CC10;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CC10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82f34600
	sub_82F34600(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4cc8c
	if (!cr6.eq) goto loc_82F4CC8C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CC8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4CC98"))) PPC_WEAK_FUNC(sub_82F4CC98);
PPC_FUNC_IMPL(__imp__sub_82F4CC98) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f4cce8
	if (cr0.eq) goto loc_82F4CCE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r10,3224
	r30.s64 = ctx.r10.s64 + 3224;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82f34600
	sub_82F34600(ctx, base);
loc_82F4CCE8:
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

__attribute__((alias("__imp__sub_82F4CD00"))) PPC_WEAK_FUNC(sub_82F4CD00);
PPC_FUNC_IMPL(__imp__sub_82F4CD00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4cea8
	if (cr0.eq) goto loc_82F4CEA8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f4cea8
	if (!cr6.gt) goto loc_82F4CEA8;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f4ce30
	if (!cr6.gt) goto loc_82F4CE30;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67bc8
	sub_82F67BC8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4cd8c
	if (!cr6.eq) goto loc_82F4CD8C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CD8C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,6812
	ctx.r10.s64 = r11.s64 + 6812;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F4CDA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f4cdc4
	if (cr0.eq) goto loc_82F4CDC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f4cda0
	if (cr6.eq) goto loc_82F4CDA0;
loc_82F4CDC4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4cdd4
	if (!cr0.eq) goto loc_82F4CDD4;
	// li r29,1
	r29.s64 = 1;
	// b 0x82f4ce10
	goto loc_82F4CE10;
loc_82F4CDD4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,6804
	ctx.r10.s64 = ctx.r10.s64 + 6804;
loc_82F4CDE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f4ce04
	if (cr0.eq) goto loc_82F4CE04;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f4cde0
	if (cr6.eq) goto loc_82F4CDE0;
loc_82F4CE04:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4ce10
	if (!cr0.eq) goto loc_82F4CE10;
	// li r29,2
	r29.s64 = 2;
loc_82F4CE10:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4ce30
	if (!cr6.eq) goto loc_82F4CE30;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CE30:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82f347b8
	sub_82F347B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4cea8
	if (!cr6.eq) goto loc_82F4CEA8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4CEA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4CEB0"))) PPC_WEAK_FUNC(sub_82F4CEB0);
PPC_FUNC_IMPL(__imp__sub_82F4CEB0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,111
	cr6.compare<uint32_t>(ctx.r9.u32, 111, xer);
	// bne cr6,0x82f4cfd0
	if (!cr6.eq) goto loc_82F4CFD0;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82f4cfd0
	if (!cr6.gt) goto loc_82F4CFD0;
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// bne cr6,0x82f4cfd0
	if (!cr6.eq) goto loc_82F4CFD0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4cf2c
	if (cr0.eq) goto loc_82F4CF2C;
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4cf34
	if (!cr0.eq) goto loc_82F4CF34;
	// b 0x82f4cfbc
	goto loc_82F4CFBC;
loc_82F4CF2C:
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f4cfbc
	if (!cr0.eq) goto loc_82F4CFBC;
loc_82F4CF34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,316(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r8,320(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 320);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r8,324(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 324);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r8,328(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 328);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r8,332(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 332);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r8,336(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f4cf94
	if (cr6.eq) goto loc_82F4CF94;
	// lwz r11,340(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82f4cf98
	if (!cr6.eq) goto loc_82F4CF98;
loc_82F4CF94:
	// li r11,1
	r11.s64 = 1;
loc_82F4CF98:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4cfbc
	if (cr0.eq) goto loc_82F4CFBC;
	// lbz r11,57(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 57);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f4cfb4
	if (cr6.eq) goto loc_82F4CFB4;
	// addi r11,r11,255
	r11.s64 = r11.s64 + 255;
	// b 0x82f4cfb8
	goto loc_82F4CFB8;
loc_82F4CFB4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82F4CFB8:
	// stb r11,57(r28)
	PPC_STORE_U8(r28.u32 + 57, r11.u8);
loc_82F4CFBC:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f4cfd0
	if (cr6.lt) goto loc_82F4CFD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F4CFD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4CFD8"))) PPC_WEAK_FUNC(sub_82F4CFD8);
PPC_FUNC_IMPL(__imp__sub_82F4CFD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f4ceb0
	sub_82F4CEB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f88108
	sub_82F88108(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4D018"))) PPC_WEAK_FUNC(sub_82F4D018);
PPC_FUNC_IMPL(__imp__sub_82F4D018) {
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
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
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
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// blt cr6,0x82f4d094
	if (cr6.lt) goto loc_82F4D094;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F4D094:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82F4D0B0"))) PPC_WEAK_FUNC(sub_82F4D0B0);
PPC_FUNC_IMPL(__imp__sub_82F4D0B0) {
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
	// beq cr6,0x82f4d0e8
	if (cr6.eq) goto loc_82F4D0E8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D0E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4d108
	if (cr6.eq) goto loc_82F4D108;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D108:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
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

__attribute__((alias("__imp__sub_82F4D128"))) PPC_WEAK_FUNC(sub_82F4D128);
PPC_FUNC_IMPL(__imp__sub_82F4D128) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4D130"))) PPC_WEAK_FUNC(sub_82F4D130);
PPC_FUNC_IMPL(__imp__sub_82F4D130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4d144
	if (cr6.eq) goto loc_82F4D144;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// blr 
	return;
loc_82F4D144:
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F4D158"))) PPC_WEAK_FUNC(sub_82F4D158);
PPC_FUNC_IMPL(__imp__sub_82F4D158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4d178
	if (cr6.eq) goto loc_82F4D178;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4d178
	if (!cr0.eq) goto loc_82F4D178;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
loc_82F4D178:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F4D190"))) PPC_WEAK_FUNC(sub_82F4D190);
PPC_FUNC_IMPL(__imp__sub_82F4D190) {
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
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// beq cr6,0x82f4d1d4
	if (cr6.eq) goto loc_82F4D1D4;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4d1d4
	if (!cr0.eq) goto loc_82F4D1D4;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82f4d1ec
	goto loc_82F4D1EC;
loc_82F4D1D4:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82F4D1EC:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x82f4d22c
	if (!cr6.lt) goto loc_82F4D22C;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82f4d22c
	if (cr6.lt) goto loc_82F4D22C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// bne cr6,0x82f4d224
	if (!cr6.eq) goto loc_82F4D224;
	// li r11,0
	r11.s64 = 0;
loc_82F4D224:
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// b 0x82f4d25c
	goto loc_82F4D25C;
loc_82F4D22C:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82f4d25c
	if (cr6.lt) goto loc_82F4D25C;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r10,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// stb r11,436(r31)
	PPC_STORE_U8(r31.u32 + 436, r11.u8);
	// ble cr6,0x82f4d25c
	if (!cr6.gt) goto loc_82F4D25C;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc1088
	sub_82FC1088(ctx, base);
loc_82F4D25C:
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

__attribute__((alias("__imp__sub_82F4D278"))) PPC_WEAK_FUNC(sub_82F4D278);
PPC_FUNC_IMPL(__imp__sub_82F4D278) {
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
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lbzx r11,r28,r11
	r11.u64 = PPC_LOAD_U8(r28.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4d34c
	if (!cr0.eq) goto loc_82F4D34C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// li r30,0
	r30.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4d320
	if (cr0.eq) goto loc_82F4D320;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4d320
	if (cr6.eq) goto loc_82F4D320;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82F4D2EC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f4d2ec
	if (cr6.lt) goto loc_82F4D2EC;
	// li r30,1
	r30.s64 = 1;
loc_82F4D320:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4d334
	if (cr0.eq) goto loc_82F4D334;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r28,r11
	PPC_STORE_U8(r28.u32 + r11.u32, ctx.r10.u8);
loc_82F4D334:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D34C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4D358"))) PPC_WEAK_FUNC(sub_82F4D358);
PPC_FUNC_IMPL(__imp__sub_82F4D358) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x82f2afd8
	sub_82F2AFD8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82f4d440
	if (cr0.eq) goto loc_82F4D440;
loc_82F4D38C:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4d434
	if (cr0.eq) goto loc_82F4D434;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4d434
	if (cr6.eq) goto loc_82F4D434;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82F4D3CC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r31,r30,r11
	r31.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// beq 0x82f4d408
	if (cr0.eq) goto loc_82F4D408;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2ba50
	sub_82F2BA50(ctx, base);
	// b 0x82f4d420
	goto loc_82F4D420;
loc_82F4D408:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D420:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82f4d3cc
	if (cr6.lt) goto loc_82F4D3CC;
loc_82F4D434:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(r28.u32, r24.u32, xer);
	// blt cr6,0x82f4d38c
	if (cr6.lt) goto loc_82F4D38C;
loc_82F4D440:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82F4D448"))) PPC_WEAK_FUNC(sub_82F4D448);
PPC_FUNC_IMPL(__imp__sub_82F4D448) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f4d474
	if (cr6.eq) goto loc_82F4D474;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D474:
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82f4d4cc
	if (cr0.lt) goto loc_82F4D4CC;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F4D4A0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x82f4d4a0
	if (!cr0.lt) goto loc_82F4D4A0;
loc_82F4D4CC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4D4F0"))) PPC_WEAK_FUNC(sub_82F4D4F0);
PPC_FUNC_IMPL(__imp__sub_82F4D4F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r27,0(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82f4d5a0
	if (cr0.lt) goto loc_82F4D5A0;
loc_82F4D518:
	// lwz r4,176(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 176);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82f4d598
	if (cr0.lt) goto loc_82F4D598;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F4D544:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82f4d580
	if (!cr6.eq) goto loc_82F4D580;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f4d584
	if (cr6.eq) goto loc_82F4D584;
loc_82F4D580:
	// li r11,0
	r11.s64 = 0;
loc_82F4D584:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4d5a8
	if (!cr0.eq) goto loc_82F4D5A8;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82f4d544
	if (!cr0.lt) goto loc_82F4D544;
loc_82F4D598:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x82f4d518
	if (!cr0.lt) goto loc_82F4D518;
loc_82F4D5A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4d5ac
	goto loc_82F4D5AC;
loc_82F4D5A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F4D5AC:
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82F4D5B8"))) PPC_WEAK_FUNC(sub_82F4D5B8);
PPC_FUNC_IMPL(__imp__sub_82F4D5B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f4d5f4
	if (cr0.eq) goto loc_82F4D5F4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D5F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bne cr6,0x82f4d620
	if (!cr6.eq) goto loc_82F4D620;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F4D620:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f608e8
	sub_82F608E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4d650
	if (cr6.eq) goto loc_82F4D650;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D650:
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

__attribute__((alias("__imp__sub_82F4D668"))) PPC_WEAK_FUNC(sub_82F4D668);
PPC_FUNC_IMPL(__imp__sub_82F4D668) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// lhz r11,80(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// stb r11,82(r30)
	PPC_STORE_U8(r30.u32 + 82, r11.u8);
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// stb r11,83(r30)
	PPC_STORE_U8(r30.u32 + 83, r11.u8);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4d6ec
	if (cr6.eq) goto loc_82F4D6EC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4D6EC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
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

__attribute__((alias("__imp__sub_82F4D710"))) PPC_WEAK_FUNC(sub_82F4D710);
PPC_FUNC_IMPL(__imp__sub_82F4D710) {
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
	// addi r31,r3,188
	r31.s64 = ctx.r3.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fc0d90
	sub_82FC0D90(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82f4d73c
	if (!cr6.eq) goto loc_82F4D73C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4d74c
	goto loc_82F4D74C;
loc_82F4D73C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82F4D74C:
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

__attribute__((alias("__imp__sub_82F4D760"))) PPC_WEAK_FUNC(sub_82F4D760);
PPC_FUNC_IMPL(__imp__sub_82F4D760) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r29,188
	r30.s64 = r29.s64 + 188;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82fc0d90
	sub_82FC0D90(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82f4d798
	if (!cr6.eq) goto loc_82F4D798;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4d894
	goto loc_82F4D894;
loc_82F4D798:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,100(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82f39228
	sub_82F39228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f65bc0
	sub_82F65BC0(ctx, base);
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// addi r30,r28,128
	r30.s64 = r28.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f4d858
	if (!cr6.eq) goto loc_82F4D858;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f4d858
	if (!cr6.eq) goto loc_82F4D858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,436(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 436);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82f4d84c
	if (cr0.eq) goto loc_82F4D84C;
	// lbz r11,436(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 436);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82f4d854
	goto loc_82F4D854;
loc_82F4D84C:
	// lbz r11,436(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 436);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82F4D854:
	// stb r11,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, r11.u8);
loc_82F4D858:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f4d0b0
	sub_82F4D0B0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82f39228
	sub_82F39228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F4D894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4D8A0"))) PPC_WEAK_FUNC(sub_82F4D8A0);
PPC_FUNC_IMPL(__imp__sub_82F4D8A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f61960
	sub_82F61960(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4dae8
	if (!cr0.eq) goto loc_82F4DAE8;
	// cmpwi cr6,r30,33
	cr6.compare<int32_t>(r30.s32, 33, xer);
	// bgt cr6,0x82f4d96c
	if (cr6.gt) goto loc_82F4D96C;
	// beq cr6,0x82f4d934
	if (cr6.eq) goto loc_82F4D934;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82f4daac
	if (cr6.lt) goto loc_82F4DAAC;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// ble cr6,0x82f4dae8
	if (!cr6.gt) goto loc_82F4DAE8;
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// beq cr6,0x82f4dae8
	if (cr6.eq) goto loc_82F4DAE8;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(r30.s32, 28, xer);
	// bne cr6,0x82f4daac
	if (!cr6.eq) goto loc_82F4DAAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4d924
	if (cr0.eq) goto loc_82F4D924;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82f4d92c
	goto loc_82F4D92C;
loc_82F4D924:
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82F4D92C:
	// stb r11,436(r31)
	PPC_STORE_U8(r31.u32 + 436, r11.u8);
	// b 0x82f4dae8
	goto loc_82F4DAE8;
loc_82F4D934:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,437(r31)
	PPC_STORE_U8(r31.u32 + 437, r11.u8);
	// b 0x82f4dae8
	goto loc_82F4DAE8;
loc_82F4D96C:
	// cmpwi cr6,r30,34
	cr6.compare<int32_t>(r30.s32, 34, xer);
	// beq cr6,0x82f4dab4
	if (cr6.eq) goto loc_82F4DAB4;
	// cmpwi cr6,r30,36
	cr6.compare<int32_t>(r30.s32, 36, xer);
	// beq cr6,0x82f4d9d0
	if (cr6.eq) goto loc_82F4D9D0;
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// bne cr6,0x82f4daac
	if (!cr6.eq) goto loc_82F4DAAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f4daac
	if (!cr6.eq) goto loc_82F4DAAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// stb r3,158(r31)
	PPC_STORE_U8(r31.u32 + 158, ctx.r3.u8);
	// b 0x82f4dae8
	goto loc_82F4DAE8;
loc_82F4D9D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,124(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82f4daac
	if (cr6.lt) goto loc_82F4DAAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4da9c
	if (cr0.eq) goto loc_82F4DA9C;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,15
	cr6.compare<int32_t>(ctx.r3.s32, 15, xer);
	// bne cr6,0x82f4da9c
	if (!cr6.eq) goto loc_82F4DA9C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f8faa8
	sub_82F8FAA8(ctx, base);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsub f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 - ctx.f12.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82f4daa0
	goto loc_82F4DAA0;
loc_82F4DA9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F4DAA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4c5f0
	sub_82F4C5F0(ctx, base);
	// b 0x82f4dae8
	goto loc_82F4DAE8;
loc_82F4DAAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4daec
	goto loc_82F4DAEC;
loc_82F4DAB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,438(r31)
	PPC_STORE_U8(r31.u32 + 438, r11.u8);
loc_82F4DAE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F4DAEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4DAF8"))) PPC_WEAK_FUNC(sub_82F4DAF8);
PPC_FUNC_IMPL(__imp__sub_82F4DAF8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4db68
	if (cr0.eq) goto loc_82F4DB68;
	// addi r28,r30,-128
	r28.s64 = r30.s64 + -128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f64a38
	sub_82F64A38(ctx, base);
	// lwz r11,-128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4db68
	if (cr0.eq) goto loc_82F4DB68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4dba0
	goto loc_82F4DBA0;
loc_82F4DB68:
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4db9c
	if (cr6.eq) goto loc_82F4DB9C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4dba0
	goto loc_82F4DBA0;
loc_82F4DB9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4DBA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F4DBA8"))) PPC_WEAK_FUNC(sub_82F4DBA8);
PPC_FUNC_IMPL(__imp__sub_82F4DBA8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r11,r11,3,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4dca4
	if (cr0.eq) goto loc_82F4DCA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f64a38
	sub_82F64A38(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4dc14
	if (cr0.eq) goto loc_82F4DC14;
loc_82F4DC0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4dd94
	goto loc_82F4DD94;
loc_82F4DC14:
	// cmpwi cr6,r29,35
	cr6.compare<int32_t>(r29.s32, 35, xer);
	// bne cr6,0x82f4dca4
	if (!cr6.eq) goto loc_82F4DCA4;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4dc70
	if (cr0.eq) goto loc_82F4DC70;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82fad8f8
	sub_82FAD8F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f4dc74
	goto loc_82F4DC74;
loc_82F4DC70:
	// li r31,0
	r31.s64 = 0;
loc_82F4DC74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4dc0c
	if (cr6.eq) goto loc_82F4DC0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4dc0c
	goto loc_82F4DC0C;
loc_82F4DCA4:
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4dd14
	if (cr6.eq) goto loc_82F4DD14;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f4dce0
	if (cr6.eq) goto loc_82F4DCE0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4dc0c
	if (!cr0.eq) goto loc_82F4DC0C;
loc_82F4DCE0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f4dd14
	if (cr6.eq) goto loc_82F4DD14;
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4dc0c
	if (!cr0.eq) goto loc_82F4DC0C;
loc_82F4DD14:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82f1c728
	sub_82F1C728(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4dc0c
	if (!cr0.eq) goto loc_82F4DC0C;
	// addi r29,r31,344
	r29.s64 = r31.s64 + 344;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc0e60
	sub_82FC0E60(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82f4dd54
	if (cr0.eq) goto loc_82F4DD54;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
	// b 0x82f4dc0c
	goto loc_82F4DC0C;
loc_82F4DD54:
	// lbz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 348);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,212
	ctx.r3.s64 = r11.s64 + 212;
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
	// beq 0x82f4dd90
	if (cr0.eq) goto loc_82F4DD90;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 596);
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// b 0x82f4dc0c
	goto loc_82F4DC0C;
loc_82F4DD90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4DD94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F4DDA0"))) PPC_WEAK_FUNC(sub_82F4DDA0);
PPC_FUNC_IMPL(__imp__sub_82F4DDA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4ddd4
	if (cr6.eq) goto loc_82F4DDD4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4DDD4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f63af8
	sub_82F63AF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4de4c
	if (cr0.eq) goto loc_82F4DE4C;
	// li r11,0
	r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// bl 0x82f4bda8
	sub_82F4BDA8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4de24
	if (cr0.eq) goto loc_82F4DE24;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,436(r31)
	PPC_STORE_U8(r31.u32 + 436, r11.u8);
loc_82F4DE24:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4de44
	if (cr6.eq) goto loc_82F4DE44;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4DE44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4de70
	goto loc_82F4DE70;
loc_82F4DE4C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4de6c
	if (cr6.eq) goto loc_82F4DE6C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4DE6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4DE70:
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

__attribute__((alias("__imp__sub_82F4DE88"))) PPC_WEAK_FUNC(sub_82F4DE88);
PPC_FUNC_IMPL(__imp__sub_82F4DE88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4dec8
	if (cr6.eq) goto loc_82F4DEC8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// b 0x82f4decc
	goto loc_82F4DECC;
loc_82F4DEC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F4DECC:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,224
	ctx.r6.s64 = r31.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f1a628
	sub_82F1A628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4df08
	if (cr6.eq) goto loc_82F4DF08;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4DF08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4DF18"))) PPC_WEAK_FUNC(sub_82F4DF18);
PPC_FUNC_IMPL(__imp__sub_82F4DF18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4DF20"))) PPC_WEAK_FUNC(sub_82F4DF20);
PPC_FUNC_IMPL(__imp__sub_82F4DF20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82f4df48
	if (!cr6.eq) goto loc_82F4DF48;
	// li r11,1
	r11.s64 = 1;
	// b 0x82f4df8c
	goto loc_82F4DF8C;
loc_82F4DF48:
	// ble cr6,0x82f4df90
	if (!cr6.gt) goto loc_82F4DF90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4df90
	if (cr0.eq) goto loc_82F4DF90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82f4df8c
	if (!cr0.eq) goto loc_82F4DF8C;
	// li r11,2
	r11.s64 = 2;
loc_82F4DF8C:
	// stb r11,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r11.u8);
loc_82F4DF90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,6836
	ctx.r5.s64 = ctx.r10.s64 + 6836;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,6824
	ctx.r5.s64 = r11.s64 + 6824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f4e01c
	if (cr6.lt) goto loc_82F4E01C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F4E01C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82f4e034
	if (!cr0.eq) goto loc_82F4E034;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4E034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82F4E050"))) PPC_WEAK_FUNC(sub_82F4E050);
PPC_FUNC_IMPL(__imp__sub_82F4E050) {
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
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4e084
	if (cr6.eq) goto loc_82F4E084;
	// lbz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 436);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,436(r11)
	PPC_STORE_U8(r11.u32 + 436, ctx.r10.u8);
loc_82F4E084:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4e0a0
	if (cr6.eq) goto loc_82F4E0A0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E0A0:
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4e0c0
	if (cr6.eq) goto loc_82F4E0C0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E0C0:
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,436(r31)
	PPC_STORE_U8(r31.u32 + 436, r11.u8);
	// beq cr6,0x82f4e0f8
	if (cr6.eq) goto loc_82F4E0F8;
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f4e050
	sub_82F4E050(ctx, base);
	// lbz r11,436(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 436);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,436(r30)
	PPC_STORE_U8(r30.u32 + 436, r11.u8);
loc_82F4E0F8:
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

__attribute__((alias("__imp__sub_82F4E110"))) PPC_WEAK_FUNC(sub_82F4E110);
PPC_FUNC_IMPL(__imp__sub_82F4E110) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// xori r28,r11,1
	r28.u64 = r11.u64 ^ 1;
	// bne 0x82f4e150
	if (!cr0.eq) goto loc_82F4E150;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4e1b4
	if (!cr0.eq) goto loc_82F4E1B4;
loc_82F4E150:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f4e1b4
	if (!cr6.gt) goto loc_82F4E1B4;
	// li r30,0
	r30.s64 = 0;
loc_82F4E164:
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lbz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bne 0x82f4e188
	if (!cr0.eq) goto loc_82F4E188;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82f4e18c
	if (cr0.eq) goto loc_82F4E18C;
loc_82F4E188:
	// li r11,1
	r11.s64 = 1;
loc_82F4E18C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, r11.u8);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f4e164
	if (cr6.lt) goto loc_82F4E164;
loc_82F4E1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4E1C0"))) PPC_WEAK_FUNC(sub_82F4E1C0);
PPC_FUNC_IMPL(__imp__sub_82F4E1C0) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f4e264
	if (cr0.eq) goto loc_82F4E264;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4e200
	if (cr6.eq) goto loc_82F4E200;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4e200
	if (!cr0.eq) goto loc_82F4E200;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82f4e218
	goto loc_82F4E218;
loc_82F4E200:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82F4E218:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bge cr6,0x82f4e24c
	if (!cr6.lt) goto loc_82F4E24C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E24C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E264:
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

__attribute__((alias("__imp__sub_82F4E280"))) PPC_WEAK_FUNC(sub_82F4E280);
PPC_FUNC_IMPL(__imp__sub_82F4E280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e2d8
	if (cr0.eq) goto loc_82F4E2D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwa r11,36(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 36));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82F4E2D8:
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

__attribute__((alias("__imp__sub_82F4E2F0"))) PPC_WEAK_FUNC(sub_82F4E2F0);
PPC_FUNC_IMPL(__imp__sub_82F4E2F0) {
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
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f4e434
	if (cr0.eq) goto loc_82F4E434;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f4e434
	if (cr6.lt) goto loc_82F4E434;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82f4e354
	if (!cr6.eq) goto loc_82F4E354;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82F4E354:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r27,r11,16384
	r27.s64 = r11.s64 + 16384;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82f64ac8
	sub_82F64AC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4e3d0
	if (cr0.eq) goto loc_82F4E3D0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E3D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4e3f8
	if (!cr6.eq) goto loc_82F4E3F8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4E3F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x82f4e414
	if (cr6.lt) goto loc_82F4E414;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
loc_82F4E414:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4e434
	if (cr6.eq) goto loc_82F4E434;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E434:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4E440"))) PPC_WEAK_FUNC(sub_82F4E440);
PPC_FUNC_IMPL(__imp__sub_82F4E440) {
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4e4d4
	if (cr0.eq) goto loc_82F4E4D4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f4e4d4
	if (cr6.lt) goto loc_82F4E4D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82f4e4cc
	if (cr6.eq) goto loc_82F4E4CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e4c8
	if (cr0.eq) goto loc_82F4E4C8;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82f4e4cc
	goto loc_82F4E4CC;
loc_82F4E4C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F4E4CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f4e050
	sub_82F4E050(ctx, base);
loc_82F4E4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4E4E0"))) PPC_WEAK_FUNC(sub_82F4E4E0);
PPC_FUNC_IMPL(__imp__sub_82F4E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e52c
	if (cr0.eq) goto loc_82F4E52C;
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// bl 0x82fc0e30
	sub_82FC0E30(ctx, base);
	// addic. r11,r3,-16383
	xer.ca = ctx.r3.u32 > 16382;
	r11.s64 = ctx.r3.s64 + -16383;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82f4e514
	if (!cr0.lt) goto loc_82F4E514;
	// li r11,0
	r11.s64 = 0;
loc_82F4E514:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82F4E52C:
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

__attribute__((alias("__imp__sub_82F4E540"))) PPC_WEAK_FUNC(sub_82F4E540);
PPC_FUNC_IMPL(__imp__sub_82F4E540) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4e5c8
	if (cr0.eq) goto loc_82F4E5C8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f4e5c8
	if (cr6.lt) goto loc_82F4E5C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16384
	ctx.r4.s64 = r11.s64 + 16384;
	// bl 0x82f4d710
	sub_82F4D710(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e5c8
	if (cr0.eq) goto loc_82F4E5C8;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
loc_82F4E5C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4E5D0"))) PPC_WEAK_FUNC(sub_82F4E5D0);
PPC_FUNC_IMPL(__imp__sub_82F4E5D0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4e660
	if (!cr6.eq) goto loc_82F4E660;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e638
	if (cr0.eq) goto loc_82F4E638;
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
	// bl 0x82fc2258
	sub_82FC2258(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f4e63c
	goto loc_82F4E63C;
loc_82F4E638:
	// li r31,0
	r31.s64 = 0;
loc_82F4E63C:
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4e65c
	if (cr6.eq) goto loc_82F4E65C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E65C:
	// stw r31,428(r30)
	PPC_STORE_U32(r30.u32 + 428, r31.u32);
loc_82F4E660:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * f0.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x82fc1e08
	sub_82FC1E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4E698"))) PPC_WEAK_FUNC(sub_82F4E698);
PPC_FUNC_IMPL(__imp__sub_82F4E698) {
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
	// bl 0x82ca7508
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4e730
	if (!cr6.eq) goto loc_82F4E730;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e708
	if (cr0.eq) goto loc_82F4E708;
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
	// bl 0x82fc2258
	sub_82FC2258(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f4e70c
	goto loc_82F4E70C;
loc_82F4E708:
	// li r31,0
	r31.s64 = 0;
loc_82F4E70C:
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4e72c
	if (cr6.eq) goto loc_82F4E72C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E72C:
	// stw r31,428(r30)
	PPC_STORE_U32(r30.u32 + 428, r31.u32);
loc_82F4E730:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f4,f28,f0
	ctx.f4.f64 = double(float(f28.f64 * f0.f64));
	// fmuls f3,f29,f0
	ctx.f3.f64 = double(float(f29.f64 * f0.f64));
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * f0.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x82fc1e58
	sub_82FC1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
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

__attribute__((alias("__imp__sub_82F4E770"))) PPC_WEAK_FUNC(sub_82F4E770);
PPC_FUNC_IMPL(__imp__sub_82F4E770) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4e7ec
	if (!cr6.eq) goto loc_82F4E7EC;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e7c4
	if (cr0.eq) goto loc_82F4E7C4;
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
	// bl 0x82fc2258
	sub_82FC2258(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f4e7c8
	goto loc_82F4E7C8;
loc_82F4E7C4:
	// li r30,0
	r30.s64 = 0;
loc_82F4E7C8:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4e7e8
	if (cr6.eq) goto loc_82F4E7E8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E7E8:
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
loc_82F4E7EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x82fc2358
	sub_82FC2358(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4E800"))) PPC_WEAK_FUNC(sub_82F4E800);
PPC_FUNC_IMPL(__imp__sub_82F4E800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4e828
	if (cr0.eq) goto loc_82F4E828;
	// lwz r3,428(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f4e828
	if (cr6.eq) goto loc_82F4E828;
	// bl 0x82fc1ec0
	sub_82FC1EC0(ctx, base);
loc_82F4E828:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4E838"))) PPC_WEAK_FUNC(sub_82F4E838);
PPC_FUNC_IMPL(__imp__sub_82F4E838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4e8a8
	if (cr0.eq) goto loc_82F4E8A8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f4e8a8
	if (cr6.lt) goto loc_82F4E8A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82f4e5d0
	sub_82F4E5D0(ctx, base);
loc_82F4E8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4E8B8"))) PPC_WEAK_FUNC(sub_82F4E8B8);
PPC_FUNC_IMPL(__imp__sub_82F4E8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4e970
	if (cr0.eq) goto loc_82F4E970;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82f4e970
	if (cr6.lt) goto loc_82F4E970;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82f4e698
	sub_82F4E698(ctx, base);
loc_82F4E970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4E988"))) PPC_WEAK_FUNC(sub_82F4E988);
PPC_FUNC_IMPL(__imp__sub_82F4E988) {
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
	// addi r11,r11,6852
	r11.s64 = r11.s64 + 6852;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82f4e9c8
	if (cr6.eq) goto loc_82F4E9C8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4E9C8:
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

__attribute__((alias("__imp__sub_82F4E9E0"))) PPC_WEAK_FUNC(sub_82F4E9E0);
PPC_FUNC_IMPL(__imp__sub_82F4E9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r9,320(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r9,324(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r9,328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82f4ea44
	if (cr6.eq) goto loc_82F4EA44;
	// lwz r10,340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82f4ea48
	if (!cr6.eq) goto loc_82F4EA48;
loc_82F4EA44:
	// li r11,1
	r11.s64 = 1;
loc_82F4EA48:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,56(r11)
	PPC_STORE_U8(r11.u32 + 56, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4EA60"))) PPC_WEAK_FUNC(sub_82F4EA60);
PPC_FUNC_IMPL(__imp__sub_82F4EA60) {
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
	// lbz r11,57(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 57);
	// b 0x82f4eac8
	goto loc_82F4EAC8;
loc_82F4EA80:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4ead0
	if (!cr0.eq) goto loc_82F4EAD0;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82F4EA90:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4eaec
	if (cr6.eq) goto loc_82F4EAEC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82f4eac0
	if (cr6.eq) goto loc_82F4EAC0;
	// lwz r30,20(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// b 0x82f4ea90
	goto loc_82F4EA90;
loc_82F4EAC0:
	// lbz r11,57(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 57);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82F4EAC8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4ea80
	if (cr0.eq) goto loc_82F4EA80;
loc_82F4EAD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F4EAD4:
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
loc_82F4EAEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4ead4
	goto loc_82F4EAD4;
}

__attribute__((alias("__imp__sub_82F4EAF8"))) PPC_WEAK_FUNC(sub_82F4EAF8);
PPC_FUNC_IMPL(__imp__sub_82F4EAF8) {
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
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4eb44
	if (cr0.eq) goto loc_82F4EB44;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f4eb34
	if (cr0.eq) goto loc_82F4EB34;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f4eba4
	if (cr6.lt) goto loc_82F4EBA4;
loc_82F4EB34:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4eb44
	if (cr0.eq) goto loc_82F4EB44;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4eba4
	if (cr6.eq) goto loc_82F4EBA4;
loc_82F4EB44:
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne cr6,0x82f4eb74
	if (!cr6.eq) goto loc_82F4EB74;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4eb68
	if (cr6.eq) goto loc_82F4EB68;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4EB68:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82f4eba4
	goto loc_82F4EBA4;
loc_82F4EB74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4eb8c
	if (cr6.eq) goto loc_82F4EB8C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x82f4eba4
	goto loc_82F4EBA4;
loc_82F4EB8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82F4EBA4:
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

__attribute__((alias("__imp__sub_82F4EBC0"))) PPC_WEAK_FUNC(sub_82F4EBC0);
PPC_FUNC_IMPL(__imp__sub_82F4EBC0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f4ec08
	if (!cr6.eq) goto loc_82F4EC08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4EC08:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4ec3c
	if (cr0.eq) goto loc_82F4EC3C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EC3C:
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

__attribute__((alias("__imp__sub_82F4EC50"))) PPC_WEAK_FUNC(sub_82F4EC50);
PPC_FUNC_IMPL(__imp__sub_82F4EC50) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f4ec98
	if (!cr6.eq) goto loc_82F4EC98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4EC98:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4eccc
	if (cr0.eq) goto loc_82F4ECCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4ECCC:
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

__attribute__((alias("__imp__sub_82F4ECE0"))) PPC_WEAK_FUNC(sub_82F4ECE0);
PPC_FUNC_IMPL(__imp__sub_82F4ECE0) {
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
	// bne cr6,0x82f4ed2c
	if (!cr6.eq) goto loc_82F4ED2C;
	// li r31,0
	r31.s64 = 0;
loc_82F4ED2C:
	// addic. r11,r31,16
	xer.ca = r31.u32 > 4294967279;
	r11.s64 = r31.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne 0x82f4ed3c
	if (!cr0.eq) goto loc_82F4ED3C;
	// li r11,0
	r11.s64 = 0;
loc_82F4ED3C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4ed90
	if (cr0.eq) goto loc_82F4ED90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4ed90
	if (cr0.eq) goto loc_82F4ED90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4ED90:
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

__attribute__((alias("__imp__sub_82F4EDA8"))) PPC_WEAK_FUNC(sub_82F4EDA8);
PPC_FUNC_IMPL(__imp__sub_82F4EDA8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4ede4
	if (cr6.eq) goto loc_82F4EDE4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EDE4:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4edf4
	if (cr0.eq) goto loc_82F4EDF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4EDF4:
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

__attribute__((alias("__imp__sub_82F4EE10"))) PPC_WEAK_FUNC(sub_82F4EE10);
PPC_FUNC_IMPL(__imp__sub_82F4EE10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4ee48
	if (cr6.eq) goto loc_82F4EE48;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EE48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4d278
	sub_82F4D278(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4eefc
	if (cr6.eq) goto loc_82F4EEFC;
	// clrlwi r28,r29,24
	r28.u64 = r29.u32 & 0xFF;
	// li r29,0
	r29.s64 = 0;
loc_82F4EE88:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// beq cr6,0x82f4eeb4
	if (cr6.eq) goto loc_82F4EEB4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4eee8
	if (!cr0.eq) goto loc_82F4EEE8;
loc_82F4EEB4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82f4eed8
	if (cr0.eq) goto loc_82F4EED8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4eee8
	goto loc_82F4EEE8;
loc_82F4EED8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EEE8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82f4ee88
	if (cr6.lt) goto loc_82F4EE88;
loc_82F4EEFC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F4EF20"))) PPC_WEAK_FUNC(sub_82F4EF20);
PPC_FUNC_IMPL(__imp__sub_82F4EF20) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f4efe8
	if (cr0.eq) goto loc_82F4EFE8;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f4ef70
	if (cr0.eq) goto loc_82F4EF70;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F4EF70:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4ef9c
	if (cr6.eq) goto loc_82F4EF9C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f4ef9c
	if (cr0.gt) goto loc_82F4EF9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4EF9C:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f4efbc
	if (cr6.eq) goto loc_82F4EFBC;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EFBC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4efdc
	if (cr6.eq) goto loc_82F4EFDC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4EFDC:
	// li r11,0
	r11.s64 = 0;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82F4EFE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4EFF0"))) PPC_WEAK_FUNC(sub_82F4EFF0);
PPC_FUNC_IMPL(__imp__sub_82F4EFF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82f4d4f0
	sub_82F4D4F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f4f044
	if (!cr0.eq) goto loc_82F4F044;
loc_82F4F03C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4f2f0
	goto loc_82F4F2F0;
loc_82F4F044:
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// bne 0x82f4f108
	if (!cr0.eq) goto loc_82F4F108;
	// b 0x82f4f0fc
	goto loc_82F4F0FC;
loc_82F4F054:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f07c
	if (!cr0.eq) goto loc_82F4F07C;
	// lbz r11,98(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 98);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f07c
	if (cr0.eq) goto loc_82F4F07C;
	// stb r25,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r25.u8);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
loc_82F4F07C:
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f0bc
	if (!cr0.eq) goto loc_82F4F0BC;
	// lbz r11,99(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 99);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f0bc
	if (cr0.eq) goto loc_82F4F0BC;
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,32(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,40(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_82F4F0BC:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f0d8
	if (!cr6.eq) goto loc_82F4F0D8;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4f0d8
	if (cr6.eq) goto loc_82F4F0D8;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82F4F0D8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82f4d4f0
	sub_82F4D4F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f4f03c
	if (cr0.eq) goto loc_82F4F03C;
loc_82F4F0FC:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82f4f054
	if (cr6.eq) goto loc_82F4F054;
loc_82F4F108:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f164
	if (!cr0.eq) goto loc_82F4F164;
	// lbz r11,99(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 99);
	// stb r11,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r11.u8);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,32(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,40(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_82F4F164:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f184
	if (!cr0.eq) goto loc_82F4F184;
	// lbz r11,98(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 98);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stb r11,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r11.u8);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
loc_82F4F184:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f198
	if (!cr6.eq) goto loc_82F4F198;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82F4F198:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f4f2b4
	if (!cr6.eq) goto loc_82F4F2B4;
	// lbz r10,83(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4f1b8
	if (!cr0.eq) goto loc_82F4F1B8;
	// rlwinm. r10,r24,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f4f2b4
	if (!cr0.eq) goto loc_82F4F2B4;
loc_82F4F1B8:
	// lbz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4f1cc
	if (!cr0.eq) goto loc_82F4F1CC;
	// rlwinm. r10,r24,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f4f2b4
	if (!cr0.eq) goto loc_82F4F2B4;
loc_82F4F1CC:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f4f2ec
	if (!cr6.eq) goto loc_82F4F2EC;
	// rlwinm. r10,r24,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f4f2ec
	if (cr0.eq) goto loc_82F4F2EC;
	// b 0x82f4f2b4
	goto loc_82F4F2B4;
loc_82F4F1E4:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f208
	if (cr0.eq) goto loc_82F4F208;
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f208
	if (cr0.eq) goto loc_82F4F208;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f2bc
	if (!cr6.eq) goto loc_82F4F2BC;
loc_82F4F208:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82f4d4f0
	sub_82F4D4F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f4f2bc
	if (cr0.eq) goto loc_82F4F2BC;
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f26c
	if (!cr0.eq) goto loc_82F4F26C;
	// lbz r11,99(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 99);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f26c
	if (cr0.eq) goto loc_82F4F26C;
	// ld r11,16(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 16);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,24(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 24);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,32(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 32);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,40(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 40);
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_82F4F26C:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f294
	if (!cr0.eq) goto loc_82F4F294;
	// lbz r11,98(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 98);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4f294
	if (cr0.eq) goto loc_82F4F294;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// stb r25,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r25.u8);
loc_82F4F294:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f2b0
	if (!cr6.eq) goto loc_82F4F2B0;
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4f2b0
	if (cr6.eq) goto loc_82F4F2B0;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82F4F2B0:
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
loc_82F4F2B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f1e4
	if (!cr6.eq) goto loc_82F4F1E4;
loc_82F4F2BC:
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f2c8
	if (cr0.eq) goto loc_82F4F2C8;
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
loc_82F4F2C8:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f2d4
	if (cr0.eq) goto loc_82F4F2D4;
	// stb r25,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r25.u8);
loc_82F4F2D4:
	// rlwinm. r11,r24,0,28,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f2ec
	if (cr0.eq) goto loc_82F4F2EC;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f4f2ec
	if (!cr6.eq) goto loc_82F4F2EC;
	// stw r25,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r25.u32);
loc_82F4F2EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F4F2F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82F4F2F8"))) PPC_WEAK_FUNC(sub_82F4F2F8);
PPC_FUNC_IMPL(__imp__sub_82F4F2F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,420(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4f32c
	if (cr6.eq) goto loc_82F4F32C;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4f32c
	if (!cr0.eq) goto loc_82F4F32C;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82f4f340
	goto loc_82F4F340;
loc_82F4F32C:
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4F340:
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82f4f350
	if (!cr6.lt) goto loc_82F4F350;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F4F350:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// blt cr6,0x82f4f360
	if (cr6.lt) goto loc_82F4F360;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82F4F360:
	// lwz r11,204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82f4f398
	if (!cr6.lt) goto loc_82F4F398;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x82f4f390
	if (!cr6.gt) goto loc_82F4F390;
loc_82F4F378:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4d448
	sub_82F4D448(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bgt cr6,0x82f4f378
	if (cr6.gt) goto loc_82F4F378;
loc_82F4F390:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82f4f3c8
	goto loc_82F4F3C8;
loc_82F4F398:
	// ble cr6,0x82f4f404
	if (!cr6.gt) goto loc_82F4F404;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// b 0x82f4f3bc
	goto loc_82F4F3BC;
loc_82F4F3A4:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82F4F3BC:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// blt cr6,0x82f4f3a4
	if (cr6.lt) goto loc_82F4F3A4;
loc_82F4F3C8:
	// stw r31,204(r29)
	PPC_STORE_U32(r29.u32 + 204, r31.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,392
	ctx.r3.s64 = ctx.r3.s64 + 392;
	// bl 0x82f32400
	sub_82F32400(ctx, base);
	// addi r3,r29,188
	ctx.r3.s64 = r29.s64 + 188;
	// bl 0x82fc1d40
	sub_82FC1D40(ctx, base);
loc_82F4F404:
	// li r11,1
	r11.s64 = 1;
	// stw r11,200(r29)
	PPC_STORE_U32(r29.u32 + 200, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4F418"))) PPC_WEAK_FUNC(sub_82F4F418);
PPC_FUNC_IMPL(__imp__sub_82F4F418) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,-1
	r11.s64 = -1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f480
	if (cr0.eq) goto loc_82F4F480;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r11,236(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f4f498
	goto loc_82F4F498;
loc_82F4F480:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,3140
	ctx.r4.s64 = r11.s64 + 3140;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82f4ec50
	sub_82F4EC50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4F498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F4F4A0"))) PPC_WEAK_FUNC(sub_82F4F4A0);
PPC_FUNC_IMPL(__imp__sub_82F4F4A0) {
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
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4f4dc
	if (!cr0.eq) goto loc_82F4F4DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f75c
	if (cr0.eq) goto loc_82F4F75C;
loc_82F4F4DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4f528
	if (!cr0.eq) goto loc_82F4F528;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f4f528
	if (!cr6.lt) goto loc_82F4F528;
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f4f75c
	if (cr6.lt) goto loc_82F4F75C;
loc_82F4F528:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,28(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f97968
	sub_82F97968(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lvx128 v63,r0,r29
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v12,v63,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,5312
	ctx.r9.s64 = ctx.r9.s64 + 5312;
	// vspltw128 v9,v63,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// lvx128 v62,r29,r11
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// lvx128 v59,r0,r10
	_mm_store_si128((__m128i*)v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v10,v61,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v59.f32)));
	// vspltw128 v11,v62,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// lvx128 v13,r10,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v7,v62,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v8,v60,v59
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v59.f32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// vmaddfp v12,v12,v13,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v13,v11,v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v12,v9,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v7,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,8(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// ld r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, r11.u64);
	// std r10,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r10.u64);
	// std r9,24(r5)
	PPC_STORE_U64(ctx.r5.u32 + 24, ctx.r9.u64);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f97e08
	sub_82F97E08(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r29,432(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// beq cr6,0x82f4f6b4
	if (cr6.eq) goto loc_82F4F6B4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f6a8
	if (cr0.eq) goto loc_82F4F6A8;
	// lbz r11,436(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 436);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4f6a8
	if (!cr0.eq) goto loc_82F4F6A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// bl 0x82fb6748
	sub_82FB6748(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x82f4f6b4
	goto loc_82F4F6B4;
loc_82F4F6A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4e050
	sub_82F4E050(ctx, base);
loc_82F4F6B4:
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f4f6f0
	if (cr6.eq) goto loc_82F4F6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f602f0
	sub_82F602F0(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fc2460
	sub_82FC2460(ctx, base);
loc_82F4F6F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// bl 0x82fc1190
	sub_82FC1190(ctx, base);
	// stw r27,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f75c
	if (cr0.eq) goto loc_82F4F75C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fb6868
	sub_82FB6868(ctx, base);
loc_82F4F75C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4F768"))) PPC_WEAK_FUNC(sub_82F4F768);
PPC_FUNC_IMPL(__imp__sub_82F4F768) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// lwz r4,136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f30200
	sub_82F30200(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4f7bc
	if (!cr6.eq) goto loc_82F4F7BC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lhz r5,78(r29)
	ctx.r5.u64 = PPC_LOAD_U16(r29.u32 + 78);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,6860
	ctx.r4.s64 = r11.s64 + 6860;
	// bl 0x82f4ebc0
	sub_82F4EBC0(ctx, base);
	// b 0x82f4f8a8
	goto loc_82F4F8A8;
loc_82F4F7BC:
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4f80c
	if (cr6.eq) goto loc_82F4F80C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4F80C:
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82fc1b10
	sub_82FC1B10(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4f890
	if (cr6.eq) goto loc_82F4F890;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f4f85c
	if (cr6.lt) goto loc_82F4F85C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f4f860
	if (!cr6.gt) goto loc_82F4F860;
loc_82F4F85C:
	// li r11,0
	r11.s64 = 0;
loc_82F4F860:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4f890
	if (cr0.eq) goto loc_82F4F890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f3a798
	sub_82F3A798(ctx, base);
loc_82F4F890:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4F8A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4F8B0"))) PPC_WEAK_FUNC(sub_82F4F8B0);
PPC_FUNC_IMPL(__imp__sub_82F4F8B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f62948
	sub_82F62948(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4fb38
	if (!cr0.eq) goto loc_82F4FB38;
	// cmpwi cr6,r30,33
	cr6.compare<int32_t>(r30.s32, 33, xer);
	// bgt cr6,0x82f4f9cc
	if (cr6.gt) goto loc_82F4F9CC;
	// beq cr6,0x82f4f9ac
	if (cr6.eq) goto loc_82F4F9AC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// beq cr6,0x82f4f994
	if (cr6.eq) goto loc_82F4F994;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// beq cr6,0x82f4f96c
	if (cr6.eq) goto loc_82F4F96C;
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// beq cr6,0x82f4f91c
	if (cr6.eq) goto loc_82F4F91C;
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(r30.s32, 28, xer);
	// bne cr6,0x82f4fb0c
	if (!cr6.eq) goto loc_82F4FB0C;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F4F908:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82F4F90C:
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r31,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r31.u8);
	// b 0x82f4fb34
	goto loc_82F4FB34;
loc_82F4F91C:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4f93c
	if (cr6.eq) goto loc_82F4F93C;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4f93c
	if (!cr0.eq) goto loc_82F4F93C;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82f4f950
	goto loc_82F4F950;
loc_82F4F93C:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4F950:
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F4F95C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f4fb38
	goto loc_82F4FB38;
loc_82F4F96C:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f4f95c
	goto loc_82F4F95C;
loc_82F4F994:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f4f95c
	goto loc_82F4F95C;
loc_82F4F9AC:
	// lbz r11,437(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 437);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4fb2c
	if (cr0.eq) goto loc_82F4FB2C;
loc_82F4F9BC:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82f4f90c
	goto loc_82F4F90C;
loc_82F4F9CC:
	// cmpwi cr6,r30,34
	cr6.compare<int32_t>(r30.s32, 34, xer);
	// beq cr6,0x82f4fb14
	if (cr6.eq) goto loc_82F4FB14;
	// cmpwi cr6,r30,36
	cr6.compare<int32_t>(r30.s32, 36, xer);
	// beq cr6,0x82f4fa10
	if (cr6.eq) goto loc_82F4FA10;
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// bne cr6,0x82f4fb0c
	if (!cr6.eq) goto loc_82F4FB0C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f4fb0c
	if (!cr6.eq) goto loc_82F4FB0C;
	// lbz r31,158(r31)
	r31.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// b 0x82f4f908
	goto loc_82F4F908;
loc_82F4FA10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,124(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82f4fb0c
	if (cr6.lt) goto loc_82F4FB0C;
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4fb28
	if (cr6.eq) goto loc_82F4FB28;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f4fa8c
	if (cr0.eq) goto loc_82F4FA8C;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f910a8
	sub_82F910A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f4fa90
	goto loc_82F4FA90;
loc_82F4FA8C:
	// li r30,0
	r30.s64 = 0;
loc_82F4FA90:
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// bl 0x82f8f198
	sub_82F8F198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f4fb38
	if (cr6.eq) goto loc_82F4FB38;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f4fb38
	goto loc_82F4FB38;
loc_82F4FB0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4fb3c
	goto loc_82F4FB3C;
loc_82F4FB14:
	// lbz r11,438(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 438);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f4fb28
	if (cr0.eq) goto loc_82F4FB28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82f4f9bc
	goto loc_82F4F9BC;
loc_82F4FB28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82F4FB2C:
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_82F4FB34:
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_82F4FB38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F4FB3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4FB48"))) PPC_WEAK_FUNC(sub_82F4FB48);
PPC_FUNC_IMPL(__imp__sub_82F4FB48) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82f4fbe8
	if (!cr6.eq) goto loc_82F4FBE8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4fbd8
	if (!cr0.eq) goto loc_82F4FBD8;
	// bne cr6,0x82f4fd5c
	if (!cr6.eq) goto loc_82F4FD5C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82f4fd58
	goto loc_82F4FD58;
loc_82F4FBD8:
	// bne cr6,0x82f4fc08
	if (!cr6.eq) goto loc_82F4FC08;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f4fc08
	goto loc_82F4FC08;
loc_82F4FBE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82F4FC08:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82f4fd04
	if (cr6.eq) goto loc_82F4FD04;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4fc34
	if (cr6.eq) goto loc_82F4FC34;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82f4fc34
	if (!cr0.eq) goto loc_82F4FC34;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82f4fc48
	goto loc_82F4FC48;
loc_82F4FC34:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4FC48:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82f4fd04
	if (!cr6.lt) goto loc_82F4FD04;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// bl 0x82f324d8
	sub_82F324D8(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f4fce8
	if (cr6.eq) goto loc_82F4FCE8;
	// li r29,0
	r29.s64 = 0;
loc_82F4FC98:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f4fcd4
	if (cr0.eq) goto loc_82F4FCD4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4FCD4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82f4fc98
	if (cr6.lt) goto loc_82F4FC98;
loc_82F4FCE8:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r10.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x82f3a380
	sub_82F3A380(ctx, base);
	// b 0x82f4fd5c
	goto loc_82F4FD5C;
loc_82F4FD04:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r10,6912
	ctx.r4.s64 = ctx.r10.s64 + 6912;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82f4ebc0
	sub_82F4EBC0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f4fd5c
	if (!cr6.eq) goto loc_82F4FD5C;
loc_82F4FD58:
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F4FD5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F4FD68"))) PPC_WEAK_FUNC(sub_82F4FD68);
PPC_FUNC_IMPL(__imp__sub_82F4FD68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r31.u16);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r31.u8);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r31.u8);
	// bl 0x82f63998
	sub_82F63998(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r31.u16);
	// addi r3,r10,392
	ctx.r3.s64 = ctx.r10.s64 + 392;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r31.u8);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r31,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, r31.u8);
	// addi r27,r11,5
	r27.s64 = r11.s64 + 5;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82f4fdf0
	if (cr0.eq) goto loc_82F4FDF0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F4FDF0:
	// lwz r26,8(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f4fe1c
	if (cr6.eq) goto loc_82F4FE1C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bgt 0x82f4fe1c
	if (cr0.gt) goto loc_82F4FE1C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F4FE1C:
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f4fe40
	if (cr6.eq) goto loc_82F4FE40;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4FE40:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// bl 0x82f32400
	sub_82F32400(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F4FE80"))) PPC_WEAK_FUNC(sub_82F4FE80);
PPC_FUNC_IMPL(__imp__sub_82F4FE80) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4febc
	if (cr6.eq) goto loc_82F4FEBC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// b 0x82f4fec0
	goto loc_82F4FEC0;
loc_82F4FEBC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F4FEC0:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r6,r31,224
	ctx.r6.s64 = r31.s64 + 224;
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// bl 0x82f17138
	sub_82F17138(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f4ff18
	if (cr6.eq) goto loc_82F4FF18;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F4FF18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F4FF28"))) PPC_WEAK_FUNC(sub_82F4FF28);
PPC_FUNC_IMPL(__imp__sub_82F4FF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f4ff38
	if (cr6.eq) goto loc_82F4FF38;
	// b 0x82f4ea60
	sub_82F4EA60(ctx, base);
	return;
loc_82F4FF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FF40"))) PPC_WEAK_FUNC(sub_82F4FF40);
PPC_FUNC_IMPL(__imp__sub_82F4FF40) {
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
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4ff68
	if (!cr0.eq) goto loc_82F4FF68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f4ffbc
	goto loc_82F4FFBC;
loc_82F4FF68:
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f4ffb0
	if (!cr0.eq) goto loc_82F4FFB0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f4ff88
	if (cr6.eq) goto loc_82F4FF88;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f4ff8c
	goto loc_82F4FF8C;
loc_82F4FF88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F4FF8C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f4ffa4
	if (!cr0.eq) goto loc_82F4FFA4;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble cr6,0x82f4ffa8
	if (!cr6.gt) goto loc_82F4FFA8;
loc_82F4FFA4:
	// li r11,1
	r11.s64 = 1;
loc_82F4FFA8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x82f4ffbc
	goto loc_82F4FFBC;
loc_82F4FFB0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F4FFBC:
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

__attribute__((alias("__imp__sub_82F4FFD0"))) PPC_WEAK_FUNC(sub_82F4FFD0);
PPC_FUNC_IMPL(__imp__sub_82F4FFD0) {
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
	// lbz r11,437(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 437);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f50000
	if (cr0.eq) goto loc_82F50000;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82f50000
	if (cr6.eq) goto loc_82F50000;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82f50018
	goto loc_82F50018;
loc_82F50000:
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f50014
	if (cr6.eq) goto loc_82F50014;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f50018
	goto loc_82F50018;
loc_82F50014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F50018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50028"))) PPC_WEAK_FUNC(sub_82F50028);
PPC_FUNC_IMPL(__imp__sub_82F50028) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f50058
	if (cr6.eq) goto loc_82F50058;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f5005c
	goto loc_82F5005C;
loc_82F50058:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F5005C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f500b4
	if (cr0.eq) goto loc_82F500B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,526(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 526);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82f500b4
	if (cr6.eq) goto loc_82F500B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r30.u16);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r30.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F500B4:
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

__attribute__((alias("__imp__sub_82F500D0"))) PPC_WEAK_FUNC(sub_82F500D0);
PPC_FUNC_IMPL(__imp__sub_82F500D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f50100
	if (cr6.eq) goto loc_82F50100;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f50104
	goto loc_82F50104;
loc_82F50100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F50104:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5017c
	if (cr0.eq) goto loc_82F5017C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,512(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 512);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f5017c
	if (cr0.eq) goto loc_82F5017C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,526(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 526);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82f5017c
	if (cr6.eq) goto loc_82F5017C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r30.u16);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r30.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5017C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82F50198"))) PPC_WEAK_FUNC(sub_82F50198);
PPC_FUNC_IMPL(__imp__sub_82F50198) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f501c4
	if (cr6.eq) goto loc_82F501C4;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f501c8
	goto loc_82F501C8;
loc_82F501C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F501C8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f50244
	if (cr0.eq) goto loc_82F50244;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r5,r11,444
	ctx.r5.s64 = r11.s64 + 444;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f50260
	if (cr0.eq) goto loc_82F50260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f50260
	if (!cr0.eq) goto loc_82F50260;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50244
	if (cr6.lt) goto loc_82F50244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F50248:
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
loc_82F50260:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50274
	if (cr6.lt) goto loc_82F50274;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50274:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f50248
	goto loc_82F50248;
}

__attribute__((alias("__imp__sub_82F50280"))) PPC_WEAK_FUNC(sub_82F50280);
PPC_FUNC_IMPL(__imp__sub_82F50280) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f503ac
	if (cr0.eq) goto loc_82F503AC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f502c4
	if (!cr6.lt) goto loc_82F502C4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,6952
	ctx.r4.s64 = r11.s64 + 6952;
	// bl 0x82f4ece0
	sub_82F4ECE0(ctx, base);
	// b 0x82f503ac
	goto loc_82F503AC;
loc_82F502C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82f50360
	if (!cr6.eq) goto loc_82F50360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f50350
	if (!cr0.eq) goto loc_82F50350;
	// bne cr6,0x82f503ac
	if (!cr6.eq) goto loc_82F503AC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f503ac
	goto loc_82F503AC;
loc_82F50350:
	// bne cr6,0x82f5037c
	if (!cr6.eq) goto loc_82F5037C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f5037c
	goto loc_82F5037C;
loc_82F50360:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_82F5037C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F503AC:
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

__attribute__((alias("__imp__sub_82F503C8"))) PPC_WEAK_FUNC(sub_82F503C8);
PPC_FUNC_IMPL(__imp__sub_82F503C8) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f504f4
	if (cr0.eq) goto loc_82F504F4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f5040c
	if (!cr6.lt) goto loc_82F5040C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,6996
	ctx.r4.s64 = r11.s64 + 6996;
	// bl 0x82f4ece0
	sub_82F4ECE0(ctx, base);
	// b 0x82f504f4
	goto loc_82F504F4;
loc_82F5040C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82f504a8
	if (!cr6.eq) goto loc_82F504A8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f50498
	if (!cr0.eq) goto loc_82F50498;
	// bne cr6,0x82f504f4
	if (!cr6.eq) goto loc_82F504F4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f504f4
	goto loc_82F504F4;
loc_82F50498:
	// bne cr6,0x82f504c4
	if (!cr6.eq) goto loc_82F504C4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f504c4
	goto loc_82F504C4;
loc_82F504A8:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_82F504C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F504F4:
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

__attribute__((alias("__imp__sub_82F50510"))) PPC_WEAK_FUNC(sub_82F50510);
PPC_FUNC_IMPL(__imp__sub_82F50510) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f50570
	if (cr0.eq) goto loc_82F50570;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(r11.s32, 16384, xer);
	// bge cr6,0x82f5056c
	if (!cr6.lt) goto loc_82F5056C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82f06d80
	sub_82F06D80(ctx, base);
	// b 0x82f50570
	goto loc_82F50570;
loc_82F5056C:
	// bl 0x82f60890
	sub_82F60890(ctx, base);
loc_82F50570:
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

__attribute__((alias("__imp__sub_82F50588"))) PPC_WEAK_FUNC(sub_82F50588);
PPC_FUNC_IMPL(__imp__sub_82F50588) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f50850
	if (cr0.eq) goto loc_82F50850;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f505d0
	if (!cr6.gt) goto loc_82F505D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// b 0x82f505d4
	goto loc_82F505D4;
loc_82F505D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F505D4:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f505f0
	if (cr6.eq) goto loc_82F505F0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f505f4
	goto loc_82F505F4;
loc_82F505F0:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82F505F4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
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
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f50698
	if (cr6.eq) goto loc_82F50698;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82f50664
	if (cr6.eq) goto loc_82F50664;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
loc_82F50664:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
loc_82F50698:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f506d0
	if (cr0.eq) goto loc_82F506D0;
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82f506d4
	goto loc_82F506D4;
loc_82F506D0:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82F506D4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r29,3
	r29.s64 = 3;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r31,r27,16
	r31.s64 = r27.s64 + 16;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r30,r11,120
	r30.s64 = r11.s64 + 120;
	// lfd f31,-8776(r10)
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8776);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r5,r11,456
	ctx.r5.s64 = r11.s64 + 456;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f5073c
	if (cr6.lt) goto loc_82F5073C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F5073C:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,460
	ctx.r5.s64 = r11.s64 + 460;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f5078c
	if (cr6.lt) goto loc_82F5078C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F5078C:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,464
	ctx.r5.s64 = r11.s64 + 464;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f507dc
	if (cr6.lt) goto loc_82F507DC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F507DC:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,468
	ctx.r5.s64 = r11.s64 + 468;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f5082c
	if (cr6.lt) goto loc_82F5082C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F5082C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F50850:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F50860"))) PPC_WEAK_FUNC(sub_82F50860);
PPC_FUNC_IMPL(__imp__sub_82F50860) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82f50a78
	if (cr0.eq) goto loc_82F50A78;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f50a78
	if (cr6.lt) goto loc_82F50A78;
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f50a78
	if (cr0.eq) goto loc_82F50A78;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,448
	ctx.r5.s64 = r11.s64 + 448;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,452
	ctx.r5.s64 = r11.s64 + 452;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82f50a50
	if (!cr6.eq) goto loc_82F50A50;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82f50a50
	if (!cr6.eq) goto loc_82F50A50;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r29,3
	r29.s64 = 3;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfd f31,-8776(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -8776);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,448
	ctx.r5.s64 = r11.s64 + 448;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f509f8
	if (cr6.lt) goto loc_82F509F8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F509F8:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,452
	ctx.r5.s64 = r11.s64 + 452;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50a48
	if (cr6.lt) goto loc_82F50A48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50A48:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// b 0x82f50a54
	goto loc_82F50A54;
loc_82F50A50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82F50A54:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50a64
	if (cr6.lt) goto loc_82F50A64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50A64:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50a78
	if (cr6.lt) goto loc_82F50A78;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50A78:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F50A88"))) PPC_WEAK_FUNC(sub_82F50A88);
PPC_FUNC_IMPL(__imp__sub_82F50A88) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82f50ca0
	if (cr0.eq) goto loc_82F50CA0;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f50ca0
	if (cr6.lt) goto loc_82F50CA0;
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f50ca0
	if (cr0.eq) goto loc_82F50CA0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,448
	ctx.r5.s64 = r11.s64 + 448;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,452
	ctx.r5.s64 = r11.s64 + 452;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82f50c78
	if (!cr6.eq) goto loc_82F50C78;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82f50c78
	if (!cr6.eq) goto loc_82F50C78;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r29,3
	r29.s64 = 3;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfd f31,-8776(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -8776);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,448
	ctx.r5.s64 = r11.s64 + 448;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50c20
	if (cr6.lt) goto loc_82F50C20;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50C20:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,452
	ctx.r5.s64 = r11.s64 + 452;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50c70
	if (cr6.lt) goto loc_82F50C70;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50C70:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// b 0x82f50c7c
	goto loc_82F50C7C;
loc_82F50C78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82F50C7C:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50c8c
	if (cr6.lt) goto loc_82F50C8C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50C8C:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50ca0
	if (cr6.lt) goto loc_82F50CA0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50CA0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F50CB0"))) PPC_WEAK_FUNC(sub_82F50CB0);
PPC_FUNC_IMPL(__imp__sub_82F50CB0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82f51084
	if (cr0.eq) goto loc_82F51084;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r27,2
	r27.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// stb r27,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r27.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r30.u8);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82f50d34
	if (!cr6.eq) goto loc_82F50D34;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82f50d38
	if (cr6.eq) goto loc_82F50D38;
loc_82F50D34:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82F50D38:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f51084
	if (!cr0.eq) goto loc_82F51084;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f50e98
	if (cr6.lt) goto loc_82F50E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// blt cr6,0x82f50dc8
	if (cr6.lt) goto loc_82F50DC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f50dcc
	goto loc_82F50DCC;
loc_82F50DC8:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82F50DCC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f60288
	sub_82F60288(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lbz r11,112(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f50e24
	if (cr0.eq) goto loc_82F50E24;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82F50E00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f51074
	goto loc_82F51074;
loc_82F50E24:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f50e60
	if (cr6.gt) goto loc_82F50E60;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f50e60
	if (cr6.lt) goto loc_82F50E60;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f50e60
	if (cr6.gt) goto loc_82F50E60;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f50e64
	if (!cr6.lt) goto loc_82F50E64;
loc_82F50E60:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82F50E64:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f51070
	if (cr0.eq) goto loc_82F51070;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f50e90
	if (!cr0.eq) goto loc_82F50E90;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// b 0x82f51084
	goto loc_82F51084;
loc_82F50E90:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82f50e00
	goto loc_82F50E00;
loc_82F50E98:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f51084
	if (!cr6.eq) goto loc_82F51084;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82f50ee4
	if (!cr6.eq) goto loc_82F50EE4;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f50edc
	if (cr0.eq) goto loc_82F50EDC;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f50f88
	goto loc_82F50F88;
loc_82F50EDC:
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x82f50f88
	goto loc_82F50F88;
loc_82F50EE4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f16048
	sub_82F16048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f50f4c
	if (cr0.eq) goto loc_82F50F4C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f50f48
	if (cr0.eq) goto loc_82F50F48;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f50f4c
	goto loc_82F50F4C;
loc_82F50F48:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82F50F4C:
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f50f60
	if (cr6.lt) goto loc_82F50F60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F50F60:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f50f88
	if (!cr6.eq) goto loc_82F50F88;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F50F88:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f51084
	if (cr6.eq) goto loc_82F51084;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82f50fd8
	if (!cr6.eq) goto loc_82F50FD8;
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82f50fdc
	if (cr6.eq) goto loc_82F50FDC;
loc_82F50FD8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82F50FDC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f51084
	if (!cr0.eq) goto loc_82F51084;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f51070
	if (cr6.lt) goto loc_82F51070;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f51070
	if (cr6.lt) goto loc_82F51070;
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f51070
	if (cr6.lt) goto loc_82F51070;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f51070
	if (cr6.lt) goto loc_82F51070;
	// li r30,1
	r30.s64 = 1;
loc_82F51070:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82F51074:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
loc_82F51084:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F51090"))) PPC_WEAK_FUNC(sub_82F51090);
PPC_FUNC_IMPL(__imp__sub_82F51090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82ca2be0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x82fc2060
	sub_82FC2060(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F51108"))) PPC_WEAK_FUNC(sub_82F51108);
PPC_FUNC_IMPL(__imp__sub_82F51108) {
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
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x82fc21d0
	sub_82FC21D0(ctx, base);
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

__attribute__((alias("__imp__sub_82F51150"))) PPC_WEAK_FUNC(sub_82F51150);
PPC_FUNC_IMPL(__imp__sub_82F51150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * f0.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x82fc1dc8
	sub_82FC1DC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
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

__attribute__((alias("__imp__sub_82F511B0"))) PPC_WEAK_FUNC(sub_82F511B0);
PPC_FUNC_IMPL(__imp__sub_82F511B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f51290
	if (cr0.eq) goto loc_82F51290;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f5127c
	if (!cr6.gt) goto loc_82F5127C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r30,r10,65280
	r30.u64 = ctx.r10.u64 | 4278190080;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f5126c
	if (!cr6.gt) goto loc_82F5126C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r11,r30,8
	r11.u64 = r30.u32 & 0xFFFFFF;
	// lfs f0,7040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7040);
	f0.f64 = double(temp.f32);
	// lfs f13,2784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2784);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f5124c
	if (cr6.lt) goto loc_82F5124C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F5124C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | r11.u64;
loc_82F5126C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f51108
	sub_82F51108(ctx, base);
	// b 0x82f51290
	goto loc_82F51290;
loc_82F5127C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x82fc1db8
	sub_82FC1DB8(ctx, base);
loc_82F51290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F51298"))) PPC_WEAK_FUNC(sub_82F51298);
PPC_FUNC_IMPL(__imp__sub_82F51298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2bcc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca74fc
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f51b14
	if (!cr6.gt) goto loc_82F51B14;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f51aec
	if (!cr6.gt) goto loc_82F51AEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f51aec
	if (!cr6.eq) goto loc_82F51AEC;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82f51aec
	if (!cr6.gt) goto loc_82F51AEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f51aec
	if (!cr6.eq) goto loc_82F51AEC;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// mr r22,r31
	r22.u64 = r31.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82f51aec
	if (!cr6.gt) goto loc_82F51AEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f51aec
	if (!cr6.eq) goto loc_82F51AEC;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// mr r23,r31
	r23.u64 = r31.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82f51aec
	if (!cr6.gt) goto loc_82F51AEC;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f51aec
	if (!cr6.gt) goto loc_82F51AEC;
	// lwz r10,56(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f51aec
	if (!cr6.eq) goto loc_82F51AEC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f51aec
	if (!cr6.eq) goto loc_82F51AEC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r11,120
	r29.s64 = r11.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// lfs f29,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f29.f64 = double(temp.f32);
	// bne cr6,0x82f5144c
	if (!cr6.eq) goto loc_82F5144C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82fab290
	sub_82FAB290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// b 0x82f517e4
	goto loc_82F517E4;
loc_82F5144C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,7076
	ctx.r5.s64 = r11.s64 + 7076;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f514c4
	if (cr0.eq) goto loc_82F514C4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,7072
	ctx.r10.s64 = r11.s64 + 7072;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F51494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f514b8
	if (cr0.eq) goto loc_82F514B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f51494
	if (cr6.eq) goto loc_82F51494;
loc_82F514B8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82f514c8
	if (cr0.eq) goto loc_82F514C8;
loc_82F514C4:
	// li r11,0
	r11.s64 = 0;
loc_82F514C8:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// beq 0x82f514fc
	if (cr0.eq) goto loc_82F514FC;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f514fc
	if (!cr6.eq) goto loc_82F514FC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F514FC:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82f51694
	if (cr0.eq) goto loc_82F51694;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f26,f29
	ctx.fpscr.disableFlushMode();
	f26.f64 = f29.f64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// fmr f27,f29
	f27.f64 = f29.f64;
	// fmr f28,f29
	f28.f64 = f29.f64;
	// addi r5,r10,-9824
	ctx.r5.s64 = ctx.r10.s64 + -9824;
	// lfs f31,2720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2720);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5154c
	if (cr0.eq) goto loc_82F5154C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
loc_82F5154C:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-9820
	ctx.r5.s64 = r11.s64 + -9820;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5157c
	if (cr0.eq) goto loc_82F5157C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f1.f64));
loc_82F5157C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,11952
	ctx.r5.s64 = r11.s64 + 11952;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f515ac
	if (cr0.eq) goto loc_82F515AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
loc_82F515AC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,7068
	ctx.r5.s64 = r11.s64 + 7068;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f515dc
	if (cr0.eq) goto loc_82F515DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
loc_82F515DC:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,11932
	ctx.r5.s64 = r11.s64 + 11932;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5160c
	if (cr0.eq) goto loc_82F5160C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64));
loc_82F5160C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmadds f26,f30,f0,f26
	f26.f64 = double(float(f30.f64 * f0.f64 + f26.f64));
	// fmadds f27,f31,f0,f27
	f27.f64 = double(float(f31.f64 * f0.f64 + f27.f64));
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f4,f25
	ctx.f4.f64 = f25.f64;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// fmr f3,f0
	ctx.f3.f64 = f0.f64;
	// fneg f2,f0
	ctx.f2.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x82f65e78
	sub_82F65E78(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66090
	sub_82F66090(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,6464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6464);
	f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * f0.f64));
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f26
	f0.f64 = double(float(f0.f64 + f26.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// b 0x82f517e4
	goto loc_82F517E4;
loc_82F51694:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r5,r11,-20172
	ctx.r5.s64 = r11.s64 + -20172;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r31,-32252
	r31.s64 = -2113667072;
	// beq 0x82f516c8
	if (cr0.eq) goto loc_82F516C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,6464(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 6464);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82F516C8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,7064
	ctx.r5.s64 = r11.s64 + 7064;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f51704
	if (cr0.eq) goto loc_82F51704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,6464(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 6464);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82F51704:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-9656
	ctx.r5.s64 = r11.s64 + -9656;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f51738
	if (cr0.eq) goto loc_82F51738;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82F51738:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-9652
	ctx.r5.s64 = r11.s64 + -9652;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f51774
	if (cr0.eq) goto loc_82F51774;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,6464(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 6464);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82F51774:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-12728
	ctx.r5.s64 = r11.s64 + -12728;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f517b0
	if (cr0.eq) goto loc_82F517B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,6464(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 6464);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_82F517B0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,7068
	ctx.r5.s64 = r11.s64 + 7068;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f517e4
	if (cr0.eq) goto loc_82F517E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_82F517E4:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// li r31,0
	r31.s64 = 0;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82f51928
	if (!cr6.gt) goto loc_82F51928;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r30,24(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x82f51900
	if (!cr6.gt) goto loc_82F51900;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r31,24(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,7052
	ctx.r10.s64 = r11.s64 + 7052;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F5185C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f51880
	if (cr0.eq) goto loc_82F51880;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f5185c
	if (cr6.eq) goto loc_82F5185C;
loc_82F51880:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r9,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f518b0
	if (!cr6.eq) goto loc_82F518B0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F518B0:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// ble cr6,0x82f51900
	if (!cr6.gt) goto loc_82F51900;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r30,24(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82f518ec
	if (!cr6.lt) goto loc_82F518EC;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82F518EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82f51900
	if (!cr6.gt) goto loc_82F51900;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82F51900:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f51928
	if (!cr6.eq) goto loc_82F51928;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F51928:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r25,16
	r25.s64 = 16;
	// addi r10,r11,7044
	ctx.r10.s64 = r11.s64 + 7044;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F5193C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f51960
	if (cr0.eq) goto loc_82F51960;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f5193c
	if (cr6.eq) goto loc_82F5193C;
loc_82F51960:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f51978
	if (!cr0.eq) goto loc_82F51978;
	// li r25,18
	r25.s64 = 18;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// beq cr6,0x82f51978
	if (cr6.eq) goto loc_82F51978;
	// li r25,19
	r25.s64 = 19;
loc_82F51978:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f519bc
	if (cr0.eq) goto loc_82F519BC;
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
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// bl 0x82fb95f0
	sub_82FB95F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f519c0
	goto loc_82F519C0;
loc_82F519BC:
	// li r29,0
	r29.s64 = 0;
loc_82F519C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f51ad8
	if (cr6.eq) goto loc_82F51AD8;
	// stfs f31,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f51aac
	if (!cr6.gt) goto loc_82F51AAC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,2784(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2784);
	f31.f64 = double(temp.f32);
	// lfs f30,7040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7040);
	f30.f64 = double(temp.f32);
loc_82F519F4:
	// lwz r11,52(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r11,52(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 52);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// oris r27,r10,65280
	r27.u64 = ctx.r10.u64 | 4278190080;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// clrlwi r11,r27,8
	r11.u64 = r27.u32 & 0xFFFFFF;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82f51a3c
	if (cr6.lt) goto loc_82F51A3C;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_82F51A3C:
	// fsel f0,f0,f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : f29.f64;
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 52);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r27,r10,r11
	r27.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82f51a74
	if (cr6.lt) goto loc_82F51A74;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_82F51A74:
	// fsel f0,f0,f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : f29.f64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,56(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82f519f4
	if (cr6.lt) goto loc_82F519F4;
loc_82F51AAC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fb9478
	sub_82FB9478(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F51AD8:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f51aec
	if (cr6.lt) goto loc_82F51AEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F51AEC:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f51b14
	if (!cr6.eq) goto loc_82F51B14;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F51B14:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7548
	// b 0x82ca2c1c
	return;
}

__attribute__((alias("__imp__sub_82F51B28"))) PPC_WEAK_FUNC(sub_82F51B28);
PPC_FUNC_IMPL(__imp__sub_82F51B28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f51b70
	if (cr0.eq) goto loc_82F51B70;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x82fc2110
	sub_82FC2110(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82f51b70
	if (cr0.eq) goto loc_82F51B70;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f51298
	sub_82F51298(ctx, base);
loc_82F51B70:
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

__attribute__((alias("__imp__sub_82F51B88"))) PPC_WEAK_FUNC(sub_82F51B88);
PPC_FUNC_IMPL(__imp__sub_82F51B88) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f51bd0
	if (cr0.eq) goto loc_82F51BD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x82fc2170
	sub_82FC2170(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82f51bd0
	if (cr0.eq) goto loc_82F51BD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f51298
	sub_82F51298(ctx, base);
loc_82F51BD0:
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

__attribute__((alias("__imp__sub_82F51BE8"))) PPC_WEAK_FUNC(sub_82F51BE8);
PPC_FUNC_IMPL(__imp__sub_82F51BE8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82f51d70
	if (cr0.eq) goto loc_82F51D70;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f51d70
	if (!cr6.gt) goto loc_82F51D70;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f51d70
	if (cr0.eq) goto loc_82F51D70;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bne cr6,0x82f51d58
	if (!cr6.eq) goto loc_82F51D58;
	// lwz r26,48(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f51d58
	if (cr6.eq) goto loc_82F51D58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r28,1
	r28.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f51d1c
	if (!cr6.gt) goto loc_82F51D1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x82f51ccc
	if (!cr6.eq) goto loc_82F51CCC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fab290
	sub_82FAB290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
loc_82F51CCC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82f51d1c
	if (!cr6.gt) goto loc_82F51D1C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82f51d1c
	if (!cr6.gt) goto loc_82F51D1C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F51D1C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,64
	r31.s64 = r11.s64 + 64;
	// bne 0x82f51d38
	if (!cr0.eq) goto loc_82F51D38;
	// addi r31,r11,66
	r31.s64 = r11.s64 + 66;
loc_82F51D38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,428(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 428);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fc2218
	sub_82FC2218(ctx, base);
loc_82F51D58:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F51D70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F51D78"))) PPC_WEAK_FUNC(sub_82F51D78);
PPC_FUNC_IMPL(__imp__sub_82F51D78) {
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f51da8
	if (cr0.eq) goto loc_82F51DA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x82fc1db8
	sub_82FC1DB8(ctx, base);
loc_82F51DA8:
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

__attribute__((alias("__imp__sub_82F51DC0"))) PPC_WEAK_FUNC(sub_82F51DC0);
PPC_FUNC_IMPL(__imp__sub_82F51DC0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82f52268
	if (cr0.eq) goto loc_82F52268;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f52254
	if (!cr6.gt) goto loc_82F52254;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// lis r29,-256
	r29.s64 = -16777216;
	// li r25,0
	r25.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lfs f31,-16948(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16948);
	f31.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82f5222c
	if (!cr6.gt) goto loc_82F5222C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// oris r29,r10,65280
	r29.u64 = ctx.r10.u64 | 4278190080;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82f5222c
	if (!cr6.gt) goto loc_82F5222C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r11,r29,8
	r11.u64 = r29.u32 & 0xFFFFFF;
	// lfs f0,7040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7040);
	f0.f64 = double(temp.f32);
	// lfs f30,2784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2784);
	f30.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82f51eac
	if (cr6.lt) goto loc_82F51EAC;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_82F51EAC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// lfs f13,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r29,r10,r11
	r29.u64 = ctx.r10.u64 | r11.u64;
	// ble cr6,0x82f5222c
	if (!cr6.gt) goto loc_82F5222C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82f5222c
	if (!cr6.gt) goto loc_82F5222C;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r30,r11,-11840
	r30.s64 = r11.s64 + -11840;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F51F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f51f60
	if (cr0.eq) goto loc_82F51F60;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f51f3c
	if (cr6.eq) goto loc_82F51F3C;
loc_82F51F60:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f51f70
	if (!cr0.eq) goto loc_82F51F70;
	// li r28,6
	r28.s64 = 6;
	// b 0x82f51fec
	goto loc_82F51FEC;
loc_82F51F70:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,7124
	ctx.r10.s64 = ctx.r10.s64 + 7124;
loc_82F51F7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f51fa0
	if (cr0.eq) goto loc_82F51FA0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f51f7c
	if (cr6.eq) goto loc_82F51F7C;
loc_82F51FA0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f51fb0
	if (!cr0.eq) goto loc_82F51FB0;
	// li r28,4
	r28.s64 = 4;
	// b 0x82f51fec
	goto loc_82F51FEC;
loc_82F51FB0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,7112
	ctx.r10.s64 = ctx.r10.s64 + 7112;
loc_82F51FBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f51fe0
	if (cr0.eq) goto loc_82F51FE0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f51fbc
	if (cr6.eq) goto loc_82F51FBC;
loc_82F51FE0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f51fec
	if (!cr0.eq) goto loc_82F51FEC;
	// li r28,2
	r28.s64 = 2;
loc_82F51FEC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82f5220c
	if (!cr6.gt) goto loc_82F5220C;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r23,24(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f52054
	if (!cr6.eq) goto loc_82F52054;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F52054:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F52064:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f52088
	if (cr0.eq) goto loc_82F52088;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f52064
	if (cr6.eq) goto loc_82F52064;
loc_82F52088:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f52098
	if (!cr0.eq) goto loc_82F52098;
	// li r26,64
	r26.s64 = 64;
	// b 0x82f520d4
	goto loc_82F520D4;
loc_82F52098:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,7104
	ctx.r10.s64 = ctx.r10.s64 + 7104;
loc_82F520A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f520c8
	if (cr0.eq) goto loc_82F520C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f520a4
	if (cr6.eq) goto loc_82F520A4;
loc_82F520C8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f520d4
	if (!cr0.eq) goto loc_82F520D4;
	// li r26,128
	r26.s64 = 128;
loc_82F520D4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x82f5220c
	if (!cr6.gt) goto loc_82F5220C;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f5213c
	if (!cr6.eq) goto loc_82F5213C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F5213C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,7096
	ctx.r10.s64 = r11.s64 + 7096;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F52150:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f52174
	if (cr0.eq) goto loc_82F52174;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f52150
	if (cr6.eq) goto loc_82F52150;
loc_82F52174:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f52184
	if (!cr0.eq) goto loc_82F52184;
	// li r27,32
	r27.s64 = 32;
	// b 0x82f521c0
	goto loc_82F521C0;
loc_82F52184:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,7088
	ctx.r10.s64 = ctx.r10.s64 + 7088;
loc_82F52190:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f521b4
	if (cr0.eq) goto loc_82F521B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f52190
	if (cr6.eq) goto loc_82F52190;
loc_82F521B4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f521c0
	if (!cr0.eq) goto loc_82F521C0;
	// li r27,16
	r27.s64 = 16;
loc_82F521C0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// ble cr6,0x82f5220c
	if (!cr6.gt) goto loc_82F5220C;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82f521fc
	if (!cr6.lt) goto loc_82F521FC;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82F521FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x82f5220c
	if (!cr6.gt) goto loc_82F5220C;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_82F5220C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f5222c
	if (!cr6.eq) goto loc_82F5222C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F5222C:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f51090
	sub_82F51090(ctx, base);
	// b 0x82f52268
	goto loc_82F52268;
loc_82F52254:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82f4e770
	sub_82F4E770(ctx, base);
	// lwz r3,428(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 428);
	// bl 0x82fc1da8
	sub_82FC1DA8(ctx, base);
loc_82F52268:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	return;
}

__attribute__((alias("__imp__sub_82F52280"))) PPC_WEAK_FUNC(sub_82F52280);
PPC_FUNC_IMPL(__imp__sub_82F52280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f522f0
	if (cr0.eq) goto loc_82F522F0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f522f0
	if (cr6.lt) goto loc_82F522F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82f51150
	sub_82F51150(ctx, base);
loc_82F522F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F52300"))) PPC_WEAK_FUNC(sub_82F52300);
PPC_FUNC_IMPL(__imp__sub_82F52300) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f04b00
	sub_82F04B00(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82f52374
	if (cr6.eq) goto loc_82F52374;
	// addi r5,r31,-16
	ctx.r5.s64 = r31.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f4e988
	sub_82F4E988(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f142f8
	sub_82F142F8(ctx, base);
loc_82F52374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F52380"))) PPC_WEAK_FUNC(sub_82F52380);
PPC_FUNC_IMPL(__imp__sub_82F52380) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f523ec
	if (!cr6.eq) goto loc_82F523EC;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f523c8
	if (cr0.eq) goto loc_82F523C8;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f523c0
	if (cr0.eq) goto loc_82F523C0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f52410
	if (!cr6.eq) goto loc_82F52410;
loc_82F523C0:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f52410
	if (!cr0.eq) goto loc_82F52410;
loc_82F523C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f523e0
	if (cr6.eq) goto loc_82F523E0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F523E0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82f52410
	goto loc_82F52410;
loc_82F523EC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f52400
	if (cr6.gt) goto loc_82F52400;
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x82f52410
	if (cr6.gt) goto loc_82F52410;
loc_82F52400:
	// rlwinm r11,r4,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82f4eaf8
	sub_82F4EAF8(ctx, base);
loc_82F52410:
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

__attribute__((alias("__imp__sub_82F52428"))) PPC_WEAK_FUNC(sub_82F52428);
PPC_FUNC_IMPL(__imp__sub_82F52428) {
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
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bge cr6,0x82f52470
	if (!cr6.lt) goto loc_82F52470;
	// rlwinm r30,r28,3,0,28
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82F52454:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f2c088
	sub_82F2C088(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82f52454
	if (!cr0.eq) goto loc_82F52454;
loc_82F52470:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f524c4
	if (!cr6.eq) goto loc_82F524C4;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f524a4
	if (cr0.eq) goto loc_82F524A4;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f5249c
	if (cr0.eq) goto loc_82F5249C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f524ec
	if (!cr6.eq) goto loc_82F524EC;
loc_82F5249C:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f524ec
	if (!cr0.eq) goto loc_82F524EC;
loc_82F524A4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f524bc
	if (cr6.eq) goto loc_82F524BC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F524BC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// b 0x82f524ec
	goto loc_82F524EC;
loc_82F524C4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f524dc
	if (cr6.gt) goto loc_82F524DC;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f524ec
	if (cr6.gt) goto loc_82F524EC;
loc_82F524DC:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f06c50
	sub_82F06C50(ctx, base);
loc_82F524EC:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82f52520
	if (!cr6.lt) goto loc_82F52520;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r27,r28
	ctx.r9.s64 = r28.s64 - r27.s64;
loc_82F524FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f52514
	if (cr0.eq) goto loc_82F52514;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82F52514:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82f524fc
	if (!cr0.eq) goto loc_82F524FC;
loc_82F52520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F52528"))) PPC_WEAK_FUNC(sub_82F52528);
PPC_FUNC_IMPL(__imp__sub_82F52528) {
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
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82f5261c
	if (cr6.eq) goto loc_82F5261C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r31
	r11.u64 = ctx.r3.u64 & r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82f5261c
	if (!cr6.eq) goto loc_82F5261C;
loc_82F52588:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r25,4(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r25
	r11.u64 = ctx.r3.u64 & r25.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82f525f4
	if (!cr6.eq) goto loc_82F525F4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
loc_82F525C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f525ec
	if (cr0.eq) goto loc_82F525EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f525c8
	if (cr6.eq) goto loc_82F525C8;
loc_82F525EC:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f52614
	if (cr0.eq) goto loc_82F52614;
loc_82F525F4:
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82f5261c
	if (cr6.eq) goto loc_82F5261C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r10,r27,12
	ctx.r10.s64 = r27.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// b 0x82f52588
	goto loc_82F52588;
loc_82F52614:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82f52620
	goto loc_82F52620;
loc_82F5261C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F52620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F52628"))) PPC_WEAK_FUNC(sub_82F52628);
PPC_FUNC_IMPL(__imp__sub_82F52628) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f5266c
	if (cr6.eq) goto loc_82F5266C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5266C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f52690
	if (cr6.eq) goto loc_82F52690;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82F526B0"))) PPC_WEAK_FUNC(sub_82F526B0);
PPC_FUNC_IMPL(__imp__sub_82F526B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f52798
	if (!cr0.eq) goto loc_82F52798;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r11,436(r31)
	PPC_STORE_U8(r31.u32 + 436, r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r29,0
	r29.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r29.u16);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r29.u8);
	// li r27,1
	r27.s64 = 1;
	// stb r29,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r29.u8);
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f52734
	if (cr0.eq) goto loc_82F52734;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82F52734:
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f52760
	if (cr6.eq) goto loc_82F52760;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bgt 0x82f52760
	if (cr0.gt) goto loc_82F52760;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F52760:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f52784
	if (cr6.eq) goto loc_82F52784;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52784:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_82F52798:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F527A0"))) PPC_WEAK_FUNC(sub_82F527A0);
PPC_FUNC_IMPL(__imp__sub_82F527A0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r30,192(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f528fc
	if (cr6.eq) goto loc_82F528FC;
	// li r28,0
	r28.s64 = 0;
loc_82F527E8:
	// lwz r11,188(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 188);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f528f0
	if (cr6.eq) goto loc_82F528F0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r29,80
	ctx.r4.s64 = r29.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x82f52864
	if (!cr6.lt) goto loc_82F52864;
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82f52868
	if (cr6.lt) goto loc_82F52868;
loc_82F52864:
	// li r11,1
	r11.s64 = 1;
loc_82F52868:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f528f0
	if (!cr0.eq) goto loc_82F528F0;
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82f52894
	if (!cr6.lt) goto loc_82F52894;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x82f52898
	if (cr6.lt) goto loc_82F52898;
loc_82F52894:
	// li r11,1
	r11.s64 = 1;
loc_82F52898:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f528e0
	if (!cr0.eq) goto loc_82F528E0;
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x82f528ac
	if (cr6.gt) goto loc_82F528AC;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_82F528AC:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82f528b8
	if (!cr6.gt) goto loc_82F528B8;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82F528B8:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x82f528c8
	if (cr6.gt) goto loc_82F528C8;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_82F528C8:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bgt cr6,0x82f528d8
	if (cr6.gt) goto loc_82F528D8;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_82F528D8:
	// stfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82f528e4
	goto loc_82F528E4;
loc_82F528E0:
	// stfs f9,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82F528E4:
	// stfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_82F528F0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x82f527e8
	if (!cr0.eq) goto loc_82F527E8;
loc_82F528FC:
	// lwz r3,428(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 428);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f529e4
	if (cr6.eq) goto loc_82F529E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82fc2418
	sub_82FC2418(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82f52944
	if (!cr6.lt) goto loc_82F52944;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82f52948
	if (cr6.lt) goto loc_82F52948;
loc_82F52944:
	// li r11,1
	r11.s64 = 1;
loc_82F52948:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f529c4
	if (!cr0.eq) goto loc_82F529C4;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82f52964
	if (!cr6.gt) goto loc_82F52964;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x82f52968
	goto loc_82F52968;
loc_82F52964:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f0.f64;
loc_82F52968:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82f5297c
	if (!cr6.gt) goto loc_82F5297C;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x82f52980
	goto loc_82F52980;
loc_82F5297C:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f0.f64;
loc_82F52980:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82f52998
	if (!cr6.gt) goto loc_82F52998;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82f5299c
	goto loc_82F5299C;
loc_82F52998:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
loc_82F5299C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f529b0
	if (cr6.gt) goto loc_82F529B0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F529B0:
	// stfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82f529e4
	goto loc_82F529E4;
loc_82F529C4:
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
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82F529E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F529F0"))) PPC_WEAK_FUNC(sub_82F529F0);
PPC_FUNC_IMPL(__imp__sub_82F529F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r31,192(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f52b44
	if (cr6.eq) goto loc_82F52B44;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82F52A3C:
	// lwz r11,188(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 188);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f52b38
	if (cr6.eq) goto loc_82F52B38;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// bge cr6,0x82f52aa8
	if (!cr6.lt) goto loc_82F52AA8;
	// fcmpu cr6,f11,f9
	cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82f52aac
	if (cr6.lt) goto loc_82F52AAC;
loc_82F52AA8:
	// li r11,1
	r11.s64 = 1;
loc_82F52AAC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f52b38
	if (!cr0.eq) goto loc_82F52B38;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82f52ad8
	if (!cr6.lt) goto loc_82F52AD8;
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x82f52adc
	if (cr6.lt) goto loc_82F52ADC;
loc_82F52AD8:
	// li r11,1
	r11.s64 = 1;
loc_82F52ADC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f52b28
	if (!cr0.eq) goto loc_82F52B28;
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x82f52af0
	if (cr6.gt) goto loc_82F52AF0;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82F52AF0:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x82f52afc
	if (cr6.gt) goto loc_82F52AFC;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
loc_82F52AFC:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82f52b0c
	if (cr6.gt) goto loc_82F52B0C;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_82F52B0C:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bgt cr6,0x82f52b1c
	if (cr6.gt) goto loc_82F52B1C;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
loc_82F52B1C:
	// stfs f10,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// b 0x82f52b30
	goto loc_82F52B30;
loc_82F52B28:
	// stfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
loc_82F52B30:
	// stfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_82F52B38:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82f52a3c
	if (!cr0.eq) goto loc_82F52A3C;
loc_82F52B44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F52B50"))) PPC_WEAK_FUNC(sub_82F52B50);
PPC_FUNC_IMPL(__imp__sub_82F52B50) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r10,r9,0,30,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFF03) | (ctx.r10.u64 & 0xFC);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// stb r10,436(r31)
	PPC_STORE_U8(r31.u32 + 436, ctx.r10.u8);
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc1d40
	sub_82FC1D40(ctx, base);
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

__attribute__((alias("__imp__sub_82F52BB0"))) PPC_WEAK_FUNC(sub_82F52BB0);
PPC_FUNC_IMPL(__imp__sub_82F52BB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f52be4
	if (cr6.eq) goto loc_82F52BE4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52BE4:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lbz r11,268(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 268);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f52bfc
	if (cr0.eq) goto loc_82F52BFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f635b8
	sub_82F635B8(ctx, base);
loc_82F52BFC:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r28,420(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r27,444(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// beq 0x82f52cf8
	if (cr0.eq) goto loc_82F52CF8;
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f52cb0
	if (!cr6.eq) goto loc_82F52CB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,204(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// bl 0x82f4d190
	sub_82F4D190(ctx, base);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x82f52c8c
	if (cr6.eq) goto loc_82F52C8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4d278
	sub_82F4D278(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4ee10
	sub_82F4EE10(ctx, base);
	// b 0x82f52ce4
	goto loc_82F52CE4;
loc_82F52C8C:
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r11.u16);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r11.u8);
	// stb r11,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, r11.u8);
	// b 0x82f52cd0
	goto loc_82F52CD0;
loc_82F52CB0:
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r11.u16);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, r11.u8);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, r11.u8);
loc_82F52CD0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52CE4:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f52cf8
	if (!cr6.eq) goto loc_82F52CF8;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82fc1d40
	sub_82FC1D40(ctx, base);
loc_82F52CF8:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,392
	r11.s64 = r11.s64 + 392;
	// lwz r30,28(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r28,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r28.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r29,444(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// stw r27,444(r11)
	PPC_STORE_U32(r11.u32 + 444, r27.u32);
	// bl 0x82fc1100
	sub_82FC1100(ctx, base);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82f52d34
	if (cr6.eq) goto loc_82F52D34;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// stw r30,420(r11)
	PPC_STORE_U32(r11.u32 + 420, r30.u32);
loc_82F52D34:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x82f52d44
	if (cr6.eq) goto loc_82F52D44;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// stw r29,444(r11)
	PPC_STORE_U32(r11.u32 + 444, r29.u32);
loc_82F52D44:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F52D68"))) PPC_WEAK_FUNC(sub_82F52D68);
PPC_FUNC_IMPL(__imp__sub_82F52D68) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82f65b70
	sub_82F65B70(ctx, base);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f52de4
	if (!cr6.eq) goto loc_82F52DE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f52dc4
	if (cr6.eq) goto loc_82F52DC4;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f52dc8
	goto loc_82F52DC8;
loc_82F52DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F52DC8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f52de4
	if (cr0.eq) goto loc_82F52DE4;
	// lwz r11,424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f52de4
	if (cr6.eq) goto loc_82F52DE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,56(r11)
	PPC_STORE_U8(r11.u32 + 56, ctx.r10.u8);
loc_82F52DE4:
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

__attribute__((alias("__imp__sub_82F52E00"))) PPC_WEAK_FUNC(sub_82F52E00);
PPC_FUNC_IMPL(__imp__sub_82F52E00) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82f52f58
	if (!cr6.eq) goto loc_82F52F58;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f52e98
	if (!cr0.eq) goto loc_82F52E98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f12888
	sub_82F12888(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r30.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f52e98
	if (cr0.eq) goto loc_82F52E98;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F52E98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82f0d790
	sub_82F0D790(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f52ed0
	if (cr0.eq) goto loc_82F52ED0;
	// lbz r11,512(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 512);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82f52ed4
	if (!cr0.eq) goto loc_82F52ED4;
loc_82F52ED0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82F52ED4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f52f50
	if (cr0.eq) goto loc_82F52F50;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82f52ef0
	if (cr6.eq) goto loc_82F52EF0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x82f52f50
	if (!cr6.eq) goto loc_82F52F50;
loc_82F52EF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r30.u16);
	// stb r30,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r30.u8);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, r30.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,2048
	r11.s64 = 2048;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r30.u16);
	// stb r30,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, r30.u8);
	// stb r30,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, r30.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52F50:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82f52f5c
	goto loc_82F52F5C;
loc_82F52F58:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F52F5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F52F68"))) PPC_WEAK_FUNC(sub_82F52F68);
PPC_FUNC_IMPL(__imp__sub_82F52F68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x82f63998
	sub_82F63998(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53094
	if (!cr0.eq) goto loc_82F53094;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r3,120
	ctx.r5.s64 = ctx.r3.s64 + 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f12838
	sub_82F12838(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f53168
	if (cr6.eq) goto loc_82F53168;
	// lwz r11,424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f53000
	if (cr6.eq) goto loc_82F53000;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,344
	ctx.r4.s64 = r30.s64 + 344;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53000
	if (cr0.eq) goto loc_82F53000;
	// li r29,1
	r29.s64 = 1;
loc_82F53000:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x82f53014
	if (cr6.eq) goto loc_82F53014;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82f53068
	if (!cr6.eq) goto loc_82F53068;
loc_82F53014:
	// lbz r11,348(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 348);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x82f53064
	if (cr6.lt) goto loc_82F53064;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f0d790
	sub_82F0D790(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53058
	if (cr0.eq) goto loc_82F53058;
	// lbz r11,512(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 512);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82f5305c
	if (!cr0.eq) goto loc_82F5305C;
loc_82F53058:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82F5305C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53068
	if (!cr0.eq) goto loc_82F53068;
loc_82F53064:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82F53068:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53168
	if (cr0.eq) goto loc_82F53168;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f53094
	if (!cr6.eq) goto loc_82F53094;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F53094:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,392
	ctx.r3.s64 = ctx.r3.s64 + 392;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f5314c
	if (cr0.eq) goto loc_82F5314C;
	// li r11,2
	r11.s64 = 2;
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r27,4(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f530ec
	if (cr0.eq) goto loc_82F530EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F530EC:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f53118
	if (cr6.eq) goto loc_82F53118;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bgt 0x82f53118
	if (cr0.gt) goto loc_82F53118;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53118:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f5313c
	if (cr6.eq) goto loc_82F5313C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5313C:
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
loc_82F5314C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f53160
	if (cr6.lt) goto loc_82F53160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F53160:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f531b8
	goto loc_82F531B8;
loc_82F53168:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82f53180
	if (!cr6.eq) goto loc_82F53180;
	// lbz r11,436(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 436);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,436(r30)
	PPC_STORE_U8(r30.u32 + 436, r11.u8);
loc_82F53180:
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f531a0
	if (!cr6.eq) goto loc_82F531A0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F531A0:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f531b4
	if (cr6.lt) goto loc_82F531B4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F531B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F531B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F531C0"))) PPC_WEAK_FUNC(sub_82F531C0);
PPC_FUNC_IMPL(__imp__sub_82F531C0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f53358
	if (cr0.eq) goto loc_82F53358;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r11.u8);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82f532e8
	if (!cr6.gt) goto loc_82F532E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82f532e8
	if (!cr6.gt) goto loc_82F532E8;
	// li r11,1
	r11.s64 = 1;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82F532E8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f34a50
	sub_82F34A50(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r3,356
	ctx.r10.s64 = ctx.r3.s64 + 356;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r11.u8);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,28(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
loc_82F53358:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F53368"))) PPC_WEAK_FUNC(sub_82F53368);
PPC_FUNC_IMPL(__imp__sub_82F53368) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r28,r31,-16
	r28.s64 = r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x82f52628
	sub_82F52628(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f533c0
	if (cr6.eq) goto loc_82F533C0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// beq cr6,0x82f533d4
	if (cr6.eq) goto loc_82F533D4;
loc_82F533C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f4ceb0
	sub_82F4CEB0(ctx, base);
loc_82F533D4:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f53410
	if (cr6.eq) goto loc_82F53410;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F53410:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F53420"))) PPC_WEAK_FUNC(sub_82F53420);
PPC_FUNC_IMPL(__imp__sub_82F53420) {
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
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f53450
	if (!cr6.eq) goto loc_82F53450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f53484
	goto loc_82F53484;
loc_82F53450:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// and r5,r11,r10
	ctx.r5.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x82f52528
	sub_82F52528(ctx, base);
loc_82F53484:
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

__attribute__((alias("__imp__sub_82F534A0"))) PPC_WEAK_FUNC(sub_82F534A0);
PPC_FUNC_IMPL(__imp__sub_82F534A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f290b0
	sub_82F290B0(ctx, base);
	// li r21,1
	r21.s64 = 1;
	// stw r30,732(r29)
	PPC_STORE_U32(r29.u32 + 732, r30.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r21,728(r29)
	PPC_STORE_U32(r29.u32 + 728, r21.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,88(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r23,69(r29)
	PPC_STORE_U8(r29.u32 + 69, r23.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f534fc
	if (!cr6.lt) goto loc_82F534FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F534FC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f53530
	if (!cr6.lt) goto loc_82F53530;
	// stw r21,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r21.u32);
loc_82F53530:
	// addi r26,r30,32
	r26.s64 = r30.s64 + 32;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f2c5e8
	sub_82F2C5E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r4,r11,7208
	ctx.r4.s64 = r11.s64 + 7208;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// stw r23,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r23.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x82f53644
	if (!cr6.lt) goto loc_82F53644;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r24,r10,2840
	r24.s64 = ctx.r10.s64 + 2840;
	// addi r27,r11,7172
	r27.s64 = r11.s64 + 7172;
loc_82F53584:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29890
	sub_82F29890(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x82f535e4
	if (!cr6.eq) goto loc_82F535E4;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82f535bc
	if (!cr6.eq) goto loc_82F535BC;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f2c5e8
	sub_82F2C5E8(ctx, base);
loc_82F535BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f401c8
	sub_82F401C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,2(r22)
	ctx.r5.u64 = PPC_LOAD_U16(r22.u32 + 2);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// b 0x82f53620
	goto loc_82F53620;
loc_82F535E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6248
	sub_82EF6248(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53610
	if (cr0.eq) goto loc_82F53610;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f53620
	goto loc_82F53620;
loc_82F53610:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F53620:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29550
	sub_82F29550(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// blt cr6,0x82f53584
	if (cr6.lt) goto loc_82F53584;
loc_82F53644:
	// lwz r11,728(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 728);
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwz r10,740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82f53678
	if (cr6.gt) goto loc_82F53678;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f53670
	if (!cr6.eq) goto loc_82F53670;
	// lwz r11,764(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x82f53678
	if (cr6.gt) goto loc_82F53678;
loc_82F53670:
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82f5367c
	goto loc_82F5367C;
loc_82F53678:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82F5367C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5368c
	if (cr0.eq) goto loc_82F5368C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f401c8
	sub_82F401C8(ctx, base);
loc_82F5368C:
	// stw r23,732(r29)
	PPC_STORE_U32(r29.u32 + 732, r23.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r23,728(r29)
	PPC_STORE_U32(r29.u32 + 728, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,7136
	ctx.r4.s64 = r11.s64 + 7136;
	// lhz r5,2(r22)
	ctx.r5.u64 = PPC_LOAD_U16(r22.u32 + 2);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	return;
}

__attribute__((alias("__imp__sub_82F536B0"))) PPC_WEAK_FUNC(sub_82F536B0);
PPC_FUNC_IMPL(__imp__sub_82F536B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82f2c5e8
	sub_82F2C5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F536C8"))) PPC_WEAK_FUNC(sub_82F536C8);
PPC_FUNC_IMPL(__imp__sub_82F536C8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r28,192(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82f537d4
	if (!cr6.gt) goto loc_82F537D4;
loc_82F536F0:
	// lwz r10,188(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 188);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f537c8
	if (cr0.eq) goto loc_82F537C8;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f53734
	if (!cr6.eq) goto loc_82F53734;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82F53734:
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stbx r3,r29,r31
	PPC_STORE_U8(r29.u32 + r31.u32, ctx.r3.u8);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82f537c4
	if (!cr6.lt) goto loc_82F537C4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82F53784:
	// lwz r9,188(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 188);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f537a8
	if (cr6.eq) goto loc_82F537A8;
	// lhz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82f537c4
	if (cr6.gt) goto loc_82F537C4;
loc_82F537A8:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lbzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r31.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x82f53784
	if (cr6.lt) goto loc_82F53784;
loc_82F537C4:
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
loc_82F537C8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82f536f0
	if (cr6.lt) goto loc_82F536F0;
loc_82F537D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F537E0"))) PPC_WEAK_FUNC(sub_82F537E0);
PPC_FUNC_IMPL(__imp__sub_82F537E0) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f53810
	if (!cr6.eq) goto loc_82F53810;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x82f53840
	goto loc_82F53840;
loc_82F53810:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82F53818:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,-2
	cr6.compare<int32_t>(ctx.r7.s32, -2, xer);
	// bne cr6,0x82f53838
	if (!cr6.eq) goto loc_82F53838;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82f53818
	if (!cr6.gt) goto loc_82F53818;
loc_82F53838:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82F53840:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1068
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f538b4
	if (!cr0.eq) goto loc_82F538B4;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
loc_82F53864:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82f53898
	if (!cr6.eq) goto loc_82F53898;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82f68040
	sub_82F68040(ctx, base);
loc_82F53898:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f149f0
	sub_82F149F0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1068
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53864
	if (cr0.eq) goto loc_82F53864;
loc_82F538B4:
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

__attribute__((alias("__imp__sub_82F538C8"))) PPC_WEAK_FUNC(sub_82F538C8);
PPC_FUNC_IMPL(__imp__sub_82F538C8) {
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82f18480
	sub_82F18480(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f538f4
	if (cr6.eq) goto loc_82F538F4;
	// bl 0x82f537e0
	sub_82F537E0(ctx, base);
loc_82F538F4:
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

__attribute__((alias("__imp__sub_82F53908"))) PPC_WEAK_FUNC(sub_82F53908);
PPC_FUNC_IMPL(__imp__sub_82F53908) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82f53420
	sub_82F53420(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f53944
	if (cr0.lt) goto loc_82F53944;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82f53948
	goto loc_82F53948;
loc_82F53944:
	// li r11,0
	r11.s64 = 0;
loc_82F53948:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f53968
	if (cr6.eq) goto loc_82F53968;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f53960
	if (cr6.eq) goto loc_82F53960;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F53960:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f5396c
	goto loc_82F5396C;
loc_82F53968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F5396C:
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

__attribute__((alias("__imp__sub_82F53988"))) PPC_WEAK_FUNC(sub_82F53988);
PPC_FUNC_IMPL(__imp__sub_82F53988) {
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
	// li r29,0
	r29.s64 = 0;
	// li r3,520
	ctx.r3.s64 = 520;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82f14b28
	sub_82F14B28(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,512
	ctx.r9.s64 = r30.s64 + 512;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// beq cr6,0x82f53a0c
	if (cr6.eq) goto loc_82F53A0C;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
loc_82F53A0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F53A18"))) PPC_WEAK_FUNC(sub_82F53A18);
PPC_FUNC_IMPL(__imp__sub_82F53A18) {
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
	// li r29,0
	r29.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82f14b28
	sub_82F14B28(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,128
	ctx.r9.s64 = r30.s64 + 128;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// beq cr6,0x82f53a9c
	if (cr6.eq) goto loc_82F53A9C;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82F53A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82F53AA8"))) PPC_WEAK_FUNC(sub_82F53AA8);
PPC_FUNC_IMPL(__imp__sub_82F53AA8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lbz r11,158(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53d5c
	if (!cr0.eq) goto loc_82F53D5C;
	// lbz r11,120(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f53d5c
	if (cr0.eq) goto loc_82F53D5C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53d5c
	if (!cr0.eq) goto loc_82F53D5C;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lwz r31,432(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// lwz r29,192(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f53bc0
	if (cr6.eq) goto loc_82F53BC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53bc0
	if (cr0.eq) goto loc_82F53BC0;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53bc0
	if (!cr0.eq) goto loc_82F53BC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53d5c
	if (cr0.eq) goto loc_82F53D5C;
loc_82F53BC0:
	// li r27,0
	r27.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f536c8
	sub_82F536C8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82f53cb8
	if (cr0.lt) goto loc_82F53CB8;
	// rlwinm r28,r29,3,0,28
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
loc_82F53BF0:
	// lwz r11,188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// beq cr6,0x82f53c24
	if (cr6.eq) goto loc_82F53C24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f53cac
	if (cr0.eq) goto loc_82F53CAC;
	// lhz r11,36(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53cac
	if (!cr0.eq) goto loc_82F53CAC;
loc_82F53C24:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53cac
	if (cr6.eq) goto loc_82F53CAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f53c54
	if (cr0.eq) goto loc_82F53C54;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53cd8
	if (!cr0.eq) goto loc_82F53CD8;
loc_82F53C54:
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f53c68
	if (cr6.eq) goto loc_82F53C68;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f53c6c
	goto loc_82F53C6C;
loc_82F53C68:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82F53C6C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82f53ca0
	if (cr0.eq) goto loc_82F53CA0;
	// beq cr6,0x82f53cac
	if (cr6.eq) goto loc_82F53CAC;
loc_82F53C7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53c98
	if (cr6.eq) goto loc_82F53C98;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53C98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82f53d60
	goto loc_82F53D60;
loc_82F53CA0:
	// beq cr6,0x82f53cac
	if (cr6.eq) goto loc_82F53CAC;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82f53cfc
	if (!cr6.eq) goto loc_82F53CFC;
loc_82F53CAC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// bge 0x82f53bf0
	if (!cr0.lt) goto loc_82F53BF0;
loc_82F53CB8:
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f53d40
	if (cr6.eq) goto loc_82F53D40;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f53d18
	if (cr6.eq) goto loc_82F53D18;
	// bl 0x82f4ea60
	sub_82F4EA60(ctx, base);
	// b 0x82f53d1c
	goto loc_82F53D1C;
loc_82F53CD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53cf4
	if (cr6.eq) goto loc_82F53CF4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53CF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f53d60
	goto loc_82F53D60;
loc_82F53CFC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f53d40
	if (cr6.eq) goto loc_82F53D40;
	// lbz r11,120(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53cd8
	if (!cr0.eq) goto loc_82F53CD8;
	// b 0x82f53d40
	goto loc_82F53D40;
loc_82F53D18:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82F53D1C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53d40
	if (cr0.eq) goto loc_82F53D40;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82fc2530
	sub_82FC2530(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53c7c
	if (!cr0.eq) goto loc_82F53C7C;
loc_82F53D40:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53d5c
	if (cr6.eq) goto loc_82F53D5C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F53D60:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F53D68"))) PPC_WEAK_FUNC(sub_82F53D68);
PPC_FUNC_IMPL(__imp__sub_82F53D68) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lbz r11,158(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53fd0
	if (!cr0.eq) goto loc_82F53FD0;
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53e08
	if (!cr0.eq) goto loc_82F53E08;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f53dfc
	if (cr6.gt) goto loc_82F53DFC;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f53dfc
	if (cr6.lt) goto loc_82F53DFC;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f53dfc
	if (cr6.gt) goto loc_82F53DFC;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f53e00
	if (!cr6.lt) goto loc_82F53E00;
loc_82F53DFC:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F53E00:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53fd0
	if (cr0.eq) goto loc_82F53FD0;
loc_82F53E08:
	// lwz r31,432(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// lwz r29,192(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f53ebc
	if (cr6.eq) goto loc_82F53EBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53ebc
	if (cr0.eq) goto loc_82F53EBC;
	// lbz r11,436(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 436);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53ebc
	if (!cr0.eq) goto loc_82F53EBC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
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
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66280
	sub_82F66280(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66008
	sub_82F66008(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f661f0
	sub_82F661F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f53fd0
	if (cr0.eq) goto loc_82F53FD0;
loc_82F53EBC:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f536c8
	sub_82F536C8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// blt 0x82f53f90
	if (cr0.lt) goto loc_82F53F90;
	// rlwinm r27,r29,3,0,28
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
loc_82F53F00:
	// lwz r11,188(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// beq cr6,0x82f53f34
	if (cr6.eq) goto loc_82F53F34;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f53f84
	if (cr0.eq) goto loc_82F53F84;
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f53f84
	if (!cr0.eq) goto loc_82F53F84;
loc_82F53F34:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53fdc
	if (!cr0.eq) goto loc_82F53FDC;
loc_82F53F84:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r27,r27,-8
	r27.s64 = r27.s64 + -8;
	// bge 0x82f53f00
	if (!cr0.lt) goto loc_82F53F00;
loc_82F53F90:
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f53fb4
	if (cr6.eq) goto loc_82F53FB4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fc2530
	sub_82FC2530(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f53fdc
	if (!cr0.eq) goto loc_82F53FDC;
loc_82F53FB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53fd0
	if (cr6.eq) goto loc_82F53FD0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F53FD4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c30
	return;
loc_82F53FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f52380
	sub_82F52380(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f53ff8
	if (cr6.eq) goto loc_82F53FF8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F53FF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f53fd4
	goto loc_82F53FD4;
}

__attribute__((alias("__imp__sub_82F54000"))) PPC_WEAK_FUNC(sub_82F54000);
PPC_FUNC_IMPL(__imp__sub_82F54000) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,438(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 438);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82f54180
	if (cr6.eq) goto loc_82F54180;
	// lwz r11,192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54180
	if (cr6.eq) goto loc_82F54180;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82F54038:
	// lwz r11,188(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 188);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f54174
	if (cr6.eq) goto loc_82F54174;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f54074
	if (cr6.lt) goto loc_82F54074;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f54078
	if (!cr6.gt) goto loc_82F54078;
loc_82F54074:
	// li r11,0
	r11.s64 = 0;
loc_82F54078:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54174
	if (cr0.eq) goto loc_82F54174;
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f54174
	if (cr0.eq) goto loc_82F54174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f540b0
	if (cr0.eq) goto loc_82F540B0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F540B0:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82f540c8
	if (cr6.gt) goto loc_82F540C8;
	// li r11,0
	r11.s64 = 0;
loc_82F540C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f540f0
	if (cr0.eq) goto loc_82F540F0;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f540f0
	if (!cr0.eq) goto loc_82F540F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_82F540F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54140
	if (cr0.eq) goto loc_82F54140;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f54134
	if (cr0.eq) goto loc_82F54134;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82f5412c
	if (cr6.gt) goto loc_82F5412C;
	// li r11,0
	r11.s64 = 0;
loc_82F5412C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54140
	if (cr0.eq) goto loc_82F54140;
loc_82F54134:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830efaa0
	sub_830EFAA0(ctx, base);
loc_82F54140:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54174:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82f54038
	if (!cr0.eq) goto loc_82F54038;
loc_82F54180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F54188"))) PPC_WEAK_FUNC(sub_82F54188);
PPC_FUNC_IMPL(__imp__sub_82F54188) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add. r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f541cc
	if (cr0.eq) goto loc_82F541CC;
loc_82F541BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f541bc
	if (!cr0.eq) goto loc_82F541BC;
loc_82F541CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f541e0
	if (cr6.lt) goto loc_82F541E0;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F541E0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r9,512(r11)
	PPC_STORE_U32(r11.u32 + 512, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82F54204:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r29,512(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// rotlwi r11,r29,0
	r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f54204
	if (!cr6.eq) goto loc_82F54204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f5423c
	if (cr6.eq) goto loc_82F5423C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F5423C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F54248"))) PPC_WEAK_FUNC(sub_82F54248);
PPC_FUNC_IMPL(__imp__sub_82F54248) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add. r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f5428c
	if (cr0.eq) goto loc_82F5428C;
loc_82F5427C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f19820
	sub_82F19820(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f5427c
	if (!cr0.eq) goto loc_82F5427C;
loc_82F5428C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82f6fae8
	sub_82F6FAE8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r9,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82F542BC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r29,128(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// rotlwi r11,r29,0
	r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f542bc
	if (!cr6.eq) goto loc_82F542BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f542f4
	if (cr6.eq) goto loc_82F542F4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F542F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F54300"))) PPC_WEAK_FUNC(sub_82F54300);
PPC_FUNC_IMPL(__imp__sub_82F54300) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,7224
	r11.s64 = r11.s64 + 7224;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82f54350
	if (!cr6.gt) goto loc_82F54350;
	// li r30,0
	r30.s64 = 0;
loc_82F54330:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82f8a748
	sub_82F8A748(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f54330
	if (cr6.lt) goto loc_82F54330;
loc_82F54350:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f2c5e8
	sub_82F2C5E8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f54374
	if (cr6.eq) goto loc_82F54374;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F54374:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f2cf80
	sub_82F2CF80(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-9512
	r11.s64 = r11.s64 + -9512;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F54390"))) PPC_WEAK_FUNC(sub_82F54390);
PPC_FUNC_IMPL(__imp__sub_82F54390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F543A0"))) PPC_WEAK_FUNC(sub_82F543A0);
PPC_FUNC_IMPL(__imp__sub_82F543A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F543A8"))) PPC_WEAK_FUNC(sub_82F543A8);
PPC_FUNC_IMPL(__imp__sub_82F543A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F543C0"))) PPC_WEAK_FUNC(sub_82F543C0);
PPC_FUNC_IMPL(__imp__sub_82F543C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x82f2ec50
	sub_82F2EC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F543C8"))) PPC_WEAK_FUNC(sub_82F543C8);
PPC_FUNC_IMPL(__imp__sub_82F543C8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,33792
	ctx.r3.u64 = ctx.r3.u64 | 33792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F543D8"))) PPC_WEAK_FUNC(sub_82F543D8);
PPC_FUNC_IMPL(__imp__sub_82F543D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F543E8"))) PPC_WEAK_FUNC(sub_82F543E8);
PPC_FUNC_IMPL(__imp__sub_82F543E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F543F8"))) PPC_WEAK_FUNC(sub_82F543F8);
PPC_FUNC_IMPL(__imp__sub_82F543F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F54410"))) PPC_WEAK_FUNC(sub_82F54410);
PPC_FUNC_IMPL(__imp__sub_82F54410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F54438"))) PPC_WEAK_FUNC(sub_82F54438);
PPC_FUNC_IMPL(__imp__sub_82F54438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F54458"))) PPC_WEAK_FUNC(sub_82F54458);
PPC_FUNC_IMPL(__imp__sub_82F54458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F54480"))) PPC_WEAK_FUNC(sub_82F54480);
PPC_FUNC_IMPL(__imp__sub_82F54480) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r31,120(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
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
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f548e0
	if (cr6.eq) goto loc_82F548E0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f1c670
	sub_82F1C670(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54770
	if (cr0.eq) goto loc_82F54770;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f54520
	if (cr0.eq) goto loc_82F54520;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54520:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bne cr6,0x82f54538
	if (!cr6.eq) goto loc_82F54538;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82F54538:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f608e8
	sub_82F608E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f5466c
	if (cr0.eq) goto loc_82F5466C;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// lis r27,4
	r27.s64 = 262144;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r31.u16);
	// stb r31,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r31.u8);
	// stb r31,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r31.u8);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r31.u8);
	// stb r31,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r31.u8);
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f545d0
	if (cr0.eq) goto loc_82F545D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F545D0:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54608
	if (cr6.eq) goto loc_82F54608;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r28,r11
	r28.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82f54608
	if (cr6.gt) goto loc_82F54608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F54608:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f5462c
	if (cr6.eq) goto loc_82F5462C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5462C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f33238
	sub_82F33238(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f387d8
	sub_82F387D8(ctx, base);
loc_82F5466C:
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// sth r31,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, r31.u16);
	// stb r31,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, r31.u8);
	// stb r31,283(r1)
	PPC_STORE_U8(ctx.r1.u32 + 283, r31.u8);
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82f546cc
	if (cr0.eq) goto loc_82F546CC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F546CC:
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54704
	if (cr6.eq) goto loc_82F54704;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82f54704
	if (cr6.gt) goto loc_82F54704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F54704:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f54728
	if (cr6.eq) goto loc_82F54728;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54728:
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f33238
	sub_82F33238(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f387d8
	sub_82F387D8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82f548cc
	goto loc_82F548CC;
loc_82F54770:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f548dc
	if (cr0.eq) goto loc_82F548DC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f547b4
	if (cr0.eq) goto loc_82F547B4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F547B4:
	// li r31,0
	r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// lis r27,4
	r27.s64 = 262144;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r31.u32);
	// sth r31,216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 216, r31.u16);
	// stb r31,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, r31.u8);
	// stb r31,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, r31.u8);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r31.u8);
	// stb r31,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r31.u8);
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f54828
	if (cr0.eq) goto loc_82F54828;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F54828:
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54860
	if (cr6.eq) goto loc_82F54860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r28,r11
	r28.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82f54860
	if (cr6.gt) goto loc_82F54860;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F54860:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f54884
	if (cr6.eq) goto loc_82F54884;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54884:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r27.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r31.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f33238
	sub_82F33238(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f387d8
	sub_82F387D8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F548CC:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F548DC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F548E0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f54904
	if (!cr6.eq) goto loc_82F54904;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F54904:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82F54918"))) PPC_WEAK_FUNC(sub_82F54918);
PPC_FUNC_IMPL(__imp__sub_82F54918) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,564(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// stw r7,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r7.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stb r8,543(r1)
	PPC_STORE_U8(ctx.r1.u32 + 543, ctx.r8.u8);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f5496c
	if (!cr6.eq) goto loc_82F5496C;
	// lwz r11,76(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 76);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,136(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 136);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x82f30200
	sub_82F30200(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82F5496C:
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lwz r20,120(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82f5499c
	if (!cr6.eq) goto loc_82F5499C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lhz r5,78(r14)
	ctx.r5.u64 = PPC_LOAD_U16(r14.u32 + 78);
	// addi r3,r18,16
	ctx.r3.s64 = r18.s64 + 16;
	// addi r4,r11,7320
	ctx.r4.s64 = r11.s64 + 7320;
	// bl 0x82f4ebc0
	sub_82F4EBC0(ctx, base);
loc_82F54994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f554d8
	goto loc_82F554D8;
loc_82F5499C:
	// addi r28,r18,188
	r28.s64 = r18.s64 + 188;
	// lwz r4,72(r14)
	ctx.r4.u64 = PPC_LOAD_U32(r14.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0de0
	sub_82FC0DE0(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r23,1
	r23.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// beq 0x82f54b30
	if (cr0.eq) goto loc_82F54B30;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f54b34
	if (cr6.eq) goto loc_82F54B34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54994
	if (cr0.eq) goto loc_82F54994;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 76);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f54b34
	if (!cr6.eq) goto loc_82F54B34;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f54a28
	if (!cr6.eq) goto loc_82F54A28;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54aac
	if (cr6.eq) goto loc_82F54AAC;
loc_82F54A28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f54a78
	if (!cr6.eq) goto loc_82F54A78;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f54a60
	if (cr6.lt) goto loc_82F54A60;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// ble cr6,0x82f54a64
	if (!cr6.gt) goto loc_82F54A64;
loc_82F54A60:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F54A64:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54a78
	if (cr0.eq) goto loc_82F54A78;
	// lbz r11,147(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 147);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f54aac
	if (!cr0.eq) goto loc_82F54AAC;
loc_82F54A78:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54b34
	if (cr6.eq) goto loc_82F54B34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82f54b34
	if (!cr6.eq) goto loc_82F54B34;
loc_82F54AAC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,204(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 204);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f54b30
	if (!cr6.eq) goto loc_82F54B30;
	// lbz r11,83(r14)
	r11.u64 = PPC_LOAD_U8(r14.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f54b20
	if (!cr0.eq) goto loc_82F54B20;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82f979a0
	sub_82F979A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f54b20
	if (!cr0.eq) goto loc_82F54B20;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f4d668
	sub_82F4D668(ctx, base);
	// stb r23,307(r1)
	PPC_STORE_U8(ctx.r1.u32 + 307, r23.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f97968
	sub_82F97968(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0f78
	sub_82FC0F78(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f54994
	if (cr6.eq) goto loc_82F54994;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f54994
	goto loc_82F54994;
loc_82F54B20:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fc0f78
	sub_82FC0F78(ctx, base);
	// b 0x82f54994
	goto loc_82F54994;
loc_82F54B30:
	// stb r23,543(r1)
	PPC_STORE_U8(ctx.r1.u32 + 543, r23.u8);
loc_82F54B34:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 76);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// beq 0x82f54b7c
	if (cr0.eq) goto loc_82F54B7C;
	// addi r3,r19,128
	ctx.r3.s64 = r19.s64 + 128;
	// bl 0x82f856d8
	sub_82F856D8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x82f54b80
	goto loc_82F54B80;
loc_82F54B7C:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_82F54B80:
	// lwz r31,40(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// mr r15,r27
	r15.u64 = r27.u64;
	// stb r27,112(r17)
	PPC_STORE_U8(r17.u32 + 112, r27.u8);
	// b 0x82f54bb0
	goto loc_82F54BB0;
loc_82F54B90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f54bbc
	if (!cr0.eq) goto loc_82F54BBC;
	// lwz r31,40(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_82F54BB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f54b90
	if (!cr6.eq) goto loc_82F54B90;
	// b 0x82f54bd4
	goto loc_82F54BD4;
loc_82F54BBC:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stb r23,112(r17)
	PPC_STORE_U8(r17.u32 + 112, r23.u8);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54BD4:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82f54c28
	if (cr6.eq) goto loc_82F54C28;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54c08
	if (cr6.eq) goto loc_82F54C08;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r15,r23
	r15.u64 = r23.u64;
loc_82F54C08:
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f54c28
	if (cr6.eq) goto loc_82F54C28;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54C28:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x82f54c38
	if (!cr6.eq) goto loc_82F54C38;
	// lwz r11,204(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 204);
	// b 0x82f54c3c
	goto loc_82F54C3C;
loc_82F54C38:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82F54C3C:
	// stw r11,28(r17)
	PPC_STORE_U32(r17.u32 + 28, r11.u32);
	// mr r21,r27
	r21.u64 = r27.u64;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82f54e78
	if (cr6.eq) goto loc_82F54E78;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54e78
	if (cr6.eq) goto loc_82F54E78;
	// mr r26,r27
	r26.u64 = r27.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82F54C78:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// bl 0x82f39680
	sub_82F39680(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82f54cd0
	if (cr6.eq) goto loc_82F54CD0;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// blt cr6,0x82f54cb4
	if (cr6.lt) goto loc_82F54CB4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// ble cr6,0x82f54cb8
	if (!cr6.gt) goto loc_82F54CB8;
loc_82F54CB4:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F54CB8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f54cd0
	if (cr0.eq) goto loc_82F54CD0;
	// lwz r11,424(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f54cd0
	if (cr6.eq) goto loc_82F54CD0;
	// stb r23,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r23.u8);
loc_82F54CD0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f54e6c
	if (cr6.eq) goto loc_82F54E6C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bne cr6,0x82f54e50
	if (!cr6.eq) goto loc_82F54E50;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r16,392
	ctx.r3.s64 = r16.s64 + 392;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// beq 0x82f54e50
	if (cr0.eq) goto loc_82F54E50;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f54e50
	if (cr6.eq) goto loc_82F54E50;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82f54d38
	if (cr6.lt) goto loc_82F54D38;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// bne 0x82f54d3c
	if (!cr0.eq) goto loc_82F54D3C;
loc_82F54D38:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82F54D3C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f54e50
	if (!cr0.eq) goto loc_82F54E50;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f54d98
	if (cr0.eq) goto loc_82F54D98;
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
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f1a4f8
	sub_82F1A4F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f54d9c
	goto loc_82F54D9C;
loc_82F54D98:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82F54D9C:
	// stw r23,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r23.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f54dbc
	if (cr0.eq) goto loc_82F54DBC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F54DBC:
	// lwz r31,8(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f54de8
	if (cr6.eq) goto loc_82F54DE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x82f54de8
	if (cr0.gt) goto loc_82F54DE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F54DE8:
	// stw r30,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f54e08
	if (cr6.eq) goto loc_82F54E08;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54E08:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f54e28
	if (cr6.eq) goto loc_82F54E28;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54E28:
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r27,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r27.u32);
	// beq cr6,0x82f54e50
	if (cr6.eq) goto loc_82F54E50;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F54E50:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f54e6c
	if (!cr6.eq) goto loc_82F54E6C;
	// mr r21,r23
	r21.u64 = r23.u64;
loc_82F54E6C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82f54c78
	if (!cr0.eq) goto loc_82F54C78;
loc_82F54E78:
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82f553ec
	if (cr6.eq) goto loc_82F553EC;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r10,12(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f2f318
	sub_82F2F318(ctx, base);
	// addi r26,r16,392
	r26.s64 = r16.s64 + 392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f324d8
	sub_82F324D8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r25,2
	r25.s64 = 2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f55320
	if (cr6.eq) goto loc_82F55320;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f1c670
	sub_82F1C670(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f55190
	if (cr0.eq) goto loc_82F55190;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// bl 0x82f6ad40
	sub_82F6AD40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lbz r11,208(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f54fa8
	if (cr6.lt) goto loc_82F54FA8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F54FA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f55040
	if (cr6.eq) goto loc_82F55040;
	// li r11,4
	r11.s64 = 4;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f54fd4
	if (cr0.eq) goto loc_82F54FD4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F54FD4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f55000
	if (cr6.eq) goto loc_82F55000;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f55000
	if (cr0.gt) goto loc_82F55000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55000:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55024
	if (cr6.eq) goto loc_82F55024;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F55024:
	// lis r11,-32011
	r11.s64 = -2097872896;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-10824
	r11.s64 = r11.s64 + -10824;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82f36560
	sub_82F36560(ctx, base);
loc_82F55040:
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f550f4
	if (cr0.eq) goto loc_82F550F4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f550f0
	if (cr0.eq) goto loc_82F550F0;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r27.u16);
	// lis r28,4
	r28.s64 = 262144;
	// stb r27,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r27.u8);
	// stb r27,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, r27.u8);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f5508c
	if (cr0.eq) goto loc_82F5508C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F5508C:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f550b8
	if (cr6.eq) goto loc_82F550B8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bgt 0x82f550b8
	if (cr0.gt) goto loc_82F550B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F550B8:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f550dc
	if (cr6.eq) goto loc_82F550DC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F550DC:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82F550F0:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82F550F4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f552dc
	if (cr0.eq) goto loc_82F552DC;
	// li r11,3
	r11.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f5512c
	if (cr0.eq) goto loc_82F5512C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F5512C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f55158
	if (cr6.eq) goto loc_82F55158;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f55158
	if (cr0.gt) goto loc_82F55158;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55158:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f5517c
	if (cr6.eq) goto loc_82F5517C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5517C:
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// b 0x82f552dc
	goto loc_82F552DC;
loc_82F55190:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f552f8
	if (cr6.eq) goto loc_82F552F8;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,4
	r30.s64 = 4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lbz r11,192(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f551f0
	if (cr6.lt) goto loc_82F551F0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F551F0:
	// stb r21,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, r21.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r25.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f55238
	if (cr6.lt) goto loc_82F55238;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F55238:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f552d8
	if (cr0.eq) goto loc_82F552D8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f5526c
	if (cr0.eq) goto loc_82F5526C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F5526C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f55298
	if (cr6.eq) goto loc_82F55298;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f55298
	if (cr0.gt) goto loc_82F55298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55298:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f552bc
	if (cr6.eq) goto loc_82F552BC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F552BC:
	// lis r11,-32011
	r11.s64 = -2097872896;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,17536
	r11.s64 = r11.s64 + 17536;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82f36560
	sub_82F36560(ctx, base);
loc_82F552D8:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82F552DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f552f8
	if (cr6.eq) goto loc_82F552F8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F552F8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f55320
	if (!cr6.eq) goto loc_82F55320;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F55320:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f553dc
	if (cr6.eq) goto loc_82F553DC;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f553dc
	if (cr0.eq) goto loc_82F553DC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f38870
	sub_82F38870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f553dc
	if (cr0.eq) goto loc_82F553DC;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r27.u16);
	// lis r28,4
	r28.s64 = 262144;
	// stb r27,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r27.u8);
	// stb r27,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, r27.u8);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f55378
	if (cr0.eq) goto loc_82F55378;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F55378:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f553a4
	if (cr6.eq) goto loc_82F553A4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bgt 0x82f553a4
	if (cr0.gt) goto loc_82F553A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F553A4:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f553c8
	if (cr6.eq) goto loc_82F553C8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F553C8:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82F553DC:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,484(r16)
	PPC_STORE_U32(r16.u32 + 484, r11.u32);
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F553EC:
	// addi r3,r18,188
	ctx.r3.s64 = r18.s64 + 188;
	// lbz r6,543(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 543);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82fc19c8
	sub_82FC19C8(ctx, base);
	// clrlwi. r11,r15,24
	r11.u64 = r15.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f55414
	if (cr0.eq) goto loc_82F55414;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82f3a798
	sub_82F3A798(ctx, base);
loc_82F55414:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x82f5549c
	if (cr6.lt) goto loc_82F5549C;
	// lwz r31,532(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f5549c
	if (cr6.eq) goto loc_82F5549C;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82f554bc
	if (cr6.eq) goto loc_82F554BC;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r9,r9,6816
	ctx.r9.s64 = ctx.r9.s64 + 6816;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5336
	r11.s64 = r11.s64 + -5336;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
loc_82F5549C:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82f554bc
	if (cr6.eq) goto loc_82F554BC;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f554bc
	if (!cr6.eq) goto loc_82F554BC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82f3a380
	sub_82F3A380(ctx, base);
loc_82F554BC:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_82F554D8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82F554E0"))) PPC_WEAK_FUNC(sub_82F554E0);
PPC_FUNC_IMPL(__imp__sub_82F554E0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82f5581c
	if (cr0.eq) goto loc_82F5581C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82f5581c
	if (cr6.lt) goto loc_82F5581C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// addi r27,r1,104
	r27.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82f2f0d8
	sub_82F2F0D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F555A0:
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
	// bne 0x82f555a0
	if (!cr0.eq) goto loc_82F555A0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f555cc
	if (!cr0.eq) goto loc_82F555CC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F555CC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f557e8
	if (!cr0.eq) goto loc_82F557E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f557e4
	if (cr0.eq) goto loc_82F557E4;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// addi r27,r10,-4368
	r27.s64 = ctx.r10.s64 + -4368;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r26,r8,-4272
	r26.s64 = ctx.r8.s64 + -4272;
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r11,16384
	ctx.r5.s64 = r11.s64 + 16384;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lfs f1,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r31.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// bl 0x82f2aa58
	sub_82F2AA58(ctx, base);
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82f557a8
	if (cr6.lt) goto loc_82F557A8;
	// lis r10,32511
	ctx.r10.s64 = 2130640896;
	// ori r10,r10,65533
	ctx.r10.u64 = ctx.r10.u64 | 65533;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82f557a8
	if (cr6.gt) goto loc_82F557A8;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82f556c4
	if (!cr6.eq) goto loc_82F556C4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f556c8
	goto loc_82F556C8;
loc_82F556C4:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82F556C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// addi r25,r1,120
	r25.s64 = ctx.r1.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82f54918
	sub_82F54918(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f5573c
	if (cr0.eq) goto loc_82F5573C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F5573C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f55764
	if (!cr6.eq) goto loc_82F55764;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F55764:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x82f55788
	if (cr6.lt) goto loc_82F55788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
loc_82F55788:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f557a8
	if (cr6.eq) goto loc_82F557A8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F557A8:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f557c8
	if (cr6.eq) goto loc_82F557C8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F557C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f557e4
	if (cr6.eq) goto loc_82F557E4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F557E4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82F557E8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f557f4
	if (cr6.eq) goto loc_82F557F4;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F557F4:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f5581c
	if (!cr6.eq) goto loc_82F5581C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F5581C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82F55828"))) PPC_WEAK_FUNC(sub_82F55828);
PPC_FUNC_IMPL(__imp__sub_82F55828) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f55a08
	if (cr0.eq) goto loc_82F55A08;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f55a08
	if (cr6.lt) goto loc_82F55A08;
	// lis r11,1
	r11.s64 = 65536;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r27,r10,-4368
	r27.s64 = ctx.r10.s64 + -4368;
	// addi r26,r9,-4272
	r26.s64 = ctx.r9.s64 + -4272;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r11,16384
	ctx.r5.s64 = r11.s64 + 16384;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r31.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// bl 0x82f2aa58
	sub_82F2AA58(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82f559cc
	if (cr6.lt) goto loc_82F559CC;
	// lis r10,32511
	ctx.r10.s64 = 2130640896;
	// ori r10,r10,65533
	ctx.r10.u64 = ctx.r10.u64 | 65533;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82f559cc
	if (cr6.gt) goto loc_82F559CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82f54918
	sub_82F54918(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f55970
	if (cr0.eq) goto loc_82F55970;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F55970:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f55998
	if (!cr6.eq) goto loc_82F55998;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F55998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f559cc
	if (cr6.eq) goto loc_82F559CC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F559CC:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f559ec
	if (cr6.eq) goto loc_82F559EC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F559EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55a08
	if (cr6.eq) goto loc_82F55A08;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55A08:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F55A10"))) PPC_WEAK_FUNC(sub_82F55A10);
PPC_FUNC_IMPL(__imp__sub_82F55A10) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// bl 0x82f4c6b0
	sub_82F4C6B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f55ca4
	if (cr0.eq) goto loc_82F55CA4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x82f55ca4
	if (cr6.lt) goto loc_82F55CA4;
	// lis r11,1
	r11.s64 = 65536;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r27,r10,-4368
	r27.s64 = ctx.r10.s64 + -4368;
	// addi r26,r9,-4272
	r26.s64 = ctx.r9.s64 + -4272;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r11,16384
	ctx.r5.s64 = r11.s64 + 16384;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r30.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// bl 0x82f2aa58
	sub_82F2AA58(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82f55c68
	if (cr6.lt) goto loc_82F55C68;
	// lis r10,32511
	ctx.r10.s64 = 2130640896;
	// ori r10,r10,65533
	ctx.r10.u64 = ctx.r10.u64 | 65533;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82f55c68
	if (cr6.gt) goto loc_82F55C68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82f54918
	sub_82F54918(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f55b58
	if (cr0.eq) goto loc_82F55B58;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F55B58:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f55b80
	if (!cr6.eq) goto loc_82F55B80;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F55B80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f60458
	sub_82F60458(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f55c68
	if (cr6.eq) goto loc_82F55C68;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F55C68:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55c88
	if (cr6.eq) goto loc_82F55C88;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F55C88:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55ca4
	if (cr6.eq) goto loc_82F55CA4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55CA4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82F55CB0"))) PPC_WEAK_FUNC(sub_82F55CB0);
PPC_FUNC_IMPL(__imp__sub_82F55CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r10,7224
	ctx.r10.s64 = ctx.r10.s64 + 7224;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F55CF8"))) PPC_WEAK_FUNC(sub_82F55CF8);
PPC_FUNC_IMPL(__imp__sub_82F55CF8) {
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
	// bl 0x82f54300
	sub_82F54300(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f55d28
	if (cr0.eq) goto loc_82F55D28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55D28:
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

__attribute__((alias("__imp__sub_82F55D48"))) PPC_WEAK_FUNC(sub_82F55D48);
PPC_FUNC_IMPL(__imp__sub_82F55D48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f55dd0
	if (cr6.eq) goto loc_82F55DD0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r5,r11,r29
	ctx.r5.u64 = r11.u64 & r29.u64;
	// bl 0x82f08258
	sub_82F08258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f55dd0
	if (cr0.lt) goto loc_82F55DD0;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82f55de0
	goto loc_82F55DE0;
loc_82F55DD0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f2f988
	sub_82F2F988(ctx, base);
loc_82F55DE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F55DE8"))) PPC_WEAK_FUNC(sub_82F55DE8);
PPC_FUNC_IMPL(__imp__sub_82F55DE8) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,7372
	r11.s64 = r11.s64 + 7372;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f53988
	sub_82F53988(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// li r11,3
	r11.s64 = 3;
	// li r30,0
	r30.s64 = 0;
loc_82F55E20:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f55e20
	if (!cr0.lt) goto loc_82F55E20;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82f53a18
	sub_82F53A18(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
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

__attribute__((alias("__imp__sub_82F55E90"))) PPC_WEAK_FUNC(sub_82F55E90);
PPC_FUNC_IMPL(__imp__sub_82F55E90) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// addi r11,r11,7372
	r11.s64 = r11.s64 + 7372;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830ef9a8
	sub_830EF9A8(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55ec8
	if (cr6.eq) goto loc_82F55EC8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55EC8:
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f199a0
	sub_82F199A0(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55ee4
	if (cr6.eq) goto loc_82F55EE4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55EE4:
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82f54248
	sub_82F54248(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82f087c0
	sub_82F087C0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f55f10
	if (cr6.eq) goto loc_82F55F10;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55F10:
	// addi r30,r31,104
	r30.s64 = r31.s64 + 104;
	// li r29,3
	r29.s64 = 3;
loc_82F55F18:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f55f30
	if (cr6.lt) goto loc_82F55F30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F55F30:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82f55f18
	if (!cr0.lt) goto loc_82F55F18;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82f54188
	sub_82F54188(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82F55F58"))) PPC_WEAK_FUNC(sub_82F55F58);
PPC_FUNC_IMPL(__imp__sub_82F55F58) {
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
	// bl 0x82f55e90
	sub_82F55E90(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f55f88
	if (cr0.eq) goto loc_82F55F88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F55F88:
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

__attribute__((alias("__imp__sub_82F55FA8"))) PPC_WEAK_FUNC(sub_82F55FA8);
PPC_FUNC_IMPL(__imp__sub_82F55FA8) {
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
	// addi r10,r10,7384
	ctx.r10.s64 = ctx.r10.s64 + 7384;
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
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
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

