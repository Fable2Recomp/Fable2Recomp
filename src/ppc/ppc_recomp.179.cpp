#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82FE97B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FE97C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r26,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r26.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82fe980c
	if (ctx.cr6.lt) goto loc_82FE980C;
	// beq cr6,0x82fe9800
	if (ctx.cr6.eq) goto loc_82FE9800;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x82fe9818
	if (!ctx.cr6.lt) goto loc_82FE9818;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82fe9814
	goto loc_82FE9814;
loc_82FE9800:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r25,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r25.u32);
	// b 0x82fe9818
	goto loc_82FE9818;
loc_82FE980C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FE9814:
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
loc_82FE9818:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stb r24,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r24.u8);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fe9970
	if (ctx.cr0.eq) goto loc_82FE9970;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fe9970
	if (ctx.cr6.eq) goto loc_82FE9970;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fe9848
	if (ctx.cr6.eq) goto loc_82FE9848;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82FE9848:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fe985c
	if (ctx.cr6.eq) goto loc_82FE985C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82fe9944
	if (!ctx.cr6.eq) goto loc_82FE9944;
loc_82FE985C:
	// mullw r29,r11,r5
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fe98ac
	if (!ctx.cr6.eq) goto loc_82FE98AC;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82fe989c
	if (ctx.cr6.eq) goto loc_82FE989C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9894
	if (ctx.cr6.eq) goto loc_82FE9894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FE9894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FE9894:
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// stw r24,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r24.u32);
loc_82FE989C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stb r25,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r25.u8);
loc_82FE98AC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,9072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FE98D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,9076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9076);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FE98F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83005340
	ctx.lr = 0x82FE9910;
	sub_83005340(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8225fcd8
	ctx.lr = 0x82FE991C;
	sub_8225FCD8(ctx, base);
	// stw r29,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r29.u32);
	// stw r26,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82196c10
	ctx.lr = 0x82FE9938;
	sub_82196C10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b98760
	ctx.lr = 0x82FE9940;
	sub_82B98760(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82FE9944:
	// stb r25,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r25.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fe995c
	if (ctx.cr6.eq) goto loc_82FE995C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FE995C:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8219ccd8
	ctx.lr = 0x82FE9970;
	sub_8219CCD8(ctx, base);
loc_82FE9970:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FE97B8) {
	__imp__sub_82FE97B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FE9980;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fe9c38
	if (ctx.cr0.eq) goto loc_82FE9C38;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fe9c38
	if (ctx.cr6.eq) goto loc_82FE9C38;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fe9c38
	if (ctx.cr6.eq) goto loc_82FE9C38;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fe99d4
	if (!ctx.cr6.eq) goto loc_82FE99D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fec728
	ctx.lr = 0x82FE99CC;
	sub_82FEC728(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fe9c38
	if (ctx.cr0.eq) goto loc_82FE9C38;
loc_82FE99D4:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8538
	ctx.lr = 0x82FE99E4;
	sub_82FE8538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82fe8740
	ctx.lr = 0x82FE99F0;
	sub_82FE8740(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe88c0
	ctx.lr = 0x82FE9A00;
	sub_82FE88C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8860
	ctx.lr = 0x82FE9A0C;
	sub_82FE8860(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe82d8
	ctx.lr = 0x82FE9A18;
	sub_82FE82D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821b7020
	ctx.lr = 0x82FE9A30;
	sub_821B7020(ctx, base);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r9,1152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// rlwimi r9,r11,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1152, ctx.r9.u32);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r9.u64);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,1152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// rlwimi r9,r11,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1152, ctx.r9.u32);
	// ld r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fe9a8c
	if (ctx.cr6.eq) goto loc_82FE9A8C;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x822225c8
	ctx.lr = 0x82FE9A8C;
	sub_822225C8(ctx, base);
loc_82FE9A8C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fe9aa8
	if (ctx.cr6.eq) goto loc_82FE9AA8;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x822324e0
	ctx.lr = 0x82FE9AA8;
	sub_822324E0(ctx, base);
loc_82FE9AA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8920
	ctx.lr = 0x82FE9AB4;
	sub_82FE8920(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82fe9c28
	if (!ctx.cr6.gt) goto loc_82FE9C28;
	// addi r29,r31,652
	ctx.r29.s64 = ctx.r31.s64 + 652;
loc_82FE9AC4:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_82FE9ADC:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82fe9bec
	if (!ctx.cr6.lt) goto loc_82FE9BEC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r9,288
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 288, ctx.xer);
	// stfs f13,-28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stfs f12,-40(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -40, temp.u32);
	// stfs f11,-44(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -44, temp.u32);
	// stfs f0,-24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// stw r8,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// stfs f12,-12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r8,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f12,72(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// stfs f13,84(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stw r8,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stfs f11,96(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// stfs f12,100(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stfs f13,112(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f0,116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// blt cr6,0x82fe9adc
	if (ctx.cr6.lt) goto loc_82FE9ADC;
loc_82FE9BEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fe9c20
	if (ctx.cr6.eq) goto loc_82FE9C20;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r7,28
	ctx.r7.s64 = 28;
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r6,r31,608
	ctx.r6.s64 = ctx.r31.s64 + 608;
	// mulli r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 * 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82265c98
	ctx.lr = 0x82FE9C14;
	sub_82265C98(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_82FE9C20:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82fe9ac4
	if (ctx.cr6.lt) goto loc_82FE9AC4;
loc_82FE9C28:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
loc_82FE9C38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FE9978) {
	__imp__sub_82FE9978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FE9C48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fe9d64
	if (ctx.cr0.eq) goto loc_82FE9D64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b7020
	ctx.lr = 0x82FE9C74;
	sub_821B7020(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b7020
	ctx.lr = 0x82FE9C88;
	sub_821B7020(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82fe9ca0
	if (!ctx.cr6.eq) goto loc_82FE9CA0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82FE9CA0:
	// addi r27,r29,416
	ctx.r27.s64 = ctx.r29.s64 + 416;
loc_82FE9CA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x82fe9cb4
	if (!ctx.cr6.eq) goto loc_82FE9CB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82FE9CB4:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82fe9d44
	if (ctx.cr6.eq) goto loc_82FE9D44;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fe9cd8
	if (ctx.cr6.eq) goto loc_82FE9CD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FE9CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FE9CD8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fe9d14
	if (ctx.cr6.eq) goto loc_82FE9D14;
	// bl 0x821fc1f0
	ctx.lr = 0x82FE9CEC;
	sub_821FC1F0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9d00
	if (ctx.cr6.eq) goto loc_82FE9D00;
	// bl 0x821fc1f0
	ctx.lr = 0x82FE9CFC;
	sub_821FC1F0(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82FE9D00:
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FE9D14;
	sub_82FEC670(ctx, base);
loc_82FE9D14:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82fe9d28
	if (!ctx.cr6.eq) goto loc_82FE9D28;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82FE9D28:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FE9D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fe9ca4
	goto loc_82FE9CA4;
loc_82FE9D44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fe9480
	ctx.lr = 0x82FE9D4C;
	sub_82FE9480(ctx, base);
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9d5c
	if (ctx.cr6.eq) goto loc_82FE9D5C;
	// bl 0x82b9c200
	ctx.lr = 0x82FE9D5C;
	sub_82B9C200(ctx, base);
loc_82FE9D5C:
	// stw r28,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r28.u32);
	// stb r28,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r28.u8);
loc_82FE9D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FE9C40) {
	__imp__sub_82FE9C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9D70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fe9ddc
	if (!ctx.cr6.eq) goto loc_82FE9DDC;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fe9db8
	if (ctx.cr0.eq) goto loc_82FE9DB8;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fe9db0
	if (ctx.cr0.eq) goto loc_82FE9DB0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fe9e00
	if (!ctx.cr6.eq) goto loc_82FE9E00;
loc_82FE9DB0:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fe9e00
	if (!ctx.cr0.eq) goto loc_82FE9E00;
loc_82FE9DB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fe9dd0
	if (ctx.cr6.eq) goto loc_82FE9DD0;
	// bl 0x82ef6f38
	ctx.lr = 0x82FE9DD0;
	sub_82EF6F38(ctx, base);
loc_82FE9DD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fe9e00
	goto loc_82FE9E00;
loc_82FE9DDC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fe9df0
	if (ctx.cr6.gt) goto loc_82FE9DF0;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fe9e00
	if (ctx.cr6.gt) goto loc_82FE9E00;
loc_82FE9DF0:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82fe91c0
	ctx.lr = 0x82FE9E00;
	sub_82FE91C0(ctx, base);
loc_82FE9E00:
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

PPC_WEAK_FUNC(sub_82FE9D70) {
	__imp__sub_82FE9D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9E18) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82fe9e50
	goto loc_82FE9E50;
loc_82FE9E38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82fe9e18
	ctx.lr = 0x82FE9E44;
	sub_82FE9E18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82FE9E50;
	sub_824FE010(ctx, base);
loc_82FE9E50:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fe9e38
	if (ctx.cr6.eq) goto loc_82FE9E38;
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

PPC_WEAK_FUNC(sub_82FE9E18) {
	__imp__sub_82FE9E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FE9E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r11,-3272
	ctx.r30.s64 = ctx.r11.s64 + -3272;
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82FE9E9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8048
	ctx.lr = 0x82FE9EAC;
	sub_82FE8048(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fe9ecc
	if (ctx.cr0.eq) goto loc_82FE9ECC;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 20, ctx.xer);
	// blt cr6,0x82fe9e9c
	if (ctx.cr6.lt) goto loc_82FE9E9C;
	// b 0x82fe9ed0
	goto loc_82FE9ED0;
loc_82FE9ECC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FE9ED0:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// addi r30,r11,-27352
	ctx.r30.s64 = ctx.r11.s64 + -27352;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82FE9EE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8098
	ctx.lr = 0x82FE9EF0;
	sub_82FE8098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fe9f10
	if (ctx.cr0.eq) goto loc_82FE9F10;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// blt cr6,0x82fe9ee0
	if (ctx.cr6.lt) goto loc_82FE9EE0;
	// b 0x82fe9f14
	goto loc_82FE9F14;
loc_82FE9F10:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FE9F14:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// addi r29,r11,-27328
	ctx.r29.s64 = ctx.r11.s64 + -27328;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82FE9F24:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fe9f44
	if (ctx.cr6.eq) goto loc_82FE9F44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8198
	ctx.lr = 0x82FE9F3C;
	sub_82FE8198(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fe9f5c
	if (ctx.cr0.eq) goto loc_82FE9F5C;
loc_82FE9F44:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,100
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 100, ctx.xer);
	// blt cr6,0x82fe9f24
	if (ctx.cr6.lt) goto loc_82FE9F24;
	// b 0x82fe9f60
	goto loc_82FE9F60;
loc_82FE9F5C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FE9F60:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fe9f78
	if (!ctx.cr0.eq) goto loc_82FE9F78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe9480
	ctx.lr = 0x82FE9F70;
	sub_82FE9480(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fe9f7c
	goto loc_82FE9F7C;
loc_82FE9F78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FE9F7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FE9E78) {
	__imp__sub_82FE9E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FE9F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FE9F90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fe9fb4
	if (!ctx.cr6.eq) goto loc_82FE9FB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82fea008
	goto loc_82FEA008;
loc_82FE9FB4:
	// stw r7,9072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9072, ctx.r7.u32);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// stw r6,9076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9076, ctx.r6.u32);
	// bl 0x82fe6718
	ctx.lr = 0x82FE9FC4;
	sub_82FE6718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe9e78
	ctx.lr = 0x82FE9FCC;
	sub_82FE9E78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fe9fe8
	if (!ctx.cr0.eq) goto loc_82FE9FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe9480
	ctx.lr = 0x82FE9FDC;
	sub_82FE9480(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82fea008
	goto loc_82FEA008;
loc_82FE9FE8:
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FE9FFC;
	sub_82CA2C60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82FEA008:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FE9F88) {
	__imp__sub_82FE9F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA010) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// neg r9,r5
	ctx.r9.s64 = -ctx.r5.s64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea02c
	if (!ctx.cr6.eq) goto loc_82FEA02C;
	// twi 31,r0,22
loc_82FEA02C:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82fea050
	if (ctx.cr6.gt) goto loc_82FEA050;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fea054
	if (!ctx.cr6.lt) goto loc_82FEA054;
loc_82FEA050:
	// twi 31,r0,22
loc_82FEA054:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEA010) {
	__imp__sub_82FEA010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA068) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82fe9e18
	ctx.lr = 0x82FEA088;
	sub_82FE9E18(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FEA068) {
	__imp__sub_82FEA068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fe9408
	ctx.lr = 0x82FEA0D8;
	sub_82FE9408(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fea0e8
	if (ctx.cr0.eq) goto loc_82FEA0E8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82FEA0E8:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fea0f4
	if (ctx.cr0.eq) goto loc_82FEA0F4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82FEA0F4:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fea100
	if (ctx.cr0.eq) goto loc_82FEA100;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82FEA100:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEA0C0) {
	__imp__sub_82FEA0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fea140
	if (!ctx.cr6.gt) goto loc_82FEA140;
	// twi 31,r0,22
loc_82FEA140:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fea010
	ctx.lr = 0x82FEA158;
	sub_82FEA010(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fea168
	if (!ctx.cr6.eq) goto loc_82FEA168;
	// twi 31,r0,22
loc_82FEA168:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fea17c
	if (ctx.cr6.lt) goto loc_82FEA17C;
	// twi 31,r0,22
loc_82FEA17C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEA120) {
	__imp__sub_82FEA120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA190) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fea0c0
	ctx.lr = 0x82FEA1A8;
	sub_82FEA0C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FEA190) {
	__imp__sub_82FEA190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEA1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEA210;
	sub_82FE9D70(ctx, base);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82fea248
	if (!ctx.cr6.gt) goto loc_82FEA248;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82fea248
	if (ctx.cr6.eq) goto loc_82FEA248;
	// stw r29,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8740
	ctx.lr = 0x82FEA248;
	sub_82FE8740(ctx, base);
loc_82FEA248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEA1E8) {
	__imp__sub_82FEA1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA250) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea2dc
	if (ctx.cr6.eq) goto loc_82FEA2DC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// blt 0x82fea2b0
	if (ctx.cr0.lt) goto loc_82FEA2B0;
	// lwz r9,464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82FEA28C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x82fea2a8
	if (ctx.cr6.gt) goto loc_82FEA2A8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82fea28c
	if (!ctx.cr0.lt) goto loc_82FEA28C;
	// b 0x82fea2b0
	goto loc_82FEA2B0;
loc_82FEA2A8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82FEA2B0:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEA2C0;
	sub_82FE9D70(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82fea2dc
	if (ctx.cr6.eq) goto loc_82FEA2DC;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8740
	ctx.lr = 0x82FEA2DC;
	sub_82FE8740(ctx, base);
loc_82FEA2DC:
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

PPC_WEAK_FUNC(sub_82FEA250) {
	__imp__sub_82FEA250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA2F8) {
	PPC_FUNC_PROLOGUE();
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// beq cr6,0x82fea318
	if (ctx.cr6.eq) goto loc_82FEA318;
	// lwz r10,40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fea31c
	if (ctx.cr6.eq) goto loc_82FEA31C;
loc_82FEA318:
	// twi 31,r0,22
loc_82FEA31C:
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r11,44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fea370
	if (ctx.cr6.eq) goto loc_82FEA370;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82fea36c
	if (ctx.cr6.eq) goto loc_82FEA36C;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82FEA34C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82fea34c
	if (!ctx.cr6.eq) goto loc_82FEA34C;
loc_82FEA36C:
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
loc_82FEA370:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEA2F8) {
	__imp__sub_82FEA2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FEA380;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x830eb648
	ctx.lr = 0x82FEA39C;
	sub_830EB648(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b6da0
	ctx.lr = 0x82FEA3B8;
	sub_821B6DA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8219ccd8
	ctx.lr = 0x82FEA3C4;
	sub_8219CCD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82FEA3CC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fea52c
	if (ctx.cr6.eq) goto loc_82FEA52C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fea52c
	if (!ctx.cr6.lt) goto loc_82FEA52C;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// blt cr6,0x82fea3fc
	if (ctx.cr6.lt) goto loc_82FEA3FC;
	// twi 31,r0,22
loc_82FEA3FC:
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82fea444
	if (!ctx.cr6.eq) goto loc_82FEA444;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fea418
	if (ctx.cr6.lt) goto loc_82FEA418;
	// twi 31,r0,22
loc_82FEA418:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r25,40(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// blt cr6,0x82fea42c
	if (ctx.cr6.lt) goto loc_82FEA42C;
	// twi 31,r0,22
loc_82FEA42C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,9072(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9072);
	// lwz r5,9076(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9076);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82fe9318
	ctx.lr = 0x82FEA440;
	sub_82FE9318(ctx, base);
	// b 0x82fea48c
	goto loc_82FEA48C;
loc_82FEA444:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fea450
	if (ctx.cr6.lt) goto loc_82FEA450;
	// twi 31,r0,22
loc_82FEA450:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82fea48c
	if (!ctx.cr6.eq) goto loc_82FEA48C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fea464
	if (ctx.cr6.lt) goto loc_82FEA464;
	// twi 31,r0,22
loc_82FEA464:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r25,40(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// blt cr6,0x82fea478
	if (ctx.cr6.lt) goto loc_82FEA478;
	// twi 31,r0,22
loc_82FEA478:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,9072(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9072);
	// lwz r5,9076(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9076);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82fe9318
	ctx.lr = 0x82FEA48C;
	sub_82FE9318(ctx, base);
loc_82FEA48C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fea520
	if (ctx.cr0.eq) goto loc_82FEA520;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fea4c0
	if (ctx.cr6.eq) goto loc_82FEA4C0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fea4c4
	if (ctx.cr6.lt) goto loc_82FEA4C4;
loc_82FEA4C0:
	// twi 31,r0,22
loc_82FEA4C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r26,r31
	ctx.r29.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bl 0x82fea120
	ctx.lr = 0x82FEA4D0;
	sub_82FEA120(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ldx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + ctx.r31.u32);
	// stwx r10,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea50c
	if (ctx.cr6.eq) goto loc_82FEA50C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fea50c
	if (ctx.cr0.eq) goto loc_82FEA50C;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82FEA50C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r26,r26,-8
	ctx.r26.s64 = ctx.r26.s64 + -8;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
loc_82FEA520:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// b 0x82fea3cc
	goto loc_82FEA3CC;
loc_82FEA52C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eb4f8
	ctx.lr = 0x82FEA534;
	sub_830EB4F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEA378) {
	__imp__sub_82FEA378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fea564
	if (!ctx.cr6.gt) goto loc_82FEA564;
	// twi 31,r0,22
loc_82FEA564:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82fea578
	if (!ctx.cr6.gt) goto loc_82FEA578;
	// twi 31,r0,22
loc_82FEA578:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82fea2f8
	ctx.lr = 0x82FEA590;
	sub_82FEA2F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEA540) {
	__imp__sub_82FEA540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FEA5A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea60c
	if (ctx.cr6.eq) goto loc_82FEA60C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x82FEA5D8;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1ec0
	ctx.lr = 0x82FEA5E4;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82FEA5E8;
	sub_822F1F00(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826c3fa8
	ctx.lr = 0x82FEA5FC;
	sub_826C3FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1db0
	ctx.lr = 0x82FEA60C;
	sub_822F1DB0(ctx, base);
loc_82FEA60C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82fe9288
	ctx.lr = 0x82FEA618;
	sub_82FE9288(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,17(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea630
	if (ctx.cr6.eq) goto loc_82FEA630;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82fea658
	goto loc_82FEA658;
loc_82FEA630:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r11,17(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea648
	if (ctx.cr6.eq) goto loc_82FEA648;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x82fea658
	goto loc_82FEA658;
loc_82FEA648:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82fea730
	if (!ctx.cr6.eq) goto loc_82FEA730;
loc_82FEA658:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fea66c
	if (!ctx.cr6.eq) goto loc_82FEA66C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82FEA66C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea684
	if (!ctx.cr6.eq) goto loc_82FEA684;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82fea69c
	goto loc_82FEA69C;
loc_82FEA684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea698
	if (!ctx.cr6.eq) goto loc_82FEA698;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82fea69c
	goto loc_82FEA69C;
loc_82FEA698:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82FEA69C:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea6e4
	if (!ctx.cr6.eq) goto loc_82FEA6E4;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea6c0
	if (ctx.cr6.eq) goto loc_82FEA6C0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82fea6e0
	goto loc_82FEA6E0;
loc_82FEA6C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82fea6d4
	goto loc_82FEA6D4;
loc_82FEA6CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82FEA6D4:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fea6cc
	if (ctx.cr6.eq) goto loc_82FEA6CC;
loc_82FEA6E0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82FEA6E4:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea7c4
	if (!ctx.cr6.eq) goto loc_82FEA7C4;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea708
	if (ctx.cr6.eq) goto loc_82FEA708;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82fea728
	goto loc_82FEA728;
loc_82FEA708:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82fea71c
	goto loc_82FEA71C;
loc_82FEA714:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82FEA71C:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fea714
	if (ctx.cr6.eq) goto loc_82FEA714;
loc_82FEA728:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82fea7c4
	goto loc_82FEA7C4;
loc_82FEA730:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fea750
	if (!ctx.cr6.eq) goto loc_82FEA750;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82fea778
	goto loc_82FEA778;
loc_82FEA750:
	// lbz r10,17(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea764
	if (!ctx.cr6.eq) goto loc_82FEA764;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82FEA764:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82FEA778:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea790
	if (!ctx.cr6.eq) goto loc_82FEA790;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82fea7ac
	goto loc_82FEA7AC;
loc_82FEA790:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fea7a8
	if (!ctx.cr6.eq) goto loc_82FEA7A8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82fea7ac
	goto loc_82FEA7AC;
loc_82FEA7A8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82FEA7AC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r9,16(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16, ctx.r9.u8);
loc_82FEA7C4:
	// lbz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fea964
	if (!ctx.cr6.eq) goto loc_82FEA964;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fea960
	if (ctx.cr6.eq) goto loc_82FEA960;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FEA7E8:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fea960
	if (!ctx.cr6.eq) goto loc_82FEA960;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fea8a4
	if (!ctx.cr6.eq) goto loc_82FEA8A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea828
	if (!ctx.cr6.eq) goto loc_82FEA828;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fe7f78
	ctx.lr = 0x82FEA824;
	sub_82FE7F78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82FEA828:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea8f8
	if (!ctx.cr6.eq) goto loc_82FEA8F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fea854
	if (!ctx.cr6.eq) goto loc_82FEA854;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82fea8f4
	if (ctx.cr6.eq) goto loc_82FEA8F4;
loc_82FEA854:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fea880
	if (!ctx.cr6.eq) goto loc_82FEA880;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r30.u8);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// bl 0x82fe7fe0
	ctx.lr = 0x82FEA87C;
	sub_82FE7FE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82FEA880:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x82fe7f78
	ctx.lr = 0x82FEA8A0;
	sub_82FE7F78(ctx, base);
	// b 0x82fea960
	goto loc_82FEA960;
loc_82FEA8A4:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea8c8
	if (!ctx.cr6.eq) goto loc_82FEA8C8;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fe7fe0
	ctx.lr = 0x82FEA8C4;
	sub_82FE7FE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FEA8C8:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fea8f8
	if (!ctx.cr6.eq) goto loc_82FEA8F8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fea914
	if (!ctx.cr6.eq) goto loc_82FEA914;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fea914
	if (!ctx.cr6.eq) goto loc_82FEA914;
loc_82FEA8F4:
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
loc_82FEA8F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fea7e8
	if (!ctx.cr6.eq) goto loc_82FEA7E8;
	// b 0x82fea960
	goto loc_82FEA960;
loc_82FEA914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fea940
	if (!ctx.cr6.eq) goto loc_82FEA940;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r30.u8);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// bl 0x82fe7f78
	ctx.lr = 0x82FEA93C;
	sub_82FE7F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FEA940:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x82fe7fe0
	ctx.lr = 0x82FEA960;
	sub_82FE7FE0(ctx, base);
loc_82FEA960:
	// stb r30,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r30.u8);
loc_82FEA964:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FEA96C;
	sub_824FE010(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fea980
	if (ctx.cr6.eq) goto loc_82FEA980;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82FEA980:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEA5A0) {
	__imp__sub_82FEA5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEA998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FEA9A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// beq cr6,0x82fea9cc
	if (ctx.cr6.eq) goto loc_82FEA9CC;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82fea9d0
	if (ctx.cr6.eq) goto loc_82FEA9D0;
loc_82FEA9CC:
	// twi 31,r0,22
loc_82FEA9D0:
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// bne cr6,0x82fea9f4
	if (!ctx.cr6.eq) goto loc_82FEA9F4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82feaa00
	goto loc_82FEAA00;
loc_82FEA9F4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
loc_82FEAA00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82feadb4
	if (ctx.cr6.eq) goto loc_82FEADB4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feaa18
	if (!ctx.cr6.eq) goto loc_82FEAA18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaa24
	goto loc_82FEAA24;
loc_82FEAA18:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAA24:
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82feaa40
	if (!ctx.cr6.lt) goto loc_82FEAA40;
	// bl 0x82beff50
	ctx.lr = 0x82FEAA3C;
	sub_82BEFF50(ctx, base);
	// b 0x82feadb4
	goto loc_82FEADB4;
loc_82FEAA40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feaa50
	if (!ctx.cr6.eq) goto loc_82FEAA50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaa5c
	goto loc_82FEAA5C;
loc_82FEAA50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAA5C:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feabd4
	if (!ctx.cr6.lt) goto loc_82FEABD4;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82feaa80
	if (ctx.cr6.lt) goto loc_82FEAA80;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82FEAA80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feaa90
	if (!ctx.cr6.eq) goto loc_82FEAA90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaa9c
	goto loc_82FEAA9C;
loc_82FEAA90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAA9C:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feaac8
	if (!ctx.cr6.lt) goto loc_82FEAAC8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feaab8
	if (!ctx.cr6.eq) goto loc_82FEAAB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaac4
	goto loc_82FEAAC4;
loc_82FEAAB8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAAC4:
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82FEAAC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fe9390
	ctx.lr = 0x82FEAAD4;
	sub_82FE9390(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82feab08
	goto loc_82FEAB08;
loc_82FEAAE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feab00
	if (ctx.cr6.eq) goto loc_82FEAB00;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82FEAB00:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FEAB08:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82feaae8
	if (!ctx.cr6.eq) goto loc_82FEAAE8;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82feab48
	if (ctx.cr6.eq) goto loc_82FEAB48;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_82FEAB1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feab38
	if (ctx.cr6.eq) goto loc_82FEAB38;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82FEAB38:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82feab1c
	if (!ctx.cr6.eq) goto loc_82FEAB1C;
loc_82FEAB48:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82feab84
	if (ctx.cr6.eq) goto loc_82FEAB84;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82FEAB58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feab74
	if (ctx.cr6.eq) goto loc_82FEAB74;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82FEAB74:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82feab58
	if (!ctx.cr6.eq) goto loc_82FEAB58;
loc_82FEAB84:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82feab98
	if (!ctx.cr6.eq) goto loc_82FEAB98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaba4
	goto loc_82FEABA4;
loc_82FEAB98:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEABA4:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feabb4
	if (ctx.cr6.eq) goto loc_82FEABB4;
	// bl 0x824fe010
	ctx.lr = 0x82FEABB4;
	sub_824FE010(ctx, base);
loc_82FEABB4:
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x82feadb4
	goto loc_82FEADB4;
loc_82FEABD4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82feabe4
	if (!ctx.cr6.gt) goto loc_82FEABE4;
	// twi 31,r0,22
loc_82FEABE4:
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82feabf4
	if (ctx.cr6.eq) goto loc_82FEABF4;
	// twi 31,r0,22
loc_82FEABF4:
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fead10
	if (!ctx.cr6.lt) goto loc_82FEAD10;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// beq cr6,0x82feac44
	if (ctx.cr6.eq) goto loc_82FEAC44;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82FEAC1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82feac34
	if (ctx.cr6.eq) goto loc_82FEAC34;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82FEAC34:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82feac1c
	if (!ctx.cr6.eq) goto loc_82FEAC1C;
loc_82FEAC44:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82feac58
	if (!ctx.cr6.gt) goto loc_82FEAC58;
	// twi 31,r0,22
loc_82FEAC58:
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82feac64
	if (ctx.cr6.eq) goto loc_82FEAC64;
	// twi 31,r0,22
loc_82FEAC64:
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// bne cr6,0x82feac78
	if (!ctx.cr6.eq) goto loc_82FEAC78;
	// twi 31,r0,22
loc_82FEAC78:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82feac98
	if (ctx.cr6.gt) goto loc_82FEAC98;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feac9c
	if (!ctx.cr6.lt) goto loc_82FEAC9C;
loc_82FEAC98:
	// twi 31,r0,22
loc_82FEAC9C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82feacd0
	if (ctx.cr6.eq) goto loc_82FEACD0;
loc_82FEACA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82feacc0
	if (ctx.cr6.eq) goto loc_82FEACC0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82FEACC0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82feaca8
	if (!ctx.cr6.eq) goto loc_82FEACA8;
loc_82FEACD0:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82feadb4
	if (ctx.cr6.eq) goto loc_82FEADB4;
	// subf r9,r27,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r27.s64;
loc_82FEACEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82feacec
	if (!ctx.cr6.eq) goto loc_82FEACEC;
	// b 0x82feadb4
	goto loc_82FEADB4;
loc_82FEAD10:
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fead50
	if (ctx.cr6.eq) goto loc_82FEAD50;
loc_82FEAD28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fead40
	if (ctx.cr6.eq) goto loc_82FEAD40;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82FEAD40:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fead28
	if (!ctx.cr6.eq) goto loc_82FEAD28;
loc_82FEAD50:
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fead84
	if (ctx.cr6.eq) goto loc_82FEAD84;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82FEAD64:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82fead64
	if (!ctx.cr6.eq) goto loc_82FEAD64;
loc_82FEAD84:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82feadb4
	if (ctx.cr6.eq) goto loc_82FEADB4;
	// subf r10,r27,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r27.s64;
loc_82FEAD94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82fead94
	if (!ctx.cr6.eq) goto loc_82FEAD94;
loc_82FEADB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEA998) {
	__imp__sub_82FEA998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FEADC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feadf0
	if (!ctx.cr6.eq) goto loc_82FEADF0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82feadfc
	goto loc_82FEADFC;
loc_82FEADF0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
loc_82FEADFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82feb108
	if (ctx.cr6.eq) goto loc_82FEB108;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feae14
	if (!ctx.cr6.eq) goto loc_82FEAE14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feae20
	goto loc_82FEAE20;
loc_82FEAE14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAE20:
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82feae3c
	if (!ctx.cr6.lt) goto loc_82FEAE3C;
	// bl 0x82beff50
	ctx.lr = 0x82FEAE38;
	sub_82BEFF50(ctx, base);
	// b 0x82feb108
	goto loc_82FEB108;
loc_82FEAE3C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feae4c
	if (!ctx.cr6.eq) goto loc_82FEAE4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feae58
	goto loc_82FEAE58;
loc_82FEAE4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAE58:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feafcc
	if (!ctx.cr6.lt) goto loc_82FEAFCC;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82feae7c
	if (ctx.cr6.lt) goto loc_82FEAE7C;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82FEAE7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feae8c
	if (!ctx.cr6.eq) goto loc_82FEAE8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feae98
	goto loc_82FEAE98;
loc_82FEAE8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAE98:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feaec4
	if (!ctx.cr6.lt) goto loc_82FEAEC4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82feaeb4
	if (!ctx.cr6.eq) goto loc_82FEAEB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaec0
	goto loc_82FEAEC0;
loc_82FEAEB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAEC0:
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82FEAEC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fe9390
	ctx.lr = 0x82FEAED0;
	sub_82FE9390(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82feaf04
	goto loc_82FEAF04;
loc_82FEAEE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feaefc
	if (ctx.cr6.eq) goto loc_82FEAEFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82FEAEFC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FEAF04:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82feaee4
	if (!ctx.cr6.eq) goto loc_82FEAEE4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82feaf34
	if (ctx.cr6.eq) goto loc_82FEAF34;
loc_82FEAF1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82feaf28
	if (ctx.cr6.eq) goto loc_82FEAF28;
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
loc_82FEAF28:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82feaf1c
	if (!ctx.cr0.eq) goto loc_82FEAF1C;
loc_82FEAF34:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82feaf7c
	if (ctx.cr6.eq) goto loc_82FEAF7C;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82FEAF54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82feaf6c
	if (ctx.cr6.eq) goto loc_82FEAF6C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82FEAF6C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82feaf54
	if (!ctx.cr6.eq) goto loc_82FEAF54;
loc_82FEAF7C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82feaf90
	if (!ctx.cr6.eq) goto loc_82FEAF90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feaf9c
	goto loc_82FEAF9C;
loc_82FEAF90:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_82FEAF9C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feafac
	if (ctx.cr6.eq) goto loc_82FEAFAC;
	// bl 0x824fe010
	ctx.lr = 0x82FEAFAC;
	sub_824FE010(ctx, base);
loc_82FEAFAC:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82feb108
	goto loc_82FEB108;
loc_82FEAFCC:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82feb074
	if (!ctx.cr6.lt) goto loc_82FEB074;
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// beq cr6,0x82feb020
	if (ctx.cr6.eq) goto loc_82FEB020;
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
loc_82FEAFF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82feb010
	if (ctx.cr6.eq) goto loc_82FEB010;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_82FEB010:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82feaff8
	if (!ctx.cr6.eq) goto loc_82FEAFF8;
loc_82FEB020:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// subf. r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82feb04c
	if (ctx.cr0.eq) goto loc_82FEB04C;
loc_82FEB034:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb040
	if (ctx.cr6.eq) goto loc_82FEB040;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
loc_82FEB040:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82feb034
	if (!ctx.cr0.eq) goto loc_82FEB034;
loc_82FEB04C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82feb068
	goto loc_82FEB068;
loc_82FEB060:
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82FEB068:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82feb060
	if (!ctx.cr6.eq) goto loc_82FEB060;
	// b 0x82feb108
	goto loc_82FEB108;
loc_82FEB074:
	// rlwinm r6,r31,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r8,r6,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82feb0b4
	if (ctx.cr6.eq) goto loc_82FEB0B4;
loc_82FEB08C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82feb0a4
	if (ctx.cr6.eq) goto loc_82FEB0A4;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
loc_82FEB0A4:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82feb08c
	if (!ctx.cr6.eq) goto loc_82FEB08C;
loc_82FEB0B4:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82feb0e8
	if (ctx.cr6.eq) goto loc_82FEB0E8;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_82FEB0C8:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82feb0c8
	if (!ctx.cr6.eq) goto loc_82FEB0C8;
loc_82FEB0E8:
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82feb108
	if (ctx.cr6.eq) goto loc_82FEB108;
loc_82FEB0F8:
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82feb0f8
	if (!ctx.cr6.eq) goto loc_82FEB0F8;
loc_82FEB108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEADC0) {
	__imp__sub_82FEADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FEB118;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82feb148
	if (ctx.cr6.eq) goto loc_82FEB148;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82feb14c
	if (ctx.cr6.eq) goto loc_82FEB14C;
loc_82FEB148:
	// twi 31,r0,22
loc_82FEB14C:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82feb198
	if (!ctx.cr6.eq) goto loc_82FEB198;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feb170
	if (ctx.cr6.eq) goto loc_82FEB170;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82feb174
	if (ctx.cr6.eq) goto loc_82FEB174;
loc_82FEB170:
	// twi 31,r0,22
loc_82FEB174:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82feb198
	if (!ctx.cr6.eq) goto loc_82FEB198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fea068
	ctx.lr = 0x82FEB184;
	sub_82FEA068(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82feb1e4
	goto loc_82FEB1E4;
loc_82FEB198:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82feb1a8
	if (ctx.cr6.eq) goto loc_82FEB1A8;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82feb1ac
	if (ctx.cr6.eq) goto loc_82FEB1AC;
loc_82FEB1A8:
	// twi 31,r0,22
loc_82FEB1AC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82feb1e0
	if (ctx.cr6.eq) goto loc_82FEB1E0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82fe9288
	ctx.lr = 0x82FEB1C4;
	sub_82FE9288(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fea5a0
	ctx.lr = 0x82FEB1D4;
	sub_82FEA5A0(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82feb198
	goto loc_82FEB198;
loc_82FEB1E0:
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
loc_82FEB1E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEB110) {
	__imp__sub_82FEB110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEB1F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb228
	if (ctx.cr6.eq) goto loc_82FEB228;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82feb230
	if (!ctx.cr0.eq) goto loc_82FEB230;
loc_82FEB228:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82feb260
	goto loc_82FEB260;
loc_82FEB230:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feb23c
	if (!ctx.cr6.gt) goto loc_82FEB23C;
	// twi 31,r0,22
loc_82FEB23C:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82feb250
	if (ctx.cr6.eq) goto loc_82FEB250;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82feb254
	if (ctx.cr6.eq) goto loc_82FEB254;
loc_82FEB250:
	// twi 31,r0,22
loc_82FEB254:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
loc_82FEB260:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82feadc0
	ctx.lr = 0x82FEB26C;
	sub_82FEADC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feb280
	if (!ctx.cr6.gt) goto loc_82FEB280;
	// twi 31,r0,22
loc_82FEB280:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x82feb2b0
	if (ctx.cr6.gt) goto loc_82FEB2B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82feb2b4
	if (!ctx.cr6.lt) goto loc_82FEB2B4;
loc_82FEB2B0:
	// twi 31,r0,22
loc_82FEB2B4:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEB1F0) {
	__imp__sub_82FEB1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82feb110
	ctx.lr = 0x82FEB310;
	sub_82FEB110(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82FEB318;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEB2D0) {
	__imp__sub_82FEB2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82feb35c
	if (!ctx.cr6.eq) goto loc_82FEB35C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82feb368
	goto loc_82FEB368;
loc_82FEB35C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
loc_82FEB368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb3ac
	if (ctx.cr6.eq) goto loc_82FEB3AC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82feb3ac
	if (!ctx.cr6.lt) goto loc_82FEB3AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb3a0
	if (ctx.cr6.eq) goto loc_82FEB3A0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82FEB3A0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82feb3d4
	goto loc_82FEB3D4;
loc_82FEB3AC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feb3bc
	if (!ctx.cr6.gt) goto loc_82FEB3BC;
	// twi 31,r0,22
loc_82FEB3BC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82feb1f0
	ctx.lr = 0x82FEB3D4;
	sub_82FEB1F0(ctx, base);
loc_82FEB3D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEB338) {
	__imp__sub_82FEB338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEB3F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,31576
	ctx.r10.s64 = ctx.r10.s64 + 31576;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb4f4
	if (ctx.cr0.eq) goto loc_82FEB4F4;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fea378
	ctx.lr = 0x82FEB420;
	sub_82FEA378(ctx, base);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fea378
	ctx.lr = 0x82FEB434;
	sub_82FEA378(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,31548
	ctx.r28.s64 = ctx.r11.s64 + 31548;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb498
	if (ctx.cr6.eq) goto loc_82FEB498;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb498
	if (ctx.cr0.eq) goto loc_82FEB498;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r4,r11,-27355
	ctx.r4.s64 = ctx.r11.s64 + -27355;
	// lbz r11,-27355(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27355);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82feb498
	if (!ctx.cr0.eq) goto loc_82FEB498;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,199
	ctx.r10.s64 = 199;
	// addi r11,r11,31516
	ctx.r11.s64 = ctx.r11.s64 + 31516;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x830eb310
	ctx.lr = 0x82FEB48C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82feb498
	if (!ctx.cr0.eq) goto loc_82FEB498;
	// twi 31,r0,22
loc_82FEB498:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feb4f4
	if (ctx.cr6.eq) goto loc_82FEB4F4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb4f4
	if (ctx.cr0.eq) goto loc_82FEB4F4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// lbz r11,-27356(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27356);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82feb4f4
	if (!ctx.cr0.eq) goto loc_82FEB4F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// addi r11,r11,31492
	ctx.r11.s64 = ctx.r11.s64 + 31492;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x830eb310
	ctx.lr = 0x82FEB4E8;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82feb4f4
	if (!ctx.cr0.eq) goto loc_82FEB4F4;
	// twi 31,r0,22
loc_82FEB4F4:
	// addi r29,r30,416
	ctx.r29.s64 = ctx.r30.s64 + 416;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82feb5b4
	goto loc_82FEB5B4;
loc_82FEB500:
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82feb514
	if (!ctx.cr6.eq) goto loc_82FEB514;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82FEB514:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82feb530
	if (ctx.cr6.eq) goto loc_82FEB530;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEB530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FEB530:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82feb578
	if (ctx.cr6.eq) goto loc_82FEB578;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb54c
	if (ctx.cr6.eq) goto loc_82FEB54C;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB54C;
	sub_821FC1F0(ctx, base);
loc_82FEB54C:
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb564
	if (ctx.cr6.eq) goto loc_82FEB564;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB560;
	sub_821FC1F0(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82FEB564:
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FEB578;
	sub_82FEC670(ctx, base);
loc_82FEB578:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEB5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FEB5B4:
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82feb500
	if (!ctx.cr6.eq) goto loc_82FEB500;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82feb5d4
	if (ctx.cr0.eq) goto loc_82FEB5D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe9c40
	ctx.lr = 0x82FEB5D4;
	sub_82FE9C40(ctx, base);
loc_82FEB5D4:
	// lwz r3,8696(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb5e4
	if (ctx.cr6.eq) goto loc_82FEB5E4;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB5E4;
	sub_821FC1F0(ctx, base);
loc_82FEB5E4:
	// lwz r3,8692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb5f4
	if (ctx.cr6.eq) goto loc_82FEB5F4;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB5F4;
	sub_821FC1F0(ctx, base);
loc_82FEB5F4:
	// lwz r3,8688(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb604
	if (ctx.cr6.eq) goto loc_82FEB604;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB604;
	sub_821FC1F0(ctx, base);
loc_82FEB604:
	// lwz r3,8684(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb614
	if (ctx.cr6.eq) goto loc_82FEB614;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB614;
	sub_821FC1F0(ctx, base);
loc_82FEB614:
	// addi r3,r30,464
	ctx.r3.s64 = ctx.r30.s64 + 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEB620;
	sub_82FE9D70(ctx, base);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb630
	if (ctx.cr6.eq) goto loc_82FEB630;
	// bl 0x82ef6f38
	ctx.lr = 0x82FEB630;
	sub_82EF6F38(ctx, base);
loc_82FEB630:
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r31,r30,260
	ctx.r31.s64 = ctx.r30.s64 + 260;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb644
	if (ctx.cr6.eq) goto loc_82FEB644;
	// bl 0x82b9c200
	ctx.lr = 0x82FEB644;
	sub_82B9C200(ctx, base);
loc_82FEB644:
	// li r29,24
	ctx.r29.s64 = 24;
loc_82FEB648:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb65c
	if (ctx.cr6.eq) goto loc_82FEB65C;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB65C;
	sub_821FC1F0(ctx, base);
loc_82FEB65C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82feb648
	if (!ctx.cr0.lt) goto loc_82FEB648;
	// addi r31,r30,160
	ctx.r31.s64 = ctx.r30.s64 + 160;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82FEB66C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb680
	if (ctx.cr6.eq) goto loc_82FEB680;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB680;
	sub_821FC1F0(ctx, base);
loc_82FEB680:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82feb66c
	if (!ctx.cr0.lt) goto loc_82FEB66C;
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82FEB690:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb6a4
	if (ctx.cr6.eq) goto loc_82FEB6A4;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB6A4;
	sub_821FC1F0(ctx, base);
loc_82FEB6A4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82feb690
	if (!ctx.cr0.lt) goto loc_82FEB690;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82feb2d0
	ctx.lr = 0x82FEB6B4;
	sub_82FEB2D0(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x82feb2d0
	ctx.lr = 0x82FEB6BC;
	sub_82FEB2D0(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb6d0
	if (ctx.cr6.eq) goto loc_82FEB6D0;
	// bl 0x824fe010
	ctx.lr = 0x82FEB6D0;
	sub_824FE010(ctx, base);
loc_82FEB6D0:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feb6f0
	if (ctx.cr6.eq) goto loc_82FEB6F0;
	// bl 0x824fe010
	ctx.lr = 0x82FEB6F0;
	sub_824FE010(ctx, base);
loc_82FEB6F0:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82FEB704;
	sub_82EF70B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEB3E8) {
	__imp__sub_82FEB3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,9056
	ctx.r10.s64 = ctx.r3.s64 + 9056;
	// stw r11,9056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9056, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,9060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9060, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,9064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9064, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,9068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9068, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEB710) {
	__imp__sub_82FEB710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEB738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82FEB740;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82ca74f0
	ctx.lr = 0x82FEB748;
	__savefpr_22(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f24,f3
	ctx.f24.f64 = ctx.f3.f64;
	// fmr f22,f4
	ctx.f22.f64 = ctx.f4.f64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq 0x82febf3c
	if (ctx.cr0.eq) goto loc_82FEBF3C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feb844
	if (ctx.cr0.eq) goto loc_82FEB844;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fea378
	ctx.lr = 0x82FEB79C;
	sub_82FEA378(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82feb7b0
	if (!ctx.cr6.gt) goto loc_82FEB7B0;
	// twi 31,r0,22
loc_82FEB7B0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82feb7cc
	if (!ctx.cr6.gt) goto loc_82FEB7CC;
	// twi 31,r0,22
loc_82FEB7CC:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82feb7ec
	if (!ctx.cr6.gt) goto loc_82FEB7EC;
	// twi 31,r0,22
loc_82FEB7EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82fea998
	ctx.lr = 0x82FEB80C;
	sub_82FEA998(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fea540
	ctx.lr = 0x82FEB814;
	sub_82FEA540(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
loc_82FEB844:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r4,r9,31764
	ctx.r4.s64 = ctx.r9.s64 + 31764;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,31284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31284);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x83004970
	ctx.lr = 0x82FEB878;
	sub_83004970(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x83004970
	ctx.lr = 0x82FEB8A0;
	sub_83004970(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// fsubs f31,f23,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = static_cast<float>(ctx.f23.f64 - ctx.f25.f64);
	// lwz r9,9056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9056);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// fsubs f30,f22,f24
	ctx.f30.f64 = static_cast<float>(ctx.f22.f64 - ctx.f24.f64);
	// lwz r8,9064(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9064);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & 0x7FFFFFFFFFFFFFFF;
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & 0x7FFFFFFFFFFFFFFF;
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bge cr6,0x82feb908
	if (!ctx.cr6.lt) goto loc_82FEB908;
	// lwz r11,9060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9060);
	// lwz r10,9068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9068);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82feb908
	if (!ctx.cr6.lt) goto loc_82FEB908;
	// subf r29,r9,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r25,r11,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// b 0x82feb938
	goto loc_82FEB938;
loc_82FEB908:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82b91a60
	ctx.lr = 0x82FEB914;
	sub_82B91A60(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82feb930
	if (ctx.cr0.eq) goto loc_82FEB930;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f9f40
	ctx.lr = 0x82FEB928;
	sub_821F9F40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fc1f0
	ctx.lr = 0x82FEB930;
	sub_821FC1F0(ctx, base);
loc_82FEB930:
	// lwz r29,200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_82FEB938:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// lfs f26,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x82feb950
	if (!ctx.cr6.lt) goto loc_82FEB950;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
loc_82FEB950:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// bge cr6,0x82feb95c
	if (!ctx.cr6.lt) goto loc_82FEB95C;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
loc_82FEB95C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f25.f64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmr f13,f23
	ctx.f13.f64 = ctx.f23.f64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// fmr f28,f24
	ctx.f28.f64 = ctx.f24.f64;
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r27,32(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r26,36(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82feb9fc
	if (!ctx.cr6.lt) goto loc_82FEB9FC;
	// extsw r21,r8
	ctx.r21.s64 = ctx.r8.s32;
	// neg r22,r11
	ctx.r22.s64 = -ctx.r11.s64;
	// std r21,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r21.u64);
	// extsw r20,r22
	ctx.r20.s64 = ctx.r22.s32;
	// cmpw cr6,r22,r8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r8.s32, ctx.xer);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r20,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r20.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fadds f29,f11,f25
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f25.f64));
	// blt cr6,0x82feb9f4
	if (ctx.cr6.lt) goto loc_82FEB9F4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82feb9f8
	goto loc_82FEB9F8;
loc_82FEB9F4:
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82FEB9F8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FEB9FC:
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r22,r29
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82feba44
	if (!ctx.cr6.gt) goto loc_82FEBA44;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
loc_82FEBA44:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82feba9c
	if (!ctx.cr6.lt) goto loc_82FEBA9C;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// neg r10,r6
	ctx.r10.s64 = -ctx.r6.s64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fadds f28,f12,f24
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// blt cr6,0x82feba94
	if (ctx.cr6.lt) goto loc_82FEBA94;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82feba98
	goto loc_82FEBA98;
loc_82FEBA94:
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
loc_82FEBA98:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82FEBA9C:
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82febae4
	if (!ctx.cr6.gt) goto loc_82FEBAE4;
	// subf r10,r3,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r3.s64;
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// subf r4,r6,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r6.s64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
loc_82FEBAE4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f26,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// rlwinm. r9,r28,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fsubs f31,f13,f29
	ctx.f31.f64 = static_cast<float>(ctx.f13.f64 - ctx.f29.f64);
	// lfs f27,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f30,f0,f28
	ctx.f30.f64 = static_cast<float>(ctx.f0.f64 - ctx.f28.f64);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq 0x82febc10
	if (ctx.cr0.eq) goto loc_82FEBC10;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82febb18
	if (!ctx.cr6.lt) goto loc_82FEBB18;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82FEBB18:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82febb24
	if (!ctx.cr6.lt) goto loc_82FEBB24;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82FEBB24:
	// subf r10,r7,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r7.s64;
	// subf r9,r5,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82febb4c
	if (!ctx.cr6.gt) goto loc_82FEBB4C;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FEBB4C:
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r30,r4,r6
	ctx.r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82febb64
	if (!ctx.cr6.gt) goto loc_82FEBB64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82FEBB64:
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r8,r6,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// lfd f9,120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f29,f10,f12,f29
	ctx.f29.f64 = double(std::fma(float(ctx.f10.f64), float(ctx.f12.f64), float(ctx.f29.f64)));
	// fmuls f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f28,f9,f13,f28
	ctx.f28.f64 = double(std::fma(float(ctx.f9.f64), float(ctx.f13.f64), float(ctx.f28.f64)));
	// b 0x82febc20
	goto loc_82FEBC20;
loc_82FEBC10:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
loc_82FEBC20:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821f9e28
	ctx.lr = 0x82FEBC2C;
	sub_821F9E28(ctx, base);
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEBC38;
	sub_82F65FE0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,3140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fdivs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// stfs f12,320(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// beq cr6,0x82febc80
	if (ctx.cr6.eq) goto loc_82FEBC80;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f26.f64 / ctx.f13.f64));
	// b 0x82febc84
	goto loc_82FEBC84;
loc_82FEBC80:
	// fmr f11,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f27.f64;
loc_82FEBC84:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82febcac
	if (ctx.cr6.eq) goto loc_82FEBCAC;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 / ctx.f13.f64));
	// b 0x82febcb0
	goto loc_82FEBCB0;
loc_82FEBCAC:
	// fmr f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f27.f64;
loc_82FEBCB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f10,f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = -double(std::fma(float(ctx.f0.f64), float(ctx.f28.f64), -float(ctx.f26.f64)));
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f29,f0
	ctx.f0.f64 = -double(std::fma(float(ctx.f12.f64), float(ctx.f29.f64), -float(ctx.f0.f64)));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,344(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = static_cast<float>(ctx.f0.f64 - ctx.f11.f64);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// bl 0x82f66008
	ctx.lr = 0x82FEBCDC;
	sub_82F66008(ctx, base);
	// addi r30,r31,464
	ctx.r30.s64 = ctx.r31.s64 + 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEBCEC;
	sub_82FE9D70(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe91c0
	ctx.lr = 0x82FEBCF8;
	sub_82FE91C0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r24,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r24,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r24.u8);
	// bl 0x82fe8740
	ctx.lr = 0x82FEBD14;
	sub_82FE8740(ctx, base);
	// stb r24,477(r31)
	PPC_STORE_U8(ctx.r31.u32 + 477, ctx.r24.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8860
	ctx.lr = 0x82FEBD24;
	sub_82FE8860(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x822155b8
	ctx.lr = 0x82FEBD30;
	sub_822155B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82238168
	ctx.lr = 0x82FEBD4C;
	sub_82238168(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82238440
	ctx.lr = 0x82FEBD5C;
	sub_82238440(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwimi r10,r30,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82238168
	ctx.lr = 0x82FEBD88;
	sub_82238168(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82238440
	ctx.lr = 0x82FEBD98;
	sub_82238440(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r10,1188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// rlwimi r10,r30,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1188, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821ec608
	ctx.lr = 0x82FEBDD0;
	sub_821EC608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8226b018
	ctx.lr = 0x82FEBDDC;
	sub_8226B018(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x822868e0
	ctx.lr = 0x82FEBDE8;
	sub_822868E0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821bfff0
	ctx.lr = 0x82FEBDF4;
	sub_821BFFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82b90cd8
	ctx.lr = 0x82FEBE00;
	sub_82B90CD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82b90d28
	ctx.lr = 0x82FEBE0C;
	sub_82B90D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8220b5a8
	ctx.lr = 0x82FEBE18;
	sub_8220B5A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b7020
	ctx.lr = 0x82FEBE30;
	sub_821B7020(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b7020
	ctx.lr = 0x82FEBE44;
	sub_821B7020(ctx, base);
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x822225c8
	ctx.lr = 0x82FEBE5C;
	sub_822225C8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82febe78
	if (ctx.cr6.eq) goto loc_82FEBE78;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x822324e0
	ctx.lr = 0x82FEBE78;
	sub_822324E0(ctx, base);
loc_82FEBE78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe82d8
	ctx.lr = 0x82FEBE84;
	sub_82FE82D8(ctx, base);
	// stb r24,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r24.u8);
	// stw r24,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r24.u32);
	// stb r24,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r24.u8);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82febf3c
	if (ctx.cr0.eq) goto loc_82FEBF3C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82fe8a20
	ctx.lr = 0x82FEBEB0;
	sub_82FE8A20(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r11,-4368
	ctx.r4.s64 = ctx.r11.s64 + -4368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEBEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8920
	ctx.lr = 0x82FEBED4;
	sub_82FE8920(ctx, base);
	// fctiwz f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f23.f64)));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// fctiwz f0,f22
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f22.f64)));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// fctiwz f0,f25
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f25.f64)));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r11,126(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// fctiwz f0,f24
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f24.f64)));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// li r7,4
	ctx.r7.s64 = 4;
	// lhz r9,118(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// li r4,6
	ctx.r4.s64 = 6;
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// sth r10,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r10.u16);
	// sth r11,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r11.u16);
	// sth r9,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, ctx.r9.u16);
	// sth r9,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r9.u16);
	// sth r8,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r8.u16);
	// sth r8,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r8.u16);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82265c98
	ctx.lr = 0x82FEBF3C;
	sub_82265C98(ctx, base);
loc_82FEBF3C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82ca753c
	ctx.lr = 0x82FEBF48;
	__restfpr_22(ctx, base);
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEB738) {
	__imp__sub_82FEB738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEBF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82febf80
	if (ctx.cr0.eq) goto loc_82FEBF80;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82feb338
	ctx.lr = 0x82FEBF80;
	sub_82FEB338(ctx, base);
loc_82FEBF80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEBF50) {
	__imp__sub_82FEBF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEBF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FEBF98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82FEBFA4;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,31576
	ctx.r11.s64 = ctx.r11.s64 + 31576;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x82fea190
	ctx.lr = 0x82FEBFD4;
	sub_82FEA190(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82fea190
	ctx.lr = 0x82FEBFDC;
	sub_82FEA190(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 + 136;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82FEC004:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fec004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FEC004;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,25
	ctx.r10.s64 = 25;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FEC020:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fec020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FEC020;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEC038;
	sub_82F65FE0(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEC040;
	sub_82F65FE0(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEC048;
	sub_82F65FE0(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82f97968
	ctx.lr = 0x82FEC050;
	sub_82F97968(ctx, base);
	// addi r11,r31,416
	ctx.r11.s64 = ctx.r31.s64 + 416;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// addi r29,r31,464
	ctx.r29.s64 = ctx.r31.s64 + 464;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// addi r26,r31,8704
	ctx.r26.s64 = ctx.r31.s64 + 8704;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,8684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8684, ctx.r30.u32);
	// stw r30,8688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8688, ctx.r30.u32);
	// stw r30,8692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8692, ctx.r30.u32);
	// stw r30,8696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8696, ctx.r30.u32);
loc_82FEC094:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fec270
	ctx.lr = 0x82FEC09C;
	sub_82FEC270(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,176
	ctx.r26.s64 = ctx.r26.s64 + 176;
	// bge 0x82fec094
	if (!ctx.cr0.lt) goto loc_82FEC094;
	// std r30,9056(r31)
	PPC_STORE_U64(ctx.r31.u32 + 9056, ctx.r30.u64);
	// li r10,512
	ctx.r10.s64 = 512;
	// std r30,9064(r31)
	PPC_STORE_U64(ctx.r31.u32 + 9064, ctx.r30.u64);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// stb r30,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r30.u8);
	// li r9,288
	ctx.r9.s64 = 288;
	// stb r30,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r30.u8);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwimi r7,r28,31,0,1
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 31) & 0xC0000000) | (ctx.r7.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r10,8676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8676, ctx.r10.u32);
	// stw r10,8680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8680, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// lfs f13,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82FEC128:
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bne 0x82fec128
	if (!ctx.cr0.eq) goto loc_82FEC128;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEBF90) {
	__imp__sub_82FEBF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC160) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82feb3e8
	ctx.lr = 0x82FEC180;
	sub_82FEB3E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec190
	if (ctx.cr0.eq) goto loc_82FEC190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FEC190;
	sub_82EF6F38(ctx, base);
loc_82FEC190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FEC160) {
	__imp__sub_82FEC160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC1B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fec1d8
	if (!ctx.cr6.eq) goto loc_82FEC1D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82fec248
	goto loc_82FEC248;
loc_82FEC1D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fec1f8
	if (ctx.cr6.eq) goto loc_82FEC1F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FEC1F8:
	// li r3,9088
	ctx.r3.s64 = 9088;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FEC200;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fec228
	if (ctx.cr0.eq) goto loc_82FEC228;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82febf90
	ctx.lr = 0x82FEC224;
	sub_82FEBF90(ctx, base);
	// b 0x82fec22c
	goto loc_82FEC22C;
loc_82FEC228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEC22C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fec244
	if (!ctx.cr6.eq) goto loc_82FEC244;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82fec248
	goto loc_82FEC248;
loc_82FEC244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEC248:
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

PPC_WEAK_FUNC(sub_82FEC1B0) {
	__imp__sub_82FEC1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC260) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEC260) {
	__imp__sub_82FEC260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC270) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f97968
	ctx.lr = 0x82FEC28C;
	sub_82F97968(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEC294;
	sub_82F65FE0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82f65fe0
	ctx.lr = 0x82FEC29C;
	sub_82F65FE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FEC270) {
	__imp__sub_82FEC270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC2C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEC2C8) {
	__imp__sub_82FEC2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC2E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82FEC310;
	sub_82F65E60(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FEC2E0) {
	__imp__sub_82FEC2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEC348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82fe8740
	ctx.lr = 0x82FEC360;
	sub_82FE8740(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82fec388
	if (!ctx.cr6.eq) goto loc_82FEC388;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82fec388
	if (ctx.cr6.gt) goto loc_82FEC388;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82fec38c
	if (!ctx.cr6.eq) goto loc_82FEC38C;
loc_82FEC388:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82FEC38C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fec3c8
	if (!ctx.cr6.eq) goto loc_82FEC3C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe82d8
	ctx.lr = 0x82FEC3A4;
	sub_82FE82D8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fe8a20
	ctx.lr = 0x82FEC3B8;
	sub_82FE8A20(ctx, base);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8860
	ctx.lr = 0x82FEC3C4;
	sub_82FE8860(ctx, base);
	// b 0x82fec550
	goto loc_82FEC550;
loc_82FEC3C8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82fec464
	if (!ctx.cr6.eq) goto loc_82FEC464;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fe8a20
	ctx.lr = 0x82FEC3E4;
	sub_82FE8A20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82fe88c0
	ctx.lr = 0x82FEC3F4;
	sub_82FE88C0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82fec410
	if (!ctx.cr6.eq) goto loc_82FEC410;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fec54c
	goto loc_82FEC54C;
loc_82FEC410:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fe8860
	ctx.lr = 0x82FEC418;
	sub_82FE8860(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fec430
	if (ctx.cr6.eq) goto loc_82FEC430;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x82fec434
	if (!ctx.cr6.eq) goto loc_82FEC434;
loc_82FEC430:
	// li r4,3
	ctx.r4.s64 = 3;
loc_82FEC434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe82d8
	ctx.lr = 0x82FEC43C;
	sub_82FE82D8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8538
	ctx.lr = 0x82FEC44C;
	sub_82FE8538(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8340
	ctx.lr = 0x82FEC460;
	sub_82FE8340(ctx, base);
	// b 0x82fec550
	goto loc_82FEC550;
loc_82FEC464:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82fec550
	if (!ctx.cr6.eq) goto loc_82FEC550;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82fec4b0
	if (!ctx.cr6.eq) goto loc_82FEC4B0;
	// bl 0x82fe8860
	ctx.lr = 0x82FEC488;
	sub_82FE8860(ctx, base);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// bl 0x82fe8538
	ctx.lr = 0x82FEC4AC;
	sub_82FE8538(ctx, base);
	// b 0x82fec52c
	goto loc_82FEC52C;
loc_82FEC4B0:
	// bl 0x82fe8860
	ctx.lr = 0x82FEC4B4;
	sub_82FE8860(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8538
	ctx.lr = 0x82FEC4C4;
	sub_82FE8538(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe8340
	ctx.lr = 0x82FEC4D8;
	sub_82FE8340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82fe88c0
	ctx.lr = 0x82FEC4E8;
	sub_82FE88C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fec528
	if (ctx.cr6.eq) goto loc_82FEC528;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fec528
	if (ctx.cr6.eq) goto loc_82FEC528;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,8
	ctx.r29.s64 = 8;
	// bl 0x82fe8340
	ctx.lr = 0x82FEC514;
	sub_82FE8340(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x82fe88c0
	ctx.lr = 0x82FEC524;
	sub_82FE88C0(ctx, base);
	// b 0x82fec52c
	goto loc_82FEC52C;
loc_82FEC528:
	// li r29,7
	ctx.r29.s64 = 7;
loc_82FEC52C:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fec540
	if (ctx.cr6.eq) goto loc_82FEC540;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82fec544
	if (!ctx.cr6.eq) goto loc_82FEC544;
loc_82FEC540:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82FEC544:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FEC54C:
	// bl 0x82fe82d8
	ctx.lr = 0x82FEC550;
	sub_82FE82D8(ctx, base);
loc_82FEC550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEC340) {
	__imp__sub_82FEC340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC558) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fec2e0
	ctx.lr = 0x82FEC584;
	sub_82FEC2E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
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

PPC_WEAK_FUNC(sub_82FEC558) {
	__imp__sub_82FEC558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEC5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fec62c
	if (!ctx.cr6.eq) goto loc_82FEC62C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fec62c
	if (!ctx.cr6.eq) goto loc_82FEC62C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82fec62c
	if (!ctx.cr6.eq) goto loc_82FEC62C;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82fec65c
	goto loc_82FEC65C;
loc_82FEC62C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fec63c
	if (!ctx.cr6.eq) goto loc_82FEC63C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82FEC63C:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec558
	ctx.lr = 0x82FEC648;
	sub_82FEC558(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fec65c
	if (ctx.cr6.eq) goto loc_82FEC65C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82fec2e0
	ctx.lr = 0x82FEC65C;
	sub_82FEC2E0(ctx, base);
loc_82FEC65C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEC5C8) {
	__imp__sub_82FEC5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FEC678;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// beq 0x82fec6f8
	if (ctx.cr0.eq) goto loc_82FEC6F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82fec71c
	if (!ctx.cr6.gt) goto loc_82FEC71C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FEC6BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fec6bc
	if (ctx.cr6.lt) goto loc_82FEC6BC;
	// b 0x82fec71c
	goto loc_82FEC71C;
loc_82FEC6F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fec71c
	if (ctx.cr6.eq) goto loc_82FEC71C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FEC71C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEC670) {
	__imp__sub_82FEC670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEC730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// beq 0x82fec7b8
	if (ctx.cr0.eq) goto loc_82FEC7B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82fec7e4
	if (!ctx.cr6.gt) goto loc_82FEC7E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FEC770:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fec7b0
	if (!ctx.cr0.eq) goto loc_82FEC7B0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fec770
	if (ctx.cr6.lt) goto loc_82FEC770;
	// b 0x82fec7e4
	goto loc_82FEC7E4;
loc_82FEC7B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fec7e8
	goto loc_82FEC7E8;
loc_82FEC7B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fec7e4
	if (ctx.cr6.eq) goto loc_82FEC7E4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEC7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82fec7e8
	if (!ctx.cr0.eq) goto loc_82FEC7E8;
loc_82FEC7E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEC7E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEC728) {
	__imp__sub_82FEC728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC7F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82FEC810;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec820
	if (ctx.cr0.eq) goto loc_82FEC820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FEC820;
	sub_82EF6F38(ctx, base);
loc_82FEC820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FEC7F0) {
	__imp__sub_82FEC7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC840) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82FEC860;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,31784
	ctx.r11.s64 = ctx.r11.s64 + 31784;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70f0
	ctx.lr = 0x82FEC878;
	sub_82EF70F0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,31828
	ctx.r9.s64 = ctx.r9.s64 + 31828;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FEC840) {
	__imp__sub_82FEC840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC8D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fec8fc
	if (!ctx.cr6.eq) goto loc_82FEC8FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEC8F8;
	sub_82FE9D70(ctx, base);
	// b 0x82fec928
	goto loc_82FEC928;
loc_82FEC8FC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82FEC91C;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FEC928:
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

PPC_WEAK_FUNC(sub_82FEC8D0) {
	__imp__sub_82FEC8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC940) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe9d70
	ctx.lr = 0x82FEC964;
	sub_82FE9D70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fec974
	if (ctx.cr6.eq) goto loc_82FEC974;
	// bl 0x82ef6f38
	ctx.lr = 0x82FEC974;
	sub_82EF6F38(ctx, base);
loc_82FEC974:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fec984
	if (ctx.cr0.eq) goto loc_82FEC984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FEC984;
	sub_82EF6F38(ctx, base);
loc_82FEC984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FEC940) {
	__imp__sub_82FEC940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEC9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEC9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feca5c
	if (ctx.cr6.eq) goto loc_82FECA5C;
	// lbz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82feca30
	if (!ctx.cr0.eq) goto loc_82FECA30;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FEC9D4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fec9f4
	if (ctx.cr0.eq) goto loc_82FEC9F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82fec9f8
	goto loc_82FEC9F8;
loc_82FEC9F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FEC9F8:
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82feca60
	if (ctx.cr6.eq) goto loc_82FECA60;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fe9d70
	ctx.lr = 0x82FECA18;
	sub_82FE9D70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// stb r9,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r9.u8);
loc_82FECA30:
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fe9d70
	ctx.lr = 0x82FECA48;
	sub_82FE9D70(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// b 0x82feca60
	goto loc_82FECA60;
loc_82FECA5C:
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
loc_82FECA60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEC9A0) {
	__imp__sub_82FEC9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FECA70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fecb10
	if (ctx.cr0.eq) goto loc_82FECB10;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fecb24
	if (!ctx.cr6.gt) goto loc_82FECB24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FECAA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82fecac8
	if (!ctx.cr6.eq) goto loc_82FECAC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fec8d0
	ctx.lr = 0x82FECAB8;
	sub_82FEC8D0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82fecae4
	if (ctx.cr6.eq) goto loc_82FECAE4;
loc_82FECAC8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fecaa0
	if (ctx.cr6.lt) goto loc_82FECAA0;
	// b 0x82fecb24
	goto loc_82FECB24;
loc_82FECAE4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82fecb00
	if (ctx.cr0.eq) goto loc_82FECB00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fec940
	ctx.lr = 0x82FECB00;
	sub_82FEC940(ctx, base);
loc_82FECB00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// b 0x82fecb24
	goto loc_82FECB24;
loc_82FECB10:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82fecb24
	if (!ctx.cr6.eq) goto loc_82FECB24;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82FECB24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FECA68) {
	__imp__sub_82FECA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECB30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,31828
	ctx.r11.s64 = ctx.r11.s64 + 31828;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fecb70
	if (ctx.cr6.eq) goto loc_82FECB70;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fecb70
	if (ctx.cr0.eq) goto loc_82FECB70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fec940
	ctx.lr = 0x82FECB70;
	sub_82FEC940(ctx, base);
loc_82FECB70:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fecba4
	if (ctx.cr6.eq) goto loc_82FECBA4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82FECBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82FECBAC;
	sub_82EF70B0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FECB30) {
	__imp__sub_82FECB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECBC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fecb30
	ctx.lr = 0x82FECBE0;
	sub_82FECB30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fecbf0
	if (ctx.cr0.eq) goto loc_82FECBF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FECBF0;
	sub_82EF6F38(ctx, base);
loc_82FECBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FECBC0) {
	__imp__sub_82FECBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fecc58
	if (ctx.cr6.eq) goto loc_82FECC58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fecc48
	if (ctx.cr6.eq) goto loc_82FECC48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82fecc64
	if (!ctx.cr6.eq) goto loc_82FECC64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f98270
	ctx.lr = 0x82FECC44;
	sub_82F98270(ctx, base);
	// b 0x82fecc64
	goto loc_82FECC64;
loc_82FECC48:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f98270
	ctx.lr = 0x82FECC54;
	sub_82F98270(ctx, base);
	// b 0x82fecc64
	goto loc_82FECC64;
loc_82FECC58:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f98270
	ctx.lr = 0x82FECC64;
	sub_82F98270(ctx, base);
loc_82FECC64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FECC10) {
	__imp__sub_82FECC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FECC80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fecd54
	if (ctx.cr6.eq) goto loc_82FECD54;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82feccc4
	if (ctx.cr6.eq) goto loc_82FECCC4;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECCC4;
	sub_821FC1F0(ctx, base);
loc_82FECCC4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82feccd8
	if (!ctx.cr6.eq) goto loc_82FECCD8;
loc_82FECCCC:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x82feccf0
	goto loc_82FECCF0;
loc_82FECCD8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82fecccc
	if (ctx.cr6.eq) goto loc_82FECCCC;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bne cr6,0x82fecd54
	if (!ctx.cr6.eq) goto loc_82FECD54;
	// lis r11,1168
	ctx.r11.s64 = 76546048;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82FECCF0:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82fecd04
	if (ctx.cr6.eq) goto loc_82FECD04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FECD04:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82fecd18
	if (ctx.cr6.eq) goto loc_82FECD18;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FECD18:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r24,1
	ctx.r6.s64 = ctx.r24.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b923b8
	ctx.lr = 0x82FECD40;
	sub_82B923B8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82fecd58
	goto loc_82FECD58;
loc_82FECD54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FECD58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FECC78) {
	__imp__sub_82FECC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FECD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,416
	ctx.r4.s64 = ctx.r29.s64 + 416;
	// bl 0x82fec840
	ctx.lr = 0x82FECD7C;
	sub_82FEC840(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r11,r11,31872
	ctx.r11.s64 = ctx.r11.s64 + 31872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fecdb0
	if (ctx.cr6.eq) goto loc_82FECDB0;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECDAC;
	sub_821FC1F0(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82FECDB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FECD60) {
	__imp__sub_82FECD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FECDC0) {
	__imp__sub_82FECDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECDD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,31872
	ctx.r11.s64 = ctx.r11.s64 + 31872;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fece6c
	if (ctx.cr6.eq) goto loc_82FECE6C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fece54
	if (ctx.cr6.eq) goto loc_82FECE54;
	// bl 0x822a2ab0
	ctx.lr = 0x82FECE18;
	sub_822A2AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fece54
	if (ctx.cr0.eq) goto loc_82FECE54;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x821b7020
	ctx.lr = 0x82FECE3C;
	sub_821B7020(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x821b7020
	ctx.lr = 0x82FECE54;
	sub_821B7020(ctx, base);
loc_82FECE54:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fece64
	if (ctx.cr6.eq) goto loc_82FECE64;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECE64;
	sub_821FC1F0(ctx, base);
loc_82FECE64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82FECE6C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fece7c
	if (ctx.cr6.eq) goto loc_82FECE7C;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECE7C;
	sub_821FC1F0(ctx, base);
loc_82FECE7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fecb30
	ctx.lr = 0x82FECE84;
	sub_82FECB30(ctx, base);
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

PPC_WEAK_FUNC(sub_82FECDD8) {
	__imp__sub_82FECDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FECEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fececc
	if (!ctx.cr6.eq) goto loc_82FECECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fecf20
	goto loc_82FECF20;
loc_82FECECC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fecef4
	if (ctx.cr6.eq) goto loc_82FECEF4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82feceec
	if (ctx.cr6.eq) goto loc_82FECEEC;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECEEC;
	sub_821FC1F0(ctx, base);
loc_82FECEEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FECEF4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fecf10
	if (ctx.cr6.eq) goto loc_82FECF10;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe9158
	ctx.lr = 0x82FECF10;
	sub_82FE9158(ctx, base);
loc_82FECF10:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FECF1C;
	sub_82FEC670(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FECF20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FECE98) {
	__imp__sub_82FECE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FECF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82FECF30;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fecf5c
	if (!ctx.cr6.eq) goto loc_82FECF5C;
loc_82FECF54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fed6a8
	goto loc_82FED6A8;
loc_82FECF5C:
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r19,r21,48
	ctx.r19.s64 = ctx.r21.s64 + 48;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fecf8c
	if (ctx.cr6.eq) goto loc_82FECF8C;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fecf80
	if (ctx.cr6.eq) goto loc_82FECF80;
	// bl 0x821fc1f0
	ctx.lr = 0x82FECF80;
	sub_821FC1F0(ctx, base);
loc_82FECF80:
	// stw r23,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
	// stw r23,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r23.u32);
	// stw r23,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r23.u32);
loc_82FECF8C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82fed698
	if (ctx.cr6.eq) goto loc_82FED698;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fed698
	if (ctx.cr6.eq) goto loc_82FED698;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,1168
	ctx.r10.s64 = 76546048;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// ori r20,r10,258
	ctx.r20.u64 = ctx.r10.u64 | 258;
	// ori r27,r9,390
	ctx.r27.u64 = ctx.r9.u64 | 390;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fed034
	if (ctx.cr6.eq) goto loc_82FED034;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fed020
	if (ctx.cr6.eq) goto loc_82FED020;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82fed014
	if (ctx.cr6.eq) goto loc_82FED014;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82fed004
	if (ctx.cr6.eq) goto loc_82FED004;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82fecff4
	if (ctx.cr6.eq) goto loc_82FECFF4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82fecf54
	if (!ctx.cr6.eq) goto loc_82FECF54;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r11,84
	ctx.r11.u64 = ctx.r11.u64 | 84;
	// b 0x82fed02c
	goto loc_82FED02C;
loc_82FECFF4:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// b 0x82fed02c
	goto loc_82FED02C;
loc_82FED004:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r11,82
	ctx.r11.u64 = ctx.r11.u64 | 82;
	// b 0x82fed02c
	goto loc_82FED02C;
loc_82FED014:
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r20,52(r21)
	PPC_STORE_U32(ctx.r21.u32 + 52, ctx.r20.u32);
	// b 0x82fed03c
	goto loc_82FED03C;
loc_82FED020:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// li r26,3
	ctx.r26.s64 = 3;
	// ori r11,r11,338
	ctx.r11.u64 = ctx.r11.u64 | 338;
loc_82FED02C:
	// stw r11,52(r21)
	PPC_STORE_U32(ctx.r21.u32 + 52, ctx.r11.u32);
	// b 0x82fed03c
	goto loc_82FED03C;
loc_82FED034:
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r27,52(r21)
	PPC_STORE_U32(ctx.r21.u32 + 52, ctx.r27.u32);
loc_82FED03C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82fed04c
	if (!ctx.cr6.eq) goto loc_82FED04C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x82fed050
	goto loc_82FED050;
loc_82FED04C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82FED050:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r11.u32);
	// bne cr6,0x82fed064
	if (!ctx.cr6.eq) goto loc_82FED064;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x82fed068
	goto loc_82FED068;
loc_82FED064:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FED068:
	// stw r11,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82fed094
	if (!ctx.cr6.gt) goto loc_82FED094;
loc_82FED084:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fed084
	if (ctx.cr6.lt) goto loc_82FED084;
loc_82FED094:
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x82fed0b4
	if (!ctx.cr6.gt) goto loc_82FED0B4;
loc_82FED0A4:
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fed0a4
	if (ctx.cr6.lt) goto loc_82FED0A4;
loc_82FED0B4:
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x82fed0cc
	if (ctx.cr6.lt) goto loc_82FED0CC;
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82fed0d0
	if (!ctx.cr6.gt) goto loc_82FED0D0;
loc_82FED0CC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FED0D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fed0fc
	if (!ctx.cr0.eq) goto loc_82FED0FC;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82fed0fc
	if (ctx.cr6.gt) goto loc_82FED0FC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82fed0f4
	if (!ctx.cr6.lt) goto loc_82FED0F4;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// b 0x82fed110
	goto loc_82FED110;
loc_82FED0F4:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x82fed110
	goto loc_82FED110;
loc_82FED0FC:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fed110
	if (ctx.cr6.lt) goto loc_82FED110;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82FED110:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x82fed128
	if (ctx.cr6.lt) goto loc_82FED128;
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82fed12c
	if (!ctx.cr6.gt) goto loc_82FED12C;
loc_82FED128:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FED12C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fed308
	if (!ctx.cr0.eq) goto loc_82FED308;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fed154
	if (!ctx.cr6.eq) goto loc_82FED154;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82fed154
	if (!ctx.cr6.eq) goto loc_82FED154;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82fed154
	if (ctx.cr6.eq) goto loc_82FED154;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82fed308
	if (!ctx.cr6.eq) goto loc_82FED308;
loc_82FED154:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FED15C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fed1a0
	if (ctx.cr0.eq) goto loc_82FED1A0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82fed18c
	if (!ctx.cr6.eq) goto loc_82FED18C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82FED18C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82eff360
	ctx.lr = 0x82FED198;
	sub_82EFF360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fed1a4
	goto loc_82FED1A4;
loc_82FED1A0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82FED1A4:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fed308
	if (ctx.cr6.eq) goto loc_82FED308;
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fed278
	if (!ctx.cr6.eq) goto loc_82FED278;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fed278
	if (!ctx.cr6.eq) goto loc_82FED278;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82fed258
	if (!ctx.cr6.eq) goto loc_82FED258;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fed29c
	if (ctx.cr6.eq) goto loc_82FED29C;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
loc_82FED1E4:
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82fed248
	if (ctx.cr6.eq) goto loc_82FED248;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82FED218:
	// lbz r8,-2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// li r5,255
	ctx.r5.s64 = 255;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fed218
	if (!ctx.cr0.eq) goto loc_82FED218;
loc_82FED248:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fed1e4
	if (ctx.cr6.lt) goto loc_82FED1E4;
	// b 0x82fed29c
	goto loc_82FED29C;
loc_82FED258:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82fed29c
	if (!ctx.cr6.eq) goto loc_82FED29C;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x822085d0
	ctx.lr = 0x82FED274;
	sub_822085D0(ctx, base);
	// b 0x82fed29c
	goto loc_82FED29C;
loc_82FED278:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r7,16(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82fecc10
	ctx.lr = 0x82FED29C;
	sub_82FECC10(ctx, base);
loc_82FED29C:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fed2ac
	if (!ctx.cr6.gt) goto loc_82FED2AC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82FED2AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fed308
	if (!ctx.cr6.eq) goto loc_82FED308;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fed304
	if (ctx.cr6.eq) goto loc_82FED304;
loc_82FED2C8:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82fed2f8
	if (ctx.cr6.eq) goto loc_82FED2F8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82FED2E4:
	// lwbrx r7,0,r11
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fed2e4
	if (!ctx.cr0.eq) goto loc_82FED2E4;
loc_82FED2F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fed2c8
	if (ctx.cr6.lt) goto loc_82FED2C8;
loc_82FED304:
	// li r26,4
	ctx.r26.s64 = 4;
loc_82FED308:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82fed324
	if (ctx.cr6.gt) goto loc_82FED324;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// beq cr6,0x82fed324
	if (ctx.cr6.eq) goto loc_82FED324;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82fed338
	goto loc_82FED338;
loc_82FED324:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fed338
	if (ctx.cr6.lt) goto loc_82FED338;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82FED338:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fed348
	if (ctx.cr6.eq) goto loc_82FED348;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED348;
	sub_821FC1F0(ctx, base);
loc_82FED348:
	// stw r23,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// lwz r4,260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x830eb648
	ctx.lr = 0x82FED35C;
	sub_830EB648(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,52(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b923b8
	ctx.lr = 0x82FED380;
	sub_82B923B8(ctx, base);
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fed394
	if (ctx.cr0.eq) goto loc_82FED394;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82fed39c
	goto loc_82FED39C;
loc_82FED394:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82FED39C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eb4f8
	ctx.lr = 0x82FED3A4;
	sub_830EB4F8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82fed3d8
	if (ctx.cr6.eq) goto loc_82FED3D8;
loc_82FED3AC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r23,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r23.u32);
	// stw r23,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r23.u32);
	// beq cr6,0x82fecf54
	if (ctx.cr6.eq) goto loc_82FECF54;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FED3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fecf54
	goto loc_82FECF54;
loc_82FED3D8:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x82fed3f0
	if (ctx.cr6.lt) goto loc_82FED3F0;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82fed3f4
	if (!ctx.cr6.gt) goto loc_82FED3F4;
loc_82FED3F0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FED3F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fed550
	if (!ctx.cr0.eq) goto loc_82FED550;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82fed550
	if (ctx.cr6.gt) goto loc_82FED550;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x82fed448
	if (!ctx.cr6.eq) goto loc_82FED448;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x82fed448
	if (!ctx.cr6.gt) goto loc_82FED448;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82fed450
	if (!ctx.cr6.eq) goto loc_82FED450;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x82eff498
	ctx.lr = 0x82FED42C;
	sub_82EFF498(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x822085d0
	ctx.lr = 0x82FED448;
	sub_822085D0(ctx, base);
loc_82FED448:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82fed458
	if (ctx.cr6.eq) goto loc_82FED458;
loc_82FED450:
	// addi r29,r22,16
	ctx.r29.s64 = ctx.r22.s64 + 16;
	// b 0x82fed45c
	goto loc_82FED45C;
loc_82FED458:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82FED45C:
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// beq cr6,0x82fed520
	if (ctx.cr6.eq) goto loc_82FED520;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82FED47C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82b920f0
	ctx.lr = 0x82FED488;
	sub_82B920F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fed680
	if (ctx.cr0.eq) goto loc_82FED680;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x82fed4a8
	if (!ctx.cr6.eq) goto loc_82FED4A8;
	// lis r7,1168
	ctx.r7.s64 = 76546048;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// b 0x82fed4b4
	goto loc_82FED4B4;
loc_82FED4A8:
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
loc_82FED4B4:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x82d0e2f0
	ctx.lr = 0x82FED4E4;
	sub_82D0E2F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED4F0;
	sub_821FC1F0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82fed680
	if (!ctx.cr6.eq) goto loc_82FED680;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fed514
	if (!ctx.cr6.lt) goto loc_82FED514;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82fe7df8
	ctx.lr = 0x82FED514;
	sub_82FE7DF8(ctx, base);
loc_82FED514:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82fed47c
	if (ctx.cr6.lt) goto loc_82FED47C;
loc_82FED520:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FED52C;
	sub_82FEC670(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82fed6a4
	if (ctx.cr6.eq) goto loc_82FED6A4;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FED54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fed6a4
	goto loc_82FED6A4;
loc_82FED550:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r26,r22,16
	ctx.r26.s64 = ctx.r22.s64 + 16;
	// bne cr6,0x82fed560
	if (!ctx.cr6.eq) goto loc_82FED560;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82FED560:
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// bne cr6,0x82fed58c
	if (!ctx.cr6.eq) goto loc_82FED58C;
	// lis r28,6688
	ctx.r28.s64 = 438304768;
	// ori r28,r28,134
	ctx.r28.u64 = ctx.r28.u64 | 134;
	// b 0x82fed59c
	goto loc_82FED59C;
loc_82FED58C:
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82fed59c
	if (!ctx.cr6.eq) goto loc_82FED59C;
	// lis r28,1168
	ctx.r28.s64 = 76546048;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_82FED59C:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fed520
	if (ctx.cr6.eq) goto loc_82FED520;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82FED5AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82b920f0
	ctx.lr = 0x82FED5B8;
	sub_82B920F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fed680
	if (ctx.cr0.eq) goto loc_82FED680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82efef80
	ctx.lr = 0x82FED5D8;
	sub_82EFEF80(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// blt cr6,0x82fed604
	if (ctx.cr6.lt) goto loc_82FED604;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82fed608
	if (!ctx.cr6.gt) goto loc_82FED608;
loc_82FED604:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FED608:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fed620
	if (ctx.cr0.eq) goto loc_82FED620;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82efeee8
	ctx.lr = 0x82FED61C;
	sub_82EFEEE8(ctx, base);
	// b 0x82fed624
	goto loc_82FED624;
loc_82FED620:
	// bl 0x82efe840
	ctx.lr = 0x82FED624;
	sub_82EFE840(ctx, base);
loc_82FED624:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0e2f0
	ctx.lr = 0x82FED65C;
	sub_82D0E2F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED668;
	sub_821FC1F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82fed680
	if (!ctx.cr6.eq) goto loc_82FED680;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82fed5ac
	if (ctx.cr6.lt) goto loc_82FED5AC;
	// b 0x82fed520
	goto loc_82FED520;
loc_82FED680:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fed690
	if (ctx.cr6.eq) goto loc_82FED690;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED690;
	sub_821FC1F0(ctx, base);
loc_82FED690:
	// stw r23,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
	// b 0x82fed3ac
	goto loc_82FED3AC;
loc_82FED698:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FED6A4;
	sub_82FEC670(ctx, base);
loc_82FED6A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FED6A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FECF28) {
	__imp__sub_82FECF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FED6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FED6B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fed6e4
	if (!ctx.cr6.eq) goto loc_82FED6E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fed7d4
	goto loc_82FED7D4;
loc_82FED6E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fed714
	if (ctx.cr6.eq) goto loc_82FED714;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fed708
	if (ctx.cr6.eq) goto loc_82FED708;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED708;
	sub_821FC1F0(ctx, base);
loc_82FED708:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82FED714:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fed7c4
	if (ctx.cr6.eq) goto loc_82FED7C4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fed72c
	if (ctx.cr6.eq) goto loc_82FED72C;
	// bl 0x821fc1f0
	ctx.lr = 0x82FED72C;
	sub_821FC1F0(ctx, base);
loc_82FED72C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,-2
	ctx.r6.s64 = -2;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x82d11248
	ctx.lr = 0x82FED774;
	sub_82D11248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fed78c
	if (ctx.cr0.eq) goto loc_82FED78C;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// b 0x82fed7d4
	goto loc_82FED7D4;
loc_82FED78C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// beq cr6,0x82fed7a4
	if (ctx.cr6.eq) goto loc_82FED7A4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82fed7c4
	if (!ctx.cr6.eq) goto loc_82FED7C4;
loc_82FED7A4:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b920e8
	ctx.lr = 0x82FED7B4;
	sub_82B920E8(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_82FED7C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fec670
	ctx.lr = 0x82FED7D0;
	sub_82FEC670(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FED7D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FED6B0) {
	__imp__sub_82FED6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FED7E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fecdd8
	ctx.lr = 0x82FED800;
	sub_82FECDD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fed810
	if (ctx.cr0.eq) goto loc_82FED810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FED810;
	sub_82EF6F38(ctx, base);
loc_82FED810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FED7E0) {
	__imp__sub_82FED7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FED830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82FED838;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fed86c
	if (ctx.cr6.eq) goto loc_82FED86C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82fed874
	if (!ctx.cr6.eq) goto loc_82FED874;
	// li r20,1
	ctx.r20.s64 = 1;
loc_82FED86C:
	// li r23,4
	ctx.r23.s64 = 4;
	// b 0x82fed884
	goto loc_82FED884;
loc_82FED874:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r23,1
	ctx.r23.s64 = 1;
	// beq cr6,0x82fed884
	if (ctx.cr6.eq) goto loc_82FED884;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FED884:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fed8a0
	if (!ctx.cr6.eq) goto loc_82FED8A0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fec728
	ctx.lr = 0x82FED898;
	sub_82FEC728(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feda94
	if (ctx.cr0.eq) goto loc_82FEDA94;
loc_82FED8A0:
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x821b7020
	ctx.lr = 0x82FED8BC;
	sub_821B7020(ctx, base);
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x821b7020
	ctx.lr = 0x82FED8D4;
	sub_821B7020(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82feda94
	if (!ctx.cr6.gt) goto loc_82FEDA94;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
loc_82FED8E4:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// lwz r10,-12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r27,-8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r24,-4(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r28,r27,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r27.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// subf r25,r24,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r24.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r3,48(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x82b921c0
	ctx.lr = 0x82FED93C;
	sub_82B921C0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82feda2c
	if (ctx.cr6.eq) goto loc_82FEDA2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82feda2c
	if (!ctx.cr6.eq) goto loc_82FEDA2C;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82feda7c
	if (!ctx.cr6.gt) goto loc_82FEDA7C;
loc_82FED960:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82feda1c
	if (!ctx.cr6.gt) goto loc_82FEDA1C;
	// add r6,r24,r9
	ctx.r6.u64 = ctx.r24.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 * 3;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82FED978:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,255
	ctx.r30.s64 = 255;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r26,r5,r10
	ctx.r26.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r4,r26,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stbx r4,r5,r8
	PPC_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r4.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r4,r4,r6
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r4,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r4.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r4,r4,r6
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r4,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r4.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r30,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r30.u8);
	// bne 0x82fed978
	if (!ctx.cr0.eq) goto loc_82FED978;
loc_82FEDA1C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82fed960
	if (ctx.cr6.lt) goto loc_82FED960;
	// b 0x82feda7c
	goto loc_82FEDA7C;
loc_82FEDA2C:
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82feda7c
	if (!ctx.cr6.gt) goto loc_82FEDA7C;
	// mullw r28,r28,r23
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// mullw r27,r27,r23
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r23.s32);
loc_82FEDA44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r30,r8
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FEDA70;
	sub_82CA2C60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82feda44
	if (ctx.cr6.lt) goto loc_82FEDA44;
loc_82FEDA7C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,48(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// bl 0x82b922b8
	ctx.lr = 0x82FEDA88;
	sub_82B922B8(ctx, base);
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82fed8e4
	if (!ctx.cr0.eq) goto loc_82FED8E4;
loc_82FEDA94:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FED830) {
	__imp__sub_82FED830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fef848
	sub_82FEF848(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAA0) {
	__imp__sub_82FEDAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fee4d8
	sub_82FEE4D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAA8) {
	__imp__sub_82FEDAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fef000
	sub_82FEF000(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAB0) {
	__imp__sub_82FEDAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r11,-200
	ctx.r3.s64 = ctx.r11.s64 + -200;
	// addi r7,r11,30
	ctx.r7.s64 = ctx.r11.s64 + 30;
	// b 0x82fef1c8
	sub_82FEF1C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAB8) {
	__imp__sub_82FEDAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff3b18
	sub_82FF3B18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAD0) {
	__imp__sub_82FEDAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff2f10
	sub_82FF2F10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAD8) {
	__imp__sub_82FEDAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff30b0
	sub_82FF30B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAE0) {
	__imp__sub_82FEDAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff3250
	sub_82FF3250(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAE8) {
	__imp__sub_82FEDAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDAF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fedb08
	if (!ctx.cr6.eq) goto loc_82FEDB08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82ff52d0
	sub_82FF52D0(ctx, base);
	return;
loc_82FEDB08:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82FEDAF0) {
	__imp__sub_82FEDAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82fedb44
	if (!ctx.cr6.eq) goto loc_82FEDB44;
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// bl 0x82fedf18
	ctx.lr = 0x82FEDB40;
	sub_82FEDF18(ctx, base);
	// b 0x82fedb4c
	goto loc_82FEDB4C;
loc_82FEDB44:
	// addi r3,r3,-1060
	ctx.r3.s64 = ctx.r3.s64 + -1060;
	// bl 0x82ff3f20
	ctx.lr = 0x82FEDB4C;
	sub_82FF3F20(ctx, base);
loc_82FEDB4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEDB20) {
	__imp__sub_82FEDB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDB60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fedb78
	if (ctx.cr6.eq) goto loc_82FEDB78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82FEDB78:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEDB60) {
	__imp__sub_82FEDB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FEDB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fedc0c
	if (ctx.cr6.eq) goto loc_82FEDC0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEDBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82fedbf4
	if (ctx.cr6.lt) goto loc_82FEDBF4;
	// beq cr6,0x82fedbd8
	if (ctx.cr6.eq) goto loc_82FEDBD8;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x82fedc1c
	goto loc_82FEDC1C;
loc_82FEDBD8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3338
	ctx.lr = 0x82FEDBF0;
	sub_82FF3338(ctx, base);
	// b 0x82fedc1c
	goto loc_82FEDC1C;
loc_82FEDBF4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82feeaa0
	ctx.lr = 0x82FEDC08;
	sub_82FEEAA0(ctx, base);
	// b 0x82fedc1c
	goto loc_82FEDC1C;
loc_82FEDC0C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff53e8
	ctx.lr = 0x82FEDC1C;
	sub_82FF53E8(ctx, base);
loc_82FEDC1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDB88) {
	__imp__sub_82FEDB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDC28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ff5768
	ctx.lr = 0x82FEDC48;
	sub_82FF5768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_82FEDC28) {
	__imp__sub_82FEDC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDC80) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x82fedca0
	goto loc_82FEDCA0;
loc_82FEDC8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82fedcd8
	if (ctx.cr6.eq) goto loc_82FEDCD8;
	// rldicl r4,r4,62,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 62) & 0x3FFFFFFFFFFFFFFF;
loc_82FEDCA0:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fedc8c
	if (!ctx.cr6.eq) goto loc_82FEDC8C;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
loc_82FEDCD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEDC80) {
	__imp__sub_82FEDC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDCE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FEDCF8:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fedd38
	if (!ctx.cr6.eq) goto loc_82FEDD38;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fedd38
	if (!ctx.cr6.eq) goto loc_82FEDD38;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fedd38
	if (!ctx.cr6.eq) goto loc_82FEDD38;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fedd44
	if (ctx.cr6.eq) goto loc_82FEDD44;
loc_82FEDD38:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82fedcf8
	goto loc_82FEDCF8;
loc_82FEDD44:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEDCE0) {
	__imp__sub_82FEDCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEDD90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FEDD9C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fedd9c
	if (!ctx.cr0.eq) goto loc_82FEDD9C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82fede00
	if (!ctx.cr6.eq) goto loc_82FEDE00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEDDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FEDDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff57a0
	ctx.lr = 0x82FEDE00;
	sub_82FF57A0(ctx, base);
loc_82FEDE00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDD88) {
	__imp__sub_82FEDD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEDE18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEDE30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fede4c
	if (ctx.cr0.eq) goto loc_82FEDE4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff1a60
	ctx.lr = 0x82FEDE48;
	sub_82FF1A60(ctx, base);
	// b 0x82fede6c
	goto loc_82FEDE6C;
loc_82FEDE4C:
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stw r10,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r10.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r10,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r10.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82FEDE6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEDE74;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDE10) {
	__imp__sub_82FEDE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEDE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ff6130
	ctx.lr = 0x82FEDEA4;
	sub_82FF6130(ctx, base);
	// addi r28,r31,164
	ctx.r28.s64 = ctx.r31.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEDEB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fedef4
	if (ctx.cr6.eq) goto loc_82FEDEF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82ff1a60
	ctx.lr = 0x82FEDEEC;
	sub_82FF1A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fedf00
	goto loc_82FEDF00;
loc_82FEDEF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82FEDF00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEDF08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDE80) {
	__imp__sub_82FEDE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDF18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEDF3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FEDF50;
	sub_82FEDD88(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FEDF6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FEDF74;
	sub_82FEDD88(ctx, base);
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

PPC_WEAK_FUNC(sub_82FEDF18) {
	__imp__sub_82FEDF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDF90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fedfc4
	if (ctx.cr6.eq) goto loc_82FEDFC4;
	// bl 0x82ff3e20
	ctx.lr = 0x82FEDFBC;
	sub_82FF3E20(ctx, base);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// b 0x82fedfcc
	goto loc_82FEDFCC;
loc_82FEDFC4:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82fedd88
	ctx.lr = 0x82FEDFCC;
	sub_82FEDD88(ctx, base);
loc_82FEDFCC:
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_82FEDF90) {
	__imp__sub_82FEDF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEDFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEDFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82ff57b8
	ctx.lr = 0x82FEE014;
	sub_82FF57B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82fee188
	if (!ctx.cr6.eq) goto loc_82FEE188;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r10,276(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fee188
	if (!ctx.cr6.lt) goto loc_82FEE188;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82ff59a0
	ctx.lr = 0x82FEE03C;
	sub_82FF59A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fee188
	if (ctx.cr0.eq) goto loc_82FEE188;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,9(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82fee188
	if (!ctx.cr6.eq) goto loc_82FEE188;
	// lhz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fee188
	if (ctx.cr6.lt) goto loc_82FEE188;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1607
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1607, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// lhz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// lhz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fee188
	if (ctx.cr6.lt) goto loc_82FEE188;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,60000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60000, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// lwz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fee188
	if (ctx.cr0.eq) goto loc_82FEE188;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ff59e0
	ctx.lr = 0x82FEE0C8;
	sub_82FF59E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fee188
	if (ctx.cr0.eq) goto loc_82FEE188;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fee188
	if (ctx.cr6.gt) goto loc_82FEE188;
	// addi r30,r29,164
	ctx.r30.s64 = ctx.r29.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEE0F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// addi r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 + 280;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fee104
	if (!ctx.cr6.eq) goto loc_82FEE104;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82FEE104:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r7,18(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// beq cr6,0x82fee148
	if (ctx.cr6.eq) goto loc_82FEE148;
loc_82FEE114:
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82fee134
	if (!ctx.cr6.eq) goto loc_82FEE134;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fee180
	if (ctx.cr6.eq) goto loc_82FEE180;
loc_82FEE134:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fee148
	if (ctx.cr6.eq) goto loc_82FEE148;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82fee114
	if (!ctx.cr0.eq) goto loc_82FEE114;
loc_82FEE148:
	// lwz r9,276(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FEE178;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fee18c
	goto loc_82FEE18C;
loc_82FEE180:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEE188;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FEE188:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82FEE18C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEDFE8) {
	__imp__sub_82FEDFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE198) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82fee1e4
	goto loc_82FEE1E4;
loc_82FEE1C0:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82fee1f0
	if (ctx.cr6.eq) goto loc_82FEE1F0;
	// rldicl r11,r11,62,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82FEE1E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fee1c0
	if (!ctx.cr6.eq) goto loc_82FEE1C0;
	// blr 
	return;
loc_82FEE1F0:
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82fedce0
	sub_82FEDCE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE198) {
	__imp__sub_82FEE198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee238
	if (!ctx.cr6.eq) goto loc_82FEE238;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee238
	if (!ctx.cr6.eq) goto loc_82FEE238;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee238
	if (!ctx.cr6.eq) goto loc_82FEE238;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee238
	if (!ctx.cr6.eq) goto loc_82FEE238;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FEE238:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82FEE23C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_82FEE244:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fee260
	if (!ctx.cr6.eq) goto loc_82FEE260;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82fee244
	if (ctx.cr6.lt) goto loc_82FEE244;
loc_82FEE260:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee290
	if (!ctx.cr6.eq) goto loc_82FEE290;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee290
	if (!ctx.cr6.eq) goto loc_82FEE290;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee290
	if (!ctx.cr6.eq) goto loc_82FEE290;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fee298
	if (ctx.cr6.eq) goto loc_82FEE298;
loc_82FEE290:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x82fee23c
	goto loc_82FEE23C;
loc_82FEE298:
	// b 0x82fedce0
	sub_82FEDCE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE200) {
	__imp__sub_82FEE200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82FEE2A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r10,r10,-20124
	ctx.r10.s64 = ctx.r10.s64 + -20124;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r9,r9,-20132
	ctx.r9.s64 = ctx.r9.s64 + -20132;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r29,r31,340
	ctx.r29.s64 = ctx.r31.s64 + 340;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// bl 0x82fedc28
	ctx.lr = 0x82FEE318;
	sub_82FEDC28(ctx, base);
	// addi r27,r31,392
	ctx.r27.s64 = ctx.r31.s64 + 392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fedc28
	ctx.lr = 0x82FEE32C;
	sub_82FEDC28(ctx, base);
	// addi r10,r26,32
	ctx.r10.s64 = ctx.r26.s64 + 32;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82ff5388
	ctx.lr = 0x82FEE34C;
	sub_82FF5388(ctx, base);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x832b258c
	ctx.lr = 0x82FEE35C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82fedc28
	ctx.lr = 0x82FEE398;
	sub_82FEDC28(ctx, base);
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// stw r23,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82fedc28
	ctx.lr = 0x82FEE3C4;
	sub_82FEDC28(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r22.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x832b258c
	ctx.lr = 0x82FEE3D8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// std r30,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// beq cr6,0x82fee410
	if (ctx.cr6.eq) goto loc_82FEE410;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fee418
	if (!ctx.cr0.eq) goto loc_82FEE418;
	// b 0x82fee414
	goto loc_82FEE414;
loc_82FEE410:
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
loc_82FEE414:
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_82FEE418:
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff5210
	ctx.lr = 0x82FEE424;
	sub_82FF5210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE2A0) {
	__imp__sub_82FEE2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEE438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-20124
	ctx.r11.s64 = ctx.r11.s64 + -20124;
	// addi r10,r10,-20132
	ctx.r10.s64 = ctx.r10.s64 + -20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,340
	ctx.r29.s64 = ctx.r31.s64 + 340;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ce870
	ctx.lr = 0x82FEE464;
	sub_829CE870(ctx, base);
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// bl 0x82fedd88
	ctx.lr = 0x82FEE46C;
	sub_82FEDD88(ctx, base);
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fee484
	if (ctx.cr6.eq) goto loc_82FEE484;
	// bl 0x82fedd88
	ctx.lr = 0x82FEE47C;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
loc_82FEE484:
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82fedd88
	ctx.lr = 0x82FEE48C;
	sub_82FEDD88(ctx, base);
	// addi r30,r31,392
	ctx.r30.s64 = ctx.r31.s64 + 392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x82FEE498;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff5260
	ctx.lr = 0x82FEE4A0;
	sub_82FF5260(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ff60d0
	ctx.lr = 0x82FEE4A8;
	sub_82FF60D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x82FEE4B0;
	sub_829CE870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ce870
	ctx.lr = 0x82FEE4B8;
	sub_829CE870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// addi r10,r10,-20140
	ctx.r10.s64 = ctx.r10.s64 + -20140;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE430) {
	__imp__sub_82FEE430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEE4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,236
	ctx.r29.s64 = ctx.r30.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEE4F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r10,440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r11,26,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x80000000;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r11.u32);
	// bne cr6,0x82fee57c
	if (!ctx.cr6.eq) goto loc_82FEE57C;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r31,r30,280
	ctx.r31.s64 = ctx.r30.s64 + 280;
	// b 0x82fee574
	goto loc_82FEE574;
loc_82FEE528:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82fee53c
	if (!ctx.cr6.eq) goto loc_82FEE53C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fee55c
	goto loc_82FEE55C;
loc_82FEE53C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEE55C:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FEE564;
	sub_82FEDD88(ctx, base);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FEE574:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82fee528
	if (!ctx.cr6.eq) goto loc_82FEE528;
loc_82FEE57C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEE584;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE4D8) {
	__imp__sub_82FEE4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEE598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEE5B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r31,164
	ctx.r28.s64 = ctx.r31.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEE5BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff4770
	ctx.lr = 0x82FEE5C4;
	sub_82FF4770(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// ld r4,136(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
	// bl 0x82fee198
	ctx.lr = 0x82FEE5D0;
	sub_82FEE198(ctx, base);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fee614
	if (ctx.cr6.eq) goto loc_82FEE614;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82ff3c10
	ctx.lr = 0x82FEE614;
	sub_82FF3C10(ctx, base);
loc_82FEE614:
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fee650
	if (ctx.cr6.eq) goto loc_82FEE650;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82ff1a60
	ctx.lr = 0x82FEE650;
	sub_82FF1A60(ctx, base);
loc_82FEE650:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEE658;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEE660;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FEE668;
	sub_82FEDD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE590) {
	__imp__sub_82FEE590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEE680;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fee6ac
	if (!ctx.cr6.eq) goto loc_82FEE6AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82fee6cc
	goto loc_82FEE6CC;
loc_82FEE6AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEE6CC:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82ff59a0
	ctx.lr = 0x82FEE6E4;
	sub_82FF59A0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,34
	ctx.r11.s64 = 34;
	// lwz r7,288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r4,r31,230
	ctx.r4.s64 = ctx.r31.s64 + 230;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lhz r11,18(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// bl 0x82ff59e0
	ctx.lr = 0x82FEE72C;
	sub_82FF59E0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fee740
	if (!ctx.cr6.eq) goto loc_82FEE740;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FEE740:
	// stw r11,222(r31)
	PPC_STORE_U32(ctx.r31.u32 + 222, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,226(r31)
	PPC_STORE_U32(ctx.r31.u32 + 226, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE678) {
	__imp__sub_82FEE678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEE760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r29,292
	ctx.r10.s64 = ctx.r29.s64 + 292;
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fee7bc
	if (ctx.cr6.eq) goto loc_82FEE7BC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fee78c
	if (!ctx.cr6.eq) goto loc_82FEE78C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fee7ac
	goto loc_82FEE7AC;
loc_82FEE78C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEE7AC:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82FEE7B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r11.u32);
	// b 0x82fee820
	goto loc_82FEE820;
loc_82FEE7BC:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// addi r30,r29,332
	ctx.r30.s64 = ctx.r29.s64 + 332;
	// b 0x82fee814
	goto loc_82FEE814;
loc_82FEE7C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fee7dc
	if (!ctx.cr6.eq) goto loc_82FEE7DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fee7fc
	goto loc_82FEE7FC;
loc_82FEE7DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEE7FC:
	// addi r31,r11,-168
	ctx.r31.s64 = ctx.r11.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3c10
	ctx.lr = 0x82FEE808;
	sub_82FF3C10(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fee828
	if (!ctx.cr0.eq) goto loc_82FEE828;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FEE814:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fee7c8
	if (!ctx.cr6.eq) goto loc_82FEE7C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEE820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82FEE828:
	// stw r31,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r31.u32);
	// b 0x82fee7b0
	goto loc_82FEE7B0;
}

PPC_WEAK_FUNC(sub_82FEE758) {
	__imp__sub_82FEE758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE830) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fee758
	ctx.lr = 0x82FEE84C;
	sub_82FEE758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fee904
	if (ctx.cr0.eq) goto loc_82FEE904;
	// addi r30,r31,356
	ctx.r30.s64 = ctx.r31.s64 + 356;
loc_82FEE858:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82cfabd0
	ctx.lr = 0x82FEE898;
	sub_82CFABD0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82fee8b8
	if (!ctx.cr6.eq) goto loc_82FEE8B8;
	// bl 0x82cfac30
	ctx.lr = 0x82FEE8A4;
	sub_82CFAC30(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82fee8d8
	if (ctx.cr6.eq) goto loc_82FEE8D8;
	// bl 0x82ff6058
	ctx.lr = 0x82FEE8B0;
	sub_82FF6058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82fee8bc
	goto loc_82FEE8BC;
loc_82FEE8B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FEE8BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedf90
	ctx.lr = 0x82FEE8C4;
	sub_82FEDF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee758
	ctx.lr = 0x82FEE8CC;
	sub_82FEE758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82fee858
	if (!ctx.cr0.eq) goto loc_82FEE858;
	// b 0x82fee904
	goto loc_82FEE904;
loc_82FEE8D8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FEE8DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fee8dc
	if (!ctx.cr0.eq) goto loc_82FEE8DC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82ff62c0
	ctx.lr = 0x82FEE904;
	sub_82FF62C0(ctx, base);
loc_82FEE904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82FEE830) {
	__imp__sub_82FEE830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82fee94c
	if (!ctx.cr6.eq) goto loc_82FEE94C;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4099
	ctx.r4.u64 = ctx.r4.u64 | 4099;
	// b 0x82fee97c
	goto loc_82FEE97C;
loc_82FEE94C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// bl 0x82cfaae8
	ctx.lr = 0x82FEE960;
	sub_82CFAAE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fee970
	if (ctx.cr0.eq) goto loc_82FEE970;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fee97c
	goto loc_82FEE97C;
loc_82FEE970:
	// bl 0x82cfac30
	ctx.lr = 0x82FEE974;
	sub_82CFAC30(ctx, base);
	// bl 0x82ff6058
	ctx.lr = 0x82FEE978;
	sub_82FF6058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82FEE97C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedf90
	ctx.lr = 0x82FEE984;
	sub_82FEDF90(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fee998
	if (!ctx.cr0.eq) goto loc_82FEE998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee830
	ctx.lr = 0x82FEE998;
	sub_82FEE830(ctx, base);
loc_82FEE998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEE920) {
	__imp__sub_82FEE920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEE9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEE9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lhz r8,18(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rldimi r7,r8,32,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFF00000000) | (ctx.r7.u64 & 0xFFFF0000FFFFFFFF);
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82feea0c
	goto loc_82FEEA0C;
loc_82FEE9F0:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82feea1c
	if (ctx.cr6.eq) goto loc_82FEEA1C;
	// rldicl r8,r8,62,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FEEA0C:
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fee9f0
	if (!ctx.cr6.eq) goto loc_82FEE9F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FEEA1C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feea30
	if (ctx.cr6.eq) goto loc_82FEEA30;
	// addic. r30,r11,-136
	ctx.xer.ca = ctx.r11.u32 > 135;
	ctx.r30.s64 = ctx.r11.s64 + -136;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82feea3c
	if (!ctx.cr0.eq) goto loc_82FEEA3C;
loc_82FEEA30:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feea98
	if (ctx.cr0.eq) goto loc_82FEEA98;
loc_82FEEA3C:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82feea6c
	if (!ctx.cr6.eq) goto loc_82FEEA6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82ff6368
	ctx.lr = 0x82FEEA54;
	sub_82FF6368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82feea98
	if (ctx.cr0.lt) goto loc_82FEEA98;
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82fedd88
	ctx.lr = 0x82FEEA64;
	sub_82FEDD88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_82FEEA6C:
	// lwz r4,436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82feea84
	if (ctx.cr6.eq) goto loc_82FEEA84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff5118
	ctx.lr = 0x82FEEA80;
	sub_82FF5118(ctx, base);
	// b 0x82feea8c
	goto loc_82FEEA8C;
loc_82FEEA84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedfe8
	ctx.lr = 0x82FEEA8C;
	sub_82FEDFE8(ctx, base);
loc_82FEEA8C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82feea98
	if (ctx.cr0.eq) goto loc_82FEEA98;
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
loc_82FEEA98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEE9B0) {
	__imp__sub_82FEE9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEEAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FEEAA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bgt cr6,0x82feed40
	if (ctx.cr6.gt) goto loc_82FEED40;
	// beq cr6,0x82feed34
	if (ctx.cr6.eq) goto loc_82FEED34;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82feed78
	if (ctx.cr6.gt) goto loc_82FEED78;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-20168
	ctx.r12.s64 = ctx.r12.s64 + -20168;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,-5392
	ctx.r12.s64 = ctx.r12.s64 + -5392;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FEEAF0;
	case 1:
		goto loc_82FEEB10;
	case 2:
		goto loc_82FEEB2C;
	case 3:
		goto loc_82FEEB38;
	case 4:
		goto loc_82FEEB44;
	case 5:
		goto loc_82FEEB50;
	case 6:
		goto loc_82FEEB5C;
	case 7:
		goto loc_82FEEB68;
	case 8:
		goto loc_82FEEB74;
	case 9:
		goto loc_82FEEB80;
	case 10:
		goto loc_82FEEB8C;
	case 11:
		goto loc_82FEEB98;
	case 12:
		goto loc_82FEEBA4;
	case 13:
		goto loc_82FEEBB0;
	case 14:
		goto loc_82FEEBBC;
	case 15:
		goto loc_82FEEBC8;
	case 16:
		goto loc_82FEEBD4;
	case 17:
		goto loc_82FEEBE0;
	case 18:
		goto loc_82FEEBEC;
	case 19:
		goto loc_82FEEBF8;
	case 20:
		goto loc_82FEEC04;
	case 21:
		goto loc_82FEECA0;
	case 22:
		goto loc_82FEECAC;
	case 23:
		goto loc_82FEECB8;
	case 24:
		goto loc_82FEECC4;
	case 25:
		goto loc_82FEECD0;
	case 26:
		goto loc_82FEED1C;
	case 27:
		goto loc_82FEED28;
	default:
		__builtin_unreachable();
	}
loc_82FEEAF0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bge cr6,0x82feedd8
	if (!ctx.cr6.lt) goto loc_82FEEDD8;
loc_82FEEB08:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82feedd8
	goto loc_82FEEDD8;
loc_82FEEB10:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// ble cr6,0x82feedd8
	if (!ctx.cr6.gt) goto loc_82FEEDD8;
	// b 0x82feeb08
	goto loc_82FEEB08;
loc_82FEEB2C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB38:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB44:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB50:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB5C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB68:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB74:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB80:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB8C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEB98:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBA4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBB0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBBC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBC8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBD4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBE0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBEC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEBF8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEC04:
	// addi r28,r31,236
	ctx.r28.s64 = ctx.r31.s64 + 236;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEC18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r27,r31,164
	ctx.r27.s64 = ctx.r31.s64 + 164;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEC24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82feec8c
	if (!ctx.cr6.gt) goto loc_82FEEC8C;
	// addi r26,r31,280
	ctx.r26.s64 = ctx.r31.s64 + 280;
loc_82FEEC38:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82feec4c
	if (!ctx.cr6.eq) goto loc_82FEEC4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feec6c
	goto loc_82FEEC6C;
loc_82FEEC4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEEC6C:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FEEC74;
	sub_82FEDD88(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82feec38
	if (ctx.cr6.gt) goto loc_82FEEC38;
loc_82FEEC8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEC94;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FEEC94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEC9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82feedd8
	goto loc_82FEEDD8;
loc_82FEECA0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEECAC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEECB8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEECC4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEECD0:
	// addi r28,r31,164
	ctx.r28.s64 = ctx.r31.s64 + 164;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEECE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82feec94
	if (ctx.cr6.eq) goto loc_82FEEC94;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82feed10
	if (ctx.cr6.eq) goto loc_82FEED10;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x82feed14
	goto loc_82FEED14;
loc_82FEED10:
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
loc_82FEED14:
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// b 0x82feec94
	goto loc_82FEEC94;
loc_82FEED1C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEED28:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEED34:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEED40:
	// cmpwi cr6,r4,4097
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4097, ctx.xer);
	// beq cr6,0x82feedcc
	if (ctx.cr6.eq) goto loc_82FEEDCC;
	// cmpwi cr6,r4,4099
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4099, ctx.xer);
	// beq cr6,0x82feedc0
	if (ctx.cr6.eq) goto loc_82FEEDC0;
	// cmpwi cr6,r4,4100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4100, ctx.xer);
	// beq cr6,0x82feedb4
	if (ctx.cr6.eq) goto loc_82FEEDB4;
	// cmpwi cr6,r4,4101
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4101, ctx.xer);
	// beq cr6,0x82feeda8
	if (ctx.cr6.eq) goto loc_82FEEDA8;
	// cmpwi cr6,r4,4102
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4102, ctx.xer);
	// beq cr6,0x82feed9c
	if (ctx.cr6.eq) goto loc_82FEED9C;
	// cmpwi cr6,r4,4103
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4103, ctx.xer);
	// beq cr6,0x82feed90
	if (ctx.cr6.eq) goto loc_82FEED90;
	// cmpwi cr6,r4,4104
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4104, ctx.xer);
	// beq cr6,0x82feed84
	if (ctx.cr6.eq) goto loc_82FEED84;
loc_82FEED78:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x82feedd8
	goto loc_82FEEDD8;
loc_82FEED84:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEED90:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEED9C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEDA8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEDB4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEDC0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82feedd4
	goto loc_82FEEDD4;
loc_82FEEDCC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82FEEDD4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FEEDD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEEAA0) {
	__imp__sub_82FEEAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEEDE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fee430
	ctx.lr = 0x82FEEE08;
	sub_82FEE430(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82feee18
	if (ctx.cr0.eq) goto loc_82FEEE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FEEE18;
	sub_824FE010(ctx, base);
loc_82FEEE18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FEEDE8) {
	__imp__sub_82FEEDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEEE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEEE40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r31,236
	ctx.r28.s64 = ctx.r31.s64 + 236;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEE54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEE60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// beq 0x82feee94
	if (ctx.cr0.eq) goto loc_82FEEE94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEE84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedf18
	ctx.lr = 0x82FEEE8C;
	sub_82FEDF18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEE94;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82FEEE94:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feeec8
	if (ctx.cr6.eq) goto loc_82FEEEC8;
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
loc_82FEEEA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fee200
	ctx.lr = 0x82FEEEAC;
	sub_82FEE200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x82fee590
	ctx.lr = 0x82FEEEBC;
	sub_82FEE590(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82feeea4
	if (!ctx.cr6.eq) goto loc_82FEEEA4;
loc_82FEEEC8:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82cfaa48
	ctx.lr = 0x82FEEED0;
	sub_82CFAA48(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,292
	ctx.r30.s64 = ctx.r31.s64 + 292;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// b 0x82feef24
	goto loc_82FEEF24;
loc_82FEEEE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82feeef8
	if (!ctx.cr6.eq) goto loc_82FEEEF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feef18
	goto loc_82FEEF18;
loc_82FEEEF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEEF18:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FEEF20;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FEEF24:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82feeee4
	if (!ctx.cr6.eq) goto loc_82FEEEE4;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r30,r31,280
	ctx.r30.s64 = ctx.r31.s64 + 280;
	// b 0x82feef84
	goto loc_82FEEF84;
loc_82FEEF38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82feef4c
	if (!ctx.cr6.eq) goto loc_82FEEF4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82feef6c
	goto loc_82FEEF6C;
loc_82FEEF4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEEF6C:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FEEF74;
	sub_82FEDD88(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FEEF84:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82feef38
	if (!ctx.cr6.eq) goto loc_82FEEF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FEEF94;
	sub_82FF64E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEF9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FEEFA0:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82feefb8
	if (!ctx.cr6.eq) goto loc_82FEEFB8;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82feefe4
	if (ctx.cr6.eq) goto loc_82FEEFE4;
loc_82FEEFB8:
	// cmplwi cr6,r30,1000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1000, ctx.xer);
	// bge cr6,0x82feefe4
	if (!ctx.cr6.lt) goto loc_82FEEFE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEFC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ff6130
	ctx.lr = 0x82FEEFD4;
	sub_82FF6130(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEEFDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82feefa0
	goto loc_82FEEFA0;
loc_82FEEFE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEEFEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FEEFF4;
	sub_82FEDD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEEE38) {
	__imp__sub_82FEEE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82FEF008;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fef048
	if (!ctx.cr6.eq) goto loc_82FEF048;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
loc_82FEF048:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82ca2c60
	ctx.lr = 0x82FEF054;
	sub_82CA2C60(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fef068
	if (!ctx.cr0.eq) goto loc_82FEF068;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_82FEF068:
	// addi r27,r31,236
	ctx.r27.s64 = ctx.r31.s64 + 236;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF074;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// rldimi r8,r9,32,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r8.u64 & 0xFFFF0000FFFFFFFF);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// b 0x82fef0cc
	goto loc_82FEF0CC;
loc_82FEF0A8:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x82fef0d8
	if (ctx.cr6.eq) goto loc_82FEF0D8;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82FEF0CC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fef0a8
	if (!ctx.cr6.eq) goto loc_82FEF0A8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82FEF0D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fef0ec
	if (ctx.cr6.eq) goto loc_82FEF0EC;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4100
	ctx.r30.u64 = ctx.r30.u64 | 4100;
	// b 0x82fef180
	goto loc_82FEF180;
loc_82FEF0EC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4a90
	ctx.lr = 0x82FEF110;
	sub_82FF4A90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef180
	if (ctx.cr0.lt) goto loc_82FEF180;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,136
	ctx.r5.s64 = ctx.r11.s64 + 136;
	// bl 0x82fedc80
	ctx.lr = 0x82FEF12C;
	sub_82FEDC80(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82FEF140:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef140
	if (!ctx.cr0.eq) goto loc_82FEF140;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF164;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// bl 0x82ff2210
	ctx.lr = 0x82FEF178;
	sub_82FF2210(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82fef1ac
	if (!ctx.cr0.lt) goto loc_82FEF1AC;
loc_82FEF180:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fef194
	if (ctx.cr6.eq) goto loc_82FEF194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee590
	ctx.lr = 0x82FEF194;
	sub_82FEE590(ctx, base);
loc_82FEF194:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82fef1a4
	if (ctx.cr6.eq) goto loc_82FEF1A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF1A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FEF1A4:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// b 0x82fef1b8
	goto loc_82FEF1B8;
loc_82FEF1AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82FEF1B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF000) {
	__imp__sub_82FEF000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82FEF1D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fef214
	if (!ctx.cr6.eq) goto loc_82FEF214;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r27,r1,84
	ctx.r27.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
loc_82FEF214:
	// addi r28,r31,236
	ctx.r28.s64 = ctx.r31.s64 + 236;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF220;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r8,288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r9,18(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 18);
	// rldimi r7,r9,32,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r7.u64 & 0xFFFF0000FFFFFFFF);
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x82fef288
	goto loc_82FEF288;
loc_82FEF264:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x82fef294
	if (ctx.cr6.eq) goto loc_82FEF294;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82FEF288:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82fef264
	if (!ctx.cr6.eq) goto loc_82FEF264;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82FEF294:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fef2a8
	if (ctx.cr6.eq) goto loc_82FEF2A8;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4100
	ctx.r30.u64 = ctx.r30.u64 | 4100;
	// b 0x82fef338
	goto loc_82FEF338;
loc_82FEF2A8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4a90
	ctx.lr = 0x82FEF2C8;
	sub_82FF4A90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef338
	if (ctx.cr0.lt) goto loc_82FEF338;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,136
	ctx.r5.s64 = ctx.r11.s64 + 136;
	// bl 0x82fedc80
	ctx.lr = 0x82FEF2E4;
	sub_82FEDC80(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82FEF2F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef2f8
	if (!ctx.cr0.eq) goto loc_82FEF2F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF31C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// bl 0x82ff2210
	ctx.lr = 0x82FEF330;
	sub_82FF2210(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82fef364
	if (!ctx.cr0.lt) goto loc_82FEF364;
loc_82FEF338:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fef34c
	if (ctx.cr6.eq) goto loc_82FEF34C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee590
	ctx.lr = 0x82FEF34C;
	sub_82FEE590(ctx, base);
loc_82FEF34C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82fef35c
	if (ctx.cr6.eq) goto loc_82FEF35C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF35C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FEF35C:
	// stw r20,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r20.u32);
	// b 0x82fef370
	goto loc_82FEF370;
loc_82FEF364:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82FEF370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF1C8) {
	__imp__sub_82FEF1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEF388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ff6130
	ctx.lr = 0x82FEF39C;
	sub_82FF6130(ctx, base);
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF3A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fef468
	if (!ctx.cr0.eq) goto loc_82FEF468;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fef468
	if (!ctx.cr0.eq) goto loc_82FEF468;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fef408
	if (ctx.cr6.eq) goto loc_82FEF408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee678
	ctx.lr = 0x82FEF3D0;
	sub_82FEE678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
loc_82FEF3D8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef3d8
	if (!ctx.cr0.eq) goto loc_82FEF3D8;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r30,0
	ctx.r30.s64 = 0;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// b 0x82fef474
	goto loc_82FEF474;
loc_82FEF408:
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// b 0x82fef45c
	goto loc_82FEF45C;
loc_82FEF410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82fef424
	if (!ctx.cr6.eq) goto loc_82FEF424;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fef444
	goto loc_82FEF444;
loc_82FEF424:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FEF444:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// bl 0x82ff1a60
	ctx.lr = 0x82FEF450;
	sub_82FF1A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82fef474
	if (!ctx.cr6.eq) goto loc_82FEF474;
loc_82FEF45C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82fef410
	if (!ctx.cr6.eq) goto loc_82FEF410;
loc_82FEF468:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82FEF474:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF47C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF380) {
	__imp__sub_82FEF380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEF498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF4B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fef4cc
	if (ctx.cr0.eq) goto loc_82FEF4CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff3c10
	ctx.lr = 0x82FEF4C4;
	sub_82FF3C10(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// b 0x82fef500
	goto loc_82FEF500;
loc_82FEF4CC:
	// addi r10,r31,332
	ctx.r10.s64 = ctx.r31.s64 + 332;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// stw r10,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r10.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fef500
	if (!ctx.cr6.eq) goto loc_82FEF500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fee830
	ctx.lr = 0x82FEF500;
	sub_82FEE830(ctx, base);
loc_82FEF500:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF508;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF490) {
	__imp__sub_82FEF490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FEF518;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r31,408
	ctx.r27.s64 = ctx.r31.s64 + 408;
	// addi r30,r31,436
	ctx.r30.s64 = ctx.r31.s64 + 436;
	// lwz r26,160(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
loc_82FEF530:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fef578
	if (!ctx.cr6.eq) goto loc_82FEF578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82ff6368
	ctx.lr = 0x82FEF548;
	sub_82FF6368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82fef578
	if (!ctx.cr0.lt) goto loc_82FEF578;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FEF55C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef55c
	if (!ctx.cr0.eq) goto loc_82FEF55C;
loc_82FEF578:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82cfab40
	ctx.lr = 0x82FEF5AC;
	sub_82CFAB40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82fef5fc
	if (!ctx.cr6.eq) goto loc_82FEF5FC;
	// bl 0x82cfac30
	ctx.lr = 0x82FEF5B8;
	sub_82CFAC30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,997
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 997, ctx.xer);
	// beq cr6,0x82fef620
	if (ctx.cr6.eq) goto loc_82FEF620;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82fedc28
	ctx.lr = 0x82FEF5D4;
	sub_82FEDC28(ctx, base);
	// cmpwi cr6,r28,10040
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10040, ctx.xer);
	// beq cr6,0x82fef530
	if (ctx.cr6.eq) goto loc_82FEF530;
	// cmpwi cr6,r28,10054
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10054, ctx.xer);
	// beq cr6,0x82fef530
	if (ctx.cr6.eq) goto loc_82FEF530;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82fedd88
	ctx.lr = 0x82FEF5EC;
	sub_82FEDD88(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff6058
	ctx.lr = 0x82FEF5F8;
	sub_82FF6058(ctx, base);
	// b 0x82fef674
	goto loc_82FEF674;
loc_82FEF5FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fef644
	if (ctx.cr6.eq) goto loc_82FEF644;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x82fee9b0
	ctx.lr = 0x82FEF61C;
	sub_82FEE9B0(ctx, base);
	// b 0x82fef530
	goto loc_82FEF530;
loc_82FEF620:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FEF624:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef624
	if (!ctx.cr0.eq) goto loc_82FEF624;
	// b 0x82fef664
	goto loc_82FEF664;
loc_82FEF644:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FEF648:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fef648
	if (!ctx.cr0.eq) goto loc_82FEF648;
loc_82FEF664:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82ff62c0
	ctx.lr = 0x82FEF670;
	sub_82FF62C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82FEF674:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF510) {
	__imp__sub_82FEF510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82fef6b4
	if (!ctx.cr6.eq) goto loc_82FEF6B4;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// bl 0x82fedd88
	ctx.lr = 0x82FEF6A8;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// b 0x82fef6ec
	goto loc_82FEF6EC;
loc_82FEF6B4:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// bl 0x82cfaae8
	ctx.lr = 0x82FEF6C8;
	sub_82CFAAE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fef6e4
	if (ctx.cr0.eq) goto loc_82FEF6E4;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x82fee9b0
	ctx.lr = 0x82FEF6E4;
	sub_82FEE9B0(ctx, base);
loc_82FEF6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fef510
	ctx.lr = 0x82FEF6EC;
	sub_82FEF510(ctx, base);
loc_82FEF6EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEF680) {
	__imp__sub_82FEF680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FEF708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF720;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r31,320
	ctx.r11.s64 = ctx.r31.s64 + 320;
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82fef73c
	if (!ctx.cr6.eq) goto loc_82FEF73C;
	// bl 0x82fee920
	ctx.lr = 0x82FEF738;
	sub_82FEE920(ctx, base);
	// b 0x82fef740
	goto loc_82FEF740;
loc_82FEF73C:
	// bl 0x82fef680
	ctx.lr = 0x82FEF740;
	sub_82FEF680(ctx, base);
loc_82FEF740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF748;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FEF750;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF700) {
	__imp__sub_82FEF700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEF760;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cfaa30
	ctx.lr = 0x82FEF778;
	sub_82CFAA30(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// beq cr6,0x82fef7e4
	if (ctx.cr6.eq) goto loc_82FEF7E4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82cfaa90
	ctx.lr = 0x82FEF7B8;
	sub_82CFAA90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82fef7e4
	if (ctx.cr6.eq) goto loc_82FEF7E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x82cfaa58
	ctx.lr = 0x82FEF7DC;
	sub_82CFAA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fef7f4
	if (ctx.cr0.eq) goto loc_82FEF7F4;
loc_82FEF7E4:
	// bl 0x82cfac30
	ctx.lr = 0x82FEF7E8;
	sub_82CFAC30(ctx, base);
	// bl 0x82ff6058
	ctx.lr = 0x82FEF7EC;
	sub_82FF6058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82fef81c
	goto loc_82FEF81C;
loc_82FEF7F4:
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FEF800;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fef510
	ctx.lr = 0x82FEF808;
	sub_82FEF510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FEF814;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82fef838
	if (!ctx.cr6.lt) goto loc_82FEF838;
loc_82FEF81C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82fef83c
	if (ctx.cr6.eq) goto loc_82FEF83C;
	// bl 0x82cfaa48
	ctx.lr = 0x82FEF82C;
	sub_82CFAA48(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x82fef83c
	goto loc_82FEF83C;
loc_82FEF838:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82FEF83C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF758) {
	__imp__sub_82FEF758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FEF850;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82ff6250
	ctx.lr = 0x82FEF880;
	sub_82FF6250(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef910
	if (ctx.cr0.lt) goto loc_82FEF910;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82ff6368
	ctx.lr = 0x82FEF894;
	sub_82FF6368(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef910
	if (ctx.cr0.lt) goto loc_82FEF910;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ff6588
	ctx.lr = 0x82FEF8A4;
	sub_82FF6588(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef910
	if (ctx.cr0.lt) goto loc_82FEF910;
	// li r4,448
	ctx.r4.s64 = 448;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ff5788
	ctx.lr = 0x82FEF8B8;
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fef8cc
	if (!ctx.cr0.eq) goto loc_82FEF8CC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82fef910
	goto loc_82FEF910;
loc_82FEF8CC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82fee2a0
	ctx.lr = 0x82FEF8E4;
	sub_82FEE2A0(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ff64d8
	ctx.lr = 0x82FEF8F8;
	sub_82FF64D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fef910
	if (ctx.cr0.lt) goto loc_82FEF910;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fef758
	ctx.lr = 0x82FEF908;
	sub_82FEF758(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82fef970
	if (!ctx.cr0.lt) goto loc_82FEF970;
loc_82FEF910:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fef920
	if (ctx.cr6.eq) goto loc_82FEF920;
	// bl 0x82fedd88
	ctx.lr = 0x82FEF920;
	sub_82FEDD88(ctx, base);
loc_82FEF920:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fef930
	if (ctx.cr6.eq) goto loc_82FEF930;
	// bl 0x82fedd88
	ctx.lr = 0x82FEF930;
	sub_82FEDD88(ctx, base);
loc_82FEF930:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fef95c
	if (ctx.cr6.eq) goto loc_82FEF95C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fef94c
	if (ctx.cr6.eq) goto loc_82FEF94C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FEF94C;
	sub_82FF64E8(ctx, base);
loc_82FEF94C:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FEF95C;
	sub_82FEDD88(ctx, base);
loc_82FEF95C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fef97c
	if (ctx.cr6.eq) goto loc_82FEF97C;
	// bl 0x82ff60d0
	ctx.lr = 0x82FEF96C;
	sub_82FF60D0(ctx, base);
	// b 0x82fef97c
	goto loc_82FEF97C;
loc_82FEF970:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82FEF97C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF848) {
	__imp__sub_82FEF848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF988) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x82fee590
	sub_82FEE590(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF988) {
	__imp__sub_82FEF988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF998) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82fede80
	sub_82FEDE80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEF998) {
	__imp__sub_82FEF998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEF9B0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,22
	ctx.r11.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82fef9d8
	if (!ctx.cr6.lt) goto loc_82FEF9D8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x82fef9d8
	if (ctx.cr6.lt) goto loc_82FEF9D8;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// b 0x82fef9f0
	goto loc_82FEF9F0;
loc_82FEF9D8:
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// blt cr6,0x82fef9f4
	if (ctx.cr6.lt) goto loc_82FEF9F4;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82fef9f4
	if (!ctx.cr6.lt) goto loc_82FEF9F4;
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
loc_82FEF9F0:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FEF9F4:
	// rlwinm r11,r4,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFC00;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEF9B0) {
	__imp__sub_82FEF9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFA08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fefa24
	if (!ctx.cr6.eq) goto loc_82FEFA24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FEFA24:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82fefa44
	if (!ctx.cr6.eq) goto loc_82FEFA44;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82FEFA44:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFA08) {
	__imp__sub_82FEFA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFA60) {
	PPC_FUNC_PROLOGUE();
loc_82FEFA60:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82fefa90
	if (!ctx.cr6.eq) goto loc_82FEFA90;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fefac0
	if (ctx.cr6.eq) goto loc_82FEFAC0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82fefa98
	goto loc_82FEFA98;
loc_82FEFA90:
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
loc_82FEFA98:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fefa60
	if (ctx.cr0.eq) goto loc_82FEFA60;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FEFAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFA60) {
	__imp__sub_82FEFA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFAC8) {
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
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// bge cr6,0x82fefaf8
	if (!ctx.cr6.lt) goto loc_82FEFAF8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82FEFAF8:
	// bl 0x82266070
	ctx.lr = 0x82FEFAFC;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff74c0
	ctx.lr = 0x82FEFB0C;
	sub_82FF74C0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FEFAC8) {
	__imp__sub_82FEFAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fefb68
	if (ctx.cr0.eq) goto loc_82FEFB68;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r31,8192
	ctx.r31.s64 = 536870912;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ff7688
	ctx.lr = 0x82FEFB64;
	sub_82FF7688(ctx, base);
	// b 0x82fefb84
	goto loc_82FEFB84;
loc_82FEFB68:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ff7688
	ctx.lr = 0x82FEFB84;
	sub_82FF7688(ctx, base);
loc_82FEFB84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFB28) {
	__imp__sub_82FEFB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFB98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fefbc0
	if (ctx.cr6.eq) goto loc_82FEFBC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fefc18
	goto loc_82FEFC18;
loc_82FEFBC0:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fefbd8
	if (ctx.cr0.eq) goto loc_82FEFBD8;
	// bl 0x82ff6a08
	ctx.lr = 0x82FEFBD4;
	sub_82FF6A08(ctx, base);
	// b 0x82fefbf0
	goto loc_82FEFBF0;
loc_82FEFBD8:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82ff6a10
	ctx.lr = 0x82FEFBF0;
	sub_82FF6A10(ctx, base);
loc_82FEFBF0:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82FEFBF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fefbf8
	if (!ctx.cr0.eq) goto loc_82FEFBF8;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
loc_82FEFC18:
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

PPC_WEAK_FUNC(sub_82FEFB98) {
	__imp__sub_82FEFB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFC30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FEFC4C;
	sub_82FEDD88(ctx, base);
	// lhz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r11.u16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82fefc6c
	if (!ctx.cr6.eq) goto loc_82FEFC6C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82fefc80
	goto loc_82FEFC80;
loc_82FEFC6C:
	// bl 0x82266070
	ctx.lr = 0x82FEFC70;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ff74c0
	ctx.lr = 0x82FEFC80;
	sub_82FF74C0(ctx, base);
loc_82FEFC80:
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

PPC_WEAK_FUNC(sub_82FEFC30) {
	__imp__sub_82FEFC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	// addi r11,r3,1016
	ctx.r11.s64 = ctx.r3.s64 + 1016;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fefd18
	if (ctx.cr6.eq) goto loc_82FEFD18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82fefcc0
	if (ctx.cr6.eq) goto loc_82FEFCC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82FEFCC0:
	// lhz r10,824(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 824);
	// lhz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 872);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82fefd10
	if (!ctx.cr0.gt) goto loc_82FEFD10;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82fefd08
	if (ctx.cr6.lt) goto loc_82FEFD08;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82fefcf8
	if (!ctx.cr6.lt) goto loc_82FEFCF8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82fefd04
	goto loc_82FEFD04;
loc_82FEFCF8:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82FEFD04:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FEFD08:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82fefd14
	goto loc_82FEFD14;
loc_82FEFD10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FEFD14:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FEFD18:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFC98) {
	__imp__sub_82FEFC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFD20) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82fefd34
	if (!ctx.cr6.lt) goto loc_82FEFD34;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82fefd60
	goto loc_82FEFD60;
loc_82FEFD34:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x82fefd50
	if (!ctx.cr6.lt) goto loc_82FEFD50;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x82fefd5c
	goto loc_82FEFD5C;
loc_82FEFD50:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_82FEFD5C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FEFD60:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r9,874(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 874);
	// lhz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 872);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFD20) {
	__imp__sub_82FEFD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFD80) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1016
	ctx.r11.s64 = ctx.r3.s64 + 1016;
	// lhz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82fefda8
	if (ctx.cr6.eq) goto loc_82FEFDA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82FEFDA8:
	// lhz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 824);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFD80) {
	__imp__sub_82FEFD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFDC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,988(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 988);
	// addi r11,r3,984
	ctx.r11.s64 = ctx.r3.s64 + 984;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fefe0c
	if (ctx.cr6.eq) goto loc_82FEFE0C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fefe0c
	if (ctx.cr0.eq) goto loc_82FEFE0C;
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
loc_82FEFDE4:
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fefe2c
	if (ctx.cr6.lt) goto loc_82FEFE2C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fefe0c
	if (ctx.cr6.eq) goto loc_82FEFE0C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82fefde4
	if (!ctx.cr0.eq) goto loc_82FEFDE4;
loc_82FEFE0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82FEFE2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fefe0c
	if (ctx.cr6.eq) goto loc_82FEFE0C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFDC8) {
	__imp__sub_82FEFDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFE58) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1020(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// addi r11,r3,1016
	ctx.r11.s64 = ctx.r3.s64 + 1016;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fefe9c
	if (ctx.cr6.eq) goto loc_82FEFE9C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fefe9c
	if (ctx.cr0.eq) goto loc_82FEFE9C;
	// lhz r9,832(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 832);
loc_82FEFE74:
	// lhz r8,824(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 824);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// blt cr6,0x82fefecc
	if (ctx.cr6.lt) goto loc_82FEFECC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fefe9c
	if (ctx.cr6.eq) goto loc_82FEFE9C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82fefe74
	if (!ctx.cr0.eq) goto loc_82FEFE74;
loc_82FEFE9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82FEFEB8:
	// lhz r11,1044(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1044);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,1044(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1044, ctx.r11.u16);
	// blr 
	return;
loc_82FEFECC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fefe9c
	if (ctx.cr6.eq) goto loc_82FEFE9C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82fefeb8
	goto loc_82FEFEB8;
}

PPC_WEAK_FUNC(sub_82FEFE58) {
	__imp__sub_82FEFE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFEF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82ff7560
	ctx.lr = 0x82FEFF14;
	sub_82FF7560(ctx, base);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82ff7560
	ctx.lr = 0x82FEFF1C;
	sub_82FF7560(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ff7560
	ctx.lr = 0x82FEFF24;
	sub_82FF7560(ctx, base);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82ff7560
	ctx.lr = 0x82FEFF2C;
	sub_82FF7560(ctx, base);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FEFEF8) {
	__imp__sub_82FEFEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FEFF58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff5788
	ctx.lr = 0x82FEFF74;
	sub_82FF5788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82feff84
	if (!ctx.cr0.eq) goto loc_82FEFF84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82feffb8
	goto loc_82FEFFB8;
loc_82FEFF84:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82feffac
	if (ctx.cr6.eq) goto loc_82FEFFAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FEFFA0;
	sub_82CA2C60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ff57a0
	ctx.lr = 0x82FEFFAC;
	sub_82FF57A0(ctx, base);
loc_82FEFFAC:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82FEFFB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FEFF50) {
	__imp__sub_82FEFF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FEFFC0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82ff0044
	goto loc_82FF0044;
loc_82FEFFCC:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bge cr6,0x82ff0004
	if (!ctx.cr6.lt) goto loc_82FF0004;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x82ff0004
	if (!ctx.cr6.lt) goto loc_82FF0004;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FF0004:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwx r10,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82FF0044:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82feffcc
	if (ctx.cr6.lt) goto loc_82FEFFCC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FEFFC0) {
	__imp__sub_82FEFFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF0060;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff01ec
	if (!ctx.cr6.eq) goto loc_82FF01EC;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x82fedd88
	ctx.lr = 0x82FF007C;
	sub_82FEDD88(ctx, base);
	// lhz r10,1042(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r10,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r10.u16);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r29,420(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff0140
	if (ctx.cr0.eq) goto loc_82FF0140;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82ff00f8
	if (ctx.cr6.eq) goto loc_82FF00F8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82ff5b30
	ctx.lr = 0x82FF00D4;
	sub_82FF5B30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ff5b70
	ctx.lr = 0x82FF00E4;
	sub_82FF5B70(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ff00f8
	if (!ctx.cr6.eq) goto loc_82FF00F8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FF00F8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,7
	ctx.r6.s64 = 7;
	// lbz r5,660(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 660);
	// addi r4,r31,660
	ctx.r4.s64 = ctx.r31.s64 + 660;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// addi r11,r31,1096
	ctx.r11.s64 = ctx.r31.s64 + 1096;
	// stw r8,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r8.u32);
	// stw r6,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r6.u32);
	// stw r10,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r10.u32);
	// stw r7,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r7.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r28,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r28.u32);
	// stw r30,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r30.u32);
	// stw r9,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r9.u32);
	// stb r5,1096(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1096, ctx.r5.u8);
	// b 0x82ff01cc
	goto loc_82FF01CC;
loc_82FF0140:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x82ff0184
	if (ctx.cr6.eq) goto loc_82FF0184;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82ff0174
	if (ctx.cr6.lt) goto loc_82FF0174;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82ff0174
	if (!ctx.cr6.eq) goto loc_82FF0174;
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
loc_82FF0174:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// bne cr6,0x82ff0184
	if (!ctx.cr6.eq) goto loc_82FF0184;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FF0184:
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,660
	ctx.r10.s64 = ctx.r31.s64 + 660;
	// lbz r28,660(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 660);
	// addi r10,r31,1096
	ctx.r10.s64 = ctx.r31.s64 + 1096;
	// stw r6,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r6.u32);
	// stw r4,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r4.u32);
	// stw r7,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r7.u32);
	// stw r5,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r5.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r8,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r8.u32);
	// stw r3,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r3.u32);
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// stw r9,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r9.u32);
	// stb r28,1096(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1096, ctx.r28.u8);
loc_82FF01CC:
	// lbz r11,661(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 661);
	// stb r11,1097(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1097, ctx.r11.u8);
	// lbz r11,662(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 662);
	// stb r11,1098(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1098, ctx.r11.u8);
	// lbz r11,663(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 663);
	// stb r11,1099(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1099, ctx.r11.u8);
	// stw r29,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r29.u32);
	// b 0x82ff028c
	goto loc_82FF028C;
loc_82FF01EC:
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,40
	ctx.r11.s64 = 40;
	// lbz r6,660(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 660);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// addi r11,r31,660
	ctx.r11.s64 = ctx.r31.s64 + 660;
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// addi r11,r31,1096
	ctx.r11.s64 = ctx.r31.s64 + 1096;
	// stw r7,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r7.u32);
	// stw r5,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r5.u32);
	// bne cr6,0x82ff0248
	if (!ctx.cr6.eq) goto loc_82FF0248;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r8,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r8.u32);
	// stw r10,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r10.u32);
	// stw r9,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r9.u32);
	// b 0x82ff0268
	goto loc_82FF0268;
loc_82FF0248:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// stw r9,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r9.u32);
	// stw r8,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r8.u32);
loc_82FF0268:
	// stw r4,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// stb r6,1096(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1096, ctx.r6.u8);
	// lbz r11,661(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 661);
	// stb r11,1097(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1097, ctx.r11.u8);
	// lbz r11,662(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 662);
	// stb r11,1098(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1098, ctx.r11.u8);
	// lbz r11,663(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 663);
	// stb r11,1099(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1099, ctx.r11.u8);
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
loc_82FF028C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0058) {
	__imp__sub_82FF0058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0298) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,1042(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1042);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ff02c4
	if (!ctx.cr6.eq) goto loc_82FF02C4;
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r10,1184
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1184, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82FF02C4:
	// lhz r10,1032(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1032);
	// lhz r9,1046(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1046);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r8,1050(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1050);
	// lhz r7,1056(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1056);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x82ff0308
	if (!ctx.cr6.eq) goto loc_82FF0308;
	// lhz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 980);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82FF0308:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF0298) {
	__imp__sub_82FF0298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0310) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff0354
	if (ctx.cr6.eq) goto loc_82FF0354;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff0340
	if (ctx.cr6.lt) goto loc_82FF0340;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ff0350
	goto loc_82FF0350;
loc_82FF0340:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ff0350
	if (!ctx.cr6.lt) goto loc_82FF0350;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82FF0350:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF0354:
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff038c
	if (ctx.cr6.eq) goto loc_82FF038C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff0378
	if (ctx.cr6.lt) goto loc_82FF0378;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ff0388
	goto loc_82FF0388;
loc_82FF0378:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ff0388
	if (!ctx.cr6.lt) goto loc_82FF0388;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82FF0388:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF038C:
	// lhz r7,1050(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1050);
	// lhz r9,1032(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1032);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lhz r6,1056(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1056);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82ff03e0
	if (ctx.cr6.lt) goto loc_82FF03E0;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff03e0
	if (ctx.cr6.eq) goto loc_82FF03E0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff03cc
	if (ctx.cr6.lt) goto loc_82FF03CC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ff03dc
	goto loc_82FF03DC;
loc_82FF03CC:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ff03dc
	if (!ctx.cr6.lt) goto loc_82FF03DC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82FF03DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF03E0:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF0310) {
	__imp__sub_82FF0310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF03E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r31,984
	ctx.r10.s64 = ctx.r31.s64 + 984;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff0418
	if (ctx.cr6.eq) goto loc_82FF0418;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ff0424
	if (!ctx.cr0.eq) goto loc_82FF0424;
loc_82FF0418:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ff7560
	ctx.lr = 0x82FF0420;
	sub_82FF7560(ctx, base);
	// b 0x82ff0478
	goto loc_82FF0478;
loc_82FF0424:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff0454
	if (ctx.cr6.lt) goto loc_82FF0454;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ff7560
	ctx.lr = 0x82FF0444;
	sub_82FF7560(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// b 0x82ff0478
	goto loc_82FF0478;
loc_82FF0454:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff046c
	if (ctx.cr0.eq) goto loc_82FF046C;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff0478
	if (ctx.cr6.eq) goto loc_82FF0478;
loc_82FF046C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82fefac8
	ctx.lr = 0x82FF0478;
	sub_82FEFAC8(ctx, base);
loc_82FF0478:
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

PPC_WEAK_FUNC(sub_82FF03E8) {
	__imp__sub_82FF03E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm r11,r11,0,12,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8FFFFF;
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// beq 0x82ff04f4
	if (ctx.cr0.eq) goto loc_82FF04F4;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82ff0310
	ctx.lr = 0x82FF04D4;
	sub_82FF0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// beq 0x82ff04f0
	if (ctx.cr0.eq) goto loc_82FF04F0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ff74c0
	ctx.lr = 0x82FF04EC;
	sub_82FF74C0(ctx, base);
	// b 0x82ff04f4
	goto loc_82FF04F4;
loc_82FF04F0:
	// bl 0x82ff7560
	ctx.lr = 0x82FF04F4;
	sub_82FF7560(ctx, base);
loc_82FF04F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF0490) {
	__imp__sub_82FF0490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0508) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82ff05a8
	if (ctx.cr6.eq) goto loc_82FF05A8;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff05a8
	if (!ctx.cr0.eq) goto loc_82FF05A8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82ff0550
	if (!ctx.cr6.eq) goto loc_82FF0550;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF054C;
	sub_82FF7560(ctx, base);
	// b 0x82ff05a8
	goto loc_82FF05A8;
loc_82FF0550:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82ff0560
	if (!ctx.cr6.eq) goto loc_82FF0560;
	// lhz r30,1036(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1036);
	// b 0x82ff0564
	goto loc_82FF0564;
loc_82FF0560:
	// lhz r30,1034(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1034);
loc_82FF0564:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff0588
	if (!ctx.cr0.eq) goto loc_82FF0588;
	// bl 0x82266070
	ctx.lr = 0x82FF0574;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF0584;
	sub_82FF74C0(ctx, base);
	// b 0x82ff05a8
	goto loc_82FF05A8;
loc_82FF0588:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// add r4,r30,r5
	ctx.r4.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff05a8
	if (ctx.cr6.lt) goto loc_82FF05A8;
	// bl 0x82fefac8
	ctx.lr = 0x82FF05A8;
	sub_82FEFAC8(ctx, base);
loc_82FF05A8:
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

PPC_WEAK_FUNC(sub_82FF0508) {
	__imp__sub_82FF0508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF05C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8df0
	ctx.lr = 0x82FF05DC;
	sub_82FF8DF0(ctx, base);
	// addi r31,r31,872
	ctx.r31.s64 = ctx.r31.s64 + 872;
loc_82FF05E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x82ff8ae0
	ctx.lr = 0x82FF05EC;
	sub_82FF8AE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fefa60
	ctx.lr = 0x82FF05F4;
	sub_82FEFA60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff05e0
	if (!ctx.cr0.eq) goto loc_82FF05E0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF05C0) {
	__imp__sub_82FF05C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF0618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82ff0638
	if (!ctx.cr6.lt) goto loc_82FF0638;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82ff0664
	goto loc_82FF0664;
loc_82FF0638:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x82ff0654
	if (!ctx.cr6.lt) goto loc_82FF0654;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x82ff0660
	goto loc_82FF0660;
loc_82FF0654:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_82FF0660:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF0664:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,1050(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1050);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x82ff0694
	if (!ctx.cr6.lt) goto loc_82FF0694;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ff0734
	goto loc_82FF0734;
loc_82FF0694:
	// lwz r10,1148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	// addi r31,r30,1008
	ctx.r31.s64 = ctx.r30.s64 + 1008;
	// sth r11,1050(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1050, ctx.r11.u16);
	// rlwinm r11,r10,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r27,1028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1028, ctx.r27.u32);
	// stw r11,1148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1148, ctx.r11.u32);
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// b 0x82ff0728
	goto loc_82FF0728;
loc_82FF06B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff06c4
	if (!ctx.cr6.eq) goto loc_82FF06C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF06C4:
	// lhz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82ff0730
	if (ctx.cr6.lt) goto loc_82FF0730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6ce0
	ctx.lr = 0x82FF06E4;
	sub_82FF6CE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff0710
	if (ctx.cr6.eq) goto loc_82FF0710;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF0710:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF0718;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1042);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1042, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FF0728:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff06b4
	if (!ctx.cr6.eq) goto loc_82FF06B4;
loc_82FF0730:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82FF0734:
	// lhz r11,1032(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1032);
	// lhz r10,1050(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1050);
	// lhz r9,1056(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1056);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff07a4
	if (ctx.cr6.lt) goto loc_82FF07A4;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff07a4
	if (ctx.cr6.eq) goto loc_82FF07A4;
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blt cr6,0x82ff0774
	if (ctx.cr6.lt) goto loc_82FF0774;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FF0774:
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// addi r3,r30,356
	ctx.r3.s64 = ctx.r30.s64 + 356;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff079c
	if (ctx.cr0.eq) goto loc_82FF079C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff07a4
	if (ctx.cr6.lt) goto loc_82FF07A4;
loc_82FF079C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF07A4;
	sub_82FF74C0(ctx, base);
loc_82FF07A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0610) {
	__imp__sub_82FF0610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF07B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF07B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ff083c
	if (!ctx.cr6.lt) goto loc_82FF083C;
	// addi r29,r31,572
	ctx.r29.s64 = ctx.r31.s64 + 572;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7360
	ctx.lr = 0x82FF07EC;
	sub_82FF7360(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff0844
	if (ctx.cr0.lt) goto loc_82FF0844;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82ff95b0
	ctx.lr = 0x82FF0814;
	sub_82FF95B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff0844
	if (ctx.cr0.lt) goto loc_82FF0844;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r31,624
	ctx.r6.s64 = ctx.r31.s64 + 624;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ff9618
	ctx.lr = 0x82FF0834;
	sub_82FF9618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff0854
	if (!ctx.cr0.eq) goto loc_82FF0854;
loc_82FF083C:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4109
	ctx.r30.u64 = ctx.r30.u64 | 4109;
loc_82FF0844:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ff6338
	ctx.lr = 0x82FF0850;
	sub_82FF6338(ctx, base);
	// b 0x82ff08b8
	goto loc_82FF08B8;
loc_82FF0854:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,604
	ctx.r9.s64 = ctx.r31.s64 + 604;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r9,636(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
loc_82FF08B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF07B0) {
	__imp__sub_82FF07B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF08D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,572
	ctx.r29.s64 = ctx.r31.s64 + 572;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82ff7360
	ctx.lr = 0x82FF08FC;
	sub_82FF7360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff098c
	if (ctx.cr0.lt) goto loc_82FF098C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ff95b0
	ctx.lr = 0x82FF091C;
	sub_82FF95B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff098c
	if (ctx.cr0.lt) goto loc_82FF098C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,604
	ctx.r9.s64 = ctx.r31.s64 + 604;
	// addi r8,r30,330
	ctx.r8.s64 = ctx.r30.s64 + 330;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,652(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u16);
loc_82FF098C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF08C8) {
	__imp__sub_82FF08C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF09A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,1024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1024);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff09d4
	if (!ctx.cr6.eq) goto loc_82FF09D4;
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// andi. r11,r11,49151
	ctx.r11.u64 = ctx.r11.u64 & 49151;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// b 0x82ff0a00
	goto loc_82FF0A00;
loc_82FF09D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF0A00;
	sub_82FEDD88(ctx, base);
loc_82FF0A00:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82ff0a6c
	if (ctx.cr6.lt) goto loc_82FF0A6C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ff0a6c
	if (ctx.cr6.gt) goto loc_82FF0A6C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r10,r10,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r10.s64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff0a6c
	if (ctx.cr6.lt) goto loc_82FF0A6C;
	// lwz r11,676(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82FF0A6C:
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff0a80
	if (ctx.cr0.eq) goto loc_82FF0A80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff6c60
	ctx.lr = 0x82FF0A80;
	sub_82FF6C60(ctx, base);
loc_82FF0A80:
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff0b14
	if (ctx.cr0.eq) goto loc_82FF0B14;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// addi r10,r28,1008
	ctx.r10.s64 = ctx.r28.s64 + 1008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff0aa0
	if (!ctx.cr6.eq) goto loc_82FF0AA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF0AA0:
	// lhz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff0ad4
	if (ctx.cr6.eq) goto loc_82FF0AD4;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_82FF0AB0:
	// lhz r8,324(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82ff0af0
	if (!ctx.cr0.gt) goto loc_82FF0AF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff0ad4
	if (ctx.cr6.eq) goto loc_82FF0AD4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ff0ab0
	if (!ctx.cr0.eq) goto loc_82FF0AB0;
loc_82FF0AD4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// b 0x82ff0b28
	goto loc_82FF0B28;
loc_82FF0AF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff0ad4
	if (ctx.cr6.eq) goto loc_82FF0AD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x82ff0b28
	goto loc_82FF0B28;
loc_82FF0B14:
	// lhz r11,1042(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1042);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r28)
	PPC_STORE_U16(ctx.r28.u32 + 1042, ctx.r11.u16);
	// bl 0x82fedd88
	ctx.lr = 0x82FF0B28;
	sub_82FEDD88(ctx, base);
loc_82FF0B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0998) {
	__imp__sub_82FF0998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r4.u32);
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// beq 0x82ff0b54
	if (ctx.cr0.eq) goto loc_82FF0B54;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x82ff0b5c
	goto loc_82FF0B5C;
loc_82FF0B54:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
loc_82FF0B5C:
	// clrldi r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFF;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// oris r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 65536;
	// rlwinm r7,r10,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// std r9,616(r3)
	PPC_STORE_U64(ctx.r3.u32 + 616, ctx.r9.u64);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r10,872(r3)
	PPC_STORE_U16(ctx.r3.u32 + 872, ctx.r10.u16);
	// sth r10,874(r3)
	PPC_STORE_U16(ctx.r3.u32 + 874, ctx.r10.u16);
	// sth r7,876(r3)
	PPC_STORE_U16(ctx.r3.u32 + 876, ctx.r7.u16);
	// sth r11,1032(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1032, ctx.r11.u16);
	// sth r11,1046(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1046, ctx.r11.u16);
	// sth r11,1048(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1048, ctx.r11.u16);
	// sth r11,1050(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1050, ctx.r11.u16);
	// sth r11,974(r3)
	PPC_STORE_U16(ctx.r3.u32 + 974, ctx.r11.u16);
	// sth r11,976(r3)
	PPC_STORE_U16(ctx.r3.u32 + 976, ctx.r11.u16);
	// sth r8,978(r3)
	PPC_STORE_U16(ctx.r3.u32 + 978, ctx.r8.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF0B30) {
	__imp__sub_82FF0B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF0BA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF0BB8;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r4,r29,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bl 0x82ff9ed8
	ctx.lr = 0x82FF0BCC;
	sub_82FF9ED8(ctx, base);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0310
	ctx.lr = 0x82FF0BE8;
	sub_82FF0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff0c00
	if (ctx.cr0.eq) goto loc_82FF0C00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF0C00;
	sub_82FF74C0(ctx, base);
loc_82FF0C00:
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r9,1148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r8,250
	ctx.r8.s64 = 250;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// andi. r11,r11,250
	ctx.r11.u64 = ctx.r11.u64 & 250;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// stb r8,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r8.u8);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// bl 0x82ff7560
	ctx.lr = 0x82FF0C30;
	sub_82FF7560(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0BA0) {
	__imp__sub_82FF0BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0C38) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r5,436(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// xor r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r31,388(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff67f8
	ctx.lr = 0x82FF0C6C;
	sub_82FF67F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF0C70:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff0c70
	if (!ctx.cr0.eq) goto loc_82FF0C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF0C38) {
	__imp__sub_82FF0C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0CA8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// xor r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r31,388(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff6858
	ctx.lr = 0x82FF0CD8;
	sub_82FF6858(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF0CDC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff0cdc
	if (!ctx.cr0.eq) goto loc_82FF0CDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF0CA8) {
	__imp__sub_82FF0CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF0D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF0D2C;
	sub_82FEFC98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF0D3C;
	sub_82FEFD20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ff0d64
	if (ctx.cr6.eq) goto loc_82FF0D64;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ff0d5c
	if (!ctx.cr6.eq) goto loc_82FF0D5C;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
loc_82FF0D5C:
	// lwz r7,444(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// b 0x82ff0d68
	goto loc_82FF0D68;
loc_82FF0D64:
	// lwz r7,448(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
loc_82FF0D68:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r31,872
	ctx.r8.s64 = ctx.r31.s64 + 872;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r30,388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff6918
	ctx.lr = 0x82FF0D88;
	sub_82FF6918(ctx, base);
	// lhz r10,1040(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff0da4
	if (ctx.cr6.lt) goto loc_82FF0DA4;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x82ff0dc0
	goto loc_82FF0DC0;
loc_82FF0DA4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ff0dc4
	if (ctx.cr6.eq) goto loc_82FF0DC4;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ff0dc4
	if (!ctx.cr6.eq) goto loc_82FF0DC4;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_82FF0DC0:
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF0DC4:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF0DD8;
	sub_82FF7560(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF0DDC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff0ddc
	if (!ctx.cr0.eq) goto loc_82FF0DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0D10) {
	__imp__sub_82FF0D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0E08) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,7
	ctx.r9.s64 = 7;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff0e2c
	if (!ctx.cr6.eq) goto loc_82FF0E2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ff0e40
	goto loc_82FF0E40;
loc_82FF0E2C:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82FF0E40:
	// lhz r11,38(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff0e54
	if (!ctx.cr0.eq) goto loc_82FF0E54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff0e70
	goto loc_82FF0E70;
loc_82FF0E54:
	// lha r11,32(r5)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 32));
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82FF0E70:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF0E08) {
	__imp__sub_82FF0E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF0E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF0E94;
	sub_82FEFC98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF0EA4;
	sub_82FEFD20(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r31,872
	ctx.r6.s64 = ctx.r31.s64 + 872;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r30,388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff68b8
	ctx.lr = 0x82FF0EC4;
	sub_82FF68B8(ctx, base);
	// lhz r10,1040(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff0ee0
	if (ctx.cr6.lt) goto loc_82FF0EE0;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF0EE0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF0EE4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff0ee4
	if (!ctx.cr0.eq) goto loc_82FF0EE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0E80) {
	__imp__sub_82FF0E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0F10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF0F30;
	sub_82FEDD88(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff0f58
	if (!ctx.cr6.eq) goto loc_82FF0F58;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,136(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82266070
	ctx.lr = 0x82FF0F48;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF0F58;
	sub_82FF74C0(ctx, base);
loc_82FF0F58:
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

PPC_WEAK_FUNC(sub_82FF0F10) {
	__imp__sub_82FF0F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF0F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF0F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF0F88;
	sub_82266070(ctx, base);
	// lhz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 336);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff0fa4
	if (!ctx.cr0.eq) goto loc_82FF0FA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF0FA0;
	sub_82FEDD88(ctx, base);
	// b 0x82ff1050
	goto loc_82FF1050;
loc_82FF0FA4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r29,r11,27,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82ff0fc0
	if (!ctx.cr6.eq) goto loc_82FF0FC0;
	// lhz r9,1054(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1054);
	// b 0x82ff0fd4
	goto loc_82FF0FD4;
loc_82FF0FC0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82ff0fd0
	if (!ctx.cr6.eq) goto loc_82FF0FD0;
	// lhz r9,1052(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1052);
	// b 0x82ff0fd4
	goto loc_82FF0FD4;
loc_82FF0FD0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF0FD4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa598
	ctx.lr = 0x82FF1004;
	sub_82FFA598(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bne cr6,0x82ff1040
	if (!ctx.cr6.eq) goto loc_82FF1040;
	// addis r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -2147483648;
	// addi r11,r31,992
	ctx.r11.s64 = ctx.r31.s64 + 992;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// b 0x82ff1050
	goto loc_82FF1050;
loc_82FF1040:
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefdc8
	ctx.lr = 0x82FF1050;
	sub_82FEFDC8(ctx, base);
loc_82FF1050:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff03e8
	ctx.lr = 0x82FF105C;
	sub_82FF03E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF0F70) {
	__imp__sub_82FF0F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF1070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff10ec
	if (ctx.cr0.eq) goto loc_82FF10EC;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff10ec
	if (ctx.cr0.eq) goto loc_82FF10EC;
	// bl 0x82266070
	ctx.lr = 0x82FF109C;
	sub_82266070(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa598
	ctx.lr = 0x82FF10D4;
	sub_82FFA598(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF10DC;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF10EC;
	sub_82FF74C0(ctx, base);
loc_82FF10EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF10F4;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1068) {
	__imp__sub_82FF1068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF1108;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82ff6f98
	ctx.lr = 0x82FF112C;
	sub_82FF6F98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff11c4
	if (ctx.cr0.lt) goto loc_82FF11C4;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8898
	ctx.lr = 0x82FF1164;
	sub_82FF8898(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff117c
	if (!ctx.cr0.lt) goto loc_82FF117C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff70b0
	ctx.lr = 0x82FF1178;
	sub_82FF70B0(ctx, base);
	// b 0x82ff11c4
	goto loc_82FF11C4;
loc_82FF117C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r31,520
	ctx.r9.s64 = ctx.r31.s64 + 520;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,3,5,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
loc_82FF11C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1100) {
	__imp__sub_82FF1100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF11D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,984(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	// addi r11,r3,984
	ctx.r11.s64 = ctx.r3.s64 + 984;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff1214
	if (ctx.cr6.eq) goto loc_82FF1214;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ff1214
	if (ctx.cr0.eq) goto loc_82FF1214;
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
loc_82FF11EC:
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ff1234
	if (ctx.cr6.lt) goto loc_82FF1234;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff1214
	if (ctx.cr6.eq) goto loc_82FF1214;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ff11ec
	if (!ctx.cr0.eq) goto loc_82FF11EC;
loc_82FF1214:
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82FF1234:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff1214
	if (ctx.cr6.eq) goto loc_82FF1214;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF11D0) {
	__imp__sub_82FF11D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF1268;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r30,1016
	ctx.r31.s64 = ctx.r30.s64 + 1016;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff128c
	if (ctx.cr6.eq) goto loc_82FF128C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FF128C:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff12d8
	if (ctx.cr6.eq) goto loc_82FF12D8;
	// lhz r10,838(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 838);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff1570
	if (!ctx.cr0.eq) goto loc_82FF1570;
	// lhz r10,1044(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1044);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,1044(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1044, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF12D4;
	sub_82FEDD88(ctx, base);
	// b 0x82ff1570
	goto loc_82FF1570;
loc_82FF12D8:
	// lhz r29,832(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 832);
	// lbz r11,1148(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1148);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
loc_82FF12E8:
	// lhz r11,838(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 838);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff12fc
	if (ctx.cr0.eq) goto loc_82FF12FC;
	// lhz r28,832(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 832);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82FF12FC:
	// lhz r11,1044(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1044);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1044(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1044, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff1334
	if (ctx.cr6.eq) goto loc_82FF1334;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1334:
	// bl 0x82fedd88
	ctx.lr = 0x82FF1338;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff1368
	if (ctx.cr6.eq) goto loc_82FF1368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff1354
	if (!ctx.cr6.eq) goto loc_82FF1354;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF1354:
	// lhz r10,828(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 828);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ff12e8
	if (ctx.cr0.eq) goto loc_82FF12E8;
	// b 0x82ff136c
	goto loc_82FF136C;
loc_82FF1368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF136C:
	// lwz r6,1148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	// rlwinm. r11,r6,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1380
	if (!ctx.cr0.eq) goto loc_82FF1380;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ff1570
	if (ctx.cr6.eq) goto loc_82FF1570;
loc_82FF1380:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff1570
	if (ctx.cr6.eq) goto loc_82FF1570;
	// lhz r8,872(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 872);
	// subf r11,r29,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r29.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff13d8
	if (!ctx.cr0.gt) goto loc_82FF13D8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ff13d0
	if (ctx.cr6.lt) goto loc_82FF13D0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ff13c0
	if (!ctx.cr6.lt) goto loc_82FF13C0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82ff13cc
	goto loc_82FF13CC;
loc_82FF13C0:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82FF13CC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF13D0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82ff13dc
	goto loc_82FF13DC;
loc_82FF13D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF13DC:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff1434
	if (ctx.cr6.eq) goto loc_82FF1434;
	// lhz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 832);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff1434
	if (!ctx.cr0.gt) goto loc_82FF1434;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ff1430
	if (ctx.cr6.lt) goto loc_82FF1430;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ff1420
	if (!ctx.cr6.lt) goto loc_82FF1420;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82ff142c
	goto loc_82FF142C;
loc_82FF1420:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82FF142C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF1430:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FF1434:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff1454
	if (!ctx.cr6.eq) goto loc_82FF1454;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ff1570
	if (ctx.cr6.eq) goto loc_82FF1570;
	// oris r11,r6,256
	ctx.r11.u64 = ctx.r6.u64 | 16777216;
	// b 0x82ff1524
	goto loc_82FF1524;
loc_82FF1454:
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ff1490
	if (ctx.cr6.lt) goto loc_82FF1490;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x82ff1480
	if (!ctx.cr6.lt) goto loc_82FF1480;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x82ff148c
	goto loc_82FF148C;
loc_82FF1480:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_82FF148C:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF1490:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ff14cc
	if (ctx.cr6.eq) goto loc_82FF14CC;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r31,104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// oris r11,r6,256
	ctx.r11.u64 = ctx.r6.u64 | 16777216;
	// blt cr6,0x82ff14c8
	if (ctx.cr6.lt) goto loc_82FF14C8;
	// rlwinm r11,r6,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_82FF14C8:
	// stw r11,1148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1148, ctx.r11.u32);
loc_82FF14CC:
	// lwz r8,1148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	// rlwinm. r11,r8,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1510
	if (ctx.cr0.eq) goto loc_82FF1510;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r11,874(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 874);
	// lhz r9,872(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 872);
	// lhz r6,1040(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1040);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82ff1510
	if (!ctx.cr6.lt) goto loc_82FF1510;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ff150c
	if (!ctx.cr6.gt) goto loc_82FF150C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82FF150C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82FF1510:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ff1570
	if (ctx.cr6.eq) goto loc_82FF1570;
	// rlwinm. r11,r8,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff152c
	if (ctx.cr0.eq) goto loc_82FF152C;
	// oris r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 | 2097152;
loc_82FF1524:
	// stw r11,1148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1148, ctx.r11.u32);
	// b 0x82ff1570
	goto loc_82FF1570;
loc_82FF152C:
	// oris r11,r8,64
	ctx.r11.u64 = ctx.r8.u64 | 4194304;
	// stw r11,1148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1148, ctx.r11.u32);
	// bl 0x82266070
	ctx.lr = 0x82FF1538;
	sub_82266070(ctx, base);
	// lwz r10,412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// addi r11,r30,356
	ctx.r11.s64 = ctx.r30.s64 + 356;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// beq 0x82ff1564
	if (ctx.cr0.eq) goto loc_82FF1564;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff1570
	if (ctx.cr6.lt) goto loc_82FF1570;
loc_82FF1564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF1570;
	sub_82FF74C0(ctx, base);
loc_82FF1570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1260) {
	__imp__sub_82FF1260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1578) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r3,r30,472
	ctx.r3.s64 = ctx.r30.s64 + 472;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82ff70b0
	ctx.lr = 0x82FF15C4;
	sub_82FF70B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8970
	ctx.lr = 0x82FF15CC;
	sub_82FF8970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF15D4;
	sub_82FEDD88(ctx, base);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF1578) {
	__imp__sub_82FF1578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF15F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stb r9,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r9.u8);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF1634;
	sub_82FEFEF8(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// rlwimi r10,r30,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82FF15F8) {
	__imp__sub_82FF15F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF1670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82ffa948
	ctx.lr = 0x82FF1684;
	sub_82FFA948(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82ffa948
	ctx.lr = 0x82FF169C;
	sub_82FFA948(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r30,r31,984
	ctx.r30.s64 = ctx.r31.s64 + 984;
	// b 0x82ff16e8
	goto loc_82FF16E8;
loc_82FF16A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16bc
	if (!ctx.cr6.eq) goto loc_82FF16BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff16dc
	goto loc_82FF16DC;
loc_82FF16BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF16DC:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF16E4;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF16E8:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16a8
	if (!ctx.cr6.eq) goto loc_82FF16A8;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// addi r30,r31,992
	ctx.r30.s64 = ctx.r31.s64 + 992;
	// b 0x82ff173c
	goto loc_82FF173C;
loc_82FF16FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1710
	if (!ctx.cr6.eq) goto loc_82FF1710;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff1730
	goto loc_82FF1730;
loc_82FF1710:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1730:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF1738;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF173C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16fc
	if (!ctx.cr6.eq) goto loc_82FF16FC;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// addi r30,r31,1000
	ctx.r30.s64 = ctx.r31.s64 + 1000;
	// b 0x82ff17ac
	goto loc_82FF17AC;
loc_82FF1750:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1764
	if (!ctx.cr6.eq) goto loc_82FF1764;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff1784
	goto loc_82FF1784;
loc_82FF1764:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1784:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF1794;
	sub_82FF6D50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF179C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF17AC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1750
	if (!ctx.cr6.eq) goto loc_82FF1750;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x82ff181c
	goto loc_82FF181C;
loc_82FF17C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff17d4
	if (!ctx.cr6.eq) goto loc_82FF17D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff17f4
	goto loc_82FF17F4;
loc_82FF17D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF17F4:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6dc8
	ctx.lr = 0x82FF1804;
	sub_82FF6DC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF180C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF181C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff17c0
	if (!ctx.cr6.eq) goto loc_82FF17C0;
	// lwz r30,512(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r29,r31,512
	ctx.r29.s64 = ctx.r31.s64 + 512;
	// b 0x82ff1840
	goto loc_82FF1840;
loc_82FF1830:
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ff8008
	ctx.lr = 0x82FF183C;
	sub_82FF8008(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF1840:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1850
	if (ctx.cr6.eq) goto loc_82FF1850;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82ff1830
	if (!ctx.cr0.eq) goto loc_82FF1830;
loc_82FF1850:
	// lwz r30,520(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1890
	if (ctx.cr6.eq) goto loc_82FF1890;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82ff1890
	if (ctx.cr0.eq) goto loc_82FF1890;
loc_82FF1868:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1880
	if (ctx.cr6.eq) goto loc_82FF1880;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82FF1880:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ff8008
	ctx.lr = 0x82FF1888;
	sub_82FF8008(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ff1868
	if (!ctx.cr6.eq) goto loc_82FF1868;
loc_82FF1890:
	// addi r31,r31,604
	ctx.r31.s64 = ctx.r31.s64 + 604;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ff18a8
	goto loc_82FF18A8;
loc_82FF189C:
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// bl 0x82ff9d10
	ctx.lr = 0x82FF18A4;
	sub_82FF9D10(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF18A8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff18b8
	if (ctx.cr6.eq) goto loc_82FF18B8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82ff189c
	if (!ctx.cr0.eq) goto loc_82FF189C;
loc_82FF18B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1668) {
	__imp__sub_82FF1668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF18C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq 0x82ff1918
	if (ctx.cr0.eq) goto loc_82FF1918;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82feffc0
	ctx.lr = 0x82FF1918;
	sub_82FEFFC0(ctx, base);
loc_82FF1918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF18C0) {
	__imp__sub_82FF18C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1930) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20028
	ctx.r11.s64 = ctx.r11.s64 + -20028;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ff5768
	ctx.lr = 0x82FF1964;
	sub_82FF5768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF1930) {
	__imp__sub_82FF1930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF1988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-20020
	ctx.r11.s64 = ctx.r11.s64 + -20020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff19b8
	if (ctx.cr6.eq) goto loc_82FF19B8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF19B4;
	sub_82FF57A0(ctx, base);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_82FF19B8:
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82ff6e78
	ctx.lr = 0x82FF19C0;
	sub_82FF6E78(ctx, base);
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff19d8
	if (ctx.cr6.eq) goto loc_82FF19D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF19D4;
	sub_82FF57A0(ctx, base);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
loc_82FF19D8:
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x82ff7268
	ctx.lr = 0x82FF19E0;
	sub_82FF7268(ctx, base);
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF19EC;
	sub_82FF74B8(ctx, base);
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF19F8;
	sub_82FF74B8(ctx, base);
	// addi r28,r31,296
	ctx.r28.s64 = ctx.r31.s64 + 296;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF1A04;
	sub_82FF74B8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fedd88
	ctx.lr = 0x82FF1A0C;
	sub_82FEDD88(ctx, base);
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A18;
	sub_829CE870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// addi r28,r11,-23752
	ctx.r28.s64 = ctx.r11.s64 + -23752;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// bl 0x829ce870
	ctx.lr = 0x82FF1A2C;
	sub_829CE870(ctx, base);
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A38;
	sub_829CE870(ctx, base);
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A44;
	sub_829CE870(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// addi r11,r11,-20140
	ctx.r11.s64 = ctx.r11.s64 + -20140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1980) {
	__imp__sub_82FF1980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF1A68;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF1A80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff1cd4
	if (ctx.cr6.eq) goto loc_82FF1CD4;
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff1cd4
	if (!ctx.cr0.eq) goto loc_82FF1CD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff1ad0
	if (ctx.cr6.eq) goto loc_82FF1AD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff1ad0
	if (ctx.cr6.eq) goto loc_82FF1AD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0058
	ctx.lr = 0x82FF1AB8;
	sub_82FF0058(ctx, base);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff1cb0
	if (!ctx.cr6.eq) goto loc_82FF1CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1668
	ctx.lr = 0x82FF1ACC;
	sub_82FF1668(ctx, base);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1AD0:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r26,r31,512
	ctx.r26.s64 = ctx.r31.s64 + 512;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82ff1b8c
	if (ctx.cr6.eq) goto loc_82FF1B8C;
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// addi r28,r31,1136
	ctx.r28.s64 = ctx.r31.s64 + 1136;
	// addi r27,r31,1060
	ctx.r27.s64 = ctx.r31.s64 + 1060;
loc_82FF1AEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ff1b00
	if (!ctx.cr6.eq) goto loc_82FF1B00;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1B00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1B20:
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82ff80b8
	ctx.lr = 0x82FF1B50;
	sub_82FF80B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1b80
	if (ctx.cr0.eq) goto loc_82FF1B80;
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82ff1c48
	if (!ctx.cr6.eq) goto loc_82FF1C48;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1c48
	if (ctx.cr6.eq) goto loc_82FF1C48;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF1B80;
	sub_82FF7BB0(ctx, base);
loc_82FF1B80:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ff1aec
	if (!ctx.cr6.eq) goto loc_82FF1AEC;
loc_82FF1B8C:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1bfc
	if (ctx.cr6.eq) goto loc_82FF1BFC;
	// addi r27,r31,592
	ctx.r27.s64 = ctx.r31.s64 + 592;
	// addi r29,r31,1136
	ctx.r29.s64 = ctx.r31.s64 + 1136;
	// addi r28,r31,1060
	ctx.r28.s64 = ctx.r31.s64 + 1060;
loc_82FF1BA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ff18c0
	ctx.lr = 0x82FF1BAC;
	sub_82FF18C0(ctx, base);
	// addi r30,r3,-32
	ctx.r30.s64 = ctx.r3.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff9998
	ctx.lr = 0x82FF1BC0;
	sub_82FF9998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1bf0
	if (ctx.cr0.eq) goto loc_82FF1BF0;
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff1c70
	if (!ctx.cr6.eq) goto loc_82FF1C70;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1c70
	if (ctx.cr6.eq) goto loc_82FF1C70;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff9c80
	ctx.lr = 0x82FF1BF0;
	sub_82FF9C80(ctx, base);
loc_82FF1BF0:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff1ba4
	if (!ctx.cr6.eq) goto loc_82FF1BA4;
loc_82FF1BFC:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1c18
	if (!ctx.cr0.eq) goto loc_82FF1C18;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1c98
	if (ctx.cr0.eq) goto loc_82FF1C98;
loc_82FF1C18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff1c98
	if (!ctx.cr6.eq) goto loc_82FF1C98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82fefb28
	ctx.lr = 0x82FF1C40;
	sub_82FEFB28(ctx, base);
	// stw r23,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r23.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C48:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF1C4C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff1c4c
	if (!ctx.cr0.eq) goto loc_82FF1C4C;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C70:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF1C74:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff1c74
	if (!ctx.cr0.eq) goto loc_82FF1C74;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff1cd4
	if (ctx.cr6.eq) goto loc_82FF1CD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0058
	ctx.lr = 0x82FF1CB0;
	sub_82FF0058(ctx, base);
loc_82FF1CB0:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF1CC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r31,1060
	ctx.r11.s64 = ctx.r31.s64 + 1060;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82ff1cf8
	goto loc_82FF1CF8;
loc_82FF1CD4:
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF1CF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF1CF8;
	sub_82FEDD88(ctx, base);
loc_82FF1CF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1A60) {
	__imp__sub_82FF1A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF1D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff1d38
	if (!ctx.cr6.eq) goto loc_82FF1D38;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b226c
	ctx.lr = 0x82FF1D34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1D38:
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ff1dbc
	if (!ctx.cr0.eq) goto loc_82FF1DBC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r9,512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1d84
	if (!ctx.cr0.eq) goto loc_82FF1D84;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1dbc
	if (ctx.cr0.eq) goto loc_82FF1DBC;
loc_82FF1D84:
	// rlwinm. r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1dbc
	if (!ctx.cr0.eq) goto loc_82FF1DBC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF1D90:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff1d90
	if (!ctx.cr0.eq) goto loc_82FF1D90;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r29,1
	ctx.r29.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF1DBC:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e74
	if (!ctx.cr0.eq) goto loc_82FF1E74;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff1e74
	if (ctx.cr6.eq) goto loc_82FF1E74;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e34
	if (!ctx.cr0.eq) goto loc_82FF1E34;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e34
	if (!ctx.cr0.eq) goto loc_82FF1E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0298
	ctx.lr = 0x82FF1DF4;
	sub_82FF0298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1e34
	if (ctx.cr0.eq) goto loc_82FF1E34;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa508
	ctx.lr = 0x82FF1E04;
	sub_82FFA508(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// ble cr6,0x82ff1e28
	if (!ctx.cr6.gt) goto loc_82FF1E28;
	// bl 0x82266070
	ctx.lr = 0x82FF1E14;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF1E24;
	sub_82FF74C0(ctx, base);
	// b 0x82ff1e34
	goto loc_82FF1E34;
loc_82FF1E28:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
loc_82FF1E34:
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1e74
	if (ctx.cr0.eq) goto loc_82FF1E74;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF1E48:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff1e48
	if (!ctx.cr0.eq) goto loc_82FF1E48;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r28,1
	ctx.r28.s64 = 1;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF1E74:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b226c
	ctx.lr = 0x82FF1E7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ff1e90
	if (ctx.cr6.eq) goto loc_82FF1E90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fede10
	ctx.lr = 0x82FF1E90;
	sub_82FEDE10(ctx, base);
loc_82FF1E90:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ff1ea4
	if (ctx.cr6.eq) goto loc_82FF1EA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fef490
	ctx.lr = 0x82FF1EA4;
	sub_82FEF490(ctx, base);
loc_82FF1EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF1D08) {
	__imp__sub_82FF1D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff1f0c
	if (!ctx.cr6.eq) goto loc_82FF1F0C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff1f00
	if (ctx.cr6.lt) goto loc_82FF1F00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1f00
	if (ctx.cr6.eq) goto loc_82FF1F00;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// ori r11,r9,4103
	ctx.r11.u64 = ctx.r9.u64 | 4103;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82fefef8
	sub_82FEFEF8(ctx, base);
	return;
loc_82FF1F00:
	// lbz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1144);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82ff1f24
	goto loc_82FF1F24;
loc_82FF1F0C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lbz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1144);
	// bne cr6,0x82ff1f20
	if (!ctx.cr6.eq) goto loc_82FF1F20;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82ff1f24
	goto loc_82FF1F24;
loc_82FF1F20:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_82FF1F24:
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF1EB0) {
	__imp__sub_82FF1EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF1F30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2010
	if (ctx.cr0.eq) goto loc_82FF2010;
	// lwz r9,452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1fc4
	if (ctx.cr6.eq) goto loc_82FF1FC4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// blt cr6,0x82ff1f80
	if (ctx.cr6.lt) goto loc_82FF1F80;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x82ff1f84
	goto loc_82FF1F84;
loc_82FF1F80:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82FF1F84:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff1fc4
	if (ctx.cr6.lt) goto loc_82FF1FC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff20b8
	if (ctx.cr6.eq) goto loc_82FF20B8;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF1FC0;
	sub_82FEFEF8(ctx, base);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF1FC4:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82ff1fd4
	if (ctx.cr6.eq) goto loc_82FF1FD4;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF1FD4;
	sub_82FFA3D0(ctx, base);
loc_82FF1FD4:
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lbz r9,1144(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// rlwinm. r8,r11,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// stb r9,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r9.u8);
	// beq 0x82ff20b8
	if (ctx.cr0.eq) goto loc_82FF20B8;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF2010:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff204c
	if (!ctx.cr0.eq) goto loc_82FF204C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0310
	ctx.lr = 0x82FF2024;
	sub_82FF0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff20b8
	if (ctx.cr0.eq) goto loc_82FF20B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff204c
	if (ctx.cr6.eq) goto loc_82FF204C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF2048;
	sub_82FF74C0(ctx, base);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF204C:
	// lhz r8,1032(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,1050(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1050);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwimi r30,r10,23,8,10
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xE00000) | (ctx.r30.u64 & 0xFFFFFFFFFF1FFFFF);
	// lbz r7,1144(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,1056(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// ori r10,r7,64
	ctx.r10.u64 = ctx.r7.u64 | 64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ff20b0
	if (ctx.cr6.lt) goto loc_82FF20B0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff20b0
	if (ctx.cr6.eq) goto loc_82FF20B0;
	// lwz r10,1028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// oris r11,r30,16
	ctx.r11.u64 = ctx.r30.u64 | 1048576;
	// bge cr6,0x82ff20b4
	if (!ctx.cr6.lt) goto loc_82FF20B4;
loc_82FF20B0:
	// rlwinm r11,r30,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
loc_82FF20B4:
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF20B8:
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

PPC_WEAK_FUNC(sub_82FF1F30) {
	__imp__sub_82FF1F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF20D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82ff2160
	if (ctx.cr6.eq) goto loc_82FF2160;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff210c
	if (!ctx.cr6.eq) goto loc_82FF210C;
	// bl 0x82ff1eb0
	ctx.lr = 0x82FF2108;
	sub_82FF1EB0(ctx, base);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF210C:
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2124
	if (!ctx.cr6.eq) goto loc_82FF2124;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82ff2138
	goto loc_82FF2138;
loc_82FF2124:
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2140
	if (!ctx.cr6.eq) goto loc_82FF2140;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82FF2138:
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF2140:
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2158
	if (!ctx.cr6.eq) goto loc_82FF2158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1f30
	ctx.lr = 0x82FF2154;
	sub_82FF1F30(ctx, base);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF2158:
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x82ff8640
	ctx.lr = 0x82FF2160;
	sub_82FF8640(ctx, base);
loc_82FF2160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF2168;
	sub_82FF1D08(ctx, base);
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

PPC_WEAK_FUNC(sub_82FF20D0) {
	__imp__sub_82FF20D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF2188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,640
	ctx.r29.s64 = ctx.r30.s64 + 640;
	// lwz r31,640(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// b 0x82ff21fc
	goto loc_82FF21FC;
loc_82FF21A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ffae28
	ctx.lr = 0x82FF21B0;
	sub_82FFAE28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2204
	if (!ctx.cr6.eq) goto loc_82FF2204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffa668
	ctx.lr = 0x82FF21CC;
	sub_82FFA668(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82ff07b0
	ctx.lr = 0x82FF21F0;
	sub_82FF07B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82ff2204
	if (ctx.cr0.lt) goto loc_82FF2204;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FF21FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ff21a0
	if (!ctx.cr6.eq) goto loc_82FF21A0;
loc_82FF2204:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2180) {
	__imp__sub_82FF2180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82FF2218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ff2250
	if (ctx.cr6.eq) goto loc_82FF2250;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82FF223C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bne 0x82ff223c
	if (!ctx.cr0.eq) goto loc_82FF223C;
loc_82FF2250:
	// addi r22,r25,40
	ctx.r22.s64 = ctx.r25.s64 + 40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF225C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// ori r26,r11,65534
	ctx.r26.u64 = ctx.r11.u64 | 65534;
loc_82FF226C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff22b0
	if (ctx.cr0.eq) goto loc_82FF22B0;
	// subfic r11,r30,127
	ctx.xer.ca = ctx.r30.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r30.s64;
	// rlwinm r27,r11,24,0,7
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
loc_82FF2284:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x82ff1100
	ctx.lr = 0x82FF2298;
	sub_82FF1100(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff234c
	if (ctx.cr0.lt) goto loc_82FF234C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2284
	if (ctx.cr6.lt) goto loc_82FF2284;
loc_82FF22B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82ff226c
	if (ctx.cr6.lt) goto loc_82FF226C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ff2348
	if (ctx.cr6.eq) goto loc_82FF2348;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r25,572
	ctx.r3.s64 = ctx.r25.s64 + 572;
	// bl 0x82ff7340
	ctx.lr = 0x82FF22D4;
	sub_82FF7340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff22e8
	if (!ctx.cr0.eq) goto loc_82FF22E8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ff234c
	goto loc_82FF234C;
loc_82FF22E8:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82FF22F0:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2338
	if (ctx.cr0.eq) goto loc_82FF2338;
	// subfic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r30.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 2147483648;
loc_82FF230C:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 | ctx.r28.u64;
	// bl 0x82ff08c8
	ctx.lr = 0x82FF2320;
	sub_82FF08C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff234c
	if (ctx.cr0.lt) goto loc_82FF234C;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff230c
	if (ctx.cr6.lt) goto loc_82FF230C;
loc_82FF2338:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82ff22f0
	if (ctx.cr6.lt) goto loc_82FF22F0;
loc_82FF2348:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF234C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF2354;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2210) {
	__imp__sub_82FF2210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2360) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff247c
	if (ctx.cr6.eq) goto loc_82FF247C;
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff2420
	if (!ctx.cr0.eq) goto loc_82FF2420;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF23A4;
	sub_82FF6D50(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF23D0;
	sub_82FEDD88(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF23FC;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1042);
	// lwz r10,1164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	// addi r3,r30,664
	ctx.r3.s64 = ctx.r30.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,1042(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1042, ctx.r11.u16);
	// stw r10,1164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1164, ctx.r10.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF241C;
	sub_82FFA3D0(ctx, base);
	// b 0x82ff247c
	goto loc_82FF247C;
loc_82FF2420:
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff247c
	if (ctx.cr0.lt) goto loc_82FF247C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ff247c
	if (!ctx.cr6.lt) goto loc_82FF247C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x82ff11d0
	ctx.lr = 0x82FF247C;
	sub_82FF11D0(ctx, base);
loc_82FF247C:
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

PPC_WEAK_FUNC(sub_82FF2360) {
	__imp__sub_82FF2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FF24A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r4,40(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// bl 0x82ff5b30
	ctx.lr = 0x82FF24E0;
	sub_82FF5B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82ff26fc
	if (ctx.cr6.lt) goto loc_82FF26FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1607
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1607, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lhz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lhz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ff26fc
	if (ctx.cr6.lt) goto loc_82FF26FC;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,60000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60000, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lwz r11,29(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lwz r11,9(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// lwz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ff5b70
	ctx.lr = 0x82FF257C;
	sub_82FF5B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r10.u16);
	// lwz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x82ff0b30
	ctx.lr = 0x82FF25E4;
	sub_82FF0B30(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff2624
	if (ctx.cr6.eq) goto loc_82FF2624;
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x82ff7340
	ctx.lr = 0x82FF25F8;
	sub_82FF7340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff2624
	if (!ctx.cr0.eq) goto loc_82FF2624;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82ff26ec
	goto loc_82FF26EC;
loc_82FF2624:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
loc_82FF262C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff267c
	if (ctx.cr0.eq) goto loc_82FF267C;
	// subfic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r29.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 2147483648;
loc_82FF2648:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x82ff08c8
	ctx.lr = 0x82FF2664;
	sub_82FF08C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff26d4
	if (ctx.cr0.lt) goto loc_82FF26D4;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2648
	if (ctx.cr6.lt) goto loc_82FF2648;
loc_82FF267C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82ff262c
	if (ctx.cr6.lt) goto loc_82FF262C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,17(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// bl 0x82266070
	ctx.lr = 0x82FF2698;
	sub_82266070(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff26b0
	if (!ctx.cr6.gt) goto loc_82FF26B0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82FF26B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0ba0
	ctx.lr = 0x82FF26BC;
	sub_82FF0BA0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// stw r25,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff2700
	goto loc_82FF2700;
loc_82FF26D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82FF26EC:
	// stb r26,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r26.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF26FC;
	sub_82FEFEF8(ctx, base);
loc_82FF26FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82FF2700:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2498) {
	__imp__sub_82FF2498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff2770
	if (ctx.cr6.eq) goto loc_82FF2770;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7);
	// bl 0x82ff0ba0
	ctx.lr = 0x82FF2770;
	sub_82FF0BA0(ctx, base);
loc_82FF2770:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF2708) {
	__imp__sub_82FF2708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF2790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2820
	if (ctx.cr0.eq) goto loc_82FF2820;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82ff2820
	if (ctx.cr6.lt) goto loc_82FF2820;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// addi r30,r11,-7
	ctx.r30.s64 = ctx.r11.s64 + -7;
	// lwz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4104
	ctx.r10.u64 = ctx.r10.u64 | 4104;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF280C;
	sub_82FEFEF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff2820
	if (ctx.cr6.eq) goto loc_82FF2820;
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff2824
	goto loc_82FF2824;
loc_82FF2820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF2824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2788) {
	__imp__sub_82FF2788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff288c
	if (ctx.cr6.eq) goto loc_82FF288C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff2878
	if (!ctx.cr6.eq) goto loc_82FF2878;
	// lwz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff288c
	if (ctx.cr0.eq) goto loc_82FF288C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF2874;
	sub_82FEFEF8(ctx, base);
	// b 0x82ff288c
	goto loc_82FF288C;
loc_82FF2878:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,4113
	ctx.r11.u64 = ctx.r11.u64 | 4113;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x82ff15f8
	ctx.lr = 0x82FF288C;
	sub_82FF15F8(ctx, base);
loc_82FF288C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF2830) {
	__imp__sub_82FF2830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF28A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF28A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r31,984
	ctx.r8.s64 = ctx.r31.s64 + 984;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff28cc
	if (!ctx.cr6.eq) goto loc_82FF28CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF28CC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff28e0
	if (!ctx.cr6.eq) goto loc_82FF28E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF28E0:
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff290c
	if (ctx.cr6.lt) goto loc_82FF290C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82fefac8
	ctx.lr = 0x82FF2908;
	sub_82FEFAC8(ctx, base);
	// b 0x82ff2980
	goto loc_82FF2980;
loc_82FF290C:
	// lwz r10,1164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r10.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// beq cr6,0x82ff2988
	if (ctx.cr6.eq) goto loc_82FF2988;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// blt cr6,0x82ff2944
	if (ctx.cr6.lt) goto loc_82FF2944;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x82ff2948
	goto loc_82FF2948;
loc_82FF2944:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82FF2948:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2988
	if (ctx.cr6.lt) goto loc_82FF2988;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff2980
	if (ctx.cr6.eq) goto loc_82FF2980;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r29,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r29.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r29,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r29.u8);
	// ori r11,r11,4103
	ctx.r11.u64 = ctx.r11.u64 | 4103;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF2980;
	sub_82FEFEF8(ctx, base);
loc_82FF2980:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF2988:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ff29b4
	if (ctx.cr6.eq) goto loc_82FF29B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF29B4:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF29BC;
	sub_82FFA3D0(ctx, base);
	// lhz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff2a20
	if (!ctx.cr0.eq) goto loc_82FF2A20;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF29D8;
	sub_82FF6D50(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF2A04;
	sub_82FEDD88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF2A0C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF2A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF2A28;
	sub_82FEFC98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF2A38;
	sub_82FEFD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r31,872
	ctx.r6.s64 = ctx.r31.s64 + 872;
	// lhz r5,1032(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff6a18
	ctx.lr = 0x82FF2A50;
	sub_82FF6A18(ctx, base);
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2a6c
	if (ctx.cr6.lt) goto loc_82FF2A6C;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF2A6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ff2a88
	if (ctx.cr6.eq) goto loc_82FF2A88;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF2A88;
	sub_82FF7560(ctx, base);
loc_82FF2A88:
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// ld r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r11.u64);
loc_82FF2AB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF28A0) {
	__imp__sub_82FF28A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82FF2AC8;
	__savegprlr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2f04
	if (ctx.cr0.eq) goto loc_82FF2F04;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r9,1050(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1050);
	// lhz r7,1046(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lhz r6,1056(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82ff2f04
	if (ctx.cr6.gt) goto loc_82FF2F04;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff6630
	ctx.lr = 0x82FF2B20;
	sub_82FF6630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff2f00
	if (ctx.cr0.lt) goto loc_82FF2F00;
	// addi r21,r31,942
	ctx.r21.s64 = ctx.r31.s64 + 942;
	// lhz r3,1032(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// addi r19,r31,872
	ctx.r19.s64 = ctx.r31.s64 + 872;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82ff0e08
	ctx.lr = 0x82FF2B40;
	sub_82FF0E08(ctx, base);
	// subfic r25,r3,1264
	ctx.xer.ca = ctx.r3.u32 <= 1264;
	ctx.r25.s64 = 1264 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF2B4C;
	sub_82FEFC98(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF2B5C;
	sub_82FEFD20(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r30,254
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 254, ctx.xer);
	// bge cr6,0x82ff2ba8
	if (!ctx.cr6.lt) goto loc_82FF2BA8;
	// lhz r10,1042(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ff2ba8
	if (ctx.cr0.eq) goto loc_82FF2BA8;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2ba8
	if (!ctx.cr6.lt) goto loc_82FF2BA8;
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff2bb0
	if (ctx.cr0.eq) goto loc_82FF2BB0;
	// lhz r10,1040(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r9,r17,16
	ctx.r9.u64 = ctx.r17.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2bb0
	if (!ctx.cr6.lt) goto loc_82FF2BB0;
loc_82FF2BA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82FF2BB0:
	// lhz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// subfic r10,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ff2bec
	if (!ctx.cr6.lt) goto loc_82FF2BEC;
	// lhz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r9,1042(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff2bec
	if (!ctx.cr6.gt) goto loc_82FF2BEC;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r9,126(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ff2bec
	if (!ctx.cr6.gt) goto loc_82FF2BEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2bf4
	if (ctx.cr6.eq) goto loc_82FF2BF4;
loc_82FF2BEC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82FF2BF4:
	// lhz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 980);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2c08
	if (ctx.cr0.eq) goto loc_82FF2C08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82FF2C08:
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82266070
	ctx.lr = 0x82FF2C14;
	sub_82266070(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// li r23,32
	ctx.r23.s64 = 32;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff2ce8
	if (ctx.cr6.eq) goto loc_82FF2CE8;
	// li r24,248
	ctx.r24.s64 = 248;
loc_82FF2C34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ff2ce0
	if (ctx.cr6.eq) goto loc_82FF2CE0;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bge cr6,0x82ff2ce0
	if (!ctx.cr6.lt) goto loc_82FF2CE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ff2ce0
	if (ctx.cr6.eq) goto loc_82FF2CE0;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,-32
	ctx.r26.s64 = ctx.r11.s64 + -32;
	// lwz r11,-20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2c70
	if (ctx.cr6.eq) goto loc_82FF2C70;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r7,r23,-32
	ctx.r7.s64 = ctx.r23.s64 + -32;
	// b 0x82ff2c78
	goto loc_82FF2C78;
loc_82FF2C70:
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82FF2C78:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff7ca0
	ctx.lr = 0x82FF2C98;
	sub_82FF7CA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff2cd4
	if (ctx.cr6.eq) goto loc_82FF2CD4;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// beq cr6,0x82ff2cd0
	if (ctx.cr6.eq) goto loc_82FF2CD0;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r24,r24,-8
	ctx.r24.s64 = ctx.r24.s64 + -8;
	// b 0x82ff2cd4
	goto loc_82FF2CD4;
loc_82FF2CD0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82FF2CD4:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff2c34
	if (!ctx.cr6.eq) goto loc_82FF2C34;
loc_82FF2CE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff2cf8
	if (!ctx.cr6.eq) goto loc_82FF2CF8;
loc_82FF2CE8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fedd88
	ctx.lr = 0x82FF2CF0;
	sub_82FEDD88(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x82ff2f04
	goto loc_82FF2F04;
loc_82FF2CF8:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ff2d50
	if (ctx.cr6.eq) goto loc_82FF2D50;
	// addi r30,r1,116
	ctx.r30.s64 = ctx.r1.s64 + 116;
loc_82FF2D08:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82ffb570
	ctx.lr = 0x82FF2D34;
	sub_82FFB570(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82ff2d08
	if (!ctx.cr0.eq) goto loc_82FF2D08;
loc_82FF2D50:
	// cmplwi cr6,r23,32
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 32, ctx.xer);
	// bge cr6,0x82ff2d98
	if (!ctx.cr6.lt) goto loc_82FF2D98;
	// addi r30,r1,364
	ctx.r30.s64 = ctx.r1.s64 + 364;
	// subfic r28,r23,32
	ctx.xer.ca = ctx.r23.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r23.s64;
loc_82FF2D60:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82ffb570
	ctx.lr = 0x82FF2D8C;
	sub_82FFB570(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x82ff2d60
	if (!ctx.cr0.eq) goto loc_82FF2D60;
loc_82FF2D98:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lhz r9,1032(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x82ff6980
	ctx.lr = 0x82FF2DC4;
	sub_82FF6980(ctx, base);
	// lhz r10,38(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 38);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff2df4
	if (!ctx.cr0.eq) goto loc_82FF2DF4;
	// lhz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// ble cr6,0x82ff2df4
	if (!ctx.cr6.gt) goto loc_82FF2DF4;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// sth r11,36(r21)
	PPC_STORE_U16(ctx.r21.u32 + 36, ctx.r11.u16);
loc_82FF2DF4:
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,1032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1032, ctx.r11.u16);
	// bne cr6,0x82ff2e1c
	if (!ctx.cr6.eq) goto loc_82FF2E1C;
	// lhz r11,330(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2e80
	if (ctx.cr0.eq) goto loc_82FF2E80;
loc_82FF2E1C:
	// addi r9,r31,1000
	ctx.r9.s64 = ctx.r31.s64 + 1000;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,1004(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
loc_82FF2E44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff2e44
	if (!ctx.cr0.eq) goto loc_82FF2E44;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 336);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
loc_82FF2E80:
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r10,r17,16
	ctx.r10.u64 = ctx.r17.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// blt cr6,0x82ff2e9c
	if (ctx.cr6.lt) goto loc_82FF2E9C;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x82ff2ea0
	goto loc_82FF2EA0;
loc_82FF2E9C:
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_82FF2EA0:
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF2EB8;
	sub_82FF7560(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2ed0
	if (ctx.cr6.eq) goto loc_82FF2ED0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0490
	ctx.lr = 0x82FF2ED0;
	sub_82FF0490(ctx, base);
loc_82FF2ED0:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,1168(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1168);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1168, ctx.r11.u64);
	// b 0x82ff2f04
	goto loc_82FF2F04;
loc_82FF2F00:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82FF2F04:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c0c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2AC0) {
	__imp__sub_82FF2AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF2F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FF2F18;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r21,r31,40
	ctx.r21.s64 = ctx.r31.s64 + 40;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF2F48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2f68
	if (ctx.cr6.eq) goto loc_82FF2F68;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ff2f68
	if (ctx.cr6.eq) goto loc_82FF2F68;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2F68:
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2f84
	if (ctx.cr6.lt) goto loc_82FF2F84;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4101
	ctx.r30.u64 = ctx.r30.u64 | 4101;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2F84:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2fe0
	if (!ctx.cr6.lt) goto loc_82FF2FE0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82ff2fa4
	if (!ctx.cr6.lt) goto loc_82FF2FA4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82ff2fac
	goto loc_82FF2FAC;
loc_82FF2FA4:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FF2FAC:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ff2fc8
	if (!ctx.cr6.gt) goto loc_82FF2FC8;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82feff50
	ctx.lr = 0x82FF2FC4;
	sub_82FEFF50(ctx, base);
	// b 0x82ff2fcc
	goto loc_82FF2FCC;
loc_82FF2FC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF2FCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ff2fe0
	if (!ctx.cr6.eq) goto loc_82FF2FE0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2FE0:
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6f98
	ctx.lr = 0x82FF2FF4;
	sub_82FF6F98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff3040
	if (ctx.cr0.lt) goto loc_82FF3040;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8898
	ctx.lr = 0x82FF302C;
	sub_82FF8898(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff304c
	if (!ctx.cr0.lt) goto loc_82FF304C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff70b0
	ctx.lr = 0x82FF3040;
	sub_82FF70B0(ctx, base);
loc_82FF3040:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3048;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff30a4
	goto loc_82FF30A4;
loc_82FF304C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r31,520
	ctx.r9.s64 = ctx.r31.s64 + 520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,3,5,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF30A0;
	sub_82FF1D08(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF30A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF2F10) {
	__imp__sub_82FF2F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF30B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF30B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r23,r31,40
	ctx.r23.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF30E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF3100;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3128
	if (!ctx.cr0.eq) goto loc_82FF3128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF3114;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3128
	if (!ctx.cr0.eq) goto loc_82FF3128;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x82ff3148
	goto loc_82FF3148;
loc_82FF3128:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ff7ae0
	ctx.lr = 0x82FF3140;
	sub_82FF7AE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff3154
	if (!ctx.cr0.lt) goto loc_82FF3154;
loc_82FF3148:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3150;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff315c
	goto loc_82FF315C;
loc_82FF3154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF315C;
	sub_82FF1D08(ctx, base);
loc_82FF315C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF30B0) {
	__imp__sub_82FF30B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3168) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ff31fc
	if (ctx.cr6.eq) goto loc_82FF31FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r30,592
	ctx.r3.s64 = ctx.r30.s64 + 592;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ff31fc
	if (!ctx.cr6.lt) goto loc_82FF31FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x82feffc0
	ctx.lr = 0x82FF31FC;
	sub_82FEFFC0(ctx, base);
loc_82FF31FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r10,2,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ff9478
	ctx.lr = 0x82FF3220;
	sub_82FF9478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3228;
	sub_82FEDD88(ctx, base);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 656, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF3168) {
	__imp__sub_82FF3168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF3258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3270;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff3320
	if (ctx.cr6.eq) goto loc_82FF3320;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff3320
	if (ctx.cr6.eq) goto loc_82FF3320;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff32d8
	if (ctx.cr6.eq) goto loc_82FF32D8;
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF32A8;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff32d0
	if (!ctx.cr0.eq) goto loc_82FF32D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF32BC;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff32d0
	if (!ctx.cr0.eq) goto loc_82FF32D0;
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4111
	ctx.r31.u64 = ctx.r31.u64 | 4111;
	// b 0x82ff3324
	goto loc_82FF3324;
loc_82FF32D0:
	// bl 0x82ff7f10
	ctx.lr = 0x82FF32D4;
	sub_82FF7F10(ctx, base);
	// b 0x82ff3310
	goto loc_82FF3310;
loc_82FF32D8:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff3310
	if (ctx.cr6.eq) goto loc_82FF3310;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF32EC:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82ff7f10
	ctx.lr = 0x82FF32FC;
	sub_82FF7F10(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff32ec
	if (ctx.cr6.lt) goto loc_82FF32EC;
loc_82FF3310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3318;
	sub_82FF1D08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ff332c
	goto loc_82FF332C;
loc_82FF3320:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF3324:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF332C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FF332C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3250) {
	__imp__sub_82FF3250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF3340;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x82ff35d0
	if (ctx.cr6.gt) goto loc_82FF35D0;
	// beq cr6,0x82ff35bc
	if (ctx.cr6.eq) goto loc_82FF35BC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82ff35f8
	if (ctx.cr6.gt) goto loc_82FF35F8;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-20056
	ctx.r12.s64 = ctx.r12.s64 + -20056;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,13196
	ctx.r12.s64 = ctx.r12.s64 + 13196;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FF338C;
	case 1:
		goto loc_82FF33A0;
	case 2:
		goto loc_82FF35F8;
	case 3:
		goto loc_82FF33B4;
	case 4:
		goto loc_82FF3418;
	case 5:
		goto loc_82FF342C;
	case 6:
		goto loc_82FF35F8;
	case 7:
		goto loc_82FF35F8;
	case 8:
		goto loc_82FF3440;
	case 9:
		goto loc_82FF35F8;
	case 10:
		goto loc_82FF35F8;
	case 11:
		goto loc_82FF35F8;
	case 12:
		goto loc_82FF35F8;
	case 13:
		goto loc_82FF344C;
	case 14:
		goto loc_82FF35F8;
	case 15:
		goto loc_82FF35F8;
	case 16:
		goto loc_82FF35F8;
	case 17:
		goto loc_82FF3458;
	case 18:
		goto loc_82FF34B0;
	case 19:
		goto loc_82FF3508;
	case 20:
		goto loc_82FF35F8;
	case 21:
		goto loc_82FF3514;
	case 22:
		goto loc_82FF3520;
	case 23:
		goto loc_82FF352C;
	case 24:
		goto loc_82FF3538;
	case 25:
		goto loc_82FF3544;
	case 26:
		goto loc_82FF35A4;
	case 27:
		goto loc_82FF35B0;
	default:
		__builtin_unreachable();
	}
loc_82FF338C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9e90
	ctx.lr = 0x82FF339C;
	sub_82FF9E90(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33A0:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9ea8
	ctx.lr = 0x82FF33B0;
	sub_82FF9EA8(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33B4:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff33cc
	if (!ctx.cr6.eq) goto loc_82FF33CC;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33CC:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF33E8;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3410
	if (!ctx.cr0.eq) goto loc_82FF3410;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF33FC;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3410
	if (!ctx.cr0.eq) goto loc_82FF3410;
loc_82FF3404:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3410:
	// stw r27,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3418:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ffa028
	ctx.lr = 0x82FF3428;
	sub_82FFA028(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF342C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ffa078
	ctx.lr = 0x82FF343C;
	sub_82FFA078(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3440:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF344C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3458:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff3470
	if (!ctx.cr6.eq) goto loc_82FF3470;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3470:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF348C;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff34a8
	if (!ctx.cr0.eq) goto loc_82FF34A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF34A0;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff3404
	if (ctx.cr0.eq) goto loc_82FF3404;
loc_82FF34A8:
	// stw r27,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF34B0:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff34c8
	if (!ctx.cr6.eq) goto loc_82FF34C8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF34C8:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF34E4;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3500
	if (!ctx.cr0.eq) goto loc_82FF3500;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF34F8;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff3404
	if (ctx.cr0.eq) goto loc_82FF3404;
loc_82FF3500:
	// stw r27,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3508:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3514:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3520:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF352C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3538:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3544:
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3558;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff3584
	if (ctx.cr6.eq) goto loc_82FF3584;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ff3590
	if (ctx.cr6.eq) goto loc_82FF3590;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF3584:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF358C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3590:
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF35A0;
	sub_82FF1D08(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF35A4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF35B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF35BC:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9ec0
	ctx.lr = 0x82FF35CC;
	sub_82FF9EC0(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF35D0:
	// cmpwi cr6,r5,4099
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4099, ctx.xer);
	// beq cr6,0x82ff3634
	if (ctx.cr6.eq) goto loc_82FF3634;
	// cmpwi cr6,r5,4100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4100, ctx.xer);
	// beq cr6,0x82ff3628
	if (ctx.cr6.eq) goto loc_82FF3628;
	// cmpwi cr6,r5,4101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4101, ctx.xer);
	// beq cr6,0x82ff361c
	if (ctx.cr6.eq) goto loc_82FF361C;
	// cmpwi cr6,r5,4102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4102, ctx.xer);
	// beq cr6,0x82ff3610
	if (ctx.cr6.eq) goto loc_82FF3610;
	// cmpwi cr6,r5,4103
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4103, ctx.xer);
	// beq cr6,0x82ff3604
	if (ctx.cr6.eq) goto loc_82FF3604;
loc_82FF35F8:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3604:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3610:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF361C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3628:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3634:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82FF363C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF3640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3338) {
	__imp__sub_82FF3338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FF3658;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-20020
	ctx.r11.s64 = ctx.r11.s64 + -20020;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r27,r31,176
	ctx.r27.s64 = ctx.r31.s64 + 176;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36A0;
	sub_82FF1930(ctx, base);
	// addi r26,r31,236
	ctx.r26.s64 = ctx.r31.s64 + 236;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36AC;
	sub_82FF1930(ctx, base);
	// addi r25,r31,296
	ctx.r25.s64 = ctx.r31.s64 + 296;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36B8;
	sub_82FF1930(ctx, base);
	// addi r24,r31,356
	ctx.r24.s64 = ctx.r31.s64 + 356;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36C4;
	sub_82FF1930(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b258c
	ctx.lr = 0x82FF36D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
loc_82FF36DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff36dc
	if (!ctx.cr0.eq) goto loc_82FF36DC;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF3708;
	sub_82CA2C60(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF3718;
	sub_82CA2C60(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 + 168;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// bl 0x82ff7450
	ctx.lr = 0x82FF3750;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF375C;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF3768;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF3774;
	sub_82FF7450(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// sth r30,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r30.u16);
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// addi r27,r31,424
	ctx.r27.s64 = ctx.r31.s64 + 424;
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// bl 0x82cf9a88
	ctx.lr = 0x82FF37A0;
	sub_82CF9A88(ctx, base);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ff6e40
	ctx.lr = 0x82FF37BC;
	sub_82FF6E40(ctx, base);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// addi r10,r31,520
	ctx.r10.s64 = ctx.r31.s64 + 520;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// stb r11,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r11.u8);
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// stb r11,533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 533, ctx.r11.u8);
	// lbz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// stb r11,534(r31)
	PPC_STORE_U8(ctx.r31.u32 + 534, ctx.r11.u8);
	// lbz r11,3(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// stb r11,535(r31)
	PPC_STORE_U8(ctx.r31.u32 + 535, ctx.r11.u8);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// bl 0x82ff9f50
	ctx.lr = 0x82FF3814;
	sub_82FF9F50(ctx, base);
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// bl 0x82ff7238
	ctx.lr = 0x82FF3830;
	sub_82FF7238(ctx, base);
	// addi r11,r31,604
	ctx.r11.s64 = ctx.r31.s64 + 604;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// std r10,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r10.u64);
	// bl 0x82b4f378
	ctx.lr = 0x82FF3858;
	sub_82B4F378(ctx, base);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82b4f378
	ctx.lr = 0x82FF3864;
	sub_82B4F378(ctx, base);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// bl 0x82ff8d70
	ctx.lr = 0x82FF3878;
	sub_82FF8D70(ctx, base);
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// bl 0x82ff9210
	ctx.lr = 0x82FF3880;
	sub_82FF9210(ctx, base);
	// addi r11,r31,984
	ctx.r11.s64 = ctx.r31.s64 + 984;
	// addi r10,r31,992
	ctx.r10.s64 = ctx.r31.s64 + 992;
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// addi r9,r31,1000
	ctx.r9.s64 = ctx.r31.s64 + 1000;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// addi r11,r31,1008
	ctx.r11.s64 = ctx.r31.s64 + 1008;
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// addi r8,r31,1016
	ctx.r8.s64 = ctx.r31.s64 + 1016;
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// stw r9,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r9.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r8,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r8.u32);
	// stw r8,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r8.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// sth r30,1032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1032, ctx.r30.u16);
	// lhz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 148);
	// sth r11,1034(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1034, ctx.r11.u16);
	// lhz r11,150(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// sth r11,1036(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1036, ctx.r11.u16);
	// lhz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// sth r11,1038(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1038, ctx.r11.u16);
	// lhz r10,154(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 154);
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// sth r30,1046(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1046, ctx.r30.u16);
	// sth r30,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r30.u16);
	// sth r30,1050(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1050, ctx.r30.u16);
	// sth r10,1040(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1040, ctx.r10.u16);
	// sth r10,1044(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1044, ctx.r10.u16);
	// sth r30,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r30.u16);
	// sth r30,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r30.u16);
	// sth r30,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r30.u16);
	// stb r30,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r30.u8);
	// stb r23,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r23.u8);
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// std r30,1168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1168, ctx.r30.u64);
	// std r30,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r30.u64);
	// std r30,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r30.u64);
	// bl 0x82266070
	ctx.lr = 0x82FF3930;
	sub_82266070(ctx, base);
	// stw r3,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cf9a88
	ctx.lr = 0x82FF3940;
	sub_82CF9A88(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ff3958
	if (!ctx.cr6.eq) goto loc_82FF3958;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// b 0x82ff39a8
	goto loc_82FF39A8;
loc_82FF3958:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x82ff59a0
	ctx.lr = 0x82FF3970;
	sub_82FF59A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// sth r10,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r10.u16);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x82ff0b30
	ctx.lr = 0x82FF39A8;
	sub_82FF0B30(ctx, base);
loc_82FF39A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3650) {
	__imp__sub_82FF3650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF39B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ff1980
	ctx.lr = 0x82FF39D8;
	sub_82FF1980(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff39e8
	if (ctx.cr0.eq) goto loc_82FF39E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FF39E8;
	sub_824FE010(ctx, base);
loc_82FF39E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF39B8) {
	__imp__sub_82FF39B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF3A10;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,1200
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1200, ctx.xer);
	// ble cr6,0x82ff3a34
	if (!ctx.cr6.gt) goto loc_82FF3A34;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82ff3b10
	goto loc_82FF3B10;
loc_82FF3A34:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3A40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,416
	ctx.r29.s64 = ctx.r31.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6588
	ctx.lr = 0x82FF3A4C;
	sub_82FF6588(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82ff3a64
	if (!ctx.cr0.lt) goto loc_82FF3A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3A5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82ff3b10
	goto loc_82FF3B10;
loc_82FF3A64:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lhz r7,1036(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1036);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lhz r6,1034(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1034);
	// lhz r5,1040(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq 0x82ff3ac8
	if (ctx.cr0.eq) goto loc_82FF3AC8;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r28,r31,532
	ctx.r28.s64 = ctx.r31.s64 + 532;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x82ff66e8
	ctx.lr = 0x82FF3AA8;
	sub_82FF66E8(ctx, base);
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff3ae8
	if (ctx.cr6.eq) goto loc_82FF3AE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cf9b08
	ctx.lr = 0x82FF3AC4;
	sub_82CF9B08(ctx, base);
	// b 0x82ff3ae8
	goto loc_82FF3AE8;
loc_82FF3AC8:
	// lwz r28,424(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r30,r31,532
	ctx.r30.s64 = ctx.r31.s64 + 532;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82ff6768
	ctx.lr = 0x82FF3AE8;
	sub_82FF6768(ctx, base);
loc_82FF3AE8:
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3B0C;
	sub_82FF1D08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF3B10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3A08) {
	__imp__sub_82FF3A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3B18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3B3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff3be4
	if (ctx.cr6.eq) goto loc_82FF3BE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff3be4
	if (ctx.cr6.eq) goto loc_82FF3BE4;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,4114
	ctx.r10.u64 = ctx.r10.u64 | 4114;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff3b84
	if (!ctx.cr6.eq) goto loc_82FF3B84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff15f8
	ctx.lr = 0x82FF3B80;
	sub_82FF15F8(ctx, base);
	// b 0x82ff3bcc
	goto loc_82FF3BCC;
loc_82FF3B84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff3bcc
	if (!ctx.cr6.eq) goto loc_82FF3BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefef8
	ctx.lr = 0x82FF3B94;
	sub_82FEFEF8(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r30.u8);
	// stb r30,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82ff3bb8
	if (ctx.cr6.eq) goto loc_82FF3BB8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3BB4;
	sub_82FEDD88(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_82FF3BB8:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff3bcc
	if (ctx.cr6.eq) goto loc_82FF3BCC;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3BC8;
	sub_82FEDD88(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_82FF3BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1668
	ctx.lr = 0x82FF3BD4;
	sub_82FF1668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3BDC;
	sub_82FF1D08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ff3bf4
	goto loc_82FF3BF4;
loc_82FF3BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3BEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_82FF3BF4:
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

PPC_WEAK_FUNC(sub_82FF3B18) {
	__imp__sub_82FF3B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF3C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3C2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82266070
	ctx.lr = 0x82FF3C30;
	sub_82266070(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff3c98
	if (!ctx.cr6.eq) goto loc_82FF3C98;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3c98
	if (ctx.cr0.eq) goto loc_82FF3C98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefb98
	ctx.lr = 0x82FF3C58;
	sub_82FEFB98(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r3.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82cf9b18
	ctx.lr = 0x82FF3C78;
	sub_82CF9B18(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82ff3d8c
	if (!ctx.cr6.eq) goto loc_82FF3D8C;
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// b 0x82ff3d8c
	goto loc_82FF3D8C;
loc_82FF3C98:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff3d60
	if (!ctx.cr6.eq) goto loc_82FF3D60;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3cc0
	if (ctx.cr0.eq) goto loc_82FF3CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0c38
	ctx.lr = 0x82FF3CB4;
	sub_82FF0C38(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3CC0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3ce4
	if (ctx.cr0.eq) goto loc_82FF3CE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0d10
	ctx.lr = 0x82FF3CD8;
	sub_82FF0D10(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3CE4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d04
	if (ctx.cr0.eq) goto loc_82FF3D04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff28a0
	ctx.lr = 0x82FF3CF8;
	sub_82FF28A0(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D04:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d20
	if (ctx.cr0.eq) goto loc_82FF3D20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2ac0
	ctx.lr = 0x82FF3D14;
	sub_82FF2AC0(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D20:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d44
	if (ctx.cr0.eq) goto loc_82FF3D44;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0d10
	ctx.lr = 0x82FF3D38;
	sub_82FF0D10(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D44:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0e80
	ctx.lr = 0x82FF3D54;
	sub_82FF0E80(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D60:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff3d8c
	if (!ctx.cr6.eq) goto loc_82FF3D8C;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0ca8
	ctx.lr = 0x82FF3D7C;
	sub_82FF0CA8(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82FF3D84:
	// stw r3,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r3.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
loc_82FF3D8C:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff3dbc
	if (!ctx.cr6.eq) goto loc_82FF3DBC;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3DAC;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3DB4;
	sub_82FEDD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff3e14
	goto loc_82FF3E14;
loc_82FF3DBC:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82ff3dd4
	if (!ctx.cr6.eq) goto loc_82FF3DD4;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82FF3DD4:
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ffa0c8
	ctx.lr = 0x82FF3DF4;
	sub_82FFA0C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff3e08
	if (ctx.cr0.eq) goto loc_82FF3E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3E04;
	sub_82FF1D08(ctx, base);
	// b 0x82ff3e10
	goto loc_82FF3E10;
loc_82FF3E08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3E10;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FF3E10:
	// lwz r3,1024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
loc_82FF3E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3C10) {
	__imp__sub_82FF3C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF3E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b227c
	ctx.lr = 0x82FF3E3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// lwz r30,1024(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82ff3e9c
	if (!ctx.cr6.lt) goto loc_82FF3E9C;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ff3e9c
	if (ctx.cr6.eq) goto loc_82FF3E9C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF3E90;
	sub_82FEFEF8(ctx, base);
loc_82FF3E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3E98;
	sub_82FEDD88(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3E9C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82ff57b8
	ctx.lr = 0x82FF3EA8;
	sub_82FF57B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ff3ef8
	if (!ctx.cr6.gt) goto loc_82FF3EF8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82ff3ee8
	if (ctx.cr6.eq) goto loc_82FF3EE8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ff3ee0
	if (ctx.cr6.eq) goto loc_82FF3EE0;
	// bl 0x82ff0f70
	ctx.lr = 0x82FF3EDC;
	sub_82FF0F70(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EE0:
	// bl 0x82ff1068
	ctx.lr = 0x82FF3EE4;
	sub_82FF1068(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc30
	ctx.lr = 0x82FF3EF4;
	sub_82FEFC30(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0f10
	ctx.lr = 0x82FF3F04;
	sub_82FF0F10(ctx, base);
loc_82FF3F04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3F0C;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3F14;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF3E20) {
	__imp__sub_82FF3E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF3F20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b227c
	ctx.lr = 0x82FF3F40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// rlwinm r10,r10,0,4,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// ble cr6,0x82ff3fd8
	if (!ctx.cr6.gt) goto loc_82FF3FD8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82ff3fa8
	if (!ctx.cr6.gt) goto loc_82FF3FA8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82ff3f8c
	if (ctx.cr6.eq) goto loc_82FF3F8C;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4014
	if (ctx.cr0.eq) goto loc_82FF4014;
	// addi r5,r31,1136
	ctx.r5.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF3F84;
	sub_82FF7BB0(ctx, base);
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// b 0x82ff3f98
	goto loc_82FF3F98;
loc_82FF3F8C:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff4014
	if (ctx.cr6.eq) goto loc_82FF4014;
loc_82FF3F98:
	// bl 0x82fedd88
	ctx.lr = 0x82FF3F9C;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// b 0x82ff4014
	goto loc_82FF4014;
loc_82FF3FA8:
	// addi r30,r31,1136
	ctx.r30.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF3FBC;
	sub_82FF7BB0(ctx, base);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82ff4004
	if (!ctx.cr6.eq) goto loc_82FF4004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ff1578
	ctx.lr = 0x82FF3FD4;
	sub_82FF1578(ctx, base);
	// b 0x82ff4004
	goto loc_82FF4004;
loc_82FF3FD8:
	// addi r30,r31,1136
	ctx.r30.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ff9c80
	ctx.lr = 0x82FF3FEC;
	sub_82FF9C80(ctx, base);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff4004
	if (!ctx.cr6.eq) goto loc_82FF4004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ff3168
	ctx.lr = 0x82FF4004;
	sub_82FF3168(ctx, base);
loc_82FF4004:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82fedd88
	ctx.lr = 0x82FF400C;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF4014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF401C;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4024;
	sub_82FEDD88(ctx, base);
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

PPC_WEAK_FUNC(sub_82FF3F20) {
	__imp__sub_82FF3F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF4048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ff40a0
	if (ctx.cr6.eq) goto loc_82FF40A0;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4090
	if (ctx.cr0.eq) goto loc_82FF4090;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82ff40d8
	if (!ctx.cr6.lt) goto loc_82FF40D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// b 0x82ff40e8
	goto loc_82FF40E8;
loc_82FF4090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6338
	ctx.lr = 0x82FF409C;
	sub_82FF6338(ctx, base);
	// b 0x82ff40f4
	goto loc_82FF40F4;
loc_82FF40A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ffae28
	ctx.lr = 0x82FF40B0;
	sub_82FFAE28(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff40fc
	if (ctx.cr6.eq) goto loc_82FF40FC;
	// lhz r9,1040(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff40e4
	if (ctx.cr6.lt) goto loc_82FF40E4;
loc_82FF40D8:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x82ff4124
	goto loc_82FF4124;
loc_82FF40E4:
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
loc_82FF40E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ffa6d0
	ctx.lr = 0x82FF40F4;
	sub_82FFA6D0(ctx, base);
loc_82FF40F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff4124
	goto loc_82FF4124;
loc_82FF40FC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff07b0
	ctx.lr = 0x82FF4114;
	sub_82FF07B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff4124
	if (ctx.cr0.lt) goto loc_82FF4124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2180
	ctx.lr = 0x82FF4124;
	sub_82FF2180(ctx, base);
loc_82FF4124:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4040) {
	__imp__sub_82FF4040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF4138;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r31,1000
	ctx.r29.s64 = ctx.r31.s64 + 1000;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff41b8
	if (ctx.cr6.eq) goto loc_82FF41B8;
	// extsh r30,r23
	ctx.r30.s64 = ctx.r23.s16;
loc_82FF4170:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff4180
	if (!ctx.cr6.eq) goto loc_82FF4180;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF4180:
	// lhz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ff41b8
	if (!ctx.cr0.lt) goto loc_82FF41B8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0998
	ctx.lr = 0x82FF41A8;
	sub_82FF0998(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff4170
	if (!ctx.cr6.eq) goto loc_82FF4170;
loc_82FF41B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ff4390
	if (ctx.cr6.eq) goto loc_82FF4390;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,1048(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1048);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x82ff41ec
	if (!ctx.cr6.lt) goto loc_82FF41EC;
	// sth r11,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r11.u16);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82ff41f0
	goto loc_82FF41F0;
loc_82FF41EC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82FF41F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff42a0
	if (!ctx.cr6.eq) goto loc_82FF42A0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FF4200:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4234
	if (ctx.cr6.eq) goto loc_82FF4234;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// bl 0x82ff8f28
	ctx.lr = 0x82FF4214;
	sub_82FF8F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4234
	if (ctx.cr0.eq) goto loc_82FF4234;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF4230;
	sub_82FFA3D0(ctx, base);
loc_82FF4230:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF4234:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// bne cr6,0x82ff4244
	if (!ctx.cr6.eq) goto loc_82FF4244;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF4244:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff4324
	if (ctx.cr6.eq) goto loc_82FF4324;
	// lhz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4324
	if (!ctx.cr6.eq) goto loc_82FF4324;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff4270
	if (ctx.cr6.eq) goto loc_82FF4270;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82FF4270:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff42f0
	if (ctx.cr0.eq) goto loc_82FF42F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0998
	ctx.lr = 0x82FF429C;
	sub_82FF0998(ctx, base);
	// b 0x82ff430c
	goto loc_82FF430C;
loc_82FF42A0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff4200
	if (ctx.cr0.eq) goto loc_82FF4200;
	// lhz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 324);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4200
	if (!ctx.cr6.eq) goto loc_82FF4200;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff42d4
	if (ctx.cr6.eq) goto loc_82FF42D4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82FF42D4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4234
	if (ctx.cr6.eq) goto loc_82FF4234;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2360
	ctx.lr = 0x82FF42EC;
	sub_82FF2360(ctx, base);
	// b 0x82ff4230
	goto loc_82FF4230;
loc_82FF42F0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4310
	if (ctx.cr6.eq) goto loc_82FF4310;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2360
	ctx.lr = 0x82FF430C;
	sub_82FF2360(ctx, base);
loc_82FF430C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF4310:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ff437c
	if (ctx.cr6.eq) goto loc_82FF437C;
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// b 0x82ff437c
	goto loc_82FF437C;
loc_82FF4324:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4348
	if (ctx.cr0.eq) goto loc_82FF4348;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82ff8fe0
	ctx.lr = 0x82FF4344;
	sub_82FF8FE0(ctx, base);
	// b 0x82ff437c
	goto loc_82FF437C;
loc_82FF4348:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff437c
	if (ctx.cr6.eq) goto loc_82FF437C;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82ff8f28
	ctx.lr = 0x82FF435C;
	sub_82FF8F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff437c
	if (ctx.cr0.eq) goto loc_82FF437C;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF4378;
	sub_82FFA3D0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF437C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fefa08
	ctx.lr = 0x82FF4384;
	sub_82FEFA08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4244
	if (!ctx.cr0.eq) goto loc_82FF4244;
	// b 0x82ff43ac
	goto loc_82FF43AC;
loc_82FF4390:
	// lhz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1048);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82ff43ac
	if (!ctx.cr6.lt) goto loc_82FF43AC;
	// sth r23,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r23.u16);
loc_82FF43AC:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff43c4
	if (!ctx.cr0.eq) goto loc_82FF43C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff03e8
	ctx.lr = 0x82FF43C4;
	sub_82FF03E8(ctx, base);
loc_82FF43C4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82ff43f4
	if (ctx.cr6.eq) goto loc_82FF43F4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa170
	ctx.lr = 0x82FF43F0;
	sub_82FFA170(ctx, base);
	// stw r25,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r25.u32);
loc_82FF43F4:
	// sth r23,1046(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1046, ctx.r23.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4130) {
	__imp__sub_82FF4130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF4410;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff4528
	if (!ctx.cr6.eq) goto loc_82FF4528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82ff57e8
	ctx.lr = 0x82FF4434;
	sub_82FF57E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4528
	if (ctx.cr0.eq) goto loc_82FF4528;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4460;
	sub_82FEF9B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r28,-256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -256, ctx.xer);
	// blt cr6,0x82ff4528
	if (ctx.cr6.lt) goto loc_82FF4528;
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// bgt cr6,0x82ff4528
	if (ctx.cr6.gt) goto loc_82FF4528;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff4528
	if (ctx.cr0.lt) goto loc_82FF4528;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff44c8
	if (ctx.cr6.eq) goto loc_82FF44C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF44AC;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff4528
	if (!ctx.cr0.gt) goto loc_82FF4528;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x82ff44cc
	goto loc_82FF44CC;
loc_82FF44C8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FF44CC:
	// bl 0x82266070
	ctx.lr = 0x82FF44D0;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x82ff4520
	if (ctx.cr6.lt) goto loc_82FF4520;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF44F4;
	sub_82FF4130(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF4514;
	sub_82FF0610(ctx, base);
	// or. r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff4528
	if (!ctx.cr0.eq) goto loc_82FF4528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82FF4520:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF4528;
	sub_82FFA470(ctx, base);
loc_82FF4528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4408) {
	__imp__sub_82FF4408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF4540;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff4764
	if (!ctx.cr6.eq) goto loc_82FF4764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82ff5870
	ctx.lr = 0x82FF4564;
	sub_82FF5870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4764
	if (ctx.cr0.eq) goto loc_82FF4764;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4590;
	sub_82FEF9B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r28,-256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -256, ctx.xer);
	// blt cr6,0x82ff4764
	if (ctx.cr6.lt) goto loc_82FF4764;
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// bgt cr6,0x82ff4764
	if (ctx.cr6.gt) goto loc_82FF4764;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff4764
	if (ctx.cr0.lt) goto loc_82FF4764;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff45f8
	if (ctx.cr6.eq) goto loc_82FF45F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF45DC;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff4764
	if (!ctx.cr0.gt) goto loc_82FF4764;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x82ff45fc
	goto loc_82FF45FC;
loc_82FF45F8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FF45FC:
	// bl 0x82266070
	ctx.lr = 0x82FF4600;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x82ff4644
	if (ctx.cr6.lt) goto loc_82FF4644;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF4624;
	sub_82FF4130(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF4640;
	sub_82FF0610(ctx, base);
	// b 0x82ff464c
	goto loc_82FF464C;
loc_82FF4644:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF464C;
	sub_82FFA470(ctx, base);
loc_82FF464C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4674
	if (ctx.cr0.eq) goto loc_82FF4674;
	// lwz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6);
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF4674:
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4764
	if (ctx.cr0.eq) goto loc_82FF4764;
	// lwz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff46b4
	if (ctx.cr6.eq) goto loc_82FF46B4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x82ff4764
	if (ctx.cr6.gt) goto loc_82FF4764;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82ff4764
	if (!ctx.cr6.gt) goto loc_82FF4764;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF46B4:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ff46cc
	if (ctx.cr6.lt) goto loc_82FF46CC;
	// lwz r4,676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
loc_82FF46CC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa170
	ctx.lr = 0x82FF46EC;
	sub_82FFA170(ctx, base);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4738
	if (ctx.cr0.eq) goto loc_82FF4738;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// rlwimi r11,r10,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4728
	if (ctx.cr0.eq) goto loc_82FF4728;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ff4764
	if (ctx.cr6.lt) goto loc_82FF4764;
loc_82FF4728:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF4734;
	sub_82FF74C0(ctx, base);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF4738:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82ff475c
	if (ctx.cr0.eq) goto loc_82FF475C;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82ff15f8
	ctx.lr = 0x82FF4758;
	sub_82FF15F8(ctx, base);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF475C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff0490
	ctx.lr = 0x82FF4764;
	sub_82FF0490(ctx, base);
loc_82FF4764:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4538) {
	__imp__sub_82FF4538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF4778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF478C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r29,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r29.u8);
	// stb r29,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r29.u8);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff47c8
	if (ctx.cr0.eq) goto loc_82FF47C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF47B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3f20
	ctx.lr = 0x82FF47C0;
	sub_82FF3F20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF47C8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82FF47C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefef8
	ctx.lr = 0x82FF47D0;
	sub_82FEFEF8(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff47e4
	if (ctx.cr6.eq) goto loc_82FF47E4;
	// bl 0x82fedd88
	ctx.lr = 0x82FF47E0;
	sub_82FEDD88(ctx, base);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
loc_82FF47E4:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff47f8
	if (ctx.cr6.eq) goto loc_82FF47F8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF47F4;
	sub_82FEDD88(ctx, base);
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
loc_82FF47F8:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r30,r31,984
	ctx.r30.s64 = ctx.r31.s64 + 984;
	// b 0x82ff4844
	goto loc_82FF4844;
loc_82FF4804:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4818
	if (!ctx.cr6.eq) goto loc_82FF4818;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff4838
	goto loc_82FF4838;
loc_82FF4818:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4838:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4840;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4844:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4804
	if (!ctx.cr6.eq) goto loc_82FF4804;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// addi r30,r31,992
	ctx.r30.s64 = ctx.r31.s64 + 992;
	// b 0x82ff4898
	goto loc_82FF4898;
loc_82FF4858:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff486c
	if (!ctx.cr6.eq) goto loc_82FF486C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff488c
	goto loc_82FF488C;
loc_82FF486C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF488C:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4894;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4898:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4858
	if (!ctx.cr6.eq) goto loc_82FF4858;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// addi r30,r31,1000
	ctx.r30.s64 = ctx.r31.s64 + 1000;
	// b 0x82ff48ec
	goto loc_82FF48EC;
loc_82FF48AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff48c0
	if (!ctx.cr6.eq) goto loc_82FF48C0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff48e0
	goto loc_82FF48E0;
loc_82FF48C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF48E0:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF48E8;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF48EC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff48ac
	if (!ctx.cr6.eq) goto loc_82FF48AC;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x82ff4940
	goto loc_82FF4940;
loc_82FF4900:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4914
	if (!ctx.cr6.eq) goto loc_82FF4914;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff4934
	goto loc_82FF4934;
loc_82FF4914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4934:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF493C;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4940:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4900
	if (!ctx.cr6.eq) goto loc_82FF4900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82ffa948
	ctx.lr = 0x82FF4954;
	sub_82FFA948(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82ffa948
	ctx.lr = 0x82FF496C;
	sub_82FFA948(ctx, base);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF4978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4988
	if (!ctx.cr6.eq) goto loc_82FF4988;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF4988:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1578
	ctx.lr = 0x82FF4994;
	sub_82FF1578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4998:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4978
	if (!ctx.cr6.eq) goto loc_82FF4978;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r30,r31,520
	ctx.r30.s64 = ctx.r31.s64 + 520;
	// b 0x82ff49cc
	goto loc_82FF49CC;
loc_82FF49AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49bc
	if (!ctx.cr6.eq) goto loc_82FF49BC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF49BC:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1578
	ctx.lr = 0x82FF49C8;
	sub_82FF1578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF49CC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49ac
	if (!ctx.cr6.eq) goto loc_82FF49AC;
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r30,r31,604
	ctx.r30.s64 = ctx.r31.s64 + 604;
	// b 0x82ff4a00
	goto loc_82FF4A00;
loc_82FF49E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49f0
	if (!ctx.cr6.eq) goto loc_82FF49F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF49F0:
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3168
	ctx.lr = 0x82FF49FC;
	sub_82FF3168(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4A00:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49e0
	if (!ctx.cr6.eq) goto loc_82FF49E0;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// b 0x82ff4a64
	goto loc_82FF4A64;
loc_82FF4A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4a28
	if (!ctx.cr6.eq) goto loc_82FF4A28;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82ff4a4c
	goto loc_82FF4A4C;
loc_82FF4A28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4A4C:
	// lhz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1044);
	// addi r3,r10,-8
	ctx.r3.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1044(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1044, ctx.r11.u16);
	// bl 0x82fedd88
	ctx.lr = 0x82FF4A60;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4A64:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4a14
	if (!ctx.cr6.eq) goto loc_82FF4A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FF4A74;
	sub_82FF64E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF4A7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4A84;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4770) {
	__imp__sub_82FF4770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF4A98;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1192
	ctx.r4.s64 = 1192;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82ff5788
	ctx.lr = 0x82FF4AC8;
	sub_82FF5788(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ff4adc
	if (!ctx.cr0.eq) goto loc_82FF4ADC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff4be8
	goto loc_82FF4BE8;
loc_82FF4ADC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3650
	ctx.lr = 0x82FF4AF8;
	sub_82FF3650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,532
	ctx.r9.s64 = ctx.r31.s64 + 532;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82FF4B04:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82ff4b04
	if (!ctx.cr0.eq) goto loc_82FF4B04;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff4b30
	if (!ctx.cr6.gt) goto loc_82FF4B30;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4101
	ctx.r30.u64 = ctx.r30.u64 | 4101;
	// b 0x82ff4bc8
	goto loc_82FF4BC8;
loc_82FF4B30:
	// lwz r9,144(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff4b44
	if (!ctx.cr6.gt) goto loc_82FF4B44;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82FF4B44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff4b98
	if (ctx.cr6.eq) goto loc_82FF4B98;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ff4b6c
	if (!ctx.cr6.gt) goto loc_82FF4B6C;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82feff50
	ctx.lr = 0x82FF4B68;
	sub_82FEFF50(ctx, base);
	// b 0x82ff4b70
	goto loc_82FF4B70;
loc_82FF4B6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF4B70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ff4b8c
	if (ctx.cr6.eq) goto loc_82FF4B8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82ff6f70
	ctx.lr = 0x82FF4B84;
	sub_82FF6F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4b98
	if (!ctx.cr0.eq) goto loc_82FF4B98;
loc_82FF4B8C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff4bc8
	goto loc_82FF4BC8;
loc_82FF4B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64d8
	ctx.lr = 0x82FF4BA0;
	sub_82FF64D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff4bc8
	if (ctx.cr0.lt) goto loc_82FF4BC8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3a08
	ctx.lr = 0x82FF4BB8;
	sub_82FF3A08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff4be4
	if (!ctx.cr0.lt) goto loc_82FF4BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FF4BC8;
	sub_82FF64E8(ctx, base);
loc_82FF4BC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF4BDC;
	sub_82FEDD88(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ff4be8
	goto loc_82FF4BE8;
loc_82FF4BE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF4BE8:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4A90) {
	__imp__sub_82FF4A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82FF4C00;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r23,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u32);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r23.u8);
	// lhz r10,834(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 836);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,834(r31)
	PPC_STORE_U16(ctx.r31.u32 + 834, ctx.r11.u16);
	// sth r10,836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 836, ctx.r10.u16);
	// lwz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x82ffac50
	ctx.lr = 0x82FF4C88;
	sub_82FFAC50(ctx, base);
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// addi r22,r1,96
	ctx.r22.s64 = ctx.r1.s64 + 96;
loc_82FF4C9C:
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ff4cd4
	if (ctx.cr6.gt) goto loc_82FF4CD4;
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x82ff4d84
	if (ctx.cr6.eq) goto loc_82FF4D84;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq 0x82ff4ce0
	if (ctx.cr0.eq) goto loc_82FF4CE0;
	// bne cr6,0x82ff4ce4
	if (!ctx.cr6.eq) goto loc_82FF4CE4;
loc_82FF4CD4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FF4CD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82FF4CE0:
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
loc_82FF4CE4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// beq cr6,0x82ff4d60
	if (ctx.cr6.eq) goto loc_82FF4D60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff4d24
	if (ctx.cr6.eq) goto loc_82FF4D24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ffae78
	ctx.lr = 0x82FF4D04;
	sub_82FFAE78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ff4cd4
	if (ctx.cr6.gt) goto loc_82FF4CD4;
	// b 0x82ff4d84
	goto loc_82FF4D84;
loc_82FF4D24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffae48
	ctx.lr = 0x82FF4D2C;
	sub_82FFAE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r24,-6
	ctx.r10.s64 = ctx.r24.s64 + -6;
	// lwz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
	// addi r3,r25,572
	ctx.r3.s64 = ctx.r25.s64 + 572;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ff73f8
	ctx.lr = 0x82FF4D54;
	sub_82FF73F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4cd4
	if (!ctx.cr0.eq) goto loc_82FF4CD4;
	// b 0x82ff4d84
	goto loc_82FF4D84;
loc_82FF4D60:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ffae28
	ctx.lr = 0x82FF4D68;
	sub_82FFAE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r24,-9
	ctx.r10.s64 = ctx.r24.s64 + -9;
	// lwz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
loc_82FF4D84:
	// subf r10,r24,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r24.s64;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// subf. r29,r26,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// beq 0x82ff4e2c
	if (ctx.cr0.eq) goto loc_82FF4E2C;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x82ff4cd4
	if (!ctx.cr6.lt) goto loc_82FF4CD4;
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r23,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u32);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r23.u8);
	// lhz r10,834(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,834(r31)
	PPC_STORE_U16(ctx.r31.u32 + 834, ctx.r11.u16);
	// lhz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 836, ctx.r11.u16);
	// lwz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x82ffac50
	ctx.lr = 0x82FF4E18;
	sub_82FFAC50(ctx, base);
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff4c9c
	if (!ctx.cr0.eq) goto loc_82FF4C9C;
	// b 0x82ff4cd4
	goto loc_82FF4CD4;
loc_82FF4E2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fefe58
	ctx.lr = 0x82FF4E38;
	sub_82FEFE58(ctx, base);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ff4ee8
	if (ctx.cr6.eq) goto loc_82FF4EE8;
	// addi r29,r25,572
	ctx.r29.s64 = ctx.r25.s64 + 572;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
loc_82FF4E4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff4e78
	if (!ctx.cr6.lt) goto loc_82FF4E78;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x82ff4e78
	if (!ctx.cr6.gt) goto loc_82FF4E78;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82ff4e7c
	goto loc_82FF4E7C;
loc_82FF4E78:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FF4E7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82ff4e9c
	if (!ctx.cr6.eq) goto loc_82FF4E9C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff4040
	ctx.lr = 0x82FF4E98;
	sub_82FF4040(ctx, base);
	// b 0x82ff4ea0
	goto loc_82FF4EA0;
loc_82FF4E9C:
	// bl 0x82ff9d20
	ctx.lr = 0x82FF4EA0;
	sub_82FF9D20(ctx, base);
loc_82FF4EA0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ff4eac
	if (!ctx.cr0.lt) goto loc_82FF4EAC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82FF4EAC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82ff4e4c
	if (!ctx.cr0.eq) goto loc_82FF4E4C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82ff4ee8
	if (!ctx.cr6.lt) goto loc_82FF4EE8;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff4ee8
	if (ctx.cr6.eq) goto loc_82FF4EE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r28.u32);
	// stb r23,1145(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1145, ctx.r23.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// stb r23,1144(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1144, ctx.r23.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF4EE8;
	sub_82FEFEF8(ctx, base);
loc_82FF4EE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff4cd8
	goto loc_82FF4CD8;
}

PPC_WEAK_FUNC(sub_82FF4BF8) {
	__imp__sub_82FF4BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF4EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FF4EF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff510c
	if (!ctx.cr6.eq) goto loc_82FF510C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,40(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// lwz r5,44(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x82ff5d38
	ctx.lr = 0x82FF4F20;
	sub_82FF5D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff510c
	if (ctx.cr0.eq) goto loc_82FF510C;
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r27,r31,872
	ctx.r27.s64 = ctx.r31.s64 + 872;
	// lhz r4,872(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 872);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r11,r11,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x300;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4F4C;
	sub_82FEF9B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefd80
	ctx.lr = 0x82FF4F58;
	sub_82FEFD80(ctx, base);
	// subf r10,r3,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r3.s64;
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ff510c
	if (!ctx.cr6.lt) goto loc_82FF510C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ff510c
	if (!ctx.cr6.gt) goto loc_82FF510C;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x300;
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4F98;
	sub_82FEF9B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r29,-256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -256, ctx.xer);
	// blt cr6,0x82ff510c
	if (ctx.cr6.lt) goto loc_82FF510C;
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// bgt cr6,0x82ff510c
	if (ctx.cr6.gt) goto loc_82FF510C;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff510c
	if (ctx.cr0.lt) goto loc_82FF510C;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff5000
	if (ctx.cr6.eq) goto loc_82FF5000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF4FE4;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff510c
	if (!ctx.cr0.gt) goto loc_82FF510C;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// b 0x82ff5004
	goto loc_82FF5004;
loc_82FF5000:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82FF5004:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ff8ae0
	ctx.lr = 0x82FF5010;
	sub_82FF8AE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82ff510c
	if (ctx.cr0.eq) goto loc_82FF510C;
	// bl 0x82266070
	ctx.lr = 0x82FF501C;
	sub_82266070(ctx, base);
	// lwz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r10,1184(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r11.u64);
	// blt cr6,0x82ff507c
	if (ctx.cr6.lt) goto loc_82FF507C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF505C;
	sub_82FF4130(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF5078;
	sub_82FF0610(ctx, base);
	// b 0x82ff5084
	goto loc_82FF5084;
loc_82FF507C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF5084;
	sub_82FFA470(ctx, base);
loc_82FF5084:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x82ff0508
	ctx.lr = 0x82FF509C;
	sub_82FF0508(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82ff510c
	if (ctx.cr6.eq) goto loc_82FF510C;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff50c0
	if (ctx.cr6.eq) goto loc_82FF50C0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff05c0
	ctx.lr = 0x82FF50C0;
	sub_82FF05C0(ctx, base);
loc_82FF50C0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff510c
	if (ctx.cr6.eq) goto loc_82FF510C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r6,616(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 616);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// bl 0x82ff6400
	ctx.lr = 0x82FF50F0;
	sub_82FF6400(ctx, base);
	// std r3,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r3.u64);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ff4bf8
	ctx.lr = 0x82FF5108;
	sub_82FF4BF8(ctx, base);
	// b 0x82ff5110
	goto loc_82FF5110;
loc_82FF510C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF5110:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF4EF0) {
	__imp__sub_82FF4EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x832b227c
	ctx.lr = 0x82FF5138;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff51f8
	if (ctx.cr6.eq) goto loc_82FF51F8;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82ff57b8
	ctx.lr = 0x82FF5150;
	sub_82FF57B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82ff51e8
	if (ctx.cr6.eq) goto loc_82FF51E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82ff51d8
	if (ctx.cr6.eq) goto loc_82FF51D8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82ff51c8
	if (ctx.cr6.eq) goto loc_82FF51C8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82ff51b8
	if (ctx.cr6.eq) goto loc_82FF51B8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82ff51a8
	if (ctx.cr6.eq) goto loc_82FF51A8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82ff5198
	if (ctx.cr6.eq) goto loc_82FF5198;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x82ff51f8
	if (!ctx.cr6.eq) goto loc_82FF51F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4ef0
	ctx.lr = 0x82FF5194;
	sub_82FF4EF0(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF5198:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4538
	ctx.lr = 0x82FF51A4;
	sub_82FF4538(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4408
	ctx.lr = 0x82FF51B4;
	sub_82FF4408(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2830
	ctx.lr = 0x82FF51C4;
	sub_82FF2830(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2788
	ctx.lr = 0x82FF51D4;
	sub_82FF2788(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2708
	ctx.lr = 0x82FF51E4;
	sub_82FF2708(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2498
	ctx.lr = 0x82FF51F4;
	sub_82FF2498(ctx, base);
loc_82FF51F4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82FF51F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF5200;
	sub_82FF1D08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5118) {
	__imp__sub_82FF5118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r29,-2492
	ctx.r31.s64 = ctx.r29.s64 + -2492;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5230;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,-2492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2492);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r10,-2492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2492);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,-2492(r29)
	PPC_STORE_U32(ctx.r29.u32 + -2492, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF5254;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5210) {
	__imp__sub_82FF5210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5260) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2492
	ctx.r30.s64 = ctx.r11.s64 + -2492;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5288;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF52B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_82FF5260) {
	__imp__sub_82FF5260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF52D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF52D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82266070
	ctx.lr = 0x82FF52F4;
	sub_82266070(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r30,r11,-2492
	ctx.r30.s64 = ctx.r11.s64 + -2492;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5308;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ff5370
	if (ctx.cr6.eq) goto loc_82FF5370;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff5370
	if (ctx.cr0.eq) goto loc_82FF5370;
loc_82FF5320:
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82ff5370
	if (!ctx.cr6.eq) goto loc_82FF5370;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff5358
	if (!ctx.cr6.eq) goto loc_82FF5358;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FF5358:
	// bl 0x82266070
	ctx.lr = 0x82FF535C;
	sub_82266070(ctx, base);
	// subf. r31,r3,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ff5368
	if (!ctx.cr0.lt) goto loc_82FF5368;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF5368:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff5320
	if (!ctx.cr6.eq) goto loc_82FF5320;
loc_82FF5370:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF5378;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF52D0) {
	__imp__sub_82FF52D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5388) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-2492
	ctx.r31.s64 = ctx.r11.s64 + -2492;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF53B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r11,-2616
	ctx.r4.s64 = ctx.r11.s64 + -2616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF53C4;
	sub_82CA2C60(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF53CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_82FF5388) {
	__imp__sub_82FF5388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF53E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF53F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-2492
	ctx.r29.s64 = ctx.r11.s64 + -2492;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF540C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// bgt cr6,0x82ff569c
	if (ctx.cr6.gt) goto loc_82FF569C;
	// beq cr6,0x82ff5688
	if (ctx.cr6.eq) goto loc_82FF5688;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82ff56cc
	if (ctx.cr6.gt) goto loc_82FF56CC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-20000
	ctx.r12.s64 = ctx.r12.s64 + -20000;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,21580
	ctx.r12.s64 = ctx.r12.s64 + 21580;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FF544C;
	case 1:
		goto loc_82FF5474;
	case 2:
		goto loc_82FF5498;
	case 3:
		goto loc_82FF54AC;
	case 4:
		goto loc_82FF54BC;
	case 5:
		goto loc_82FF54D0;
	case 6:
		goto loc_82FF54E4;
	case 7:
		goto loc_82FF54F8;
	case 8:
		goto loc_82FF550C;
	case 9:
		goto loc_82FF5520;
	case 10:
		goto loc_82FF5534;
	case 11:
		goto loc_82FF5548;
	case 12:
		goto loc_82FF555C;
	case 13:
		goto loc_82FF5570;
	case 14:
		goto loc_82FF5584;
	case 15:
		goto loc_82FF5598;
	case 16:
		goto loc_82FF55AC;
	case 17:
		goto loc_82FF55C0;
	case 18:
		goto loc_82FF55D4;
	case 19:
		goto loc_82FF55E8;
	case 20:
		goto loc_82FF55FC;
	case 21:
		goto loc_82FF5610;
	case 22:
		goto loc_82FF5624;
	case 23:
		goto loc_82FF5638;
	case 24:
		goto loc_82FF564C;
	case 25:
		goto loc_82FF56CC;
	case 26:
		goto loc_82FF5660;
	case 27:
		goto loc_82FF5674;
	default:
		__builtin_unreachable();
	}
loc_82FF544C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff5750
	if (!ctx.cr6.lt) goto loc_82FF5750;
loc_82FF546C:
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x82ff5750
	goto loc_82FF5750;
loc_82FF5474:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff5750
	if (!ctx.cr6.gt) goto loc_82FF5750;
	// b 0x82ff546c
	goto loc_82FF546C;
loc_82FF5498:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,-2616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2616, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54BC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54D0:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54E4:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54F8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF550C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5520:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,108(r9)
	PPC_STORE_U16(ctx.r9.u32 + 108, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5534:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,110(r9)
	PPC_STORE_U16(ctx.r9.u32 + 110, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5548:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,112(r9)
	PPC_STORE_U16(ctx.r9.u32 + 112, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF555C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,114(r9)
	PPC_STORE_U16(ctx.r9.u32 + 114, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5570:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5584:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5598:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55AC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55C0:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55D4:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55E8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55FC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5610:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5624:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5638:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF564C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5660:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5674:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5688:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF569C:
	// cmpwi cr6,r30,4099
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4099, ctx.xer);
	// beq cr6,0x82ff573c
	if (ctx.cr6.eq) goto loc_82FF573C;
	// cmpwi cr6,r30,4100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4100, ctx.xer);
	// beq cr6,0x82ff5728
	if (ctx.cr6.eq) goto loc_82FF5728;
	// cmpwi cr6,r30,4101
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4101, ctx.xer);
	// beq cr6,0x82ff5714
	if (ctx.cr6.eq) goto loc_82FF5714;
	// cmpwi cr6,r30,4102
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4102, ctx.xer);
	// beq cr6,0x82ff5700
	if (ctx.cr6.eq) goto loc_82FF5700;
	// cmpwi cr6,r30,4103
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4103, ctx.xer);
	// beq cr6,0x82ff56ec
	if (ctx.cr6.eq) goto loc_82FF56EC;
	// cmpwi cr6,r30,4104
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4104, ctx.xer);
	// beq cr6,0x82ff56d8
	if (ctx.cr6.eq) goto loc_82FF56D8;
loc_82FF56CC:
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4105
	ctx.r31.u64 = ctx.r31.u64 | 4105;
	// b 0x82ff5750
	goto loc_82FF5750;
loc_82FF56D8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF56EC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5700:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,60(r9)
	PPC_STORE_U16(ctx.r9.u32 + 60, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5714:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,58(r9)
	PPC_STORE_U16(ctx.r9.u32 + 58, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5728:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,56(r9)
	PPC_STORE_U16(ctx.r9.u32 + 56, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF573C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_82FF574C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF5750:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF5758;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF53E8) {
	__imp__sub_82FF53E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5768) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5768) {
	__imp__sub_82FF5768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5788) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x821f4d88
	sub_821F4D88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5788) {
	__imp__sub_82FF5788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF57A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF57A0) {
	__imp__sub_82FF57A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF57B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq 0x82ff57cc
	if (ctx.cr0.eq) goto loc_82FF57CC;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_82FF57CC:
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF57B8) {
	__imp__sub_82FF57B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF57E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x82ff5814
	if (!ctx.cr6.lt) goto loc_82FF5814;
loc_82FF580C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff5858
	goto loc_82FF5858;
loc_82FF5814:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5854
	if (ctx.cr0.eq) goto loc_82FF5854;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF5848;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff580c
	if (ctx.cr0.eq) goto loc_82FF580C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82FF5854:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF5858:
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

PPC_WEAK_FUNC(sub_82FF57E8) {
	__imp__sub_82FF57E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5870) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bge cr6,0x82ff589c
	if (!ctx.cr6.lt) goto loc_82FF589C;
loc_82FF5894:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff58e0
	goto loc_82FF58E0;
loc_82FF589C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 10;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff58dc
	if (ctx.cr0.eq) goto loc_82FF58DC;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF58D0;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5894
	if (ctx.cr0.eq) goto loc_82FF5894;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82FF58DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF58E0:
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

PPC_WEAK_FUNC(sub_82FF5870) {
	__imp__sub_82FF5870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF58F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5900;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r3,26
	ctx.r3.s64 = 26;
	// sth r6,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r6.u16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sth r7,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r7.u16);
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// stw r8,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r8.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stb r31,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r31.u8);
	// sth r5,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r5.u16);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stw r4,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r4.u32);
	// stw r29,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r29.u32);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
loc_82FF5948:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82ff5974
	if (ctx.cr0.eq) goto loc_82FF5974;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// slw r4,r30,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82FF5974:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x82ff5948
	if (ctx.cr6.lt) goto loc_82FF5948;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF58F8) {
	__imp__sub_82FF58F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5998) {
	PPC_FUNC_PROLOGUE();
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5998) {
	__imp__sub_82FF5998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF59A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82ff59b8
	if (!ctx.cr6.lt) goto loc_82FF59B8;
loc_82FF59B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF59B8:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff59b0
	if (!ctx.cr6.eq) goto loc_82FF59B0;
	// addi r10,r4,26
	ctx.r10.s64 = ctx.r4.s64 + 26;
	// addi r9,r5,-26
	ctx.r9.s64 = ctx.r5.s64 + -26;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF59A0) {
	__imp__sub_82FF59A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF59E0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF59E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,25(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5a3c
	if (ctx.cr0.eq) goto loc_82FF5A3C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82ff5a60
	if (ctx.cr6.lt) goto loc_82FF5A60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x82ff5a60
	if (ctx.cr0.eq) goto loc_82FF5A60;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82ff5a60
	if (ctx.cr6.gt) goto loc_82FF5A60;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ff5a40
	goto loc_82FF5A40;
loc_82FF5A3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF5A40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff59e8
	if (ctx.cr6.lt) goto loc_82FF59E8;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF5A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF59E0) {
	__imp__sub_82FF59E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5A68) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r3,34
	ctx.r3.s64 = 34;
	// sth r7,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r7.u16);
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r8,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r8.u16);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,29(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// sth r6,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r6.u16);
	// stw r4,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r4.u32);
	// stw r5,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r5.u32);
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stw r31,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r31.u32);
	// stw r30,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r30.u32);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82FF5AC0:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82ff5af0
	if (ctx.cr0.eq) goto loc_82FF5AF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82FF5AF0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff5ac0
	if (ctx.cr6.lt) goto loc_82FF5AC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5A68) {
	__imp__sub_82FF5A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5B20) {
	PPC_FUNC_PROLOGUE();
	// stw r5,21(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21, ctx.r5.u32);
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5B20) {
	__imp__sub_82FF5B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82ff5b48
	if (!ctx.cr6.lt) goto loc_82FF5B48;
loc_82FF5B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF5B48:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff5b40
	if (!ctx.cr6.eq) goto loc_82FF5B40;
	// addi r10,r4,34
	ctx.r10.s64 = ctx.r4.s64 + 34;
	// addi r9,r5,-34
	ctx.r9.s64 = ctx.r5.s64 + -34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5B30) {
	__imp__sub_82FF5B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5B70) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF5B78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5bcc
	if (ctx.cr0.eq) goto loc_82FF5BCC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82ff5bf0
	if (ctx.cr6.lt) goto loc_82FF5BF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x82ff5bf0
	if (ctx.cr0.eq) goto loc_82FF5BF0;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82ff5bf0
	if (ctx.cr6.gt) goto loc_82FF5BF0;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ff5bd0
	goto loc_82FF5BD0;
loc_82FF5BCC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF5BD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff5b78
	if (ctx.cr6.lt) goto loc_82FF5B78;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF5BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5B70) {
	__imp__sub_82FF5B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5BF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r4,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// stw r5,7(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7, ctx.r5.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5BF8) {
	__imp__sub_82FF5BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5C20) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r4,3(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF5C20) {
	__imp__sub_82FF5C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF5C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r11,r5,252
	ctx.r11.u64 = ctx.r5.u64 | 252;
	// rlwinm r6,r8,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r6,r11,5,24,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xE0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// andi. r11,r6,227
	ctx.r11.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ff5c80
	if (ctx.cr6.eq) goto loc_82FF5C80;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5C80:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5c9c
	if (ctx.cr6.eq) goto loc_82FF5C9C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5C9C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lhz r11,38(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5cb8
	if (ctx.cr0.eq) goto loc_82FF5CB8;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5CB8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r10,r9,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// beq 0x82ff5cf8
	if (ctx.cr0.eq) goto loc_82FF5CF8;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff9130
	ctx.lr = 0x82FF5CF4;
	sub_82FF9130(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5CF8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5d18
	if (ctx.cr0.eq) goto loc_82FF5D18;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5D14;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5D18:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5C40) {
	__imp__sub_82FF5C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FF5D40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// bge cr6,0x82ff5d64
	if (!ctx.cr6.lt) goto loc_82FF5D64;
loc_82FF5D5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff5e20
	goto loc_82FF5E20;
loc_82FF5D64:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r30,r28,6
	ctx.r30.s64 = ctx.r28.s64 + 6;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r26,r28,r25
	ctx.r26.u64 = ctx.r28.u64 + ctx.r25.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5dbc
	if (ctx.cr0.eq) goto loc_82FF5DBC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8d90
	ctx.lr = 0x82FF5DA8;
	sub_82FF8D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5d5c
	if (ctx.cr0.eq) goto loc_82FF5D5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82FF5DBC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5df0
	if (ctx.cr0.eq) goto loc_82FF5DF0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF5DDC;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5d5c
	if (ctx.cr0.eq) goto loc_82FF5D5C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82FF5DF0:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x82ff5e08
	if (ctx.cr0.eq) goto loc_82FF5E08;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x82ff5e1c
	goto loc_82FF5E1C;
loc_82FF5E08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff5e20
	if (!ctx.cr0.eq) goto loc_82FF5E20;
loc_82FF5E1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF5E20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5D38) {
	__imp__sub_82FF5D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5E28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// rlwimi r9,r11,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5e9c
	if (ctx.cr6.eq) goto loc_82FF5E9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5E98;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5E9C:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_82FF5E28) {
	__imp__sub_82FF5E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5EC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// beq cr6,0x82ff5f00
	if (ctx.cr6.eq) goto loc_82FF5F00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82FF5F00:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r6,6(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6, ctx.r6.u32);
	// addi r30,r31,10
	ctx.r30.s64 = ctx.r31.s64 + 10;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5f54
	if (ctx.cr6.eq) goto loc_82FF5F54;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5F50;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5F54:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_82FF5EC8) {
	__imp__sub_82FF5EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF5F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r5,r11,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r5,r10,2,24,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF03);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// beq 0x82ff5fcc
	if (ctx.cr0.eq) goto loc_82FF5FCC;
loc_82FF5FBC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5fbc
	if (ctx.cr0.eq) goto loc_82FF5FBC;
loc_82FF5FCC:
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82ff5ff4
	if (!ctx.cr6.eq) goto loc_82FF5FF4;
	// andi. r11,r9,247
	ctx.r11.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82ff6038
	goto loc_82FF6038;
loc_82FF5FF4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ff6038
	if (ctx.cr6.eq) goto loc_82FF6038;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r5,r30,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r30.s64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82ff8c40
	ctx.lr = 0x82FF6034;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF6038:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF5F80) {
	__imp__sub_82FF5F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6058) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,10048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10048, ctx.xer);
	// beq cr6,0x82ff60c0
	if (ctx.cr6.eq) goto loc_82FF60C0;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// beq cr6,0x82ff60b4
	if (ctx.cr6.eq) goto loc_82FF60B4;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// beq cr6,0x82ff60a8
	if (ctx.cr6.eq) goto loc_82FF60A8;
	// cmpwi cr6,r3,10055
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10055, ctx.xer);
	// beq cr6,0x82ff609c
	if (ctx.cr6.eq) goto loc_82FF609C;
	// cmpwi cr6,r3,10065
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10065, ctx.xer);
	// beq cr6,0x82ff60a8
	if (ctx.cr6.eq) goto loc_82FF60A8;
	// cmpwi cr6,r3,10091
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10091, ctx.xer);
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// beq cr6,0x82ff6094
	if (ctx.cr6.eq) goto loc_82FF6094;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// blr 
	return;
loc_82FF6094:
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// blr 
	return;
loc_82FF609C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
loc_82FF60A8:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4116
	ctx.r3.u64 = ctx.r3.u64 | 4116;
	// blr 
	return;
loc_82FF60B4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4099
	ctx.r3.u64 = ctx.r3.u64 | 4099;
	// blr 
	return;
loc_82FF60C0:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4100
	ctx.r3.u64 = ctx.r3.u64 | 4100;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF6058) {
	__imp__sub_82FF6058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF60D0) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-27224
	ctx.r31.s64 = ctx.r11.s64 + -27224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF60F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x82ff6110
	if (!ctx.cr0.eq) goto loc_82FF6110;
	// bl 0x82cfaa28
	ctx.lr = 0x82FF6104;
	sub_82CFAA28(ctx, base);
	// bl 0x82cf9a80
	ctx.lr = 0x82FF6108;
	sub_82CF9A80(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82ffc148
	ctx.lr = 0x82FF6110;
	sub_82FFC148(ctx, base);
loc_82FF6110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF6118;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_82FF60D0) {
	__imp__sub_82FF60D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6130) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF6150;
	sub_82266070(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff6170
	if (ctx.cr0.eq) goto loc_82FF6170;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82FF6170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82ffc1e0
	ctx.lr = 0x82FF617C;
	sub_82FFC1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF6184;
	sub_82266070(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_82FF6130) {
	__imp__sub_82FF6130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF61A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF61B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffbfe0
	ctx.lr = 0x82FF61CC;
	sub_82FFBFE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff6244
	if (ctx.cr0.lt) goto loc_82FF6244;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82cf9a70
	ctx.lr = 0x82FF61FC;
	sub_82CF9A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff6210
	if (ctx.cr0.eq) goto loc_82FF6210;
	// bl 0x82ff6058
	ctx.lr = 0x82FF6208;
	sub_82FF6058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ff6230
	goto loc_82FF6230;
loc_82FF6210:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82cfaa18
	ctx.lr = 0x82FF621C;
	sub_82CFAA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff623c
	if (ctx.cr0.eq) goto loc_82FF623C;
	// bl 0x82ff6058
	ctx.lr = 0x82FF6228;
	sub_82FF6058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cf9a80
	ctx.lr = 0x82FF6230;
	sub_82CF9A80(ctx, base);
loc_82FF6230:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffc148
	ctx.lr = 0x82FF6238;
	sub_82FFC148(ctx, base);
	// b 0x82ff6244
	goto loc_82FF6244;
loc_82FF623C:
	// bl 0x82266070
	ctx.lr = 0x82FF6240;
	sub_82266070(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
loc_82FF6244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF61A8) {
	__imp__sub_82FF61A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27224
	ctx.r31.s64 = ctx.r11.s64 + -27224;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF6274;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff62a4
	if (!ctx.cr6.eq) goto loc_82FF62A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff61a8
	ctx.lr = 0x82FF6290;
	sub_82FF61A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82ff62a4
	if (!ctx.cr0.lt) goto loc_82FF62A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82ff62a8
	goto loc_82FF62A8;
loc_82FF62A4:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82FF62A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF62B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6250) {
	__imp__sub_82FF6250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF62C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF62C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82ff62ec
	if (!ctx.cr6.eq) goto loc_82FF62EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ffbfa0
	ctx.lr = 0x82FF62E8;
	sub_82FFBFA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82FF62EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF6304;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF632C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF62C0) {
	__imp__sub_82FF62C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6338) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,836(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 836);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,836(r11)
	PPC_STORE_U16(ctx.r11.u32 + 836, ctx.r10.u16);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82ff1260
	sub_82FF1260(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6338) {
	__imp__sub_82FF6338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF6360) {
	__imp__sub_82FF6360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6368) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,850
	ctx.r4.s64 = ctx.r31.s64 + 850;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6390;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff63a4
	if (!ctx.cr0.eq) goto loc_82FF63A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff63e8
	goto loc_82FF63E8;
loc_82FF63A4:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19940
	ctx.r8.s64 = ctx.r10.s64 + -19940;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r11,840
	ctx.r9.s64 = ctx.r11.s64 + 840;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF63E8:
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

PPC_WEAK_FUNC(sub_82FF6368) {
	__imp__sub_82FF6368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6400) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r3,r9,10,16,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x8000;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r5,838(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 838);
	// xori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 ^ 32768;
	// stw r8,828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 828, ctx.r8.u32);
	// stw r7,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r7.u32);
	// clrlwi r8,r5,17
	ctx.r8.u64 = ctx.r5.u32 & 0x7FFF;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r4,832(r11)
	PPC_STORE_U16(ctx.r11.u32 + 832, ctx.r4.u16);
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r3,r6,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// sth r8,838(r11)
	PPC_STORE_U16(ctx.r11.u32 + 838, ctx.r8.u16);
	// clrldi r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFF;
	// sth r5,834(r11)
	PPC_STORE_U16(ctx.r11.u32 + 834, ctx.r5.u16);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r5,836(r11)
	PPC_STORE_U16(ctx.r11.u32 + 836, ctx.r5.u16);
	// or r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplwi cr6,r7,32768
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32768, ctx.xer);
	// bge cr6,0x82ff6470
	if (!ctx.cr6.lt) goto loc_82FF6470;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff6468
	if (!ctx.cr6.lt) goto loc_82FF6468;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
loc_82FF6468:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82ff6480
	goto loc_82FF6480;
loc_82FF6470:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff6480
	if (!ctx.cr6.gt) goto loc_82FF6480;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82FF6480:
	// rldicr r10,r8,5,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r10,816(r11)
	PPC_STORE_U64(ctx.r11.u32 + 816, ctx.r10.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF6400) {
	__imp__sub_82FF6400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6490) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20140
	ctx.r11.s64 = ctx.r11.s64 + -20140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ff64bc
	if (ctx.cr0.eq) goto loc_82FF64BC;
	// bl 0x824fe010
	ctx.lr = 0x82FF64BC;
	sub_824FE010(ctx, base);
loc_82FF64BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82FF6490) {
	__imp__sub_82FF6490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF64D8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF64D8) {
	__imp__sub_82FF64D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF64E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF64E8) {
	__imp__sub_82FF64E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF64F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,76(r10)
	PPC_STORE_U16(ctx.r10.u32 + 76, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r4,15,0,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0xFFFF8000) | (ctx.r9.u64 & 0xFFFFFFFF00007FFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r5,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r6,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r3,328(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF64F8) {
	__imp__sub_82FF64F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6588) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ff5788
	ctx.lr = 0x82FF65A8;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff65bc
	if (!ctx.cr0.eq) goto loc_82FF65BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff661c
	goto loc_82FF661C;
loc_82FF65BC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-19932
	ctx.r10.s64 = ctx.r10.s64 + -19932;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FF661C:
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

PPC_WEAK_FUNC(sub_82FF6588) {
	__imp__sub_82FF6588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6630) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6650;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff66c4
	if (ctx.cr0.eq) goto loc_82FF66C4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-19932
	ctx.r10.s64 = ctx.r10.s64 + -19932;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// sth r10,330(r11)
	PPC_STORE_U16(ctx.r11.u32 + 330, ctx.r10.u16);
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// b 0x82ff66cc
	goto loc_82FF66CC;
loc_82FF66C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82FF66CC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF6630) {
	__imp__sub_82FF6630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF66E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF66F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff58f8
	ctx.lr = 0x82FF6734;
	sub_82FF58F8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff6758
	if (ctx.cr6.eq) goto loc_82FF6758;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ca2c60
	ctx.lr = 0x82FF6754;
	sub_82CA2C60(ctx, base);
	// b 0x82ff6760
	goto loc_82FF6760;
loc_82FF6758:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82FF6760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF66E8) {
	__imp__sub_82FF66E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF6770;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff5a68
	ctx.lr = 0x82FF67C4;
	sub_82FF5A68(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff67e8
	if (ctx.cr6.eq) goto loc_82FF67E8;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ca2c60
	ctx.lr = 0x82FF67E4;
	sub_82CA2C60(ctx, base);
	// b 0x82ff67f0
	goto loc_82FF67F0;
loc_82FF67E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82FF67F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6768) {
	__imp__sub_82FF6768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF67F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5bf8
	ctx.lr = 0x82FF6834;
	sub_82FF5BF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF67F8) {
	__imp__sub_82FF67F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6858) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5c20
	ctx.lr = 0x82FF6894;
	sub_82FF5C20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF6858) {
	__imp__sub_82FF6858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF68B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5e28
	ctx.lr = 0x82FF68F8;
	sub_82FF5E28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF68B8) {
	__imp__sub_82FF68B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6918) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5ec8
	ctx.lr = 0x82FF6960;
	sub_82FF5EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82FF6918) {
	__imp__sub_82FF6918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF6988;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff5c40
	ctx.lr = 0x82FF69E0;
	sub_82FF5C40(ctx, base);
	// lhz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// rlwimi r10,r30,15,0,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 15) & 0xFFFF8000) | (ctx.r10.u64 & 0xFFFFFFFF00007FFF);
	// sth r29,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r29.u16);
	// sth r11,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r11.u16);
	// sth r10,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6980) {
	__imp__sub_82FF6980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82ff5998
	sub_82FF5998(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6A08) {
	__imp__sub_82FF6A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82ff5b20
	sub_82FF5B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6A10) {
	__imp__sub_82FF6A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82FF6A20;
	__savegprlr_16(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ff6a58
	if (!ctx.cr6.gt) goto loc_82FF6A58;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// b 0x82ff6c18
	goto loc_82FF6C18;
loc_82FF6A58:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6c10
	if (ctx.cr0.eq) goto loc_82FF6C10;
	// addi r30,r1,244
	ctx.r30.s64 = ctx.r1.s64 + 244;
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// addi r26,r31,72
	ctx.r26.s64 = ctx.r31.s64 + 72;
loc_82FF6A80:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r22,r27,1
	ctx.r22.s64 = ctx.r27.s64 + 1;
	// lhz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82ff6aa4
	if (!ctx.cr6.lt) goto loc_82FF6AA4;
	// lhz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// b 0x82ff6aa8
	goto loc_82FF6AA8;
loc_82FF6AA4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82FF6AA8:
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ffac50
	ctx.lr = 0x82FF6AD4;
	sub_82FFAC50(ctx, base);
	// lhz r11,6(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff6b24
	if (!ctx.cr0.eq) goto loc_82FF6B24;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6bf4
	if (ctx.cr6.eq) goto loc_82FF6BF4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,4108
	ctx.r5.u64 = ctx.r5.u64 | 4108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// b 0x82ff6bf4
	goto loc_82FF6BF4;
loc_82FF6B24:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff6b30
	if (!ctx.cr0.eq) goto loc_82FF6B30;
	// add r19,r29,r19
	ctx.r19.u64 = ctx.r29.u64 + ctx.r19.u64;
loc_82FF6B30:
	// clrlwi r23,r23,16
	ctx.r23.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82ff6be8
	if (ctx.cr6.eq) goto loc_82FF6BE8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r27,r10,r20
	ctx.r27.u64 = ctx.r10.u64 + ctx.r20.u64;
	// beq 0x82ff6b9c
	if (ctx.cr0.eq) goto loc_82FF6B9C;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// sth r3,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ffaac8
	ctx.lr = 0x82FF6B84;
	sub_82FFAAC8(ctx, base);
	// subf r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82ff6ba8
	goto loc_82FF6BA8;
loc_82FF6B9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82FF6BA8:
	// bl 0x82caa2e0
	ctx.lr = 0x82FF6BAC;
	sub_82CAA2E0(ctx, base);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r23,9
	ctx.r9.s64 = ctx.r23.s64 + 9;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,78(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// ori r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 32768;
	// sth r20,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r20.u16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
	// lhz r10,6(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// rlwimi r9,r10,0,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// andi. r10,r9,57343
	ctx.r10.u64 = ctx.r9.u64 & 57343;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
loc_82FF6BE8:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// add r20,r29,r20
	ctx.r20.u64 = ctx.r29.u64 + ctx.r20.u64;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF6BF4:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6a80
	if (ctx.cr6.lt) goto loc_82FF6A80;
loc_82FF6C10:
	// sth r23,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r23.u16);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
loc_82FF6C18:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r7,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r7.s64 = 1264 - ctx.r11.s64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82ff5f80
	ctx.lr = 0x82FF6C38;
	sub_82FF5F80(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r11,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r11.u16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82ca2c08
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6A18) {
	__imp__sub_82FF6A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6cd8
	if (ctx.cr0.eq) goto loc_82FF6CD8;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6C84:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff6cc4
	if (ctx.cr6.eq) goto loc_82FF6CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff6cc4
	if (!ctx.cr0.eq) goto loc_82FF6CC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
loc_82FF6CC4:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6c84
	if (ctx.cr6.lt) goto loc_82FF6C84;
loc_82FF6CD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6C60) {
	__imp__sub_82FF6C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6d3c
	if (ctx.cr0.eq) goto loc_82FF6D3C;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6D04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6d28
	if (ctx.cr6.eq) goto loc_82FF6D28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6D28:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6d04
	if (ctx.cr6.lt) goto loc_82FF6D04;
loc_82FF6D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6CE0) {
	__imp__sub_82FF6CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6db4
	if (ctx.cr0.eq) goto loc_82FF6DB4;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6D78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6da0
	if (ctx.cr6.eq) goto loc_82FF6DA0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6DA0:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6d78
	if (ctx.cr6.lt) goto loc_82FF6D78;
loc_82FF6DB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6D50) {
	__imp__sub_82FF6D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6DD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6e2c
	if (ctx.cr0.eq) goto loc_82FF6E2C;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6DF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6e18
	if (ctx.cr6.eq) goto loc_82FF6E18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6E18:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6df0
	if (ctx.cr6.lt) goto loc_82FF6DF0;
loc_82FF6E2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6DC8) {
	__imp__sub_82FF6DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6E40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82ff6e70
	if (!ctx.cr6.eq) goto loc_82FF6E70;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_82FF6E70:
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF6E40) {
	__imp__sub_82FF6E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x82ff57a0
	sub_82FF57A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6E78) {
	__imp__sub_82FF6E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF6E90) {
	__imp__sub_82FF6E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6EC8;
	sub_82FF5788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ff6ed8
	if (!ctx.cr0.eq) goto loc_82FF6ED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff6f64
	goto loc_82FF6F64;
loc_82FF6ED8:
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF6EE8;
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff6f00
	if (ctx.cr6.eq) goto loc_82FF6F00;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF6F00;
	sub_82FF57A0(ctx, base);
loc_82FF6F00:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x82ff6f54
	if (ctx.cr6.eq) goto loc_82FF6F54;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82FF6F54:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FF6F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6E98) {
	__imp__sub_82FF6E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff6f94
	if (ctx.cr6.gt) goto loc_82FF6F94;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF6F94:
	// b 0x82ff6e98
	sub_82FF6E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF6F70) {
	__imp__sub_82FF6F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF6F98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff6fe8
	if (ctx.cr6.eq) goto loc_82FF6FE8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7070
	if (!ctx.cr6.eq) goto loc_82FF7070;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82ff7070
	goto loc_82FF7070;
loc_82FF6FE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7058
	if (!ctx.cr6.eq) goto loc_82FF7058;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ff7014
	if (!ctx.cr6.lt) goto loc_82FF7014;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82ff701c
	goto loc_82FF701C;
loc_82FF7014:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FF701C:
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff7030
	if (ctx.cr6.lt) goto loc_82FF7030;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ff7034
	if (!ctx.cr6.gt) goto loc_82FF7034;
loc_82FF7030:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82FF7034:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff6e98
	ctx.lr = 0x82FF7040;
	sub_82FF6E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff7054
	if (!ctx.cr0.eq) goto loc_82FF7054;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff7098
	goto loc_82FF7098;
loc_82FF7054:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82FF7058:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82FF7070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r10,r9,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF7098:
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

PPC_WEAK_FUNC(sub_82FF6F98) {
	__imp__sub_82FF6F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF70B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,5,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFFFF8;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ff7128
	if (!ctx.cr6.lt) goto loc_82FF7128;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r9,r4,8,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7128
	if (!ctx.cr6.eq) goto loc_82FF7128;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r4,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7128
	if (!ctx.cr6.eq) goto loc_82FF7128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ff7108
	if (!ctx.cr6.eq) goto loc_82FF7108;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82ff7114
	goto loc_82FF7114;
loc_82FF7108:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82FF7114:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82FF7128:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4111
	ctx.r3.u64 = ctx.r3.u64 | 4111;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF70B0) {
	__imp__sub_82FF70B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7180
	if (!ctx.cr6.eq) goto loc_82FF7180;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,5,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff7180
	if (ctx.cr6.lt) goto loc_82FF7180;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff7180
	if (!ctx.cr6.lt) goto loc_82FF7180;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r9,r4,8,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7180
	if (!ctx.cr6.eq) goto loc_82FF7180;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82FF7180:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7138) {
	__imp__sub_82FF7138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff7220
	if (ctx.cr6.eq) goto loc_82FF7220;
	// rlwinm r11,r4,8,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// subfic r11,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r11.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82ff7220
	if (ctx.cr6.gt) goto loc_82FF7220;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// clrlwi r10,r4,8
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFFF;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ff7220
	if (!ctx.cr6.lt) goto loc_82FF7220;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff71fc
	if (ctx.cr6.eq) goto loc_82FF71FC;
loc_82FF71E8:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bne 0x82ff71e8
	if (!ctx.cr0.eq) goto loc_82FF71E8;
loc_82FF71FC:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF720C;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff7220
	if (ctx.cr0.eq) goto loc_82FF7220;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff7224
	if (!ctx.cr6.eq) goto loc_82FF7224;
loc_82FF7220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7188) {
	__imp__sub_82FF7188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7238) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82ff7260
	if (ctx.cr6.eq) goto loc_82FF7260;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_82FF7260:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF7238) {
	__imp__sub_82FF7238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7268) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff729c
	if (ctx.cr6.eq) goto loc_82FF729C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF7294;
	sub_82FF57A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FF729C:
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

PPC_WEAK_FUNC(sub_82FF7268) {
	__imp__sub_82FF7268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF72B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF72B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff5788
	ctx.lr = 0x82FF72D0;
	sub_82FF5788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ff72e0
	if (!ctx.cr0.eq) goto loc_82FF72E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff7334
	goto loc_82FF7334;
loc_82FF72E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF72F4;
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff730c
	if (ctx.cr6.eq) goto loc_82FF730C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF730C;
	sub_82FF57A0(ctx, base);
loc_82FF730C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca3190
	ctx.lr = 0x82FF7328;
	sub_82CA3190(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF7334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF72B0) {
	__imp__sub_82FF72B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff7358
	if (ctx.cr6.gt) goto loc_82FF7358;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF7358:
	// b 0x82ff72b0
	sub_82FF72B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7340) {
	__imp__sub_82FF7340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF7368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff73cc
	if (ctx.cr6.lt) goto loc_82FF73CC;
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x82ff739c
	if (!ctx.cr6.lt) goto loc_82FF739C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82FF739C:
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ff73ac
	if (ctx.cr6.lt) goto loc_82FF73AC;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff73b0
	if (!ctx.cr6.gt) goto loc_82FF73B0;
loc_82FF73AC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82FF73B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff72b0
	ctx.lr = 0x82FF73B8;
	sub_82FF72B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff73cc
	if (!ctx.cr0.eq) goto loc_82FF73CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff73f0
	goto loc_82FF73F0;
loc_82FF73CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82FF73F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FF7360) {
	__imp__sub_82FF7360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF73F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ff7420
	if (!ctx.cr6.lt) goto loc_82FF7420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x82ff7420
	if (!ctx.cr6.gt) goto loc_82FF7420;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82ff7424
	goto loc_82FF7424;
loc_82FF7420:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF7424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff743c
	if (ctx.cr6.eq) goto loc_82FF743C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82FF743C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FF73F8) {
	__imp__sub_82FF73F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FF7448) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82FF7448) {
	__imp__sub_82FF7448(ctx, base);
}

