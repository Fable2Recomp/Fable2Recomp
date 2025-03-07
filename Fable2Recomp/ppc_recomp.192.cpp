#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CC9F68"))) PPC_WEAK_FUNC(sub_82CC9F68);
PPC_FUNC_IMPL(__imp__sub_82CC9F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82CC9F70;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82cc1290
	ctx.lr = 0x82CC9F90;
	sub_82CC1290(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cc9fc8
	if (ctx.cr0.eq) goto loc_82CC9FC8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc0b18
	ctx.lr = 0x82CC9FA8;
	sub_82CC0B18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cca1a8
	if (ctx.cr0.eq) goto loc_82CCA1A8;
	// ld r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x82cca1a8
	if (ctx.cr6.lt) goto loc_82CCA1A8;
loc_82CC9FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cca1ac
	goto loc_82CCA1AC;
loc_82CC9FC8:
	// lha r22,6(r29)
	ctx.r22.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 6));
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 5, ctx.xer);
	// bgt cr6,0x82cca1a8
	if (ctx.cr6.gt) goto loc_82CCA1A8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82cca1a8
	if (ctx.cr6.eq) goto loc_82CCA1A8;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r25,2(r29)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bne 0x82cca028
	if (!ctx.cr0.eq) goto loc_82CCA028;
	// lhz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82cca018
	if (!ctx.cr6.lt) goto loc_82CCA018;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// b 0x82cca02c
	goto loc_82CCA02C;
loc_82CCA018:
	// lhz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x82cca02c
	if (ctx.cr6.gt) goto loc_82CCA02C;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x82cca02c
	goto loc_82CCA02C;
loc_82CCA028:
	// lhz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
loc_82CCA02C:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// bl 0x832b29ec
	ctx.lr = 0x82CCA068;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca1a8
	if (ctx.cr0.eq) goto loc_82CCA1A8;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
loc_82CCA074:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b292c
	ctx.lr = 0x82CCA080;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82cca0a4
	if (!ctx.cr6.gt) goto loc_82CCA0A4;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
loc_82CCA09C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82cca0bc
	goto loc_82CCA0BC;
loc_82CCA0A4:
	// bge cr6,0x82cca0b8
	if (!ctx.cr6.lt) goto loc_82CCA0B8;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82cca09c
	goto loc_82CCA09C;
loc_82CCA0B8:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_82CCA0BC:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x82cca114
	if (!ctx.cr6.gt) goto loc_82CCA114;
	// b 0x82cca0d4
	goto loc_82CCA0D4;
loc_82CCA0D0:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_82CCA0D4:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b29ec
	ctx.lr = 0x82CCA0E8;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca114
	if (ctx.cr0.eq) goto loc_82CCA114;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b292c
	ctx.lr = 0x82CCA0FC;
	__imp__RtlTimeToTimeFields(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// blt cr6,0x82cca0d0
	if (ctx.cr6.lt) goto loc_82CCA0D0;
loc_82CCA114:
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b29ec
	ctx.lr = 0x82CCA124;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca1a8
	if (ctx.cr0.eq) goto loc_82CCA1A8;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca1b4
	if (ctx.cr0.eq) goto loc_82CCA1B4;
	// lhz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cca158
	if (ctx.cr6.lt) goto loc_82CCA158;
	// bne cr6,0x82cca1b4
	if (!ctx.cr6.eq) goto loc_82CCA1B4;
	// ld r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x82cca1b4
	if (!ctx.cr6.lt) goto loc_82CCA1B4;
loc_82CCA158:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// bl 0x832b29ec
	ctx.lr = 0x82CCA1A0;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cca074
	if (!ctx.cr0.eq) goto loc_82CCA074;
loc_82CCA1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCA1AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82CCA1B4:
	// std r9,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r9.u64);
	// b 0x82cc9fc0
	goto loc_82CC9FC0;
}

__attribute__((alias("__imp__sub_82CCA1BC"))) PPC_WEAK_FUNC(sub_82CCA1BC);
PPC_FUNC_IMPL(__imp__sub_82CCA1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA1C0"))) PPC_WEAK_FUNC(sub_82CCA1C0);
PPC_FUNC_IMPL(__imp__sub_82CCA1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCA1C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	ctx.lr = 0x82CCA204;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82cca214
	if (!ctx.cr0.lt) goto loc_82CCA214;
loc_82CCA20C:
	// bl 0x832b286c
	ctx.lr = 0x82CCA210;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82cca3e8
	goto loc_82CCA3E8;
loc_82CCA214:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x832b26ac
	ctx.lr = 0x82CCA234;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82CCA24C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x82cca24c
	if (!ctx.cr0.eq) goto loc_82CCA24C;
	// sth r30,8(r8)
	PPC_STORE_U16(ctx.r8.u32 + 8, ctx.r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	ctx.lr = 0x82CCA280;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82CCA298:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x82cca298
	if (!ctx.cr0.eq) goto loc_82CCA298;
	// sth r30,8(r8)
	PPC_STORE_U16(ctx.r8.u32 + 8, ctx.r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	ctx.lr = 0x82CCA2CC;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCA2E4;
	sub_82CA3190(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r11,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r11.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r10,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r10.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r9,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r9.u16);
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// bl 0x832b26ac
	ctx.lr = 0x82CCA320;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCA338;
	sub_82CA3190(ctx, base);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// sth r11,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r10,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r10.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r9,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r9.u16);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// bl 0x832b26ac
	ctx.lr = 0x82CCA374;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x832b26ac
	ctx.lr = 0x82CCA39C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// beq cr6,0x82cca3e4
	if (ctx.cr6.eq) goto loc_82CCA3E4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832b26ac
	ctx.lr = 0x82CCA3CC;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82cca20c
	if (ctx.cr0.lt) goto loc_82CCA20C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CCA3E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCA3E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CCA3F0"))) PPC_WEAK_FUNC(sub_82CCA3F0);
PPC_FUNC_IMPL(__imp__sub_82CCA3F0) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,20
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA3F8"))) PPC_WEAK_FUNC(sub_82CCA3F8);
PPC_FUNC_IMPL(__imp__sub_82CCA3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-23208(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCA408;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc16c0
	ctx.lr = 0x82CCA430;
	sub_82CC16C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CCA43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc16c0
	ctx.lr = 0x82CCA448;
	sub_82CC16C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x832b29dc
	ctx.lr = 0x82CCA45C;
	__imp__ExTerminateThread(ctx, base);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cbbed0
	ctx.lr = 0x82CCA46C;
	sub_82CBBED0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA400"))) PPC_WEAK_FUNC(sub_82CCA400);
PPC_FUNC_IMPL(__imp__sub_82CCA400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCA408;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc16c0
	ctx.lr = 0x82CCA430;
	sub_82CC16C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CCA43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc16c0
	ctx.lr = 0x82CCA448;
	sub_82CC16C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x832b29dc
	ctx.lr = 0x82CCA45C;
	__imp__ExTerminateThread(ctx, base);
}

__attribute__((alias("__imp__sub_82CCA45C"))) PPC_WEAK_FUNC(sub_82CCA45C);
PPC_FUNC_IMPL(__imp__sub_82CCA45C) {
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
	// bl 0x82cbbed0
	ctx.lr = 0x82CCA46C;
	sub_82CBBED0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA480"))) PPC_WEAK_FUNC(sub_82CCA480);
PPC_FUNC_IMPL(__imp__sub_82CCA480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCA488;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82cca4f0
	if (ctx.cr6.eq) goto loc_82CCA4F0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82cca4e0
	if (ctx.cr6.gt) goto loc_82CCA4E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CCA4E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82cca548
	goto loc_82CCA548;
loc_82CCA4F0:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82cca53c
	if (ctx.cr6.gt) goto loc_82CCA53C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,255
	ctx.r9.s64 = 255;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// srawi r8,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r29,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CCA53C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_82CCA548:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x82cca564
	if (!ctx.cr6.lt) goto loc_82CCA564;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CCA564:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82cca570
	if (!ctx.cr6.lt) goto loc_82CCA570;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82CCA570:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca2c60
	ctx.lr = 0x82CCA57C;
	sub_82CA2C60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82cca5e0
	if (ctx.cr6.eq) goto loc_82CCA5E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bge cr6,0x82cca5b0
	if (!ctx.cr6.lt) goto loc_82CCA5B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CCA5B0:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82cca5bc
	if (!ctx.cr6.lt) goto loc_82CCA5BC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CCA5BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCA5C8;
	sub_82CA3190(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82CCA5E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCA5EC"))) PPC_WEAK_FUNC(sub_82CCA5EC);
PPC_FUNC_IMPL(__imp__sub_82CCA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA5F0"))) PPC_WEAK_FUNC(sub_82CCA5F0);
PPC_FUNC_IMPL(__imp__sub_82CCA5F0) {
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
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccaae0
	ctx.lr = 0x82CCA614;
	sub_82CCAAE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cca630
	if (ctx.cr0.eq) goto loc_82CCA630;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17232, ctx.r11.u32);
	// stw r11,17248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17248, ctx.r11.u32);
	// b 0x82cca65c
	goto loc_82CCA65C;
loc_82CCA630:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca660
	if (ctx.cr0.eq) goto loc_82CCA660;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17224, ctx.r11.u32);
	// std r11,17232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 17232, ctx.r11.u64);
	// std r11,17240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 17240, ctx.r11.u64);
	// stw r11,17256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17256, ctx.r11.u32);
	// stw r11,17260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17260, ctx.r11.u32);
	// stw r11,17264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17264, ctx.r11.u32);
	// stw r11,17268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17268, ctx.r11.u32);
	// stb r11,17272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17272, ctx.r11.u8);
loc_82CCA65C:
	// stw r11,17252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17252, ctx.r11.u32);
loc_82CCA660:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82CCA67C"))) PPC_WEAK_FUNC(sub_82CCA67C);
PPC_FUNC_IMPL(__imp__sub_82CCA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA680"))) PPC_WEAK_FUNC(sub_82CCA680);
PPC_FUNC_IMPL(__imp__sub_82CCA680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CCA688;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bne 0x82cca6b8
	if (!ctx.cr0.eq) goto loc_82CCA6B8;
	// bl 0x82cca5f0
	ctx.lr = 0x82CCA6B8;
	sub_82CCA5F0(ctx, base);
loc_82CCA6B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r10,r10,-23424
	ctx.r10.s64 = ctx.r10.s64 + -23424;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r9,17200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17200, ctx.r9.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r10,17216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17216, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// beq cr6,0x82cca73c
	if (ctx.cr6.eq) goto loc_82CCA73C;
loc_82CCA6F0:
	// cmplwi cr6,r30,32768
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32768, ctx.xer);
	// bge cr6,0x82cca700
	if (!ctx.cr6.lt) goto loc_82CCA700;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82cca708
	goto loc_82CCA708;
loc_82CCA700:
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
loc_82CCA708:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r30,32768
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32768, ctx.xer);
	// bgt cr6,0x82cca718
	if (ctx.cr6.gt) goto loc_82CCA718;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_82CCA718:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccaae8
	ctx.lr = 0x82CCA730;
	sub_82CCAAE8(ctx, base);
	// subf. r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x82cca6f0
	if (!ctx.cr0.eq) goto loc_82CCA6F0;
loc_82CCA73C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccab58
	ctx.lr = 0x82CCA744;
	sub_82CCAB58(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82cca75c
	if (!ctx.cr6.gt) goto loc_82CCA75C;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82CCA75C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CCA768"))) PPC_WEAK_FUNC(sub_82CCA768);
PPC_FUNC_IMPL(__imp__sub_82CCA768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cca78c
	if (ctx.cr6.eq) goto loc_82CCA78C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82cca79c
	goto loc_82CCA79C;
loc_82CCA78C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82CCA79C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cca7b0
	if (!ctx.cr6.eq) goto loc_82CCA7B0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82CCA7B0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA7C8"))) PPC_WEAK_FUNC(sub_82CCA7C8);
PPC_FUNC_IMPL(__imp__sub_82CCA7C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cca768
	ctx.lr = 0x82CCA7F4;
	sub_82CCA768(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccad38
	ctx.lr = 0x82CCA810;
	sub_82CCAD38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x82cca828
	if (ctx.cr0.eq) goto loc_82CCA828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cca5f0
	ctx.lr = 0x82CCA828;
	sub_82CCA5F0(ctx, base);
loc_82CCA828:
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

__attribute__((alias("__imp__sub_82CCA840"))) PPC_WEAK_FUNC(sub_82CCA840);
PPC_FUNC_IMPL(__imp__sub_82CCA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cca768
	ctx.lr = 0x82CCA860;
	sub_82CCA768(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ccad38
	ctx.lr = 0x82CCA87C;
	sub_82CCAD38(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCA894"))) PPC_WEAK_FUNC(sub_82CCA894);
PPC_FUNC_IMPL(__imp__sub_82CCA894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA898"))) PPC_WEAK_FUNC(sub_82CCA898);
PPC_FUNC_IMPL(__imp__sub_82CCA898) {
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
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccaf38
	ctx.lr = 0x82CCA8BC;
	sub_82CCAF38(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cca8d4
	if (ctx.cr0.eq) goto loc_82CCA8D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,12284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12284, ctx.r11.u8);
	// b 0x82cca8f4
	goto loc_82CCA8F4;
loc_82CCA8D4:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cca900
	if (ctx.cr0.eq) goto loc_82CCA900;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r11.u32);
	// stw r11,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r11.u32);
	// stw r11,12288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12288, ctx.r11.u32);
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// stw r11,12296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12296, ctx.r11.u32);
loc_82CCA8F4:
	// stw r11,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r11.u32);
	// stw r11,12272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12272, ctx.r11.u32);
	// stw r11,12268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12268, ctx.r11.u32);
loc_82CCA900:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82CCA91C"))) PPC_WEAK_FUNC(sub_82CCA91C);
PPC_FUNC_IMPL(__imp__sub_82CCA91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCA920"))) PPC_WEAK_FUNC(sub_82CCA920);
PPC_FUNC_IMPL(__imp__sub_82CCA920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CCA928;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// addi r29,r7,-5
	ctx.r29.s64 = ctx.r7.s64 + -5;
	// bgt cr6,0x82cca94c
	if (ctx.cr6.gt) goto loc_82CCA94C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CCA94C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cca960
	if (!ctx.cr0.eq) goto loc_82CCA960;
	// bl 0x82cca898
	ctx.lr = 0x82CCA960;
	sub_82CCA898(ctx, base);
loc_82CCA960:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ccaa04
	if (ctx.cr6.eq) goto loc_82CCAA04;
loc_82CCA968:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82cca9b4
	if (!ctx.cr6.eq) goto loc_82CCA9B4;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,-5
	ctx.r29.s64 = ctx.r29.s64 + -5;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82cca9d0
	if (!ctx.cr6.lt) goto loc_82CCA9D0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82cca9d0
	goto loc_82CCA9D0;
loc_82CCA9B4:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,0
	ctx.r8.s64 = 0;
	// or r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
loc_82CCA9D0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ccaf80
	ctx.lr = 0x82CCA9EC;
	sub_82CCAF80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x82cca968
	if (!ctx.cr0.eq) goto loc_82CCA968;
loc_82CCAA04:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CCAA14"))) PPC_WEAK_FUNC(sub_82CCAA14);
PPC_FUNC_IMPL(__imp__sub_82CCAA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAA18"))) PPC_WEAK_FUNC(sub_82CCAA18);
PPC_FUNC_IMPL(__imp__sub_82CCAA18) {
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
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cca768
	ctx.lr = 0x82CCAA44;
	sub_82CCA768(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb290
	ctx.lr = 0x82CCAA5C;
	sub_82CCB290(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x82ccaa74
	if (ctx.cr0.eq) goto loc_82CCAA74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cca898
	ctx.lr = 0x82CCAA74;
	sub_82CCA898(ctx, base);
loc_82CCAA74:
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

__attribute__((alias("__imp__sub_82CCAA8C"))) PPC_WEAK_FUNC(sub_82CCAA8C);
PPC_FUNC_IMPL(__imp__sub_82CCAA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAA90"))) PPC_WEAK_FUNC(sub_82CCAA90);
PPC_FUNC_IMPL(__imp__sub_82CCAA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cca768
	ctx.lr = 0x82CCAAB0;
	sub_82CCA768(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ccb290
	ctx.lr = 0x82CCAAC8;
	sub_82CCB290(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAAE0"))) PPC_WEAK_FUNC(sub_82CCAAE0);
PPC_FUNC_IMPL(__imp__sub_82CCAAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ccab90
	sub_82CCAB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAAE4"))) PPC_WEAK_FUNC(sub_82CCAAE4);
PPC_FUNC_IMPL(__imp__sub_82CCAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAAE8"))) PPC_WEAK_FUNC(sub_82CCAAE8);
PPC_FUNC_IMPL(__imp__sub_82CCAAE8) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r4,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r4.u32);
	// stw r5,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r5.u32);
	// stw r7,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r7.u32);
	// bl 0x82ccc318
	ctx.lr = 0x82CCAB14;
	sub_82CCC318(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccab30
	if (ctx.cr0.eq) goto loc_82CCAB30;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82ccab40
	goto loc_82CCAB40;
loc_82CCAB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb6d8
	ctx.lr = 0x82CCAB38;
	sub_82CCB6D8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCAB40:
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

__attribute__((alias("__imp__sub_82CCAB58"))) PPC_WEAK_FUNC(sub_82CCAB58);
PPC_FUNC_IMPL(__imp__sub_82CCAB58) {
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
	// bl 0x82ccb728
	ctx.lr = 0x82CCAB70;
	sub_82CCB728(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82CCAB90"))) PPC_WEAK_FUNC(sub_82CCAB90);
PPC_FUNC_IMPL(__imp__sub_82CCAB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCAB98;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ca3190
	ctx.lr = 0x82CCABB0;
	sub_82CA3190(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,17188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17188);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// lwz r7,17192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17192);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r3,r31,14672
	ctx.r3.s64 = ctx.r31.s64 + 14672;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,2418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2418, ctx.r30.u8);
	// stb r30,2419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2419, ctx.r30.u8);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,17184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82CCAC34;
	sub_82CA3190(ctx, base);
	// addi r3,r31,16868
	ctx.r3.s64 = ctx.r31.s64 + 16868;
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAC44;
	sub_82CA3190(ctx, base);
	// addi r3,r31,9520
	ctx.r3.s64 = ctx.r31.s64 + 9520;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAC54;
	sub_82CA3190(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// addi r3,r31,9776
	ctx.r3.s64 = ctx.r31.s64 + 9776;
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAC68;
	sub_82CA3190(ctx, base);
	// addi r3,r31,10221
	ctx.r3.s64 = ctx.r31.s64 + 10221;
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAC78;
	sub_82CA3190(ctx, base);
	// li r11,771
	ctx.r11.s64 = 771;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,17166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 17166, ctx.r11.u16);
	// sth r11,17168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 17168, ctx.r11.u16);
	// sth r11,17170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 17170, ctx.r11.u16);
	// sth r11,17172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 17172, ctx.r11.u16);
	// bl 0x82cccf38
	ctx.lr = 0x82CCAC94;
	sub_82CCCF38(ctx, base);
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r29.u32);
	// stb r30,2420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2420, ctx.r30.u8);
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82CCACB8;
	sub_82CA3190(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stb r29,2161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2161, ctx.r29.u8);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x82ccc410
	ctx.lr = 0x82CCACD8;
	sub_82CCC410(ctx, base);
	// li r5,2800
	ctx.r5.s64 = 2800;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,17196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17196, ctx.r29.u32);
	// addi r3,r31,10472
	ctx.r3.s64 = ctx.r31.s64 + 10472;
	// stw r29,17212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17212, ctx.r29.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82CCACF0;
	sub_82CA3190(ctx, base);
	// li r5,996
	ctx.r5.s64 = 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,15374
	ctx.r3.s64 = ctx.r31.s64 + 15374;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAD00;
	sub_82CA3190(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,17118
	ctx.r3.s64 = ctx.r31.s64 + 17118;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAD10;
	sub_82CA3190(ctx, base);
	// lwz r10,2424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,4353
	ctx.r5.s64 = ctx.r11.s64 + 4353;
	// bl 0x82ca3190
	ctx.lr = 0x82CCAD2C;
	sub_82CA3190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CCAD34"))) PPC_WEAK_FUNC(sub_82CCAD34);
PPC_FUNC_IMPL(__imp__sub_82CCAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAD38"))) PPC_WEAK_FUNC(sub_82CCAD38);
PPC_FUNC_IMPL(__imp__sub_82CCAD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CCAD40;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r10,4353
	ctx.r10.s64 = ctx.r10.s64 + 4353;
	// rlwinm. r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,3
	ctx.r31.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r31,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r29,r8
	ctx.r10.u64 = ctx.r29.u64 + ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// addis r24,r10,9
	ctx.r24.s64 = ctx.r10.s64 + 589824;
	// addi r24,r24,32048
	ctx.r24.s64 = ctx.r24.s64 + 32048;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bne 0x82ccad88
	if (!ctx.cr0.eq) goto loc_82CCAD88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82CCAD88:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ccad9c
	if (ctx.cr6.eq) goto loc_82CCAD9C;
	// lis r25,9
	ctx.r25.s64 = 589824;
	// ori r25,r25,55452
	ctx.r25.u64 = ctx.r25.u64 | 55452;
	// b 0x82ccada0
	goto loc_82CCADA0;
loc_82CCAD9C:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82CCADA0:
	// clrlwi. r26,r9,24
	ctx.r26.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82ccadb4
	if (ctx.cr0.eq) goto loc_82CCADB4;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// ori r27,r27,24616
	ctx.r27.u64 = ctx.r27.u64 | 24616;
	// b 0x82ccadb8
	goto loc_82CCADB8;
loc_82CCADB4:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82CCADB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ccadcc
	if (ctx.cr6.eq) goto loc_82CCADCC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x82ccadd0
	goto loc_82CCADD0;
loc_82CCADCC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CCADD0:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ccaf30
	if (ctx.cr6.eq) goto loc_82CCAF30;
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stwx r30,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r30.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r31,17376
	ctx.r10.s64 = ctx.r31.s64 + 17376;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// addi r7,r9,14228
	ctx.r7.s64 = ctx.r9.s64 + 14228;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r6,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r6.u32);
	// stw r30,17216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17216, ctx.r30.u32);
	// stw r30,17204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17204, ctx.r30.u32);
	// stw r30,17208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17208, ctx.r30.u32);
	// stw r30,17200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17200, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,17188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17188, ctx.r30.u32);
	// stw r30,17192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17192, ctx.r30.u32);
	// stw r30,9516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9516, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r30.u32);
	// stw r30,17248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17248, ctx.r30.u32);
	// stw r30,17372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17372, ctx.r30.u32);
loc_82CCAE50:
	// lwz r9,2152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lbzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r6.u32);
	// slw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82ccae50
	if (ctx.cr6.lt) goto loc_82CCAE50;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,17188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17188, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,17192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17192, ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,17184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17184, ctx.r11.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,17184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r29,r11,8192
	ctx.r29.s64 = ctx.r11.s64 + 8192;
	// bl 0x82ccd0f8
	ctx.lr = 0x82CCAEB0;
	sub_82CCD0F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd1a0
	ctx.lr = 0x82CCAEB8;
	sub_82CCD1A0(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// stw r29,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r29.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// stw r11,9516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9516, ctx.r11.u32);
	// addi r10,r10,-32432
	ctx.r10.s64 = ctx.r10.s64 + -32432;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r9,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r9.u32);
	// beq cr6,0x82ccaf14
	if (ctx.cr6.eq) goto loc_82CCAF14;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r27,17228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17228, ctx.r27.u32);
	// stw r11,17224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17224, ctx.r11.u32);
	// stw r30,17236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17236, ctx.r30.u32);
	// stw r30,17244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17244, ctx.r30.u32);
	// stw r10,17240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17240, ctx.r10.u32);
	// stb r28,17256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17256, ctx.r28.u8);
	// b 0x82ccaf28
	goto loc_82CCAF28;
loc_82CCAF14:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ccaf28
	if (ctx.cr6.eq) goto loc_82CCAF28;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r11,17248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17248, ctx.r11.u32);
	// stw r10,17372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17372, ctx.r10.u32);
loc_82CCAF28:
	// stw r24,17368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17368, ctx.r24.u32);
	// stb r28,2160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2160, ctx.r28.u8);
loc_82CCAF30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CCAF38"))) PPC_WEAK_FUNC(sub_82CCAF38);
PPC_FUNC_IMPL(__imp__sub_82CCAF38) {
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
	// bl 0x82ccb398
	ctx.lr = 0x82CCAF50;
	sub_82CCB398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb410
	ctx.lr = 0x82CCAF58;
	sub_82CCB410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd1e8
	ctx.lr = 0x82CCAF60;
	sub_82CCD1E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11972, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CCAF7C"))) PPC_WEAK_FUNC(sub_82CCAF7C);
PPC_FUNC_IMPL(__imp__sub_82CCAF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAF80"))) PPC_WEAK_FUNC(sub_82CCAF80);
PPC_FUNC_IMPL(__imp__sub_82CCAF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCAF88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r7,11020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11020, ctx.r7.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r5,11012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11012, ctx.r5.u32);
	// stw r11,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r11.u32);
	// bl 0x832b267c
	ctx.lr = 0x82CCAFB4;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,12260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12260, ctx.r11.u8);
	// bl 0x82ccd658
	ctx.lr = 0x82CCAFD0;
	sub_82CCD658(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd388
	ctx.lr = 0x82CCAFDC;
	sub_82CCD388(ctx, base);
	// lwz r10,11972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11972);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11972, ctx.r10.u32);
	// bge 0x82ccb000
	if (!ctx.cr0.lt) goto loc_82CCB000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82ccb014
	goto loc_82CCB014;
loc_82CCB000:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,11024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11024, ctx.r11.u32);
loc_82CCB014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CCB01C"))) PPC_WEAK_FUNC(sub_82CCB01C);
PPC_FUNC_IMPL(__imp__sub_82CCB01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB020"))) PPC_WEAK_FUNC(sub_82CCB020);
PPC_FUNC_IMPL(__imp__sub_82CCB020) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82CCB028;
	sub_82CA2BBC(ctx, base);
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lis r8,771
	ctx.r8.s64 = 50528256;
	// ori r9,r9,514
	ctx.r9.u64 = ctx.r9.u64 | 514;
	// lis r6,1799
	ctx.r6.s64 = 117899264;
	// lis r7,1285
	ctx.r7.s64 = 84213760;
	// stw r9,12008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12008, ctx.r9.u32);
	// ori r8,r8,1028
	ctx.r8.u64 = ctx.r8.u64 | 1028;
	// ori r7,r7,1542
	ctx.r7.u64 = ctx.r7.u64 | 1542;
	// ori r9,r6,2056
	ctx.r9.u64 = ctx.r6.u64 | 2056;
	// stw r8,12012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12012, ctx.r8.u32);
	// lis r5,2313
	ctx.r5.s64 = 151584768;
	// stw r7,12016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12016, ctx.r7.u32);
	// lis r4,2827
	ctx.r4.s64 = 185270272;
	// stw r9,12020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12020, ctx.r9.u32);
	// lis r31,3341
	ctx.r31.s64 = 218955776;
	// ori r8,r5,2570
	ctx.r8.u64 = ctx.r5.u64 | 2570;
	// ori r7,r4,3084
	ctx.r7.u64 = ctx.r4.u64 | 3084;
	// ori r9,r31,3598
	ctx.r9.u64 = ctx.r31.u64 | 3598;
	// stw r8,12024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12024, ctx.r8.u32);
	// lis r11,4369
	ctx.r11.s64 = 286326784;
	// stw r7,12028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12028, ctx.r7.u32);
	// lis r30,3855
	ctx.r30.s64 = 252641280;
	// stw r9,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r9.u32);
	// ori r11,r11,4369
	ctx.r11.u64 = ctx.r11.u64 | 4369;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r30,4112
	ctx.r8.u64 = ctx.r30.u64 | 4112;
	// stw r11,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, ctx.r11.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r10,12004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12004, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r8.u32);
	// stw r11,12044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12044, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12048, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,12052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12052, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,12056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12056, ctx.r7.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r9,12060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12060, ctx.r9.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r10,12064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12064, ctx.r10.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r8,12068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12068, ctx.r8.u32);
	// stw r6,12072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12072, ctx.r6.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// li r6,46
	ctx.r6.s64 = 46;
	// stw r5,12076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12076, ctx.r5.u32);
	// stw r11,12080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12080, ctx.r11.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,12084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12084, ctx.r7.u32);
	// li r11,94
	ctx.r11.s64 = 94;
	// stw r9,12088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12088, ctx.r9.u32);
	// li r7,126
	ctx.r7.s64 = 126;
	// stw r10,12092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12092, ctx.r10.u32);
	// li r9,190
	ctx.r9.s64 = 190;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r8,12096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12096, ctx.r8.u32);
	// stw r6,12100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12100, ctx.r6.u32);
	// li r8,382
	ctx.r8.s64 = 382;
	// li r6,510
	ctx.r6.s64 = 510;
	// stw r5,12104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12104, ctx.r5.u32);
	// stw r11,12108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12108, ctx.r11.u32);
	// li r5,766
	ctx.r5.s64 = 766;
	// stw r7,12112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12112, ctx.r7.u32);
	// li r11,1022
	ctx.r11.s64 = 1022;
	// stw r9,12116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12116, ctx.r9.u32);
	// li r7,1534
	ctx.r7.s64 = 1534;
	// stw r10,12120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12120, ctx.r10.u32);
	// li r9,2046
	ctx.r9.s64 = 2046;
	// li r10,3070
	ctx.r10.s64 = 3070;
	// stw r8,12124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12124, ctx.r8.u32);
	// stw r6,12128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12128, ctx.r6.u32);
	// li r8,4094
	ctx.r8.s64 = 4094;
	// stw r5,12132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12132, ctx.r5.u32);
	// li r6,6142
	ctx.r6.s64 = 6142;
	// stw r11,12136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12136, ctx.r11.u32);
	// stw r7,12140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12140, ctx.r7.u32);
	// stw r9,12144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12144, ctx.r9.u32);
	// stw r10,12148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12148, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r8,12152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12152, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r6,12156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12156, ctx.r6.u32);
	// ori r11,r11,49150
	ctx.r11.u64 = ctx.r11.u64 | 49150;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,12180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12180, ctx.r11.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,12184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12184, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r9,32766
	ctx.r9.u64 = ctx.r9.u64 | 32766;
	// ori r11,r8,65534
	ctx.r11.u64 = ctx.r8.u64 | 65534;
	// ori r10,r7,65534
	ctx.r10.u64 = ctx.r7.u64 | 65534;
	// stw r9,12188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12188, ctx.r9.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r11,12192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12192, ctx.r11.u32);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// stw r10,12196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12196, ctx.r10.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r9,r6,65534
	ctx.r9.u64 = ctx.r6.u64 | 65534;
	// ori r11,r5,65534
	ctx.r11.u64 = ctx.r5.u64 | 65534;
	// ori r10,r4,65534
	ctx.r10.u64 = ctx.r4.u64 | 65534;
	// stw r9,12200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12200, ctx.r9.u32);
	// lis r31,9
	ctx.r31.s64 = 589824;
	// stw r11,12204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12204, ctx.r11.u32);
	// lis r30,11
	ctx.r30.s64 = 720896;
	// stw r10,12208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12208, ctx.r10.u32);
	// lis r29,13
	ctx.r29.s64 = 851968;
	// ori r9,r31,65534
	ctx.r9.u64 = ctx.r31.u64 | 65534;
	// ori r11,r30,65534
	ctx.r11.u64 = ctx.r30.u64 | 65534;
	// ori r10,r29,65534
	ctx.r10.u64 = ctx.r29.u64 | 65534;
	// stw r9,12212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12212, ctx.r9.u32);
	// lis r28,15
	ctx.r28.s64 = 983040;
	// stw r11,12216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12216, ctx.r11.u32);
	// lis r27,17
	ctx.r27.s64 = 1114112;
	// stw r10,12220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12220, ctx.r10.u32);
	// lis r26,19
	ctx.r26.s64 = 1245184;
	// ori r9,r28,65534
	ctx.r9.u64 = ctx.r28.u64 | 65534;
	// ori r11,r27,65534
	ctx.r11.u64 = ctx.r27.u64 | 65534;
	// ori r10,r26,65534
	ctx.r10.u64 = ctx.r26.u64 | 65534;
	// stw r9,12224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12224, ctx.r9.u32);
	// lis r25,21
	ctx.r25.s64 = 1376256;
	// stw r11,12228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12228, ctx.r11.u32);
	// lis r24,23
	ctx.r24.s64 = 1507328;
	// stw r10,12232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12232, ctx.r10.u32);
	// lis r23,25
	ctx.r23.s64 = 1638400;
	// li r19,8190
	ctx.r19.s64 = 8190;
	// li r18,12286
	ctx.r18.s64 = 12286;
	// ori r9,r25,65534
	ctx.r9.u64 = ctx.r25.u64 | 65534;
	// stw r19,12160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12160, ctx.r19.u32);
	// ori r11,r24,65534
	ctx.r11.u64 = ctx.r24.u64 | 65534;
	// stw r18,12164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12164, ctx.r18.u32);
	// ori r10,r23,65534
	ctx.r10.u64 = ctx.r23.u64 | 65534;
	// stw r9,12236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12236, ctx.r9.u32);
	// lis r22,27
	ctx.r22.s64 = 1769472;
	// stw r11,12240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12240, ctx.r11.u32);
	// lis r21,29
	ctx.r21.s64 = 1900544;
	// stw r10,12244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12244, ctx.r10.u32);
	// lis r20,31
	ctx.r20.s64 = 2031616;
	// li r17,16382
	ctx.r17.s64 = 16382;
	// li r19,24574
	ctx.r19.s64 = 24574;
	// li r18,32766
	ctx.r18.s64 = 32766;
	// stw r17,12168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12168, ctx.r17.u32);
	// ori r9,r22,65534
	ctx.r9.u64 = ctx.r22.u64 | 65534;
	// stw r19,12172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12172, ctx.r19.u32);
	// ori r11,r21,65534
	ctx.r11.u64 = ctx.r21.u64 | 65534;
	// stw r18,12176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12176, ctx.r18.u32);
	// ori r10,r20,65534
	ctx.r10.u64 = ctx.r20.u64 | 65534;
	// stw r9,12248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12248, ctx.r9.u32);
	// stw r11,12252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12252, ctx.r11.u32);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82CCB290"))) PPC_WEAK_FUNC(sub_82CCB290);
PPC_FUNC_IMPL(__imp__sub_82CCB290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CCB298;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r27,r30,261
	ctx.r27.s64 = ctx.r30.s64 + 261;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r27,r6
	ctx.r11.u64 = ctx.r27.u64 + ctx.r6.u64;
	// clrlwi. r26,r25,31
	ctx.r26.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// addi r11,r11,12304
	ctx.r11.s64 = ctx.r11.s64 + 12304;
	// beq 0x82ccb2cc
	if (ctx.cr0.eq) goto loc_82CCB2CC;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-26614
	ctx.r11.s64 = ctx.r11.s64 + -26614;
	// b 0x82ccb2d8
	goto loc_82CCB2D8;
loc_82CCB2CC:
	// rlwinm. r10,r25,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ccb2d8
	if (ctx.cr0.eq) goto loc_82CCB2D8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82CCB2D8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ccb390
	if (ctx.cr6.eq) goto loc_82CCB390;
	// add r31,r3,r6
	ctx.r31.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,12304
	ctx.r29.s64 = ctx.r31.s64 + 12304;
	// bl 0x82ccb020
	ctx.lr = 0x82CCB2F8;
	sub_82CCB020(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// stw r11,11992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11992, ctx.r11.u32);
	// stw r11,11996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11996, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,12000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12000, ctx.r11.u32);
	// stb r10,11957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11957, ctx.r10.u8);
loc_82CCB31C:
	// lbz r9,11957(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,12004(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12004);
	// stb r9,11957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11957, ctx.r9.u8);
	// slw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ccb31c
	if (ctx.cr6.lt) goto loc_82CCB31C;
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,12268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12268, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r10,12264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12264, ctx.r10.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,12272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12272, ctx.r11.u32);
	// stw r11,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r11.u32);
	// stw r11,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r11.u32);
	// stw r11,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r11.u32);
	// stw r11,12288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12288, ctx.r11.u32);
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// stw r11,12296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12296, ctx.r11.u32);
	// beq cr6,0x82ccb384
	if (ctx.cr6.eq) goto loc_82CCB384;
	// stw r10,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r10.u32);
	// b 0x82ccb390
	goto loc_82CCB390;
loc_82CCB384:
	// rlwinm. r11,r25,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccb390
	if (ctx.cr0.eq) goto loc_82CCB390;
	// stw r10,12300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12300, ctx.r10.u32);
loc_82CCB390:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CCB398"))) PPC_WEAK_FUNC(sub_82CCB398);
PPC_FUNC_IMPL(__imp__sub_82CCB398) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2584
	ctx.r3.s64 = ctx.r31.s64 + 2584;
	// lbz r11,11957(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB3C4;
	sub_82CA3190(ctx, base);
	// lbz r11,11957(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,11028
	ctx.r3.s64 = ctx.r31.s64 + 11028;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB3DC;
	sub_82CA3190(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB3EC;
	sub_82CA3190(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11700
	ctx.r3.s64 = ctx.r31.s64 + 11700;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB3FC;
	sub_82CA3190(ctx, base);
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

__attribute__((alias("__imp__sub_82CCB410"))) PPC_WEAK_FUNC(sub_82CCB410);
PPC_FUNC_IMPL(__imp__sub_82CCB410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,11960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11960, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,11024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11024, ctx.r11.u32);
	// stw r10,11988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11988, ctx.r10.u32);
	// stw r11,11980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11980, ctx.r11.u32);
	// stw r11,11984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11984, ctx.r11.u32);
	// stb r10,11958(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11958, ctx.r10.u8);
	// stw r11,11964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11964, ctx.r11.u32);
	// stb r11,11959(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11959, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB448"))) PPC_WEAK_FUNC(sub_82CCB448);
PPC_FUNC_IMPL(__imp__sub_82CCB448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CCB450;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cce7b8
	ctx.lr = 0x82CCB470;
	sub_82CCE7B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cce590
	ctx.lr = 0x82CCB480;
	sub_82CCE590(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cccea8
	ctx.lr = 0x82CCB490;
	sub_82CCCEA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd830
	ctx.lr = 0x82CCB498;
	sub_82CCD830(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ccb4b4
	if (ctx.cr6.lt) goto loc_82CCB4B4;
	// lwz r11,2432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r10,2428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccb4b4
	if (ctx.cr6.lt) goto loc_82CCB4B4;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82CCB4B4:
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCB4C4;
	sub_82CCC370(ctx, base);
	// rlwinm r5,r30,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCB4D4;
	sub_82CCC370(ctx, base);
	// rlwinm r5,r30,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCB4E4;
	sub_82CCC370(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCB4F4;
	sub_82CCC370(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82ccb514
	if (!ctx.cr6.eq) goto loc_82CCB514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccf78
	ctx.lr = 0x82CCB504;
	sub_82CCCF78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccda68
	ctx.lr = 0x82CCB510;
	sub_82CCDA68(ctx, base);
	// b 0x82ccb538
	goto loc_82CCB538;
loc_82CCB514:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82ccb548
	if (!ctx.cr6.eq) goto loc_82CCB548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccfe0
	ctx.lr = 0x82CCB524;
	sub_82CCCFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccf78
	ctx.lr = 0x82CCB52C;
	sub_82CCCF78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccdf30
	ctx.lr = 0x82CCB538;
	sub_82CCDF30(ctx, base);
loc_82CCB538:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd768
	ctx.lr = 0x82CCB544;
	sub_82CCD768(ctx, base);
	// b 0x82ccb56c
	goto loc_82CCB56C;
loc_82CCB548:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82ccb56c
	if (!ctx.cr6.eq) goto loc_82CCB56C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd768
	ctx.lr = 0x82CCB55C;
	sub_82CCD768(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x82ccd990
	ctx.lr = 0x82CCB56C;
	sub_82CCD990(ctx, base);
loc_82CCB56C:
	// lwz r11,2432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CCB580"))) PPC_WEAK_FUNC(sub_82CCB580);
PPC_FUNC_IMPL(__imp__sub_82CCB580) {
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
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,2418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2418, ctx.r30.u8);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82cceb08
	ctx.lr = 0x82CCB5B8;
	sub_82CCEB08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ccb448
	ctx.lr = 0x82CCB5C8;
	sub_82CCB448(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ccb5f4
	if (!ctx.cr6.eq) goto loc_82CCB5F4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB5E8;
	sub_82CA3190(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x82ccb68c
	goto loc_82CCB68C;
loc_82CCB5F4:
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCB60C;
	sub_82CAA2E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r5,r11,8191
	ctx.xer.ca = ctx.r11.u32 <= 8191;
	ctx.r5.s64 = 8191 - ctx.r11.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x82ca3190
	ctx.lr = 0x82CCB634;
	sub_82CA3190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCB64C;
	sub_82CAA2E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCB66C;
	sub_82CAA2E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82CCB68C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd038
	ctx.lr = 0x82CCB694;
	sub_82CCD038(ctx, base);
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

__attribute__((alias("__imp__sub_82CCB6AC"))) PPC_WEAK_FUNC(sub_82CCB6AC);
PPC_FUNC_IMPL(__imp__sub_82CCB6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB6B0"))) PPC_WEAK_FUNC(sub_82CCB6B0);
PPC_FUNC_IMPL(__imp__sub_82CCB6B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82ccc370
	sub_82CCC370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB6D4"))) PPC_WEAK_FUNC(sub_82CCB6D4);
PPC_FUNC_IMPL(__imp__sub_82CCB6D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB6D8"))) PPC_WEAK_FUNC(sub_82CCB6D8);
PPC_FUNC_IMPL(__imp__sub_82CCB6D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cccea8
	ctx.lr = 0x82CCB6F8;
	sub_82CCCEA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd830
	ctx.lr = 0x82CCB700;
	sub_82CCD830(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd038
	ctx.lr = 0x82CCB70C;
	sub_82CCD038(ctx, base);
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

__attribute__((alias("__imp__sub_82CCB728"))) PPC_WEAK_FUNC(sub_82CCB728);
PPC_FUNC_IMPL(__imp__sub_82CCB728) {
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
	// b 0x82ccb744
	goto loc_82CCB744;
loc_82CCB740:
	// bl 0x82ccb580
	ctx.lr = 0x82CCB744;
	sub_82CCB580(ctx, base);
loc_82CCB744:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82ccb740
	if (ctx.cr6.gt) goto loc_82CCB740;
	// bl 0x82ccd918
	ctx.lr = 0x82CCB758;
	sub_82CCD918(ctx, base);
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

__attribute__((alias("__imp__sub_82CCB76C"))) PPC_WEAK_FUNC(sub_82CCB76C);
PPC_FUNC_IMPL(__imp__sub_82CCB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB770"))) PPC_WEAK_FUNC(sub_82CCB770);
PPC_FUNC_IMPL(__imp__sub_82CCB770) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,2418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2418, ctx.r11.u8);
	// stb r10,2419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2419, ctx.r10.u8);
	// bl 0x82ccb580
	ctx.lr = 0x82CCB7A0;
	sub_82CCB580(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82ccb7b4
	if (!ctx.cr6.lt) goto loc_82CCB7B4;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// b 0x82ccb7b8
	goto loc_82CCB7B8;
loc_82CCB7B4:
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
loc_82CCB7B8:
	// stw r11,9504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9504, ctx.r11.u32);
	// stw r30,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82CCB7D8"))) PPC_WEAK_FUNC(sub_82CCB7D8);
PPC_FUNC_IMPL(__imp__sub_82CCB7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCB7E0;
	sub_82CA2BE8(ctx, base);
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
	// lwz r30,2148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2148);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,2418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2418, ctx.r29.u8);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccb818
	if (!ctx.cr6.lt) goto loc_82CCB818;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82ccb81c
	goto loc_82CCB81C;
loc_82CCB818:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82CCB81C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,17184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82ccb8d8
	if (ctx.cr6.gt) goto loc_82CCB8D8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cceb08
	ctx.lr = 0x82CCB850;
	sub_82CCEB08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cce7b8
	ctx.lr = 0x82CCB864;
	sub_82CCE7B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccea8
	ctx.lr = 0x82CCB870;
	sub_82CCCEA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd038
	ctx.lr = 0x82CCB878;
	sub_82CCD038(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ca3190
	ctx.lr = 0x82CCB888;
	sub_82CA3190(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82ca3190
	ctx.lr = 0x82CCB898;
	sub_82CA3190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,2419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2419, ctx.r11.u8);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,9504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9504, ctx.r11.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82ccb8dc
	goto loc_82CCB8DC;
loc_82CCB8D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCB8DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCB8E4"))) PPC_WEAK_FUNC(sub_82CCB8E4);
PPC_FUNC_IMPL(__imp__sub_82CCB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB8E8"))) PPC_WEAK_FUNC(sub_82CCB8E8);
PPC_FUNC_IMPL(__imp__sub_82CCB8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82CCB8F0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r30,1104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// lbz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2420);
	// add r14,r30,r15
	ctx.r14.u64 = ctx.r30.u64 + ctx.r15.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq 0x82ccb968
	if (ctx.cr0.eq) goto loc_82CCB968;
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stb r17,2420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2420, ctx.r17.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,9504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9504, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccb95c
	if (ctx.cr6.eq) goto loc_82CCB95C;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82ccc370
	ctx.lr = 0x82CCB93C;
	sub_82CCC370(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,2156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2156);
	// bl 0x82ccc370
	ctx.lr = 0x82CCB94C;
	sub_82CCC370(ctx, base);
	// lhz r5,2158(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2158);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ccb960
	goto loc_82CCB960;
loc_82CCB95C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CCB960:
	// bl 0x82ccc370
	ctx.lr = 0x82CCB964;
	sub_82CCC370(ctx, base);
	// b 0x82ccb994
	goto loc_82CCB994;
loc_82CCB968:
	// li r29,50
	ctx.r29.s64 = 50;
	// addi r28,r30,-50
	ctx.r28.s64 = ctx.r30.s64 + -50;
loc_82CCB970:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82ccc988
	ctx.lr = 0x82CCB988;
	sub_82CCC988(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x82ccb970
	if (!ctx.cr0.eq) goto loc_82CCB970;
loc_82CCB994:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r18,r10,32768
	ctx.r18.u64 = ctx.r10.u64 | 32768;
	// lis r16,8
	ctx.r16.s64 = 524288;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r20,r11,14228
	ctx.r20.s64 = ctx.r11.s64 + 14228;
	// b 0x82ccb9b4
	goto loc_82CCB9B4;
loc_82CCB9B0:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCB9B4:
	// add r29,r30,r18
	ctx.r29.u64 = ctx.r30.u64 + ctx.r18.u64;
loc_82CCB9B8:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x82ccc1d8
	if (!ctx.cr6.lt) goto loc_82CCC1D8;
	// rlwinm r23,r29,0,0,16
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFF8000;
	// cmplw cr6,r23,r14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x82ccb9d0
	if (!ctx.cr6.gt) goto loc_82CCB9D0;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
loc_82CCB9D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc630
	ctx.lr = 0x82CCB9DC;
	sub_82CCC630(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82ccba00
	if (ctx.cr6.lt) goto loc_82CCBA00;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82ccba44
	if (!ctx.cr6.gt) goto loc_82CCBA44;
	// subf r28,r30,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r30.s64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82ccba44
	if (!ctx.cr6.lt) goto loc_82CCBA44;
loc_82CCBA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// blt cr6,0x82ccb9b8
	if (ctx.cr6.lt) goto loc_82CCB9B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb770
	ctx.lr = 0x82CCBA40;
	sub_82CCB770(ctx, base);
	// b 0x82ccb9b8
	goto loc_82CCB9B8;
loc_82CCBA44:
	// cmpwi cr6,r28,50
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 50, ctx.xer);
	// bge cr6,0x82ccc0a0
	if (!ctx.cr6.lt) goto loc_82CCC0A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r24,r28,r30
	ctx.r24.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,9516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// addi r22,r30,3837
	ctx.r22.s64 = ctx.r30.s64 + 3837;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,9520(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// lwz r11,9516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// blt cr6,0x82ccbb54
	if (ctx.cr6.lt) goto loc_82CCBB54;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
loc_82CCBA8C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82ccbaa4
	if (!ctx.cr6.lt) goto loc_82CCBAA4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82ccbac8
	goto loc_82CCBAC8;
loc_82CCBAA4:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82ccbac0
	if (!ctx.cr6.lt) goto loc_82CCBAC0;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82ccbac8
	goto loc_82CCBAC8;
loc_82CCBAC0:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCBAC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,9516(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// rlwinm r8,r11,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// bge cr6,0x82ccbb00
	if (!ctx.cr6.lt) goto loc_82CCBB00;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r5,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r20.u32);
	// lbz r8,9774(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9774);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// b 0x82ccbb28
	goto loc_82CCBB28;
loc_82CCBB00:
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbz r11,10212(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10212);
	// lbz r8,9783(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9783);
	// lbzx r7,r4,r20
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r20.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82CCBB28:
	// lwz r11,9516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r8,9516(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// ble cr6,0x82ccba8c
	if (!ctx.cr6.gt) goto loc_82CCBA8C;
loc_82CCBB54:
	// lwz r10,9516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// stw r17,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r17.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// subf r28,r30,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r30.s64;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// subf r25,r11,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82CCBB9C:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82ccbc34
	if (ctx.cr6.eq) goto loc_82CCBC34;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// blt cr6,0x82ccbbe4
	if (ctx.cr6.lt) goto loc_82CCBBE4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82ccbc30
	goto loc_82CCBC30;
loc_82CCBBE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ccbc04
	if (!ctx.cr6.eq) goto loc_82CCBC04;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82CCBBF8:
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82ccbc30
	goto loc_82CCBC30;
loc_82CCBC04:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82ccbc1c
	if (!ctx.cr6.eq) goto loc_82CCBC1C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ccbbf8
	goto loc_82CCBBF8;
loc_82CCBC1C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82CCBC30:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82CCBC34:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82ccbec8
	if (ctx.cr6.eq) goto loc_82CCBEC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc630
	ctx.lr = 0x82CCBC60;
	sub_82CCC630(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82ccbc80
	if (!ctx.cr6.gt) goto loc_82CCBC80;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82ccbc80
	if (!ctx.cr6.lt) goto loc_82CCBC80;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
loc_82CCBC80:
	// cmpwi cr6,r26,50
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 50, ctx.xer);
	// bgt cr6,0x82ccbe00
	if (ctx.cr6.gt) goto loc_82CCBE00;
	// add r8,r26,r30
	ctx.r8.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82ccbe00
	if (!ctx.cr6.lt) goto loc_82CCBE00;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bgt cr6,0x82ccbcac
	if (ctx.cr6.gt) goto loc_82CCBCAC;
	// bne cr6,0x82ccbd04
	if (!ctx.cr6.eq) goto loc_82CCBD04;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x82ccbd04
	if (!ctx.cr6.lt) goto loc_82CCBD04;
loc_82CCBCAC:
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ccbd04
	if (!ctx.cr6.lt) goto loc_82CCBD04;
	// subf r11,r21,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r21.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,3836
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3836, ctx.xer);
	// blt cr6,0x82ccbcc8
	if (ctx.cr6.lt) goto loc_82CCBCC8;
	// li r10,3836
	ctx.r10.s64 = 3836;
loc_82CCBCC8:
	// subf r11,r21,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r21.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82ccbd00
	if (ctx.cr6.gt) goto loc_82CCBD00;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_82CCBCE4:
	// lwz r9,9516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9516);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// bne 0x82ccbce4
	if (!ctx.cr0.eq) goto loc_82CCBCE4;
loc_82CCBD00:
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_82CCBD04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,9520(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ccbd30
	if (!ctx.cr6.lt) goto loc_82CCBD30;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
loc_82CCBD30:
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// blt cr6,0x82ccbb9c
	if (ctx.cr6.lt) goto loc_82CCBB9C;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r7,r29,64
	ctx.r7.s64 = ctx.r29.s64 + 64;
loc_82CCBD44:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82ccbd5c
	if (!ctx.cr6.lt) goto loc_82CCBD5C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82ccbd80
	goto loc_82CCBD80;
loc_82CCBD5C:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82ccbd78
	if (!ctx.cr6.lt) goto loc_82CCBD78;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82ccbd80
	goto loc_82CCBD80;
loc_82CCBD78:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCBD80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// bge cr6,0x82ccbda8
	if (!ctx.cr6.lt) goto loc_82CCBDA8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r9,r20
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r20.u32);
	// lbz r11,9774(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9774);
	// b 0x82ccbdc4
	goto loc_82CCBDC4;
loc_82CCBDA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbzx r9,r11,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// lbz r11,9783(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9783);
	// lbz r10,10212(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10212);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82CCBDC4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ccbde8
	if (!ctx.cr6.lt) goto loc_82CCBDE8;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r30,-16(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16, ctx.r30.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,-20(r7)
	PPC_STORE_U32(ctx.r7.u32 + -20, ctx.r11.u32);
loc_82CCBDE8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82ccbd44
	if (!ctx.cr6.gt) goto loc_82CCBD44;
	// b 0x82ccbb9c
	goto loc_82CCBB9C;
loc_82CCBE00:
	// addi r11,r26,18
	ctx.r11.s64 = ctx.r26.s64 + 18;
	// add r27,r26,r30
	ctx.r27.u64 = ctx.r26.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bne cr6,0x82ccbe4c
	if (!ctx.cr6.eq) goto loc_82CCBE4C;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// ble cr6,0x82ccbe4c
	if (!ctx.cr6.gt) goto loc_82CCBE4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// bl 0x82ccc988
	ctx.lr = 0x82CCBE48;
	sub_82CCC988(ctx, base);
	// b 0x82ccbe80
	goto loc_82CCBE80;
loc_82CCBE4C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// ble cr6,0x82ccbe80
	if (!ctx.cr6.gt) goto loc_82CCBE80;
loc_82CCBE58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82ccc988
	ctx.lr = 0x82CCBE74;
	sub_82CCC988(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ccbe58
	if (ctx.cr6.lt) goto loc_82CCBE58;
loc_82CCBE80:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x82ccbea8
	if (ctx.cr6.lt) goto loc_82CCBEA8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// b 0x82ccbec8
	goto loc_82CCBEC8;
loc_82CCBEA8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ccbec8
	if (ctx.cr6.eq) goto loc_82CCBEC8;
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82CCBEC8:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CCBED8:
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne cr6,0x82ccbed8
	if (!ctx.cr6.eq) goto loc_82CCBED8;
loc_82CCBF00:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// bge cr6,0x82ccbf20
	if (!ctx.cr6.lt) goto loc_82CCBF20;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// blt cr6,0x82ccbf30
	if (ctx.cr6.lt) goto loc_82CCBF30;
loc_82CCBF20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb770
	ctx.lr = 0x82CCBF2C;
	sub_82CCB770(ctx, base);
	// b 0x82ccbf00
	goto loc_82CCBF00;
loc_82CCBF30:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ccbfbc
	if (!ctx.cr6.gt) goto loc_82CCBFBC;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r8,r19,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ccbfe0
	goto loc_82CCBFE0;
loc_82CCBFBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82CCBFE0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82ccbf30
	if (!ctx.cr0.eq) goto loc_82CCBF30;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,9504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9504);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccc064
	if (ctx.cr6.lt) goto loc_82CCC064;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ccc058
	if (ctx.cr6.eq) goto loc_82CCC058;
	// lbz r11,2419(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2419);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccc028
	if (ctx.cr0.eq) goto loc_82CCC028;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cce7b8
	ctx.lr = 0x82CCC020;
	sub_82CCE7B8(ctx, base);
	// stb r17,2419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2419, ctx.r17.u8);
	// b 0x82ccc034
	goto loc_82CCC034;
loc_82CCC028:
	// lwz r5,9512(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9512);
	// lwz r4,9508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9508);
	// bl 0x82cce810
	ctx.lr = 0x82CCC034;
	sub_82CCE810(ctx, base);
loc_82CCC034:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccea8
	ctx.lr = 0x82CCC040;
	sub_82CCCEA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd038
	ctx.lr = 0x82CCC048;
	sub_82CCD038(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,9508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9508, ctx.r6.u32);
	// stw r11,9512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9512, ctx.r11.u32);
loc_82CCC058:
	// lwz r11,9504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9504);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,9504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9504, ctx.r11.u32);
loc_82CCC064:
	// lbz r11,2418(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccb9b4
	if (ctx.cr0.eq) goto loc_82CCB9B4;
	// cmplwi cr6,r6,65024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65024, ctx.xer);
	// bge cr6,0x82ccc084
	if (!ctx.cr6.lt) goto loc_82CCC084;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,32256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32256, ctx.xer);
	// blt cr6,0x82ccb9b4
	if (ctx.cr6.lt) goto loc_82CCB9B4;
loc_82CCC084:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb7d8
	ctx.lr = 0x82CCC090;
	sub_82CCB7D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccb9b0
	if (!ctx.cr0.eq) goto loc_82CCB9B0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ccc1c8
	goto loc_82CCC1C8;
loc_82CCC0A0:
	// addi r11,r28,18
	ctx.r11.s64 = ctx.r28.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bne cr6,0x82ccc0d8
	if (!ctx.cr6.eq) goto loc_82CCC0D8;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// ble cr6,0x82ccc0d8
	if (!ctx.cr6.gt) goto loc_82CCC0D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// bl 0x82ccc988
	ctx.lr = 0x82CCC0D4;
	sub_82CCC988(ctx, base);
	// b 0x82ccc10c
	goto loc_82CCC10C;
loc_82CCC0D8:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82ccc10c
	if (!ctx.cr6.gt) goto loc_82CCC10C;
loc_82CCC0E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82ccc988
	ctx.lr = 0x82CCC100;
	sub_82CCC988(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82ccc0e4
	if (ctx.cr6.lt) goto loc_82CCC0E4;
loc_82CCC10C:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r28,254
	ctx.r8.s64 = ctx.r28.s64 + 254;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stwx r27,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// blt cr6,0x82ccc190
	if (ctx.cr6.lt) goto loc_82CCC190;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// b 0x82ccc1b0
	goto loc_82CCC1B0;
loc_82CCC190:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ccc1b0
	if (ctx.cr6.eq) goto loc_82CCC1B0;
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82CCC1B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// bge cr6,0x82ccc1c8
	if (!ctx.cr6.lt) goto loc_82CCC1C8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// blt cr6,0x82ccb9b4
	if (ctx.cr6.lt) goto loc_82CCB9B4;
loc_82CCC1C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ccb770
	ctx.lr = 0x82CCC1D4;
	sub_82CCB770(ctx, base);
	// b 0x82ccb9b4
	goto loc_82CCB9B4;
loc_82CCC1D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r15,r18
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r18.s32, ctx.xer);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// bge cr6,0x82ccc214
	if (!ctx.cr6.lt) goto loc_82CCC214;
	// lbz r11,2418(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccc308
	if (ctx.cr0.eq) goto loc_82CCC308;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb7d8
	ctx.lr = 0x82CCC204;
	sub_82CCB7D8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccc308
	if (ctx.cr0.eq) goto loc_82CCC308;
	// b 0x82ccb9b4
	goto loc_82CCB9B4;
loc_82CCC214:
	// addi r27,r11,54
	ctx.r27.s64 = ctx.r11.s64 + 54;
	// addi r28,r30,-1
	ctx.r28.s64 = ctx.r30.s64 + -1;
	// li r29,50
	ctx.r29.s64 = 50;
loc_82CCC220:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccae0
	ctx.lr = 0x82CCC230;
	sub_82CCCAE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// bne 0x82ccc220
	if (!ctx.cr0.eq) goto loc_82CCC220;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,17184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccc308
	if (ctx.cr6.lt) goto loc_82CCC308;
	// lbz r11,2418(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccc284
	if (ctx.cr0.eq) goto loc_82CCC284;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb7d8
	ctx.lr = 0x82CCC278;
	sub_82CCB7D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccb9b0
	if (!ctx.cr0.eq) goto loc_82CCB9B0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CCC284:
	// lwz r3,17184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCC298;
	sub_82CAA2E0(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,17188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17188);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCC2B4;
	sub_82CAA2E0(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,17192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17192);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82CCC2D0;
	sub_82CAA2E0(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
loc_82CCC308:
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCC314"))) PPC_WEAK_FUNC(sub_82CCC314);
PPC_FUNC_IMPL(__imp__sub_82CCC314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCC318"))) PPC_WEAK_FUNC(sub_82CCC318);
PPC_FUNC_IMPL(__imp__sub_82CCC318) {
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
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// lwz r9,17184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ccc548
	ctx.lr = 0x82CCC34C;
	sub_82CCC548(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x82ccc35c
	if (!ctx.cr0.gt) goto loc_82CCC35C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb8e8
	ctx.lr = 0x82CCC35C;
	sub_82CCB8E8(ctx, base);
loc_82CCC35C:
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

__attribute__((alias("__imp__sub_82CCC370"))) PPC_WEAK_FUNC(sub_82CCC370);
PPC_FUNC_IMPL(__imp__sub_82CCC370) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82CCC39C:
	// lwz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// lwz r10,2140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccc3bc
	if (ctx.cr6.lt) goto loc_82CCC3BC;
	// lwz r11,2132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2132);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// stw r11,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
loc_82CCC3BC:
	// lwz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lwz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccc39c
	if (!ctx.cr6.gt) goto loc_82CCC39C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCC410"))) PPC_WEAK_FUNC(sub_82CCC410);
PPC_FUNC_IMPL(__imp__sub_82CCC410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCC41C"))) PPC_WEAK_FUNC(sub_82CCC41C);
PPC_FUNC_IMPL(__imp__sub_82CCC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCC420"))) PPC_WEAK_FUNC(sub_82CCC420);
PPC_FUNC_IMPL(__imp__sub_82CCC420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CCC428;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bgt cr6,0x82ccc44c
	if (ctx.cr6.gt) goto loc_82CCC44C;
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82ccc53c
	goto loc_82CCC53C;
loc_82CCC44C:
	// add r27,r30,r29
	ctx.r27.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r27,-6
	ctx.r28.s64 = ctx.r27.s64 + -6;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCC464;
	sub_82CA2C60(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CCC474;
	sub_82CA3190(ctx, base);
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,-10
	ctx.r29.s64 = ctx.r11.s64 + -10;
	// b 0x82ccc494
	goto loc_82CCC494;
loc_82CCC484:
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CCC490:
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
loc_82CCC494:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 232, ctx.xer);
	// bne cr6,0x82ccc484
	if (!ctx.cr6.eq) goto loc_82CCC484;
	// lwz r9,2444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82ccc528
	if (!ctx.cr6.lt) goto loc_82CCC528;
	// lbz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ccc518
	if (ctx.cr0.lt) goto loc_82CCC518;
	// lwz r8,2156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ccc518
	if (!ctx.cr6.lt) goto loc_82CCC518;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ccc4fc
	if (ctx.cr6.lt) goto loc_82CCC4FC;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_82CCC4FC:
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_82CCC518:
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82ccc490
	goto loc_82CCC490;
loc_82CCC528:
	// addi r3,r27,-6
	ctx.r3.s64 = ctx.r27.s64 + -6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCC538;
	sub_82CA2C60(ctx, base);
	// addi r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 + 10;
loc_82CCC53C:
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CCC548"))) PPC_WEAK_FUNC(sub_82CCC548);
PPC_FUNC_IMPL(__imp__sub_82CCC548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCC550;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc570
	if (ctx.cr6.gt) goto loc_82CCC570;
loc_82CCC568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ccc628
	goto loc_82CCC628;
loc_82CCC570:
	// lwz r11,17184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// lwz r29,2440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82ccc5b0
	if (ctx.cr6.gt) goto loc_82CCC5B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82ca2c60
	ctx.lr = 0x82CCC590;
	sub_82CA2C60(ctx, base);
	// lwz r11,2436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// lwz r11,2440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// b 0x82ccc5e4
	goto loc_82CCC5E4;
loc_82CCC5B0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x82ccc5c0
	if (ctx.cr6.gt) goto loc_82CCC5C0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82ccc5ec
	goto loc_82CCC5EC;
loc_82CCC5C0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82ca2c60
	ctx.lr = 0x82CCC5CC;
	sub_82CA2C60(ctx, base);
	// lwz r11,2440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r10,2436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r9.u32);
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
loc_82CCC5E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82ccc568
	if (ctx.cr6.lt) goto loc_82CCC568;
loc_82CCC5EC:
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccc618
	if (ctx.cr6.eq) goto loc_82CCC618;
	// lwz r11,17196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17196);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82ccc618
	if (!ctx.cr6.lt) goto loc_82CCC618;
	// lwz r11,17184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17184);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82ccc420
	ctx.lr = 0x82CCC618;
	sub_82CCC420(ctx, base);
loc_82CCC618:
	// lwz r11,17196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17196, ctx.r11.u32);
loc_82CCC628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCC630"))) PPC_WEAK_FUNC(sub_82CCC630);
PPC_FUNC_IMPL(__imp__sub_82CCC630) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CCC638;
	sub_82CA2BDC(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r26,r9,4
	ctx.r26.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82ccc688
	if (ctx.cr6.gt) goto loc_82CCC688;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r25,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r25.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r25,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u32);
	// b 0x82ccc964
	goto loc_82CCC964;
loc_82CCC688:
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,2
	ctx.r29.s64 = 2;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r27,r6,r9
	ctx.r27.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_82CCC6B4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lbzx r7,r5,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// subf. r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82ccc70c
	if (!ctx.cr0.eq) goto loc_82CCC70C;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r31,r8,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_82CCC6E4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r6,257
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 257, ctx.xer);
	// bge cr6,0x82ccc724
	if (!ctx.cr6.lt) goto loc_82CCC724;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// subf. r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82ccc6e4
	if (ctx.cr0.eq) goto loc_82CCC6E4;
loc_82CCC70C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82ccc780
	if (!ctx.cr6.lt) goto loc_82CCC780;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82ccc768
	if (!ctx.cr6.gt) goto loc_82CCC768;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82ccc754
	if (!ctx.cr6.gt) goto loc_82CCC754;
loc_82CCC724:
	// addi r8,r3,18
	ctx.r8.s64 = ctx.r3.s64 + 18;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82CCC738:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82ccc738
	if (ctx.cr6.lt) goto loc_82CCC738;
	// cmpwi cr6,r6,50
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 50, ctx.xer);
	// bge cr6,0x82ccc968
	if (!ctx.cr6.lt) goto loc_82CCC968;
loc_82CCC754:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// blt cr6,0x82ccc768
	if (ctx.cr6.lt) goto loc_82CCC768;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82CCC768:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82ccc7e8
	goto loc_82CCC7E8;
loc_82CCC780:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82ccc7d4
	if (!ctx.cr6.gt) goto loc_82CCC7D4;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82ccc7c0
	if (!ctx.cr6.gt) goto loc_82CCC7C0;
	// addi r9,r3,18
	ctx.r9.s64 = ctx.r3.s64 + 18;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CCC7A4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82ccc7a4
	if (ctx.cr6.lt) goto loc_82CCC7A4;
	// cmpwi cr6,r6,50
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 50, ctx.xer);
	// bge cr6,0x82ccc968
	if (!ctx.cr6.lt) goto loc_82CCC968;
loc_82CCC7C0:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// blt cr6,0x82ccc7d4
	if (ctx.cr6.lt) goto loc_82CCC7D4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82CCC7D4:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82CCC7E8:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82ccc6b4
	if (ctx.cr6.gt) goto loc_82CCC6B4;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82CCC7F8:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82ccc838
	if (!ctx.cr6.gt) goto loc_82CCC838;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
loc_82CCC818:
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82ccc838
	if (!ctx.cr6.eq) goto loc_82CCC838;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82ccc818
	if (ctx.cr6.lt) goto loc_82CCC818;
loc_82CCC838:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82ccc86c
	if (ctx.cr6.lt) goto loc_82CCC86C;
	// addi r9,r10,18
	ctx.r9.s64 = ctx.r10.s64 + 18;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CCC850:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82ccc850
	if (!ctx.cr6.lt) goto loc_82CCC850;
	// cmpwi cr6,r7,50
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 50, ctx.xer);
	// bgt cr6,0x82ccc944
	if (ctx.cr6.gt) goto loc_82CCC944;
loc_82CCC86C:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82ccc8ac
	if (!ctx.cr6.gt) goto loc_82CCC8AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82CCC88C:
	// lbzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82ccc8ac
	if (!ctx.cr6.eq) goto loc_82CCC8AC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82ccc88c
	if (ctx.cr6.lt) goto loc_82CCC88C;
loc_82CCC8AC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82ccc8d8
	if (!ctx.cr6.gt) goto loc_82CCC8D8;
	// addi r10,r7,18
	ctx.r10.s64 = ctx.r7.s64 + 18;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CCC8C0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82ccc8c0
	if (ctx.cr6.lt) goto loc_82CCC8C0;
loc_82CCC8D8:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82ccc918
	if (!ctx.cr6.gt) goto loc_82CCC918;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82CCC8F8:
	// lbzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82ccc918
	if (!ctx.cr6.eq) goto loc_82CCC918;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82ccc8f8
	if (ctx.cr6.lt) goto loc_82CCC8F8;
loc_82CCC918:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82ccc944
	if (!ctx.cr6.gt) goto loc_82CCC944;
	// addi r10,r7,18
	ctx.r10.s64 = ctx.r7.s64 + 18;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CCC92C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82ccc92c
	if (ctx.cr6.lt) goto loc_82CCC92C;
loc_82CCC944:
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// subfic r11,r11,32767
	ctx.xer.ca = ctx.r11.u32 <= 32767;
	ctx.r11.s64 = 32767 - ctx.r11.s64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ccc964
	if (!ctx.cr6.gt) goto loc_82CCC964;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82ccc964
	if (!ctx.cr6.lt) goto loc_82CCC964;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82CCC964:
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82CCC968:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82ccc7f8
	goto loc_82CCC7F8;
}

__attribute__((alias("__imp__sub_82CCC988"))) PPC_WEAK_FUNC(sub_82CCC988);
PPC_FUNC_IMPL(__imp__sub_82CCC988) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CCC990;
	sub_82CA2BE4(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82ccc9cc
	if (ctx.cr6.gt) goto loc_82CCC9CC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x82cccac0
	goto loc_82CCCAC0;
loc_82CCC9CC:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,2
	ctx.r28.s64 = 2;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82CCC9EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccca34
	if (!ctx.cr0.eq) goto loc_82CCCA34;
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_82CCCA14:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// bge cr6,0x82ccca34
	if (!ctx.cr6.lt) goto loc_82CCCA34;
	// lbzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccca14
	if (ctx.cr0.eq) goto loc_82CCCA14;
loc_82CCCA34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ccca74
	if (!ctx.cr6.lt) goto loc_82CCCA74;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82ccca60
	if (!ctx.cr6.gt) goto loc_82CCCA60;
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// bge cr6,0x82cccac4
	if (!ctx.cr6.lt) goto loc_82CCCAC4;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x82ccca60
	if (ctx.cr6.lt) goto loc_82CCCA60;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82CCCA60:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82cccaa8
	goto loc_82CCCAA8;
loc_82CCCA74:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82ccca98
	if (!ctx.cr6.gt) goto loc_82CCCA98;
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// bge cr6,0x82cccac4
	if (!ctx.cr6.lt) goto loc_82CCCAC4;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// blt cr6,0x82ccca98
	if (ctx.cr6.lt) goto loc_82CCCA98;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82CCCA98:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CCCAA8:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82ccc9ec
	if (ctx.cr6.gt) goto loc_82CCC9EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CCCABC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82CCCAC0:
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CCCAC4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82cccabc
	goto loc_82CCCABC;
}

__attribute__((alias("__imp__sub_82CCCAE0"))) PPC_WEAK_FUNC(sub_82CCCAE0);
PPC_FUNC_IMPL(__imp__sub_82CCCAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// bgt cr6,0x82cccb30
	if (ctx.cr6.gt) goto loc_82CCCB30;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
loc_82CCCB30:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82cccb48
	if (ctx.cr6.gt) goto loc_82CCCB48;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_82CCCB48:
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82cccb60
	if (ctx.cr6.gt) goto loc_82CCCB60;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
loc_82CCCB60:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82cccb94
	if (!ctx.cr6.gt) goto loc_82CCCB94;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82cccb74
	if (ctx.cr6.gt) goto loc_82CCCB74;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82CCCB74:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82cccb60
	goto loc_82CCCB60;
loc_82CCCB94:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82cccba0
	if (ctx.cr6.gt) goto loc_82CCCBA0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82CCCBA0:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82cccb60
	goto loc_82CCCB60;
}

__attribute__((alias("__imp__sub_82CCCBC0"))) PPC_WEAK_FUNC(sub_82CCCBC0);
PPC_FUNC_IMPL(__imp__sub_82CCCBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CCCBC8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CCCBEC;
	sub_82CA3190(ctx, base);
	// li r9,123
	ctx.r9.s64 = 123;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbzx r23,r29,r25
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r25.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r9,r29,r25
	PPC_STORE_U8(ctx.r29.u32 + ctx.r25.u32, ctx.r9.u8);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r10,14280
	ctx.r26.s64 = ctx.r10.s64 + 14280;
	// ble cr6,0x82cccd00
	if (!ctx.cr6.gt) goto loc_82CCCD00;
loc_82CCCC0C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cccccc
	if (!ctx.cr6.eq) goto loc_82CCCCCC;
loc_82CCCC28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82cccc28
	if (ctx.cr6.eq) goto loc_82CCCC28;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82cccccc
	if (ctx.cr6.lt) goto loc_82CCCCCC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cccc80
	if (!ctx.cr6.eq) goto loc_82CCCC80;
	// cmpwi cr6,r7,51
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 51, ctx.xer);
	// ble cr6,0x82cccc58
	if (!ctx.cr6.gt) goto loc_82CCCC58;
	// li r7,51
	ctx.r7.s64 = 51;
loc_82CCCC58:
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// bgt cr6,0x82cccc70
	if (ctx.cr6.gt) goto loc_82CCCC70;
	// lhz r10,146(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 146);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r10.u16);
	// b 0x82ccccc0
	goto loc_82CCCCC0;
loc_82CCCC70:
	// lhz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r10.u16);
	// b 0x82ccccc0
	goto loc_82CCCCC0;
loc_82CCCC80:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// ble cr6,0x82cccc8c
	if (!ctx.cr6.gt) goto loc_82CCCC8C;
	// li r7,5
	ctx.r7.s64 = 5;
loc_82CCCC8C:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r8,r26,17
	ctx.r8.s64 = ctx.r26.s64 + 17;
	// lbzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
loc_82CCCCC0:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82ccccf4
	goto loc_82CCCCF4;
loc_82CCCCCC:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r8,r26,17
	ctx.r8.s64 = ctx.r26.s64 + 17;
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_82CCCCF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82cccc0c
	if (ctx.cr6.lt) goto loc_82CCCC0C;
loc_82CCCD00:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ccf118
	ctx.lr = 0x82CCCD1C;
	sub_82CCF118(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CCCD20:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82ccc370
	ctx.lr = 0x82CCCD38;
	sub_82CCC370(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x82cccd20
	if (ctx.cr6.lt) goto loc_82CCCD20;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82ccce88
	if (!ctx.cr6.gt) goto loc_82CCCE88;
loc_82CCCD50:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cccdc8
	if (!ctx.cr6.eq) goto loc_82CCCDC8;
loc_82CCCD6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cccd6c
	if (ctx.cr6.eq) goto loc_82CCCD6C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82cccdc8
	if (ctx.cr6.lt) goto loc_82CCCDC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cccdb4
	if (!ctx.cr6.eq) goto loc_82CCCDB4;
	// cmpwi cr6,r30,51
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 51, ctx.xer);
	// ble cr6,0x82cccd9c
	if (!ctx.cr6.gt) goto loc_82CCCD9C;
	// li r30,51
	ctx.r30.s64 = 51;
loc_82CCCD9C:
	// cmpwi cr6,r30,19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 19, ctx.xer);
	// bgt cr6,0x82cccdac
	if (ctx.cr6.gt) goto loc_82CCCDAC;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82cccdd8
	goto loc_82CCCDD8;
loc_82CCCDAC:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82cccdd8
	goto loc_82CCCDD8;
loc_82CCCDB4:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// ble cr6,0x82cccdc0
	if (!ctx.cr6.gt) goto loc_82CCCDC0;
	// li r30,5
	ctx.r30.s64 = 5;
loc_82CCCDC0:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82cccdd8
	goto loc_82CCCDD8;
loc_82CCCDC8:
	// lbzx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r26,17
	ctx.r9.s64 = ctx.r26.s64 + 17;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_82CCCDD8:
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lhzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82ccc370
	ctx.lr = 0x82CCCDFC;
	sub_82CCC370(ctx, base);
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// bne cr6,0x82ccce10
	if (!ctx.cr6.eq) goto loc_82CCCE10;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82ccce6c
	goto loc_82CCCE6C;
loc_82CCCE10:
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// bne cr6,0x82ccce24
	if (!ctx.cr6.eq) goto loc_82CCCE24;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82ccce6c
	goto loc_82CCCE6C;
loc_82CCCE24:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// bne cr6,0x82ccce7c
	if (!ctx.cr6.eq) goto loc_82CCCE7C;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCCE3C;
	sub_82CCC370(ctx, base);
	// lbzx r8,r31,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r7,r31,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r26,17
	ctx.r11.s64 = ctx.r26.s64 + 17;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
loc_82CCCE6C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCCE74;
	sub_82CCC370(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_82CCCE7C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82cccd50
	if (ctx.cr6.lt) goto loc_82CCCD50;
loc_82CCCE88:
	// stbx r23,r29,r25
	PPC_STORE_U8(ctx.r29.u32 + ctx.r25.u32, ctx.r23.u8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCCE9C;
	sub_82CA2C60(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CCCEA4"))) PPC_WEAK_FUNC(sub_82CCCEA4);
PPC_FUNC_IMPL(__imp__sub_82CCCEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCCEA8"))) PPC_WEAK_FUNC(sub_82CCCEA8);
PPC_FUNC_IMPL(__imp__sub_82CCCEA8) {
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
	// addi r7,r31,13272
	ctx.r7.s64 = ctx.r31.s64 + 13272;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r31,9520
	ctx.r6.s64 = ctx.r31.s64 + 9520;
	// lwz r11,2152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// addi r5,r31,10472
	ctx.r5.s64 = ctx.r31.s64 + 10472;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ccf118
	ctx.lr = 0x82CCCEE4;
	sub_82CCF118(ctx, base);
	// addi r7,r31,16370
	ctx.r7.s64 = ctx.r31.s64 + 16370;
	// addi r6,r31,10221
	ctx.r6.s64 = ctx.r31.s64 + 10221;
	// addi r5,r31,15374
	ctx.r5.s64 = ctx.r31.s64 + 15374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// bl 0x82ccf118
	ctx.lr = 0x82CCCF00;
	sub_82CCF118(ctx, base);
	// addi r7,r31,17150
	ctx.r7.s64 = ctx.r31.s64 + 17150;
	// addi r6,r31,17166
	ctx.r6.s64 = ctx.r31.s64 + 17166;
	// addi r5,r31,17118
	ctx.r5.s64 = ctx.r31.s64 + 17118;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccf118
	ctx.lr = 0x82CCCF1C;
	sub_82CCF118(ctx, base);
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

__attribute__((alias("__imp__sub_82CCCF34"))) PPC_WEAK_FUNC(sub_82CCCF34);
PPC_FUNC_IMPL(__imp__sub_82CCCF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCCF38"))) PPC_WEAK_FUNC(sub_82CCCF38);
PPC_FUNC_IMPL(__imp__sub_82CCCF38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1364);
	// lwz r10,2152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r11,1222
	ctx.r10.s64 = ctx.r11.s64 + 1222;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82CCCF58:
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,2152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82cccf58
	if (ctx.cr6.lt) goto loc_82CCCF58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCCF78"))) PPC_WEAK_FUNC(sub_82CCCF78);
PPC_FUNC_IMPL(__imp__sub_82CCCF78) {
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
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r31,14672
	ctx.r5.s64 = ctx.r31.s64 + 14672;
	// addi r4,r31,9520
	ctx.r4.s64 = ctx.r31.s64 + 9520;
	// bl 0x82cccbc0
	ctx.lr = 0x82CCCF9C;
	sub_82CCCBC0(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// addi r5,r31,14928
	ctx.r5.s64 = ctx.r31.s64 + 14928;
	// addi r4,r31,9776
	ctx.r4.s64 = ctx.r31.s64 + 9776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cccbc0
	ctx.lr = 0x82CCCFB4;
	sub_82CCCBC0(ctx, base);
	// addi r5,r31,16868
	ctx.r5.s64 = ctx.r31.s64 + 16868;
	// addi r4,r31,10221
	ctx.r4.s64 = ctx.r31.s64 + 10221;
	// li r6,249
	ctx.r6.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cccbc0
	ctx.lr = 0x82CCCFC8;
	sub_82CCCBC0(ctx, base);
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

__attribute__((alias("__imp__sub_82CCCFDC"))) PPC_WEAK_FUNC(sub_82CCCFDC);
PPC_FUNC_IMPL(__imp__sub_82CCCFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCCFE0"))) PPC_WEAK_FUNC(sub_82CCCFE0);
PPC_FUNC_IMPL(__imp__sub_82CCCFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCCFE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r29,r31,17166
	ctx.r29.s64 = ctx.r31.s64 + 17166;
	// addi r7,r31,17150
	ctx.r7.s64 = ctx.r31.s64 + 17150;
	// addi r5,r31,17118
	ctx.r5.s64 = ctx.r31.s64 + 17118;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82ccf118
	ctx.lr = 0x82CCD00C;
	sub_82CCF118(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CCD010:
	// li r4,3
	ctx.r4.s64 = 3;
	// lbzx r5,r29,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccc370
	ctx.lr = 0x82CCD020;
	sub_82CCC370(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82ccd010
	if (ctx.cr6.lt) goto loc_82CCD010;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CCD034"))) PPC_WEAK_FUNC(sub_82CCD034);
PPC_FUNC_IMPL(__imp__sub_82CCD034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD038"))) PPC_WEAK_FUNC(sub_82CCD038);
PPC_FUNC_IMPL(__imp__sub_82CCD038) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,9520
	ctx.r9.s64 = ctx.r3.s64 + 9520;
loc_82CCD040:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ccd054
	if (!ctx.cr0.eq) goto loc_82CCD054;
	// li r10,11
	ctx.r10.s64 = 11;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82CCD054:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82ccd040
	if (ctx.cr6.lt) goto loc_82CCD040;
	// b 0x82ccd07c
	goto loc_82CCD07C;
loc_82CCD064:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ccd078
	if (!ctx.cr0.eq) goto loc_82CCD078;
	// li r10,12
	ctx.r10.s64 = 12;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82CCD078:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CCD07C:
	// lwz r10,2152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccd064
	if (ctx.cr6.lt) goto loc_82CCD064;
	// addi r11,r3,10221
	ctx.r11.s64 = ctx.r3.s64 + 10221;
	// li r10,249
	ctx.r10.s64 = 249;
loc_82CCD098:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82ccd0ac
	if (!ctx.cr0.eq) goto loc_82CCD0AC;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82CCD0AC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82ccd098
	if (!ctx.cr0.eq) goto loc_82CCD098;
	// lbz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1364);
	// lwz r10,2152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r11,1222
	ctx.r10.s64 = ctx.r11.s64 + 1222;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82CCD0D8:
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,2152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ccd0d8
	if (ctx.cr6.lt) goto loc_82CCD0D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD0F8"))) PPC_WEAK_FUNC(sub_82CCD0F8);
PPC_FUNC_IMPL(__imp__sub_82CCD0F8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,1108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1108, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r8,1111(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1111, ctx.r8.u8);
	// stb r11,1110(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1110, ctx.r11.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r9,1109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1109, ctx.r9.u8);
	// li r10,4
	ctx.r10.s64 = 4;
loc_82CCD120:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ccd14c
	if (!ctx.cr6.gt) goto loc_82CCD14C;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,1108
	ctx.r9.s64 = ctx.r9.s64 + 1108;
	// beq 0x82ccd148
	if (ctx.cr0.eq) goto loc_82CCD148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82CCD13C:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ccd13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CCD13C;
loc_82CCD148:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CCD14C:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// ble cr6,0x82ccd184
	if (!ctx.cr6.gt) goto loc_82CCD184;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,1108
	ctx.r9.s64 = ctx.r9.s64 + 1108;
	// beq 0x82ccd180
	if (ctx.cr0.eq) goto loc_82CCD180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82CCD174:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ccd174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CCD174;
loc_82CCD180:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CCD184:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// blt cr6,0x82ccd120
	if (ctx.cr6.lt) goto loc_82CCD120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD1A0"))) PPC_WEAK_FUNC(sub_82CCD1A0);
PPC_FUNC_IMPL(__imp__sub_82CCD1A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,2162
	ctx.r8.s64 = ctx.r3.s64 + 2162;
loc_82CCD1A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ccd1d4
	if (ctx.cr6.eq) goto loc_82CCD1D4;
loc_82CCD1B8:
	// clrlwi. r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82ccd1cc
	if (ctx.cr0.eq) goto loc_82CCD1CC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82CCD1CC:
	// srawi. r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ccd1b8
	if (!ctx.cr0.eq) goto loc_82CCD1B8;
loc_82CCD1D4:
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82ccd1a8
	if (ctx.cr6.lt) goto loc_82CCD1A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD1E8"))) PPC_WEAK_FUNC(sub_82CCD1E8);
PPC_FUNC_IMPL(__imp__sub_82CCD1E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD1F4"))) PPC_WEAK_FUNC(sub_82CCD1F4);
PPC_FUNC_IMPL(__imp__sub_82CCD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD1F8"))) PPC_WEAK_FUNC(sub_82CCD1F8);
PPC_FUNC_IMPL(__imp__sub_82CCD1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CCD200;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bgt cr6,0x82ccd228
	if (ctx.cr6.gt) goto loc_82CCD228;
	// lwz r11,11968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11968);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,11968(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11968, ctx.r11.u32);
	// b 0x82ccd380
	goto loc_82CCD380;
loc_82CCD228:
	// add r27,r31,r30
	ctx.r27.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r29,r27,-6
	ctx.r29.s64 = ctx.r27.s64 + -6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCD240;
	sub_82CA2C60(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CCD250;
	sub_82CA3190(ctx, base);
	// lwz r11,11968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11968);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r11,-10
	ctx.r7.s64 = ctx.r11.s64 + -10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,14320
	ctx.r6.s64 = ctx.r11.s64 + 14320;
loc_82CCD264:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ccd298
	if (!ctx.cr6.lt) goto loc_82CCD298;
loc_82CCD27C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,232
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 232, ctx.xer);
	// beq cr6,0x82ccd298
	if (ctx.cr6.eq) goto loc_82CCD298;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ccd27c
	if (ctx.cr6.lt) goto loc_82CCD27C;
loc_82CCD298:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ccd2c4
	if (!ctx.cr6.eq) goto loc_82CCD2C4;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ccd2b0
	goto loc_82CCD2B0;
loc_82CCD2A8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82CCD2B0:
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpequb. v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_cmpeq_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	ctx.cr6.setFromMask(_mm_load_si128((__m128i*)ctx.v13.u8), 0xFFFF);
	// beq cr6,0x82ccd2a8
	if (ctx.cr6.eq) goto loc_82CCD2A8;
	// b 0x82ccd2c4
	goto loc_82CCD2C4;
loc_82CCD2C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CCD2C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,232
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 232, ctx.xer);
	// bne cr6,0x82ccd2c0
	if (!ctx.cr6.eq) goto loc_82CCD2C0;
	// lwz r9,11968(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11968);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,11968(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11968, ctx.r10.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82ccd368
	if (!ctx.cr6.lt) goto loc_82CCD368;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r8,11964(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11964);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ccd32c
	if (!ctx.cr6.lt) goto loc_82CCD32C;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x82ccd340
	goto loc_82CCD340;
loc_82CCD32C:
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ccd358
	if (ctx.cr6.gt) goto loc_82CCD358;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82CCD340:
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r9,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_82CCD358:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,11968(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11968, ctx.r10.u32);
	// b 0x82ccd264
	goto loc_82CCD264;
loc_82CCD368:
	// addi r11,r7,10
	ctx.r11.s64 = ctx.r7.s64 + 10;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,11968(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11968, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,-6
	ctx.r3.s64 = ctx.r27.s64 + -6;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCD380;
	sub_82CA2C60(ctx, base);
loc_82CCD380:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CCD388"))) PPC_WEAK_FUNC(sub_82CCD388);
PPC_FUNC_IMPL(__imp__sub_82CCD388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CCD390;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82ccd5b8
	goto loc_82CCD5B8;
loc_82CCD3A8:
	// lwz r11,11988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11988);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ccd588
	if (!ctx.cr6.eq) goto loc_82CCD588;
	// lbz r11,11958(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11958);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccd408
	if (ctx.cr0.eq) goto loc_82CCD408;
	// stb r27,11958(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11958, ctx.r27.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD3D0;
	sub_82CCD730(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ccd404
	if (ctx.cr0.eq) goto loc_82CCD404;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD3E4;
	sub_82CCD730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD3F4;
	sub_82CCD730(ctx, base);
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,11964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11964, ctx.r11.u32);
	// b 0x82ccd408
	goto loc_82CCD408;
loc_82CCD404:
	// stw r27,11964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11964, ctx.r27.u32);
loc_82CCD408:
	// lwz r11,11984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11984);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ccd420
	if (!ctx.cr6.eq) goto loc_82CCD420;
	// stw r27,11984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11984, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd5f8
	ctx.lr = 0x82CCD420;
	sub_82CCD5F8(ctx, base);
loc_82CCD420:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD42C;
	sub_82CCD730(ctx, base);
	// stw r3,11984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11984, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD43C;
	sub_82CCD730(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD44C;
	sub_82CCD730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CCD45C;
	sub_82CCD730(ctx, base);
	// rlwinm r11,r26,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,11984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11984);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,11976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11976, ctx.r11.u32);
	// stw r11,11980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11980, ctx.r11.u32);
	// bne cr6,0x82ccd488
	if (!ctx.cr6.eq) goto loc_82CCD488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a78
	ctx.lr = 0x82CCD488;
	sub_82CD0A78(ctx, base);
loc_82CCD488:
	// lwz r11,11984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ccd4bc
	if (ctx.cr6.eq) goto loc_82CCD4BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ccd4bc
	if (ctx.cr6.eq) goto loc_82CCD4BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ccd4b4
	if (!ctx.cr6.eq) goto loc_82CCD4B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccf468
	ctx.lr = 0x82CCD4AC;
	sub_82CCF468(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccd4ec
	if (!ctx.cr0.eq) goto loc_82CCD4EC;
loc_82CCD4B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccd5ec
	goto loc_82CCD5EC;
loc_82CCD4BC:
	// lbz r11,11957(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// addi r4,r31,2584
	ctx.r4.s64 = ctx.r31.s64 + 2584;
	// addi r3,r31,11028
	ctx.r3.s64 = ctx.r31.s64 + 11028;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCD4D4;
	sub_82CA2C60(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// addi r4,r31,3256
	ctx.r4.s64 = ctx.r31.s64 + 3256;
	// addi r3,r31,11700
	ctx.r3.s64 = ctx.r31.s64 + 11700;
	// bl 0x82ca2c60
	ctx.lr = 0x82CCD4E4;
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0988
	ctx.lr = 0x82CCD4EC;
	sub_82CD0988(ctx, base);
loc_82CCD4EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,11988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11988, ctx.r11.u32);
	// b 0x82ccd588
	goto loc_82CCD588;
loc_82CCD4F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82ccd594
	if (!ctx.cr6.gt) goto loc_82CCD594;
	// lwz r30,11980(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11980);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82ccd510
	if (ctx.cr6.lt) goto loc_82CCD510;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82CCD510:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ccd4b4
	if (ctx.cr6.eq) goto loc_82CCD4B4;
	// lwz r11,11984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11984);
	// lwz r4,11960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ccd538
	if (!ctx.cr6.eq) goto loc_82CCD538;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0328
	ctx.lr = 0x82CCD534;
	sub_82CD0328(ctx, base);
	// b 0x82ccd56c
	goto loc_82CCD56C;
loc_82CCD538:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ccd550
	if (!ctx.cr6.eq) goto loc_82CCD550;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccfb18
	ctx.lr = 0x82CCD54C;
	sub_82CCFB18(ctx, base);
	// b 0x82ccd56c
	goto loc_82CCD56C;
loc_82CCD550:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ccd568
	if (!ctx.cr6.eq) goto loc_82CCD568;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccf2a8
	ctx.lr = 0x82CCD564;
	sub_82CCF2A8(ctx, base);
	// b 0x82ccd56c
	goto loc_82CCD56C;
loc_82CCD568:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CCD56C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ccd4b4
	if (!ctx.cr6.eq) goto loc_82CCD4B4;
	// lwz r11,11980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11980);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,11980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11980, ctx.r11.u32);
loc_82CCD588:
	// lwz r11,11980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82ccd4f8
	if (ctx.cr6.gt) goto loc_82CCD4F8;
loc_82CCD594:
	// lwz r11,11980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccd5a8
	if (!ctx.cr6.eq) goto loc_82CCD5A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,11988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11988, ctx.r11.u32);
loc_82CCD5A8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ccd5bc
	if (!ctx.cr6.eq) goto loc_82CCD5BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd5f8
	ctx.lr = 0x82CCD5B8;
	sub_82CCD5F8(ctx, base);
loc_82CCD5B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_82CCD5BC:
	// bgt cr6,0x82ccd3a8
	if (ctx.cr6.gt) goto loc_82CCD3A8;
	// lwz r11,11960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11960);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ccd5d4
	if (!ctx.cr6.eq) goto loc_82CCD5D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82CCD5D4:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0398
	ctx.lr = 0x82CCD5E8;
	sub_82CD0398(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82CCD5EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CCD5F4"))) PPC_WEAK_FUNC(sub_82CCD5F4);
PPC_FUNC_IMPL(__imp__sub_82CCD5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD5F8"))) PPC_WEAK_FUNC(sub_82CCD5F8);
PPC_FUNC_IMPL(__imp__sub_82CCD5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11984(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11984);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,11012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// lwz r9,11016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r8,16
	ctx.r8.s64 = 16;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r10,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r10.u32);
	// stb r8,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r8.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD654"))) PPC_WEAK_FUNC(sub_82CCD654);
PPC_FUNC_IMPL(__imp__sub_82CCD654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD658"))) PPC_WEAK_FUNC(sub_82CCD658);
PPC_FUNC_IMPL(__imp__sub_82CCD658) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ccd5f8
	sub_82CCD5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD65C"))) PPC_WEAK_FUNC(sub_82CCD65C);
PPC_FUNC_IMPL(__imp__sub_82CCD65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD660"))) PPC_WEAK_FUNC(sub_82CCD660);
PPC_FUNC_IMPL(__imp__sub_82CCD660) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11956(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// lwz r10,11952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// stb r11,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r11.u8);
	// bgtlr 
	if (ctx.cr0.gt) return;
	// lwz r8,11016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r10,11012(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ccd6dc
	if (!ctx.cr6.lt) goto loc_82CCD6DC;
	// lbz r6,11956(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r11.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stb r10,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r10.u8);
	// stw r9,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// bgtlr 
	if (ctx.cr0.gt) return;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ccd6e8
	if (ctx.cr6.lt) goto loc_82CCD6E8;
loc_82CCD6DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11959(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11959, ctx.r11.u8);
	// blr 
	return;
loc_82CCD6E8:
	// lbz r8,11956(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r6,11952(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r9,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r9.u32);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stb r11,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r11.u8);
	// stw r10,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD72C"))) PPC_WEAK_FUNC(sub_82CCD72C);
PPC_FUNC_IMPL(__imp__sub_82CCD72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD730"))) PPC_WEAK_FUNC(sub_82CCD730);
PPC_FUNC_IMPL(__imp__sub_82CCD730) {
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
	// lwz r11,11952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// srw r31,r11,r10
	ctx.r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// bl 0x82ccd660
	ctx.lr = 0x82CCD750;
	sub_82CCD660(ctx, base);
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

__attribute__((alias("__imp__sub_82CCD768"))) PPC_WEAK_FUNC(sub_82CCD768);
PPC_FUNC_IMPL(__imp__sub_82CCD768) {
	PPC_FUNC_PROLOGUE();
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// blt 0x82ccd7b4
	if (ctx.cr0.lt) goto loc_82CCD7B4;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82CCD780:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x82ccd7a4
	if (!ctx.cr6.gt) goto loc_82CCD7A4;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x82ccd7b4
	if (!ctx.cr6.lt) goto loc_82CCD7B4;
	// b 0x82ccd7a8
	goto loc_82CCD7A8;
loc_82CCD7A4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82CCD7A8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82ccd780
	if (!ctx.cr0.lt) goto loc_82CCD780;
loc_82CCD7B4:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82ccd7c4
	if (!ctx.cr6.lt) goto loc_82CCD7C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCD7C4:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82CCD7D4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccd820
	if (ctx.cr6.eq) goto loc_82CCD820;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82ccd808
	if (ctx.cr6.gt) goto loc_82CCD808;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// b 0x82ccd820
	goto loc_82CCD820;
loc_82CCD808:
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
loc_82CCD820:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ccd7d4
	if (!ctx.cr0.eq) goto loc_82CCD7D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD830"))) PPC_WEAK_FUNC(sub_82CCD830);
PPC_FUNC_IMPL(__imp__sub_82CCD830) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,1200
	ctx.r6.s64 = 1200;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,10472
	ctx.r10.s64 = ctx.r3.s64 + 10472;
	// addi r9,r3,9520
	ctx.r9.s64 = ctx.r3.s64 + 9520;
loc_82CCD848:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// blt cr6,0x82ccd848
	if (ctx.cr6.lt) goto loc_82CCD848;
	// lwz r31,2152(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ccd8d8
	if (ctx.cr6.eq) goto loc_82CCD8D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,14228
	ctx.r4.s64 = ctx.r11.s64 + 14228;
loc_82CCD880:
	// addi r10,r7,32
	ctx.r10.s64 = ctx.r7.s64 + 32;
	// lbzx r5,r7,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,5236
	ctx.r9.s64 = ctx.r10.s64 + 5236;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,9520
	ctx.r9.s64 = ctx.r10.s64 + 9520;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_82CCD8A4:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bne 0x82ccd8a4
	if (!ctx.cr0.eq) goto loc_82CCD8A4;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ccd880
	if (ctx.cr6.lt) goto loc_82CCD880;
loc_82CCD8D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,15374
	ctx.r10.s64 = ctx.r3.s64 + 15374;
	// addi r9,r3,10221
	ctx.r9.s64 = ctx.r3.s64 + 10221;
loc_82CCD8E4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,249
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 249, ctx.xer);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// blt cr6,0x82ccd8e4
	if (ctx.cr6.lt) goto loc_82CCD8E4;
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD918"))) PPC_WEAK_FUNC(sub_82CCD918);
PPC_FUNC_IMPL(__imp__sub_82CCD918) {
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
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ccd960
	if (!ctx.cr6.gt) goto loc_82CCD960;
	// bl 0x82ccb6b0
	ctx.lr = 0x82CCD93C;
	sub_82CCB6B0(ctx, base);
	// lwz r4,2132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// subf. r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82ccd960
	if (!ctx.cr0.gt) goto loc_82CCD960;
	// lwz r6,2144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// lwz r3,17200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17200);
	// lwz r11,17216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCD960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CCD960:
	// lwz r10,2132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r11.u32);
	// stb r9,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r9.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CCD990"))) PPC_WEAK_FUNC(sub_82CCD990);
PPC_FUNC_IMPL(__imp__sub_82CCD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCD998;
	sub_82CA2BE8(ctx, base);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82ccc370
	ctx.lr = 0x82CCD9BC;
	sub_82CCC370(ctx, base);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82CCD9C4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
loc_82CCD9CC:
	// lwz r8,2136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lwz r8,2136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r8.u32);
	// bne 0x82ccd9cc
	if (!ctx.cr0.eq) goto loc_82CCD9CC;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82ccd9c4
	if (!ctx.cr0.eq) goto loc_82CCD9C4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82ccda48
	goto loc_82CCDA48;
loc_82CCDA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// stw r11,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r11.u32);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x82ccda48
	if (!ctx.cr6.eq) goto loc_82CCDA48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd918
	ctx.lr = 0x82CCDA44;
	sub_82CCD918(ctx, base);
	// stb r28,2161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2161, ctx.r28.u8);
loc_82CCDA48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ccda04
	if (!ctx.cr6.eq) goto loc_82CCDA04;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCDA64"))) PPC_WEAK_FUNC(sub_82CCDA64);
PPC_FUNC_IMPL(__imp__sub_82CCDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCDA68"))) PPC_WEAK_FUNC(sub_82CCDA68);
PPC_FUNC_IMPL(__imp__sub_82CCDA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CCDA70;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ccdf24
	if (ctx.cr6.eq) goto loc_82CCDF24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r26,r11,14024
	ctx.r26.s64 = ctx.r11.s64 + 14024;
	// addi r28,r10,14228
	ctx.r28.s64 = ctx.r10.s64 + 14228;
loc_82CCDAA0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r30,29
	ctx.r9.u64 = ctx.r30.u32 & 0x7;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ccdb90
	if (!ctx.cr0.eq) goto loc_82CCDB90;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r10,6636
	ctx.r6.s64 = ctx.r10.s64 + 6636;
	// addi r10,r11,9520
	ctx.r10.s64 = ctx.r11.s64 + 9520;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,9520(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r11,9520(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ccdb80
	if (ctx.cr6.gt) goto loc_82CCDB80;
loc_82CCDB14:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdb30
	if (ctx.cr6.lt) goto loc_82CCDB30;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDB30:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccdb14
	if (!ctx.cr6.gt) goto loc_82CCDB14;
loc_82CCDB80:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82ccdefc
	goto loc_82CCDEFC;
loc_82CCDB90:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r7,r11,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r7,1024
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1024, ctx.xer);
	// bge cr6,0x82ccdbbc
	if (!ctx.cr6.lt) goto loc_82CCDBBC;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82ccdbe4
	goto loc_82CCDBE4;
loc_82CCDBBC:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccdbdc
	if (!ctx.cr6.lt) goto loc_82CCDBDC;
	// rlwinm r11,r7,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82ccdbe4
	goto loc_82CCDBE4;
loc_82CCDBDC:
	// rlwinm r11,r7,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCDBE4:
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// bge cr6,0x82ccdcc4
	if (!ctx.cr6.lt) goto loc_82CCDCC4;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r10,r9,1222
	ctx.r10.s64 = ctx.r9.s64 + 1222;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ccde34
	if (ctx.cr6.gt) goto loc_82CCDE34;
loc_82CCDC54:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdc70
	if (ctx.cr6.lt) goto loc_82CCDC70;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDC70:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccdc54
	if (!ctx.cr6.gt) goto loc_82CCDC54;
	// b 0x82ccde34
	goto loc_82CCDE34;
loc_82CCDCC4:
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// rlwinm r9,r11,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,9783
	ctx.r9.s64 = ctx.r10.s64 + 9783;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r24,9783(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9783);
	// lhz r11,13798(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 13798);
	// subf r6,r24,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r24.s64;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,9783(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9783);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ccdd78
	if (ctx.cr6.gt) goto loc_82CCDD78;
loc_82CCDD0C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdd28
	if (ctx.cr6.lt) goto loc_82CCDD28;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDD28:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccdd0c
	if (!ctx.cr6.gt) goto loc_82CCDD0C;
loc_82CCDD78:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r6,r8,8178
	ctx.r6.s64 = ctx.r8.s64 + 8178;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lbz r24,10214(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10214);
	// addi r10,r11,10214
	ctx.r10.s64 = ctx.r11.s64 + 10214;
	// subf r10,r24,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r24.s64;
	// lhzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r11,10214(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10214);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ccde34
	if (ctx.cr6.gt) goto loc_82CCDE34;
loc_82CCDDC8:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdde4
	if (ctx.cr6.lt) goto loc_82CCDDE4;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDDE4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccddc8
	if (!ctx.cr6.gt) goto loc_82CCDDC8;
loc_82CCDE34:
	// lbzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ccdef0
	if (ctx.cr0.eq) goto loc_82CCDEF0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82ccdef0
	if (ctx.cr6.gt) goto loc_82CCDEF0;
loc_82CCDE84:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdea0
	if (ctx.cr6.lt) goto loc_82CCDEA0;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDEA0:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r7,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccde84
	if (!ctx.cr6.gt) goto loc_82CCDE84;
loc_82CCDEF0:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CCDEFC:
	// stw r11,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x82ccdf1c
	if (!ctx.cr6.eq) goto loc_82CCDF1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd918
	ctx.lr = 0x82CCDF14;
	sub_82CCD918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2161, ctx.r11.u8);
loc_82CCDF1C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82ccdaa0
	if (ctx.cr6.lt) goto loc_82CCDAA0;
loc_82CCDF24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CCDF2C"))) PPC_WEAK_FUNC(sub_82CCDF2C);
PPC_FUNC_IMPL(__imp__sub_82CCDF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCDF30"))) PPC_WEAK_FUNC(sub_82CCDF30);
PPC_FUNC_IMPL(__imp__sub_82CCDF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CCDF38;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cce588
	if (ctx.cr6.eq) goto loc_82CCE588;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r26,r11,14024
	ctx.r26.s64 = ctx.r11.s64 + 14024;
	// addi r28,r10,14228
	ctx.r28.s64 = ctx.r10.s64 + 14228;
loc_82CCDF68:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r29,29
	ctx.r9.u64 = ctx.r29.u32 & 0x7;
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cce058
	if (!ctx.cr0.eq) goto loc_82CCE058;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r10,6636
	ctx.r6.s64 = ctx.r10.s64 + 6636;
	// addi r10,r11,9520
	ctx.r10.s64 = ctx.r11.s64 + 9520;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,9520(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r11,9520(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce048
	if (ctx.cr6.gt) goto loc_82CCE048;
loc_82CCDFDC:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccdff8
	if (ctx.cr6.lt) goto loc_82CCDFF8;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCDFF8:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ccdfdc
	if (!ctx.cr6.gt) goto loc_82CCDFDC;
loc_82CCE048:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82cce560
	goto loc_82CCE560;
loc_82CCE058:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// bge cr6,0x82cce084
	if (!ctx.cr6.lt) goto loc_82CCE084;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82cce0ac
	goto loc_82CCE0AC;
loc_82CCE084:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82cce0a4
	if (!ctx.cr6.lt) goto loc_82CCE0A4;
	// rlwinm r11,r8,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82cce0ac
	goto loc_82CCE0AC;
loc_82CCE0A4:
	// rlwinm r11,r8,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCE0AC:
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// bge cr6,0x82cce18c
	if (!ctx.cr6.lt) goto loc_82CCE18C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r10,r9,1222
	ctx.r10.s64 = ctx.r9.s64 + 1222;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce300
	if (ctx.cr6.gt) goto loc_82CCE300;
loc_82CCE11C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce138
	if (ctx.cr6.lt) goto loc_82CCE138;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE138:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce11c
	if (!ctx.cr6.gt) goto loc_82CCE11C;
	// b 0x82cce300
	goto loc_82CCE300;
loc_82CCE18C:
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// rlwinm r9,r11,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,9783
	ctx.r9.s64 = ctx.r10.s64 + 9783;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r24,9783(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9783);
	// lhz r11,13798(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 13798);
	// subf r6,r24,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r24.s64;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,9783(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9783);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce244
	if (ctx.cr6.gt) goto loc_82CCE244;
loc_82CCE1D4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce1f0
	if (ctx.cr6.lt) goto loc_82CCE1F0;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE1F0:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r10,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce1d4
	if (!ctx.cr6.gt) goto loc_82CCE1D4;
loc_82CCE244:
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r6,r7,8178
	ctx.r6.s64 = ctx.r7.s64 + 8178;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lbz r24,10214(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10214);
	// addi r10,r11,10214
	ctx.r10.s64 = ctx.r11.s64 + 10214;
	// subf r10,r24,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r24.s64;
	// lhzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r11,10214(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10214);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce300
	if (ctx.cr6.gt) goto loc_82CCE300;
loc_82CCE294:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce2b0
	if (ctx.cr6.lt) goto loc_82CCE2B0;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE2B0:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce294
	if (!ctx.cr6.gt) goto loc_82CCE294;
loc_82CCE300:
	// lbzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82cce49c
	if (ctx.cr6.lt) goto loc_82CCE49C;
	// ble cr6,0x82cce3d8
	if (!ctx.cr6.gt) goto loc_82CCE3D8;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// rlwinm r5,r8,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// extsb r24,r10
	ctx.r24.s64 = ctx.r10.s8;
	// slw r10,r30,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// extsb r6,r24
	ctx.r6.s64 = ctx.r24.s8;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce3d8
	if (ctx.cr6.gt) goto loc_82CCE3D8;
loc_82CCE36C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce388
	if (ctx.cr6.lt) goto loc_82CCE388;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE388:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce36c
	if (!ctx.cr6.gt) goto loc_82CCE36C;
loc_82CCE3D8:
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,8575
	ctx.r10.s64 = ctx.r10.s64 + 8575;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r4,17166(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17166);
	// addi r10,r11,17166
	ctx.r10.s64 = ctx.r11.s64 + 17166;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lhzx r9,r5,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r11,17166(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17166);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce554
	if (ctx.cr6.gt) goto loc_82CCE554;
loc_82CCE42C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce448
	if (ctx.cr6.lt) goto loc_82CCE448;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE448:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce42c
	if (!ctx.cr6.gt) goto loc_82CCE42C;
	// b 0x82cce554
	goto loc_82CCE554;
loc_82CCE49C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cce554
	if (ctx.cr6.eq) goto loc_82CCE554;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82cce554
	if (ctx.cr6.gt) goto loc_82CCE554;
loc_82CCE4E8:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cce504
	if (ctx.cr6.lt) goto loc_82CCE504;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
loc_82CCE504:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,2136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82cce4e8
	if (!ctx.cr6.gt) goto loc_82CCE4E8;
loc_82CCE554:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CCE560:
	// stw r11,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x82cce580
	if (!ctx.cr6.eq) goto loc_82CCE580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd918
	ctx.lr = 0x82CCE578;
	sub_82CCD918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2161, ctx.r11.u8);
loc_82CCE580:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82ccdf68
	if (ctx.cr6.lt) goto loc_82CCDF68;
loc_82CCE588:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CCE590"))) PPC_WEAK_FUNC(sub_82CCE590);
PPC_FUNC_IMPL(__imp__sub_82CCE590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCE598;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,17118
	ctx.r3.s64 = ctx.r31.s64 + 17118;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCE5BC;
	sub_82CA3190(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cce5fc
	if (ctx.cr6.eq) goto loc_82CCE5FC;
loc_82CCE5CC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82cce5f4
	if (ctx.cr6.lt) goto loc_82CCE5F4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,8559
	ctx.r11.s64 = ctx.r11.s64 + 8559;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_82CCE5F4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82cce5cc
	if (!ctx.cr0.eq) goto loc_82CCE5CC;
loc_82CCE5FC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CCE600:
	// addi r11,r10,8559
	ctx.r11.s64 = ctx.r10.s64 + 8559;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82cce618
	if (!ctx.cr6.gt) goto loc_82CCE618;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82CCE618:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82cce600
	if (ctx.cr6.lt) goto loc_82CCE600;
	// li r11,5
	ctx.r11.s64 = 5;
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82cce64c
	if (!ctx.cr6.gt) goto loc_82CCE64C;
	// cmplwi cr6,r28,100
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 100, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// bge cr6,0x82cce650
	if (!ctx.cr6.lt) goto loc_82CCE650;
loc_82CCE64C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CCE650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCE658"))) PPC_WEAK_FUNC(sub_82CCE658);
PPC_FUNC_IMPL(__imp__sub_82CCE658) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82cce7b0
	if (!ctx.cr6.lt) goto loc_82CCE7B0;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,8
	ctx.r5.s64 = 524288;
loc_82CCE678:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r4,r8,29
	ctx.r4.u64 = ctx.r8.u32 & 0x7;
	// li r31,1
	ctx.r31.s64 = 1;
	// slw r4,r31,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// and. r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// bne 0x82cce6bc
	if (!ctx.cr0.eq) goto loc_82CCE6BC;
	// addi r10,r10,5236
	ctx.r10.s64 = ctx.r10.s64 + 5236;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// b 0x82cce7a4
	goto loc_82CCE7A4;
loc_82CCE6BC:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bge cr6,0x82cce720
	if (!ctx.cr6.lt) goto loc_82CCE720;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x82cce6e4
	if (!ctx.cr6.lt) goto loc_82CCE6E4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1108(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1108);
	// b 0x82cce708
	goto loc_82CCE708;
loc_82CCE6E4:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82cce700
	if (!ctx.cr6.lt) goto loc_82CCE700;
	// rlwinm r10,r10,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1108(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1108);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// b 0x82cce708
	goto loc_82CCE708;
loc_82CCE700:
	// rlwinm r10,r10,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// addi r10,r10,34
	ctx.r10.s64 = ctx.r10.s64 + 34;
loc_82CCE708:
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,5492
	ctx.r10.s64 = ctx.r10.s64 + 5492;
	// b 0x82cce780
	goto loc_82CCE780;
loc_82CCE720:
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x82cce738
	if (!ctx.cr6.lt) goto loc_82CCE738;
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1108(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1108);
	// b 0x82cce75c
	goto loc_82CCE75C;
loc_82CCE738:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82cce754
	if (!ctx.cr6.lt) goto loc_82CCE754;
	// rlwinm r10,r10,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1108(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1108);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// b 0x82cce75c
	goto loc_82CCE75C;
loc_82CCE754:
	// rlwinm r10,r10,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// addi r10,r10,34
	ctx.r10.s64 = ctx.r10.s64 + 34;
loc_82CCE75C:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,10998
	ctx.r9.s64 = ctx.r10.s64 + 10998;
	// lhz r9,10998(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10998);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,10998(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10998, ctx.r9.u16);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,7680
	ctx.r10.s64 = ctx.r10.s64 + 7680;
loc_82CCE780:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
loc_82CCE7A4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82cce678
	if (ctx.cr6.lt) goto loc_82CCE678;
loc_82CCE7B0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCE7B8"))) PPC_WEAK_FUNC(sub_82CCE7B8);
PPC_FUNC_IMPL(__imp__sub_82CCE7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CCE7C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r31,10472
	ctx.r3.s64 = ctx.r31.s64 + 10472;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CCE7E4;
	sub_82CA3190(ctx, base);
	// addi r3,r31,15374
	ctx.r3.s64 = ctx.r31.s64 + 15374;
	// li r5,996
	ctx.r5.s64 = 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CCE7F4;
	sub_82CA3190(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cce658
	ctx.lr = 0x82CCE808;
	sub_82CCE658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CCE810"))) PPC_WEAK_FUNC(sub_82CCE810);
PPC_FUNC_IMPL(__imp__sub_82CCE810) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cce658
	sub_82CCE658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCE814"))) PPC_WEAK_FUNC(sub_82CCE814);
PPC_FUNC_IMPL(__imp__sub_82CCE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE818"))) PPC_WEAK_FUNC(sub_82CCE818);
PPC_FUNC_IMPL(__imp__sub_82CCE818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CCE820;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-3360(r1)
	ea = -3360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,2152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r25,800
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 800, ctx.xer);
	// blt cr6,0x82cce858
	if (ctx.cr6.lt) goto loc_82CCE858;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cceb00
	goto loc_82CCEB00;
loc_82CCE858:
	// rlwinm r24,r11,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3190
	ctx.lr = 0x82CCE86C;
	sub_82CA3190(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82ca3190
	ctx.lr = 0x82CCE87C;
	sub_82CA3190(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ccea64
	if (ctx.cr6.eq) goto loc_82CCEA64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,8
	ctx.r3.s64 = 524288;
loc_82CCE89C:
	// rlwinm r11,r26,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r26,29
	ctx.r10.u64 = ctx.r26.u32 & 0x7;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cce8bc
	if (!ctx.cr0.eq) goto loc_82CCE8BC;
	// lbzx r11,r6,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// b 0x82cce964
	goto loc_82CCE964;
loc_82CCE8BC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbzx r9,r6,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bge cr6,0x82cce91c
	if (!ctx.cr6.lt) goto loc_82CCE91C;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82cce8e8
	if (!ctx.cr6.lt) goto loc_82CCE8E8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82cce90c
	goto loc_82CCE90C;
loc_82CCE8E8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82cce904
	if (!ctx.cr6.lt) goto loc_82CCE904;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82cce90c
	goto loc_82CCE90C;
loc_82CCE904:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCE90C:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82cce960
	goto loc_82CCE960;
loc_82CCE91C:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82cce934
	if (!ctx.cr6.lt) goto loc_82CCE934;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82cce958
	goto loc_82CCE958;
loc_82CCE934:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82cce950
	if (!ctx.cr6.lt) goto loc_82CCE950;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82cce958
	goto loc_82CCE958;
loc_82CCE950:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCE958:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,263
	ctx.r11.s64 = ctx.r11.s64 + 263;
loc_82CCE960:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82CCE964:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r27,29
	ctx.r9.u64 = ctx.r27.u32 & 0x7;
	// rlwinm r29,r27,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r28,r4,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbzx r29,r29,r5
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and. r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bne 0x82cce99c
	if (!ctx.cr0.eq) goto loc_82CCE99C;
	// lbzx r11,r6,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// b 0x82ccea44
	goto loc_82CCEA44;
loc_82CCE99C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbzx r9,r6,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bge cr6,0x82cce9fc
	if (!ctx.cr6.lt) goto loc_82CCE9FC;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82cce9c8
	if (!ctx.cr6.lt) goto loc_82CCE9C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82cce9ec
	goto loc_82CCE9EC;
loc_82CCE9C8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82cce9e4
	if (!ctx.cr6.lt) goto loc_82CCE9E4;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82cce9ec
	goto loc_82CCE9EC;
loc_82CCE9E4:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCE9EC:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82ccea40
	goto loc_82CCEA40;
loc_82CCE9FC:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x82ccea14
	if (!ctx.cr6.lt) goto loc_82CCEA14;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x82ccea38
	goto loc_82CCEA38;
loc_82CCEA14:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ccea30
	if (!ctx.cr6.lt) goto loc_82CCEA30;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x82ccea38
	goto loc_82CCEA38;
loc_82CCEA30:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82CCEA38:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,263
	ctx.r11.s64 = ctx.r11.s64 + 263;
loc_82CCEA40:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82CCEA44:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1680
	ctx.r10.s64 = ctx.r1.s64 + 1680;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bne 0x82cce89c
	if (!ctx.cr0.eq) goto loc_82CCE89C;
loc_82CCEA64:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cceb00
	if (ctx.cr6.eq) goto loc_82CCEB00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r11,r11,14336
	ctx.r11.s64 = ctx.r11.s64 + 14336;
loc_82CCEA80:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x82ccea9c
	if (!ctx.cr6.lt) goto loc_82CCEA9C;
	// lbzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// b 0x82cceaa8
	goto loc_82CCEAA8;
loc_82CCEA9C:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
loc_82CCEAA8:
	// addi r10,r1,1680
	ctx.r10.s64 = ctx.r1.s64 + 1680;
	// addi r6,r11,72
	ctx.r6.s64 = ctx.r11.s64 + 72;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x82cceac4
	if (!ctx.cr6.lt) goto loc_82CCEAC4;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// b 0x82ccead0
	goto loc_82CCEAD0;
loc_82CCEAC4:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82CCEAD0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bne 0x82ccea80
	if (!ctx.cr0.eq) goto loc_82CCEA80;
loc_82CCEB00:
	// addi r1,r1,3360
	ctx.r1.s64 = ctx.r1.s64 + 3360;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CCEB08"))) PPC_WEAK_FUNC(sub_82CCEB08);
PPC_FUNC_IMPL(__imp__sub_82CCEB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82CCEB10;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r5,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r5.u32);
	// beq cr6,0x82cceb30
	if (ctx.cr6.eq) goto loc_82CCEB30;
	// stw r6,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r6.u32);
loc_82CCEB30:
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// blt cr6,0x82ccecd0
	if (ctx.cr6.lt) goto loc_82CCECD0;
	// lbz r19,2161(r25)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2161);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// bge cr6,0x82ccecd0
	if (!ctx.cr6.lt) goto loc_82CCECD0;
	// rlwinm. r8,r5,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82cceb8c
	if (ctx.cr0.eq) goto loc_82CCEB8C;
	// lwz r7,44(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82CCEB60:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82cceb70
	if (!ctx.cr0.eq) goto loc_82CCEB70;
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82CCEB70:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbz r9,2162(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2162);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82cceb60
	if (ctx.cr6.lt) goto loc_82CCEB60;
loc_82CCEB8C:
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// addi r23,r5,-4096
	ctx.r23.s64 = ctx.r5.s64 + -4096;
	// rlwinm r22,r11,0,0,25
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r24,r22,2048
	ctx.r24.s64 = ctx.r22.s64 + 2048;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82ccecd0
	if (!ctx.cr6.lt) goto loc_82CCECD0;
	// addi r31,r24,1024
	ctx.r31.s64 = ctx.r24.s64 + 1024;
loc_82CCEBA8:
	// rlwinm r11,r31,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r24,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 27) & 0x7FFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x82cce818
	ctx.lr = 0x82CCEBD4;
	sub_82CCE818(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x82ccecc0
	if (!ctx.cr6.gt) goto loc_82CCECC0;
	// addi r5,r31,1024
	ctx.r5.s64 = ctx.r31.s64 + 1024;
	// addi r4,r31,-2048
	ctx.r4.s64 = ctx.r31.s64 + -2048;
	// rlwinm r11,r5,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r10,r4,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x82cce818
	ctx.lr = 0x82CCEC08;
	sub_82CCE818(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x82ccecc0
	if (!ctx.cr6.gt) goto loc_82CCECC0;
	// addi r5,r31,2048
	ctx.r5.s64 = ctx.r31.s64 + 2048;
	// addi r4,r31,-3072
	ctx.r4.s64 = ctx.r31.s64 + -3072;
	// rlwinm r11,r5,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r10,r4,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x82cce818
	ctx.lr = 0x82CCEC3C;
	sub_82CCE818(ctx, base);
	// cmplwi cr6,r3,1400
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1400, ctx.xer);
	// ble cr6,0x82ccecc0
	if (!ctx.cr6.gt) goto loc_82CCECC0;
	// addi r30,r31,-512
	ctx.r30.s64 = ctx.r31.s64 + -512;
	// addi r26,r31,1536
	ctx.r26.s64 = ctx.r31.s64 + 1536;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82ccecc0
	if (!ctx.cr6.lt) goto loc_82CCECC0;
	// addi r29,r31,-1536
	ctx.r29.s64 = ctx.r31.s64 + -1536;
loc_82CCEC60:
	// rlwinm r11,r30,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r29,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x82cce818
	ctx.lr = 0x82CCEC8C;
	sub_82CCE818(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82ccec9c
	if (!ctx.cr6.gt) goto loc_82CCEC9C;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82CCEC9C:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82ccec60
	if (ctx.cr6.lt) goto loc_82CCEC60;
	// cmplwi cr6,r28,1700
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1700, ctx.xer);
	// blt cr6,0x82ccecc0
	if (ctx.cr6.lt) goto loc_82CCECC0;
	// subf r11,r22,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r22.s64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82ccecdc
	if (!ctx.cr6.lt) goto loc_82CCECDC;
loc_82CCECC0:
	// addi r24,r24,1024
	ctx.r24.s64 = ctx.r24.s64 + 1024;
	// addi r31,r31,1024
	ctx.r31.s64 = ctx.r31.s64 + 1024;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82cceba8
	if (ctx.cr6.lt) goto loc_82CCEBA8;
loc_82CCECD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCECD4:
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_82CCECDC:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stb r11,2161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 2161, ctx.r11.u8);
	// stw r27,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82cced00
	if (ctx.cr6.eq) goto loc_82CCED00;
	// rlwinm r11,r27,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82CCED00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ccecd4
	goto loc_82CCECD4;
}

__attribute__((alias("__imp__sub_82CCED08"))) PPC_WEAK_FUNC(sub_82CCED08);
PPC_FUNC_IMPL(__imp__sub_82CCED08) {
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
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// lwz r11,9496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9496);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// lbz r11,9502(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9502);
	// bge cr6,0x82cced5c
	if (!ctx.cr6.lt) goto loc_82CCED5C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82cced44
	if (ctx.cr6.lt) goto loc_82CCED44;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82CCED44:
	// addi r11,r11,4730
	ctx.r11.s64 = ctx.r11.s64 + 4730;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// b 0x82cced98
	goto loc_82CCED98;
loc_82CCED5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,966
	ctx.r10.s64 = ctx.r30.s64 + 966;
	// stb r11,9502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9502, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82cced08
	ctx.lr = 0x82CCED78;
	sub_82CCED08(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,3866(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3866);
	// bl 0x82cced08
	ctx.lr = 0x82CCED8C;
	sub_82CCED08(ctx, base);
	// lbz r11,9502(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9502);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,9502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9502, ctx.r11.u8);
loc_82CCED98:
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

__attribute__((alias("__imp__sub_82CCEDB0"))) PPC_WEAK_FUNC(sub_82CCEDB0);
PPC_FUNC_IMPL(__imp__sub_82CCEDB0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCEDC4:
	// addi r10,r11,4730
	ctx.r10.s64 = ctx.r11.s64 + 4730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// ble cr6,0x82ccedc4
	if (!ctx.cr6.gt) goto loc_82CCEDC4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82cced08
	ctx.lr = 0x82CCEDEC;
	sub_82CCED08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82CCEDF4:
	// addi r8,r11,4730
	ctx.r8.s64 = ctx.r11.s64 + 4730;
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82ccedf4
	if (!ctx.cr0.eq) goto loc_82CCEDF4;
	// clrlwi. r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82cceea8
	if (ctx.cr0.eq) goto loc_82CCEEA8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82CCEE30:
	// lhz r7,9492(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 9492);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r8,15
	ctx.r8.s64 = 15;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r7,9492(r9)
	PPC_STORE_U16(ctx.r9.u32 + 9492, ctx.r7.u16);
loc_82CCEE44:
	// addi r7,r8,4730
	ctx.r7.s64 = ctx.r8.s64 + 4730;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x82ccee6c
	if (!ctx.cr0.eq) goto loc_82CCEE6C;
	// addi r10,r8,255
	ctx.r10.s64 = ctx.r8.s64 + 255;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// bne 0x82ccee44
	if (!ctx.cr0.eq) goto loc_82CCEE44;
	// b 0x82ccee98
	goto loc_82CCEE98;
loc_82CCEE6C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r10,4730
	ctx.r8.s64 = ctx.r10.s64 + 4730;
	// addi r10,r10,4731
	ctx.r10.s64 = ctx.r10.s64 + 4731;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// sthx r5,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u16);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
loc_82CCEE98:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bne 0x82ccee30
	if (!ctx.cr0.eq) goto loc_82CCEE30;
loc_82CCEEA8:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82CCEEB0:
	// addi r11,r7,4730
	ctx.r11.s64 = ctx.r7.s64 + 4730;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82cceedc
	goto loc_82CCEEDC;
loc_82CCEEC0:
	// lwz r8,2452(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2452);
	// lwz r6,2456(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2456);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// stbx r10,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u8);
	// lwz r8,2452(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2452);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r8,2452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2452, ctx.r8.u32);
loc_82CCEEDC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82cceec0
	if (!ctx.cr0.lt) goto loc_82CCEEC0;
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bne 0x82cceeb0
	if (!ctx.cr0.eq) goto loc_82CCEEB0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCEF08"))) PPC_WEAK_FUNC(sub_82CCEF08);
PPC_FUNC_IMPL(__imp__sub_82CCEF08) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lha r9,9500(r3)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 9500));
	// addi r10,r11,1230
	ctx.r10.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82ccefd8
	if (ctx.cr6.gt) goto loc_82CCEFD8;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_82CCEF40:
	// bge cr6,0x82ccef80
	if (!ctx.cr6.lt) goto loc_82CCEF80;
	// addi r9,r10,1231
	ctx.r9.s64 = ctx.r10.s64 + 1231;
	// lwz r8,2448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// addi r5,r10,1230
	ctx.r5.s64 = ctx.r10.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r3
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32));
	// lhax r5,r5,r3
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + ctx.r3.u32));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ccef80
	if (!ctx.cr6.gt) goto loc_82CCEF80;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82CCEF80:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r8,2448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// addi r9,r10,1230
	ctx.r9.s64 = ctx.r10.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82ccefd8
	if (!ctx.cr6.gt) goto loc_82CCEFD8;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1230
	ctx.r8.s64 = ctx.r8.s64 + 1230;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sthx r9,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u16);
	// lha r9,9500(r3)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 9500));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ccef40
	if (!ctx.cr6.gt) goto loc_82CCEF40;
loc_82CCEFD8:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCEFF0"))) PPC_WEAK_FUNC(sub_82CCEFF0);
PPC_FUNC_IMPL(__imp__sub_82CCEFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CCEFF8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,9500(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 9500));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// b 0x82ccf028
	goto loc_82CCF028;
loc_82CCF018:
	// bl 0x82ccef08
	ctx.lr = 0x82CCF01C;
	sub_82CCEF08(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82CCF028:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x82ccf018
	if (!ctx.cr6.lt) goto loc_82CCF018;
	// stw r25,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r25.u32);
loc_82CCF034:
	// lhz r26,2462(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2462);
	// lwz r11,9496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9496);
	// extsh r31,r26
	ctx.r31.s64 = ctx.r26.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ccf05c
	if (!ctx.cr6.lt) goto loc_82CCF05C;
	// lwz r11,2452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// lwz r11,2452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r11.u32);
loc_82CCF05C:
	// lha r11,9500(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 9500));
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1230
	ctx.r10.s64 = ctx.r11.s64 + 1230;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sth r11,9500(r3)
	PPC_STORE_U16(ctx.r3.u32 + 9500, ctx.r11.u16);
	// sth r10,2462(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2462, ctx.r10.u16);
	// bl 0x82ccef08
	ctx.lr = 0x82CCF080;
	sub_82CCEF08(ctx, base);
	// lwz r10,9496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9496);
	// lhz r27,2462(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2462);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ccf0a8
	if (!ctx.cr6.lt) goto loc_82CCF0A8;
	// lwz r10,2452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r27.u16);
	// lwz r10,2452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r10.u32);
loc_82CCF0A8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lhzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r11,r9,r28
	PPC_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r11.u16);
	// sth r30,2462(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2462, ctx.r30.u16);
	// bl 0x82ccef08
	ctx.lr = 0x82CCF0E0;
	sub_82CCEF08(ctx, base);
	// addi r10,r31,966
	ctx.r10.s64 = ctx.r31.s64 + 966;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sthx r26,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r26.u16);
	// sth r27,3866(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3866, ctx.r27.u16);
	// lha r11,9500(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 9500));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82ccf034
	if (ctx.cr6.gt) goto loc_82CCF034;
	// stw r25,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ccedb0
	ctx.lr = 0x82CCF110;
	sub_82CCEDB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CCF118"))) PPC_WEAK_FUNC(sub_82CCF118);
PPC_FUNC_IMPL(__imp__sub_82CCF118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CCF120;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CCF140:
	// stw r29,9496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9496, ctx.r29.u32);
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// stw r5,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r5.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2456, ctx.r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r30,9502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9502, ctx.r30.u8);
	// sth r30,9500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9500, ctx.r30.u16);
	// sth r30,2462(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2462, ctx.r30.u16);
	// ble cr6,0x82ccf1b8
	if (!ctx.cr6.gt) goto loc_82CCF1B8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CCF16C:
	// lwz r9,2456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2456);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
	// lhzx r9,r7,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ccf1a4
	if (ctx.cr0.eq) goto loc_82CCF1A4;
	// lhz r9,9500(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9500);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// sth r7,9500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9500, ctx.r7.u16);
	// addi r9,r9,1230
	ctx.r9.s64 = ctx.r9.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u16);
loc_82CCF1A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82ccf16c
	if (ctx.cr6.lt) goto loc_82CCF16C;
loc_82CCF1B8:
	// lha r11,9500(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 9500));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82ccf1fc
	if (!ctx.cr6.lt) goto loc_82CCF1FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ccf1ec
	if (ctx.cr6.eq) goto loc_82CCF1EC;
	// lhz r11,2462(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2462);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ccf1e4
	if (!ctx.cr6.eq) goto loc_82CCF1E4;
	// sth r8,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r8.u16);
	// b 0x82ccf140
	goto loc_82CCF140;
loc_82CCF1E4:
	// sth r8,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// b 0x82ccf140
	goto loc_82CCF140;
loc_82CCF1EC:
	// lha r11,2462(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 2462));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r26
	PPC_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r30.u16);
	// b 0x82ccf29c
	goto loc_82CCF29C;
loc_82CCF1FC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cceff0
	ctx.lr = 0x82CCF208;
	sub_82CCEFF0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ccf29c
	if (ctx.cr0.eq) goto loc_82CCF29C;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// addi r9,r31,9462
	ctx.r9.s64 = ctx.r31.s64 + 9462;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82CCF224:
	// lhz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,1,16,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82ccf224
	if (!ctx.cr0.eq) goto loc_82CCF224;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82ccf29c
	if (!ctx.cr6.gt) goto loc_82CCF29C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82CCF258:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u16);
	// blt cr6,0x82ccf258
	if (ctx.cr6.lt) goto loc_82CCF258;
loc_82CCF29C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CCF2A4"))) PPC_WEAK_FUNC(sub_82CCF2A4);
PPC_FUNC_IMPL(__imp__sub_82CCF2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCF2A8"))) PPC_WEAK_FUNC(sub_82CCF2A8);
PPC_FUNC_IMPL(__imp__sub_82CCF2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82CCF2B0;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r21,r25,11012
	ctx.r21.s64 = ctx.r25.s64 + 11012;
	// add r22,r27,r5
	ctx.r22.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lwz r30,11012(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11012);
	// lwz r11,11016(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11016);
	// lwz r24,0(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r20,4(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccf2e4
	if (ctx.cr6.lt) goto loc_82CCF2E4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82CCF2E4:
	// add r29,r24,r27
	ctx.r29.u64 = ctx.r24.u64 + ctx.r27.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// add r23,r22,r24
	ctx.r23.u64 = ctx.r22.u64 + ctx.r24.u64;
	// add r26,r29,r5
	ctx.r26.u64 = ctx.r29.u64 + ctx.r5.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ccf324
	if (ctx.cr6.lt) goto loc_82CCF324;
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccf324
	if (!ctx.cr6.lt) goto loc_82CCF324;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ccf3dc
	if (ctx.cr6.lt) goto loc_82CCF3DC;
	// rlwinm r11,r5,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82ccf3d4
	goto loc_82CCF3D4;
loc_82CCF324:
	// rlwinm r11,r5,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r5,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ccf3d4
	if (!ctx.cr6.lt) goto loc_82CCF3D4;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
loc_82CCF348:
	// li r5,128
	ctx.r5.s64 = 128;
	// dcbt r5,r30
	// dcbt r5,r31
	// lvrx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v61
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lvrx128 v60,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v61,v60
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// lvrx128 v59,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v60,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// stvlx128 v63,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v60,v60,v59
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// stvrx128 v63,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ccf348
	if (ctx.cr6.lt) goto loc_82CCF348;
	// b 0x82ccf3d4
	goto loc_82CCF3D4;
loc_82CCF3B8:
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_82CCF3D4:
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ccf3b8
	if (ctx.cr6.lt) goto loc_82CCF3B8;
loc_82CCF3DC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82ccf400
	if (!ctx.cr6.lt) goto loc_82CCF400;
	// subf r28,r31,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r31.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca30e8
	ctx.lr = 0x82CCF3F8;
	sub_82CA30E8(ctx, base);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
loc_82CCF400:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x82ccf418
	if (ctx.cr6.eq) goto loc_82CCF418;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccf460
	goto loc_82CCF460;
loc_82CCF418:
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r22,257
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 257, ctx.xer);
	// li r10,257
	ctx.r10.s64 = 257;
	// bgt cr6,0x82ccf42c
	if (ctx.cr6.gt) goto loc_82CCF42C;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82CCF42C:
	// add r11,r27,r20
	ctx.r11.u64 = ctx.r27.u64 + ctx.r20.u64;
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ccf450
	if (!ctx.cr6.lt) goto loc_82CCF450;
	// subf r4,r20,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r20.s64;
	// subf r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	// bl 0x82ca30e8
	ctx.lr = 0x82CCF450;
	sub_82CA30E8(ctx, base);
loc_82CCF450:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// subf r3,r22,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r22.s64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// stw r11,11960(r25)
	PPC_STORE_U32(ctx.r25.u32 + 11960, ctx.r11.u32);
loc_82CCF460:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82CCF468"))) PPC_WEAK_FUNC(sub_82CCF468);
PPC_FUNC_IMPL(__imp__sub_82CCF468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// lwz r10,11016(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r11.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ccf490
	if (ctx.cr6.lt) goto loc_82CCF490;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CCF490:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82CCF494:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82ccf494
	if (!ctx.cr0.eq) goto loc_82CCF494;
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCF4DC"))) PPC_WEAK_FUNC(sub_82CCF4DC);
PPC_FUNC_IMPL(__imp__sub_82CCF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCF4E0"))) PPC_WEAK_FUNC(sub_82CCF4E0);
PPC_FUNC_IMPL(__imp__sub_82CCF4E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82CCF4E8;
	sub_82CA2BC4(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r25,r11,3644
	ctx.r25.s64 = ctx.r11.s64 + 3644;
	// addi r24,r11,9020
	ctx.r24.s64 = ctx.r11.s64 + 9020;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// lwz r21,11016(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r22,r11,2072
	ctx.r22.s64 = ctx.r11.s64 + 2072;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r11,2584
	ctx.r27.s64 = ctx.r11.s64 + 2584;
	// lbz r8,11956(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r26,r11,3256
	ctx.r26.s64 = ctx.r11.s64 + 3256;
	// lwz r10,11952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lwz r5,11012(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11012);
	// b 0x82ccf77c
	goto loc_82CCF77C;
loc_82CCF524:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r23
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82ccf564
	if (!ctx.cr0.lt) goto loc_82CCF564;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_82CCF538:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r25
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + ctx.r25.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82ccf538
	if (ctx.cr0.lt) goto loc_82CCF538;
loc_82CCF564:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82ccf798
	if (!ctx.cr6.lt) goto loc_82CCF798;
	// lbzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82ccf5ac
	if (ctx.cr0.gt) goto loc_82CCF5AC;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r3,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CCF5AC:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x82ccf5d0
	if (!ctx.cr0.lt) goto loc_82CCF5D0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stbx r7,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82ccf77c
	goto loc_82CCF77C;
loc_82CCF5D0:
	// clrlwi r3,r6,29
	ctx.r3.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82ccf660
	if (!ctx.cr6.eq) goto loc_82CCF660;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r22
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r22.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82ccf61c
	if (!ctx.cr0.lt) goto loc_82CCF61C;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82CCF5F0:
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r3,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r24
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r24.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82ccf5f0
	if (ctx.cr0.lt) goto loc_82CCF5F0;
loc_82CCF61C:
	// lbzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x82ccf65c
	if (ctx.cr0.gt) goto loc_82CCF65C;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = -ctx.r7.s64;
	// lbz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r31,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82CCF65C:
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
loc_82CCF660:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x82ccf724
	if (!ctx.cr6.gt) goto loc_82CCF724;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82ccf70c
	if (!ctx.cr6.gt) goto loc_82CCF70C;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfic r6,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r31.s64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// bgt 0x82ccf6f8
	if (ctx.cr0.gt) goto loc_82CCF6F8;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addi r31,r9,16
	ctx.r31.s64 = ctx.r9.s64 + 16;
	// neg r19,r9
	ctx.r19.s64 = -ctx.r9.s64;
	// lbz r20,0(r5)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// or r31,r9,r20
	ctx.r31.u64 = ctx.r9.u64 | ctx.r20.u64;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r31,r31,r19
	ctx.r31.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r19.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x82ccf6f8
	if (ctx.cr0.gt) goto loc_82CCF6F8;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r31,r9
	ctx.r31.s64 = -ctx.r9.s64;
	// lbz r20,0(r5)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r20,r8,r20
	ctx.r20.u64 = ctx.r8.u64 | ctx.r20.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r20,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CCF6F8:
	// addi r9,r7,3014
	ctx.r9.s64 = ctx.r7.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x82ccf710
	goto loc_82CCF710;
loc_82CCF70C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CCF710:
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// b 0x82ccf73c
	goto loc_82CCF73C;
loc_82CCF724:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r6,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// beq cr6,0x82ccf740
	if (ctx.cr6.eq) goto loc_82CCF740;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r7,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r7.u32);
loc_82CCF73C:
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82CCF740:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82CCF74C:
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ctx.r31.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// stbx r9,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u8);
	// bge cr6,0x82ccf76c
	if (!ctx.cr6.lt) goto loc_82CCF76C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stbx r9,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u8);
loc_82CCF76C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x82ccf74c
	if (ctx.cr0.gt) goto loc_82CCF74C;
loc_82CCF77C:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82ccf524
	if (ctx.cr6.lt) goto loc_82CCF524;
	// stb r8,11956(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11956, ctx.r8.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r5,11012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11012, ctx.r5.u32);
loc_82CCF794:
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_82CCF798:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccf794
	goto loc_82CCF794;
}

__attribute__((alias("__imp__sub_82CCF7A0"))) PPC_WEAK_FUNC(sub_82CCF7A0);
PPC_FUNC_IMPL(__imp__sub_82CCF7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82CCF7A8;
	sub_82CA2BB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r26,r11,11956
	ctx.r26.s64 = ctx.r11.s64 + 11956;
	// addi r25,r11,11952
	ctx.r25.s64 = ctx.r11.s64 + 11952;
	// addi r24,r11,11012
	ctx.r24.s64 = ctx.r11.s64 + 11012;
	// lwz r16,11016(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r20,r11,3644
	ctx.r20.s64 = ctx.r11.s64 + 3644;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r11,9020
	ctx.r19.s64 = ctx.r11.s64 + 9020;
	// lbz r31,11956(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r18,r11,24
	ctx.r18.s64 = ctx.r11.s64 + 24;
	// lwz r9,11952(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r17,r11,2072
	ctx.r17.s64 = ctx.r11.s64 + 2072;
	// lwz r30,11012(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11012);
	// addi r22,r11,2584
	ctx.r22.s64 = ctx.r11.s64 + 2584;
	// addi r21,r11,3256
	ctx.r21.s64 = ctx.r11.s64 + 3256;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82ccfaf0
	if (!ctx.cr6.lt) goto loc_82CCFAF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r23,16
	ctx.r23.s64 = 16;
	// addi r10,r10,14672
	ctx.r10.s64 = ctx.r10.s64 + 14672;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82CCF804:
	// rlwinm r10,r9,11,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FE;
	// lhax r8,r10,r18
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82ccf844
	if (!ctx.cr0.lt) goto loc_82CCF844;
	// lis r10,32
	ctx.r10.s64 = 2097152;
loc_82CCF818:
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r20
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r20.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82ccf818
	if (ctx.cr0.lt) goto loc_82CCF818;
loc_82CCF844:
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82ccfb10
	if (!ctx.cr6.lt) goto loc_82CCFB10;
	// lbzx r10,r8,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r22.u32);
	// subf r7,r10,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r10.s64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r31,r7
	ctx.r31.s64 = ctx.r7.s8;
	// mr. r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82ccf88c
	if (ctx.cr0.gt) goto loc_82CCF88C;
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// slw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82CCF88C:
	// addic. r7,r8,-256
	ctx.xer.ca = ctx.r8.u32 > 255;
	ctx.r7.s64 = ctx.r8.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82ccf8a0
	if (!ctx.cr0.lt) goto loc_82CCF8A0;
	// stbx r7,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82ccfae8
	goto loc_82CCFAE8;
loc_82CCF8A0:
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// bne cr6,0x82ccf930
	if (!ctx.cr6.eq) goto loc_82CCF930;
	// rlwinm r10,r9,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FE;
	// lhax r10,r10,r17
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r17.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82ccf8ec
	if (!ctx.cr0.lt) goto loc_82CCF8EC;
	// lis r8,128
	ctx.r8.s64 = 8388608;
loc_82CCF8C0:
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r19
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r19.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82ccf8c0
	if (ctx.cr0.lt) goto loc_82CCF8C0;
loc_82CCF8EC:
	// lbzx r8,r10,r21
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// subf r6,r8,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r8.s64;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsb r31,r6
	ctx.r31.s64 = ctx.r6.s8;
	// mr. r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x82ccf92c
	if (ctx.cr0.gt) goto loc_82CCF92C;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// slw r8,r6,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82CCF92C:
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
loc_82CCF930:
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// ble cr6,0x82ccf9f4
	if (!ctx.cr6.gt) goto loc_82CCF9F4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// ble cr6,0x82ccf9dc
	if (!ctx.cr6.gt) goto loc_82CCF9DC;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r10,12004(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12004);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subfic r7,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r3.s64;
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r9,r9,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82ccf9c8
	if (ctx.cr0.gt) goto loc_82CCF9C8;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// neg r14,r10
	ctx.r14.s64 = -ctx.r10.s64;
	// lbz r15,0(r30)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// or r5,r10,r15
	ctx.r5.u64 = ctx.r10.u64 | ctx.r15.u64;
	// mr. r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r5,r5,r14
	ctx.r5.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r14.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bgt 0x82ccf9c8
	if (ctx.cr0.gt) goto loc_82CCF9C8;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// slw r10,r5,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82CCF9C8:
	// addi r10,r8,3014
	ctx.r10.s64 = ctx.r8.s64 + 3014;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x82ccf9e0
	goto loc_82CCF9E0;
loc_82CCF9DC:
	// lwz r8,12068(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12068);
loc_82CCF9E0:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// b 0x82ccfa0c
	goto loc_82CCFA0C;
loc_82CCF9F4:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// beq cr6,0x82ccfa10
	if (ctx.cr6.eq) goto loc_82CCFA10;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r7,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r7.u32);
loc_82CCFA0C:
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_82CCFA10:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// blt cr6,0x82ccfa30
	if (ctx.cr6.lt) goto loc_82CCFA30;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_82CCFA30:
	// subf r6,r8,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82ccfa5c
	if (!ctx.cr6.lt) goto loc_82CCFA5C;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
loc_82CCFA40:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r7,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x82ccfa40
	if (ctx.cr0.gt) goto loc_82CCFA40;
	// b 0x82ccfae8
	goto loc_82CCFAE8;
loc_82CCFA5C:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x82ccfaac
	if (!ctx.cr6.gt) goto loc_82CCFAAC;
	// addi r7,r10,-17
	ctx.r7.s64 = ctx.r10.s64 + -17;
	// add r3,r29,r4
	ctx.r3.u64 = ctx.r29.u64 + ctx.r4.u64;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_82CCFA88:
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lvrx128 v62,r23,r5
	temp.u32 = ctx.r23.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r23
	ea = ctx.r3.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x82ccfa88
	if (!ctx.cr0.eq) goto loc_82CCFA88;
loc_82CCFAAC:
	// add r7,r29,r4
	ctx.r7.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lvrx128 v63,r23,r7
	temp.u32 = ctx.r23.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r23,r8
	temp.u32 = ctx.r23.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v62,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lvsr v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v11,v60,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcmpgtub v12,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_cmpgt_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsel v13,v11,v13,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvlx v13,r29,r4
	ea = ctx.r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvrx v13,r7,r23
	ea = ctx.r7.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
loc_82CCFAE8:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82ccf804
	if (ctx.cr6.lt) goto loc_82CCF804;
loc_82CCFAF0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r28.s64;
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r10,11960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11960, ctx.r10.u32);
loc_82CCFB0C:
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82CCFB10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccfb0c
	goto loc_82CCFB0C;
}

__attribute__((alias("__imp__sub_82CCFB18"))) PPC_WEAK_FUNC(sub_82CCFB18);
PPC_FUNC_IMPL(__imp__sub_82CCFB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CCFB20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,257
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 257, ctx.xer);
	// bge cr6,0x82ccfb70
	if (!ctx.cr6.lt) goto loc_82CCFB70;
	// subfic r5,r30,257
	ctx.xer.ca = ctx.r30.u32 <= 257;
	ctx.r5.s64 = 257 - ctx.r30.s64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82ccfb48
	if (ctx.cr6.lt) goto loc_82CCFB48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82CCFB48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccf4e0
	ctx.lr = 0x82CCFB54;
	sub_82CCF4E0(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// stw r3,11960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt 0x82ccfb70
	if (ctx.cr0.gt) goto loc_82CCFB70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ccfb80
	goto loc_82CCFB80;
loc_82CCFB70:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccf7a0
	ctx.lr = 0x82CCFB80;
	sub_82CCF7A0(ctx, base);
loc_82CCFB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CCFB88"))) PPC_WEAK_FUNC(sub_82CCFB88);
PPC_FUNC_IMPL(__imp__sub_82CCFB88) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82CCFB90;
	sub_82CA2BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r26,r4,r5
	ctx.r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r23,r11,3644
	ctx.r23.s64 = ctx.r11.s64 + 3644;
	// addi r22,r11,9020
	ctx.r22.s64 = ctx.r11.s64 + 9020;
	// addi r21,r11,24
	ctx.r21.s64 = ctx.r11.s64 + 24;
	// lwz r19,11016(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r20,r11,2072
	ctx.r20.s64 = ctx.r11.s64 + 2072;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r11,2584
	ctx.r25.s64 = ctx.r11.s64 + 2584;
	// lbz r9,11956(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r24,r11,3256
	ctx.r24.s64 = ctx.r11.s64 + 3256;
	// lwz r10,11952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r28,r11,3508
	ctx.r28.s64 = ctx.r11.s64 + 3508;
	// lwz r31,11012(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11012);
	// addi r27,r11,3636
	ctx.r27.s64 = ctx.r11.s64 + 3636;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// b 0x82ccfed8
	goto loc_82CCFED8;
loc_82CCFBD4:
	// rlwinm r8,r10,11,21,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r8,r21
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r21.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82ccfc14
	if (!ctx.cr0.lt) goto loc_82CCFC14;
	// lis r8,32
	ctx.r8.s64 = 2097152;
loc_82CCFBE8:
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r23
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + ctx.r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82ccfbe8
	if (ctx.cr0.lt) goto loc_82CCFBE8;
loc_82CCFC14:
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82ccfef4
	if (!ctx.cr6.lt) goto loc_82CCFEF4;
	// lbzx r8,r7,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x82ccfc5c
	if (ctx.cr0.gt) goto loc_82CCFC5C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r5,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82CCFC5C:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x82ccfc80
	if (!ctx.cr0.lt) goto loc_82CCFC80;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stbx r7,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82ccfed8
	goto loc_82CCFED8;
loc_82CCFC80:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x82ccfd10
	if (!ctx.cr6.eq) goto loc_82CCFD10;
	// rlwinm r8,r10,9,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r8,r8,r20
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r20.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82ccfccc
	if (!ctx.cr0.lt) goto loc_82CCFCCC;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82CCFCA0:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r22
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r22.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82ccfca0
	if (ctx.cr0.lt) goto loc_82CCFCA0;
loc_82CCFCCC:
	// lbzx r7,r8,r24
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r24.u32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x82ccfd0c
	if (ctx.cr0.gt) goto loc_82CCFD0C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = -ctx.r7.s64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82CCFD0C:
	// addi r5,r8,7
	ctx.r5.s64 = ctx.r8.s64 + 7;
loc_82CCFD10:
	// srawi r8,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82ccfe88
	if (!ctx.cr6.gt) goto loc_82CCFE88;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82ccfe08
	if (ctx.cr6.lt) goto loc_82CCFE08;
	// addic. r7,r7,-3
	ctx.xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82ccfd98
	if (ctx.cr0.eq) goto loc_82CCFD98;
	// lbz r8,12004(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r7,r9,35
	ctx.xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.s64 = 35 - ctx.r9.s64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82ccfd9c
	if (ctx.cr0.gt) goto loc_82CCFD9C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r18,r9,r18
	ctx.r18.u64 = ctx.r9.u64 | ctx.r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x82ccfd9c
	goto loc_82CCFD9C;
loc_82CCFD98:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82CCFD9C:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// subf r8,r9,r18
	ctx.r8.s64 = ctx.r18.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x82ccfe00
	if (ctx.cr0.gt) goto loc_82CCFE00;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r18,r9,r18
	ctx.r18.u64 = ctx.r9.u64 | ctx.r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82CCFE00:
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x82ccfe74
	goto loc_82CCFE74;
loc_82CCFE08:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ccfe70
	if (ctx.cr6.eq) goto loc_82CCFE70;
	// lbz r8,12004(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfic r8,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r3.s64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82ccfe5c
	if (ctx.cr0.gt) goto loc_82CCFE5C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r18,r9,r18
	ctx.r18.u64 = ctx.r9.u64 | ctx.r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82CCFE5C:
	// addi r8,r6,3014
	ctx.r8.s64 = ctx.r6.s64 + 3014;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// b 0x82ccfe74
	goto loc_82CCFE74;
loc_82CCFE70:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CCFE74:
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// b 0x82ccfe98
	goto loc_82CCFE98;
loc_82CCFE88:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r8,r7,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// stwx r6,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r6.u32);
loc_82CCFE98:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_82CCFEA8:
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stbx r8,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// bge cr6,0x82ccfec8
	if (!ctx.cr6.lt) goto loc_82CCFEC8;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stbx r8,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u8);
loc_82CCFEC8:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x82ccfea8
	if (ctx.cr0.gt) goto loc_82CCFEA8;
loc_82CCFED8:
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ccfbd4
	if (ctx.cr6.lt) goto loc_82CCFBD4;
	// stb r9,11956(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11956, ctx.r9.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r31,11012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11012, ctx.r31.u32);
loc_82CCFEF0:
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_82CCFEF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ccfef0
	goto loc_82CCFEF0;
}

__attribute__((alias("__imp__sub_82CCFEFC"))) PPC_WEAK_FUNC(sub_82CCFEFC);
PPC_FUNC_IMPL(__imp__sub_82CCFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCFF00"))) PPC_WEAK_FUNC(sub_82CCFF00);
PPC_FUNC_IMPL(__imp__sub_82CCFF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82CCFF08;
	sub_82CA2BB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r26,r11,11956
	ctx.r26.s64 = ctx.r11.s64 + 11956;
	// addi r25,r11,11952
	ctx.r25.s64 = ctx.r11.s64 + 11952;
	// addi r24,r11,11012
	ctx.r24.s64 = ctx.r11.s64 + 11012;
	// lwz r14,11016(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r18,r11,3644
	ctx.r18.s64 = ctx.r11.s64 + 3644;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r17,r11,9020
	ctx.r17.s64 = ctx.r11.s64 + 9020;
	// lbz r8,11956(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r16,r11,24
	ctx.r16.s64 = ctx.r11.s64 + 24;
	// lwz r10,11952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r15,r11,2072
	ctx.r15.s64 = ctx.r11.s64 + 2072;
	// lwz r30,11012(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11012);
	// addi r20,r11,2584
	ctx.r20.s64 = ctx.r11.s64 + 2584;
	// addi r19,r11,3256
	ctx.r19.s64 = ctx.r11.s64 + 3256;
	// addi r23,r11,3508
	ctx.r23.s64 = ctx.r11.s64 + 3508;
	// addi r22,r11,3636
	ctx.r22.s64 = ctx.r11.s64 + 3636;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82cd0300
	if (!ctx.cr6.lt) goto loc_82CD0300;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r21,16
	ctx.r21.s64 = 16;
	// addi r9,r9,14672
	ctx.r9.s64 = ctx.r9.s64 + 14672;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82CCFF6C:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r16
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r16.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82ccffac
	if (!ctx.cr0.lt) goto loc_82CCFFAC;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_82CCFF80:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r18
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + ctx.r18.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82ccff80
	if (ctx.cr0.lt) goto loc_82CCFF80;
loc_82CCFFAC:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x82cd0320
	if (!ctx.cr6.lt) goto loc_82CD0320;
	// lbzx r9,r7,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r20.u32);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82ccfff4
	if (ctx.cr0.gt) goto loc_82CCFFF4;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CCFFF4:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x82cd0008
	if (!ctx.cr0.lt) goto loc_82CD0008;
	// stbx r6,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82cd02f8
	goto loc_82CD02F8;
loc_82CD0008:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x82cd0098
	if (!ctx.cr6.eq) goto loc_82CD0098;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r15
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r15.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82cd0054
	if (!ctx.cr0.lt) goto loc_82CD0054;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82CD0028:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r17
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r17.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82cd0028
	if (ctx.cr0.lt) goto loc_82CD0028;
loc_82CD0054:
	// lbzx r7,r9,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x82cd0094
	if (ctx.cr0.gt) goto loc_82CD0094;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = -ctx.r7.s64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82CD0094:
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
loc_82CD0098:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82cd0214
	if (!ctx.cr6.gt) goto loc_82CD0214;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82cd018c
	if (ctx.cr6.lt) goto loc_82CD018C;
	// addic. r7,r7,-3
	ctx.xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82cd011c
	if (ctx.cr0.eq) goto loc_82CD011C;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfic r7,r9,35
	ctx.xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.s64 = 35 - ctx.r9.s64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd0120
	if (ctx.cr0.gt) goto loc_82CD0120;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82cd0120
	goto loc_82CD0120;
loc_82CD011C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82CD0120:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r23
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r7,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd0184
	if (ctx.cr0.gt) goto loc_82CD0184;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD0184:
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x82cd0200
	goto loc_82CD0200;
loc_82CD018C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82cd01f4
	if (ctx.cr6.eq) goto loc_82CD01F4;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfic r7,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r3.s64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82cd01e0
	if (ctx.cr0.gt) goto loc_82CD01E0;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD01E0:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x82cd0200
	goto loc_82CD0200;
loc_82CD01F4:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82CD0200:
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// b 0x82cd0224
	goto loc_82CD0224;
loc_82CD0214:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// stwx r6,r7,r27
	PPC_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r6.u32);
loc_82CD0224:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r6,r9,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82cd026c
	if (!ctx.cr6.lt) goto loc_82CD026C;
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// bge cr6,0x82cd026c
	if (!ctx.cr6.lt) goto loc_82CD026C;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
loc_82CD0250:
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r6,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x82cd0250
	if (ctx.cr0.gt) goto loc_82CD0250;
	// b 0x82cd02f8
	goto loc_82CD02F8;
loc_82CD026C:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x82cd02bc
	if (!ctx.cr6.gt) goto loc_82CD02BC;
	// addi r6,r9,-17
	ctx.r6.s64 = ctx.r9.s64 + -17;
	// add r31,r29,r4
	ctx.r31.u64 = ctx.r29.u64 + ctx.r4.u64;
	// rlwinm r6,r6,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// add r3,r7,r29
	ctx.r3.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
loc_82CD0298:
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvrx128 v62,r21,r3
	temp.u32 = ctx.r21.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r21
	ea = ctx.r31.u32 + ctx.r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82cd0298
	if (!ctx.cr0.eq) goto loc_82CD0298;
loc_82CD02BC:
	// add r6,r29,r4
	ctx.r6.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvrx128 v63,r21,r6
	temp.u32 = ctx.r21.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r21,r7
	temp.u32 = ctx.r21.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v62,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lvsr v12,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v11,v60,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcmpgtub v12,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_cmpgt_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsel v13,v11,v13,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvlx v13,r29,r4
	ea = ctx.r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvrx v13,r6,r21
	ea = ctx.r6.u32 + ctx.r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
loc_82CD02F8:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82ccff6c
	if (ctx.cr6.lt) goto loc_82CCFF6C;
loc_82CD0300:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r28.s64;
	// stb r8,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r8.u8);
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r9,11960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11960, ctx.r9.u32);
loc_82CD031C:
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82CD0320:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cd031c
	goto loc_82CD031C;
}

__attribute__((alias("__imp__sub_82CD0328"))) PPC_WEAK_FUNC(sub_82CD0328);
PPC_FUNC_IMPL(__imp__sub_82CD0328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD0330;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,257
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 257, ctx.xer);
	// bge cr6,0x82cd0380
	if (!ctx.cr6.lt) goto loc_82CD0380;
	// subfic r5,r30,257
	ctx.xer.ca = ctx.r30.u32 <= 257;
	ctx.r5.s64 = 257 - ctx.r30.s64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82cd0358
	if (ctx.cr6.lt) goto loc_82CD0358;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82CD0358:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccfb88
	ctx.lr = 0x82CD0364;
	sub_82CCFB88(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// stw r3,11960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt 0x82cd0380
	if (ctx.cr0.gt) goto loc_82CD0380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cd0390
	goto loc_82CD0390;
loc_82CD0380:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccff00
	ctx.lr = 0x82CD0390;
	sub_82CCFF00(ctx, base);
loc_82CD0390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD0398"))) PPC_WEAK_FUNC(sub_82CD0398);
PPC_FUNC_IMPL(__imp__sub_82CD0398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CD03A0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r31,11020(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11020);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cd0434
	if (ctx.cr6.eq) goto loc_82CD0434;
	// lwz r11,11964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cd03d8
	if (ctx.cr6.eq) goto loc_82CD03D8;
	// lwz r11,11972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11972);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82cd03dc
	if (ctx.cr6.lt) goto loc_82CD03DC;
loc_82CD03D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82CD03DC:
	// lbz r11,12260(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd03f8
	if (ctx.cr0.eq) goto loc_82CD03F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82cd043c
	if (ctx.cr6.eq) goto loc_82CD043C;
	// lwz r31,12264(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12264);
loc_82CD03F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822085d0
	ctx.lr = 0x82CD0400;
	sub_822085D0(ctx, base);
loc_82CD0400:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82cd0434
	if (ctx.cr6.eq) goto loc_82CD0434;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccd1f8
	ctx.lr = 0x82CD0418;
	sub_82CCD1F8(ctx, base);
	// lbz r11,12260(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12260);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd0434
	if (ctx.cr0.eq) goto loc_82CD0434;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,11020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11020);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82179920
	ctx.lr = 0x82CD0434;
	sub_82179920(ctx, base);
loc_82CD0434:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82CD043C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179920
	ctx.lr = 0x82CD0444;
	sub_82179920(ctx, base);
	// b 0x82cd0400
	goto loc_82CD0400;
}

__attribute__((alias("__imp__sub_82CD0448"))) PPC_WEAK_FUNC(sub_82CD0448);
PPC_FUNC_IMPL(__imp__sub_82CD0448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CD0450;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CD0468:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CD0474;
	sub_82CCD730(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x82cd0468
	if (ctx.cr6.lt) goto loc_82CD0468;
	// lbz r11,11959(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11959);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd049c
	if (ctx.cr0.eq) goto loc_82CD049C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cd097c
	goto loc_82CD097C;
loc_82CD049C:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd0af0
	ctx.lr = 0x82CD04B8;
	sub_82CD0AF0(ctx, base);
	// lwz r11,11012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11012);
	// lwz r10,11952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11952);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r6,11956(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11956);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r3,11959(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11959);
	// lwz r31,11016(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// ble cr6,0x82cd0960
	if (!ctx.cr6.gt) goto loc_82CD0960;
loc_82CD04D8:
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh. r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82cd0528
	if (!ctx.cr0.lt) goto loc_82CD0528;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82CD04F0:
	// neg r9,r8
	ctx.r9.s64 = -ctx.r8.s64;
	// and r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh. r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82cd04f0
	if (ctx.cr0.lt) goto loc_82CD04F0;
loc_82CD0528:
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// subf r7,r9,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd05b8
	if (ctx.cr0.gt) goto loc_82CD05B8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cd0588
	if (!ctx.cr6.lt) goto loc_82CD0588;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	ctx.r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r7,r26
	ctx.r7.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r26.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x82cd05b8
	if (ctx.cr0.gt) goto loc_82CD05B8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cd0590
	if (ctx.cr6.lt) goto loc_82CD0590;
loc_82CD0588:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cd05b8
	goto loc_82CD05B8;
loc_82CD0590:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// slw r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD05B8:
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82cd0960
	if (!ctx.cr0.eq) goto loc_82CD0960;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// bne cr6,0x82cd0690
	if (!ctx.cr6.eq) goto loc_82CD0690;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd0650
	if (ctx.cr0.gt) goto loc_82CD0650;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cd0620
	if (!ctx.cr6.lt) goto loc_82CD0620;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	ctx.r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r7,r26
	ctx.r7.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r26.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x82cd0650
	if (ctx.cr0.gt) goto loc_82CD0650;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cd0628
	if (ctx.cr6.lt) goto loc_82CD0628;
loc_82CD0620:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cd0650
	goto loc_82CD0650;
loc_82CD0628:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// slw r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD0650:
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82cd0664
	if (ctx.cr6.lt) goto loc_82CD0664;
	// subf r9,r4,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r4.s64;
loc_82CD0664:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82cd0930
	if (!ctx.cr6.gt) goto loc_82CD0930;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82cd075c
	if (ctx.cr0.eq) goto loc_82CD075C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CD0680:
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82cd0680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CD0680;
	// b 0x82cd075c
	goto loc_82CD075C;
loc_82CD0690:
	// cmpwi cr6,r8,18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 18, ctx.xer);
	// bne cr6,0x82cd0764
	if (!ctx.cr6.eq) goto loc_82CD0764;
	// addi r9,r6,-5
	ctx.r9.s64 = ctx.r6.s64 + -5;
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd0720
	if (ctx.cr0.gt) goto loc_82CD0720;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cd06f0
	if (!ctx.cr6.lt) goto loc_82CD06F0;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	ctx.r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r7,r26
	ctx.r7.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r26.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x82cd0720
	if (ctx.cr0.gt) goto loc_82CD0720;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cd06f8
	if (ctx.cr6.lt) goto loc_82CD06F8;
loc_82CD06F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cd0720
	goto loc_82CD0720;
loc_82CD06F8:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// slw r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD0720:
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82cd0734
	if (ctx.cr6.lt) goto loc_82CD0734;
	// subf r9,r4,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r4.s64;
loc_82CD0734:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82cd0930
	if (!ctx.cr6.gt) goto loc_82CD0930;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82cd075c
	if (ctx.cr0.eq) goto loc_82CD075C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CD0750:
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82cd0750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CD0750;
loc_82CD075C:
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x82cd0930
	goto loc_82CD0930;
loc_82CD0764:
	// cmpwi cr6,r8,19
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 19, ctx.xer);
	// bne cr6,0x82cd0938
	if (!ctx.cr6.eq) goto loc_82CD0938;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82cd07f8
	if (ctx.cr0.gt) goto loc_82CD07F8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cd07c8
	if (!ctx.cr6.lt) goto loc_82CD07C8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// neg r26,r10
	ctx.r26.s64 = -ctx.r10.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 | ctx.r5.u64;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r7,r7,r26
	ctx.r7.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r26.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x82cd07f8
	if (ctx.cr0.gt) goto loc_82CD07F8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cd07d0
	if (ctx.cr6.lt) goto loc_82CD07D0;
loc_82CD07C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cd07f8
	goto loc_82CD07F8;
loc_82CD07D0:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82CD07F8:
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82cd080c
	if (ctx.cr6.lt) goto loc_82CD080C;
	// subf r5,r4,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r4.s64;
loc_82CD080C:
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// rlwinm r10,r9,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FE;
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh. r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82cd085c
	if (!ctx.cr0.lt) goto loc_82CD085C;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82CD0824:
	// neg r10,r8
	ctx.r10.s64 = -ctx.r8.s64;
	// and r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r26,r8,27,5,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xori r10,r26,1
	ctx.r10.u64 = ctx.r26.u64 ^ 1;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// extsh. r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82cd0824
	if (ctx.cr0.lt) goto loc_82CD0824;
loc_82CD085C:
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// subf r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82cd08ec
	if (ctx.cr0.gt) goto loc_82CD08EC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82cd08bc
	if (!ctx.cr6.lt) goto loc_82CD08BC;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r25,r9
	ctx.r25.s64 = -ctx.r9.s64;
	// lbz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 | ctx.r26.u64;
	// mr. r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r7,r25
	ctx.r7.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r25.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x82cd08ec
	if (ctx.cr0.gt) goto loc_82CD08EC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82cd08c4
	if (ctx.cr6.lt) goto loc_82CD08C4;
loc_82CD08BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cd08ec
	goto loc_82CD08EC;
loc_82CD08C4:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// neg r26,r9
	ctx.r26.s64 = -ctx.r9.s64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// slw r9,r7,r26
	ctx.r9.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r26.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82CD08EC:
	// lbzx r9,r4,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x82cd0904
	if (ctx.cr6.lt) goto loc_82CD0904;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_82CD0904:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82cd0930
	if (!ctx.cr6.gt) goto loc_82CD0930;
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + ctx.r28.u64;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82cd092c
	if (ctx.cr0.eq) goto loc_82CD092C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82CD0920:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82cd0920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CD0920;
loc_82CD092C:
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
loc_82CD0930:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x82cd0954
	goto loc_82CD0954;
loc_82CD0938:
	// lbzx r9,r4,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x82cd0950
	if (ctx.cr6.lt) goto loc_82CD0950;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_82CD0950:
	// stbx r9,r4,r28
	PPC_STORE_U8(ctx.r4.u32 + ctx.r28.u32, ctx.r9.u8);
loc_82CD0954:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82cd04d8
	if (ctx.cr6.lt) goto loc_82CD04D8;
loc_82CD0960:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,11012(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11012, ctx.r11.u32);
	// stb r3,11959(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11959, ctx.r3.u8);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,11952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11952, ctx.r10.u32);
	// stb r6,11956(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11956, ctx.r6.u8);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82CD097C:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CD0984"))) PPC_WEAK_FUNC(sub_82CD0984);
PPC_FUNC_IMPL(__imp__sub_82CD0984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0988"))) PPC_WEAK_FUNC(sub_82CD0988);
PPC_FUNC_IMPL(__imp__sub_82CD0988) {
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r30,r31,2584
	ctx.r30.s64 = ctx.r31.s64 + 2584;
	// addi r5,r31,11028
	ctx.r5.s64 = ctx.r31.s64 + 11028;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82cd0448
	ctx.lr = 0x82CD09B4;
	sub_82CD0448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cd09c4
	if (!ctx.cr0.eq) goto loc_82CD09C4;
loc_82CD09BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cd0a60
	goto loc_82CD0A60;
loc_82CD09C4:
	// lbz r11,11957(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// addi r6,r31,2840
	ctx.r6.s64 = ctx.r31.s64 + 2840;
	// addi r5,r31,11284
	ctx.r5.s64 = ctx.r31.s64 + 11284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x82cd0448
	ctx.lr = 0x82CD09DC;
	sub_82CD0448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd09bc
	if (ctx.cr0.eq) goto loc_82CD09BC;
	// lbz r11,11957(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11957);
	// addi r8,r31,3644
	ctx.r8.s64 = ctx.r31.s64 + 3644;
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0af0
	ctx.lr = 0x82CD0A08;
	sub_82CD0AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd09bc
	if (ctx.cr0.eq) goto loc_82CD09BC;
	// addi r30,r31,3256
	ctx.r30.s64 = ctx.r31.s64 + 3256;
	// addi r5,r31,11700
	ctx.r5.s64 = ctx.r31.s64 + 11700;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0448
	ctx.lr = 0x82CD0A28;
	sub_82CD0448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd09bc
	if (ctx.cr0.eq) goto loc_82CD09BC;
	// addi r8,r31,9020
	ctx.r8.s64 = ctx.r31.s64 + 9020;
	// addi r7,r31,2072
	ctx.r7.s64 = ctx.r31.s64 + 2072;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0af0
	ctx.lr = 0x82CD0A4C;
	sub_82CD0AF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82CD0A60:
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

__attribute__((alias("__imp__sub_82CD0A78"))) PPC_WEAK_FUNC(sub_82CD0A78);
PPC_FUNC_IMPL(__imp__sub_82CD0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD0A80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,3636
	ctx.r29.s64 = ctx.r31.s64 + 3636;
loc_82CD0A90:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd730
	ctx.lr = 0x82CD0A9C;
	sub_82CCD730(ctx, base);
	// stbx r3,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82cd0a90
	if (ctx.cr6.lt) goto loc_82CD0A90;
	// lbz r11,11959(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11959);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd0ac0
	if (ctx.cr0.eq) goto loc_82CD0AC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cd0ae4
	goto loc_82CD0AE4;
loc_82CD0AC0:
	// addi r5,r31,3508
	ctx.r5.s64 = ctx.r31.s64 + 3508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0db8
	ctx.lr = 0x82CD0AD0;
	sub_82CD0DB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82CD0AE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD0AEC"))) PPC_WEAK_FUNC(sub_82CD0AEC);
PPC_FUNC_IMPL(__imp__sub_82CD0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0AF0"))) PPC_WEAK_FUNC(sub_82CD0AF0);
PPC_FUNC_IMPL(__imp__sub_82CD0AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CD0AF8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82CD0B20:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cd0b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CD0B20;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82cd0b5c
	if (ctx.cr6.eq) goto loc_82CD0B5C;
loc_82CD0B38:
	// lbzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt cr6,0x82cd0b38
	if (ctx.cr6.lt) goto loc_82CD0B38;
loc_82CD0B5C:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82CD0B6C:
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// subfic r7,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r10.s64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82cd0b6c
	if (!ctx.cr6.gt) goto loc_82CD0B6C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82cd0bdc
	if (ctx.cr6.eq) goto loc_82CD0BDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cd0bd4
	if (!ctx.cr6.eq) goto loc_82CD0BD4;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CD0BD0;
	sub_82CA3190(ctx, base);
	// b 0x82cd0da8
	goto loc_82CD0DA8;
loc_82CD0BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cd0dac
	goto loc_82CD0DAC;
loc_82CD0BDC:
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subfic r11,r31,16
	ctx.xer.ca = ctx.r31.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r31.s64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// blt cr6,0x82cd0c3c
	if (ctx.cr6.lt) goto loc_82CD0C3C;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
loc_82CD0C08:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// slw r30,r28,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r23,r11,r7
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srw r3,r23,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r6.u8 & 0x3F));
	// stwx r3,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82cd0c08
	if (!ctx.cr0.eq) goto loc_82CD0C08;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bgt cr6,0x82cd0c68
	if (ctx.cr6.gt) goto loc_82CD0C68;
loc_82CD0C3C:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// subfic r10,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r8.s64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfic r11,r8,17
	ctx.xer.ca = ctx.r8.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r8.s64;
loc_82CD0C50:
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82cd0c50
	if (!ctx.cr0.eq) goto loc_82CD0C50;
loc_82CD0C68:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82cd0ca0
	if (ctx.cr6.eq) goto loc_82CD0CA0;
	// slw r9,r28,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CD0CA0;
	sub_82CA3190(ctx, base);
loc_82CD0CA0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82cd0da8
	if (!ctx.cr6.gt) goto loc_82CD0DA8;
loc_82CD0CB0:
	// lbzx r9,r4,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r24.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82cd0d9c
	if (ctx.cr0.eq) goto loc_82CD0D9C;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82cd0d1c
	if (ctx.cr6.gt) goto loc_82CD0D1C;
	// slw r9,r28,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r31.u8 & 0x3F));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82cd0bd4
	if (ctx.cr6.gt) goto loc_82CD0BD4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82cd0d14
	if (!ctx.cr6.lt) goto loc_82CD0D14;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// beq 0x82cd0d14
	if (ctx.cr0.eq) goto loc_82CD0D14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82CD0D08:
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82cd0d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CD0D08;
loc_82CD0D14:
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// b 0x82cd0d9c
	goto loc_82CD0D9C;
loc_82CD0D1C:
	// srw r6,r11,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r31.s64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r11,r31
	ctx.r6.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// neg r7,r5
	ctx.r7.s64 = -ctx.r5.s64;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
loc_82CD0D44:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cd0d68
	if (!ctx.cr6.eq) goto loc_82CD0D68;
	// sth r25,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r25.u16);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r25,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r25.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82CD0D68:
	// extsh. r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lha r9,0(r8)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 0));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bge 0x82cd0d84
	if (!ctx.cr0.lt) goto loc_82CD0D84;
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// b 0x82cd0d88
	goto loc_82CD0D88;
loc_82CD0D84:
	// subf r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
loc_82CD0D88:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cd0d44
	if (!ctx.cr0.eq) goto loc_82CD0D44;
	// sth r4,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
loc_82CD0D9C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82cd0cb0
	if (ctx.cr6.lt) goto loc_82CD0CB0;
loc_82CD0DA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CD0DAC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CD0DB4"))) PPC_WEAK_FUNC(sub_82CD0DB4);
PPC_FUNC_IMPL(__imp__sub_82CD0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0DB8"))) PPC_WEAK_FUNC(sub_82CD0DB8);
PPC_FUNC_IMPL(__imp__sub_82CD0DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD0DC0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CD0DD8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r31,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
	// ble cr6,0x82cd0dd8
	if (!ctx.cr6.gt) goto loc_82CD0DD8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CD0DF8:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// blt cr6,0x82cd0df8
	if (ctx.cr6.lt) goto loc_82CD0DF8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r31.u16);
loc_82CD0E28:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,130
	ctx.r5.s64 = ctx.r1.s64 + 130;
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r10,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u16);
	// ble cr6,0x82cd0e28
	if (!ctx.cr6.gt) goto loc_82CD0E28;
	// lhz r11,162(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd0e74
	if (ctx.cr0.eq) goto loc_82CD0E74;
loc_82CD0E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cd0f60
	goto loc_82CD0F60;
loc_82CD0E74:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82CD0E78:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r8,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lhzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r8,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u16);
	// rlwinm r6,r6,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// sthx r6,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
	// ble cr6,0x82cd0e78
	if (!ctx.cr6.gt) goto loc_82CD0E78;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82cd0edc
	if (ctx.cr6.gt) goto loc_82CD0EDC;
loc_82CD0EB8:
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r10,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x82cd0eb8
	if (!ctx.cr6.gt) goto loc_82CD0EB8;
loc_82CD0EDC:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CD0EEC;
	sub_82CA3190(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82CD0EF4:
	// lbzx r11,r5,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cd0f48
	if (ctx.cr0.eq) goto loc_82CD0F48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x82cd0e6c
	if (ctx.cr6.gt) goto loc_82CD0E6C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82cd0f44
	if (!ctx.cr6.lt) goto loc_82CD0F44;
loc_82CD0F30:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r6,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u8);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cd0f30
	if (ctx.cr6.lt) goto loc_82CD0F30;
loc_82CD0F44:
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
loc_82CD0F48:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x82cd0ef4
	if (ctx.cr6.lt) goto loc_82CD0EF4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CD0F60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD0F68"))) PPC_WEAK_FUNC(sub_82CD0F68);
PPC_FUNC_IMPL(__imp__sub_82CD0F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD0F70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cd0fdc
	if (ctx.cr6.eq) goto loc_82CD0FDC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CD0F98:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cd0f98
	if (!ctx.cr6.eq) goto loc_82CD0F98;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3c68
	ctx.lr = 0x82CD0FC0;
	sub_82CA3C68(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd0fe4
	if (ctx.cr0.eq) goto loc_82CD0FE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82170cc8
	ctx.lr = 0x82CD0FD8;
	sub_82170CC8(ctx, base);
	// b 0x82cd0fe4
	goto loc_82CD0FE4;
loc_82CD0FDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CD0FE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD0FF8"))) PPC_WEAK_FUNC(sub_82CD0FF8);
PPC_FUNC_IMPL(__imp__sub_82CD0FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,14696
	ctx.r3.s64 = ctx.r11.s64 + 14696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1010"))) PPC_WEAK_FUNC(sub_82CD1010);
PPC_FUNC_IMPL(__imp__sub_82CD1010) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cd104c
	if (ctx.cr6.eq) goto loc_82CD104C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca5dc0
	ctx.lr = 0x82CD104C;
	sub_82CA5DC0(ctx, base);
loc_82CD104C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd105c
	if (ctx.cr0.eq) goto loc_82CD105C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82CD105C;
	sub_824FE010(ctx, base);
loc_82CD105C:
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

__attribute__((alias("__imp__sub_82CD1078"))) PPC_WEAK_FUNC(sub_82CD1078);
PPC_FUNC_IMPL(__imp__sub_82CD1078) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cd0f68
	ctx.lr = 0x82CD1098;
	sub_82CD0F68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
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

__attribute__((alias("__imp__sub_82CD10BC"))) PPC_WEAK_FUNC(sub_82CD10BC);
PPC_FUNC_IMPL(__imp__sub_82CD10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD10C0"))) PPC_WEAK_FUNC(sub_82CD10C0);
PPC_FUNC_IMPL(__imp__sub_82CD10C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD10E0"))) PPC_WEAK_FUNC(sub_82CD10E0);
PPC_FUNC_IMPL(__imp__sub_82CD10E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD10E4"))) PPC_WEAK_FUNC(sub_82CD10E4);
PPC_FUNC_IMPL(__imp__sub_82CD10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD10E8"))) PPC_WEAK_FUNC(sub_82CD10E8);
PPC_FUNC_IMPL(__imp__sub_82CD10E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD10F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82cd1174
	if (ctx.cr6.eq) goto loc_82CD1174;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd116c
	if (ctx.cr6.eq) goto loc_82CD116C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82CD1128:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cd1128
	if (!ctx.cr6.eq) goto loc_82CD1128;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3c68
	ctx.lr = 0x82CD1150;
	sub_82CA3C68(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd117c
	if (ctx.cr0.eq) goto loc_82CD117C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82170cc8
	ctx.lr = 0x82CD1168;
	sub_82170CC8(ctx, base);
	// b 0x82cd117c
	goto loc_82CD117C;
loc_82CD116C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cd1178
	goto loc_82CD1178;
loc_82CD1174:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82CD1178:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CD117C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1188"))) PPC_WEAK_FUNC(sub_82CD1188);
PPC_FUNC_IMPL(__imp__sub_82CD1188) {
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
	// bl 0x82cd10e8
	ctx.lr = 0x82CD11A0;
	sub_82CD10E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14688
	ctx.r11.s64 = ctx.r11.s64 + 14688;
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

__attribute__((alias("__imp__sub_82CD11C4"))) PPC_WEAK_FUNC(sub_82CD11C4);
PPC_FUNC_IMPL(__imp__sub_82CD11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD11C8"))) PPC_WEAK_FUNC(sub_82CD11C8);
PPC_FUNC_IMPL(__imp__sub_82CD11C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,14744(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14716
	ctx.r4.s64 = ctx.r11.s64 + 14716;
	// bl 0x822f2020
	ctx.lr = 0x82CD11F4;
	sub_822F2020(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82CD1200;
	sub_826C3EF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// addi r4,r10,-22432
	ctx.r4.s64 = ctx.r10.s64 + -22432;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca69d0
	ctx.lr = 0x82CD121C;
	sub_82CA69D0(ctx, base);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82CD1234;
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD11D0"))) PPC_WEAK_FUNC(sub_82CD11D0);
PPC_FUNC_IMPL(__imp__sub_82CD11D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14716
	ctx.r4.s64 = ctx.r11.s64 + 14716;
	// bl 0x822f2020
	ctx.lr = 0x82CD11F4;
	sub_822F2020(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82CD1200;
	sub_826C3EF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// addi r4,r10,-22432
	ctx.r4.s64 = ctx.r10.s64 + -22432;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca69d0
	ctx.lr = 0x82CD121C;
	sub_82CA69D0(ctx, base);
}

__attribute__((alias("__imp__sub_82CD121C"))) PPC_WEAK_FUNC(sub_82CD121C);
PPC_FUNC_IMPL(__imp__sub_82CD121C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82CD1234;
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1244"))) PPC_WEAK_FUNC(sub_82CD1244);
PPC_FUNC_IMPL(__imp__sub_82CD1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1248"))) PPC_WEAK_FUNC(sub_82CD1248);
PPC_FUNC_IMPL(__imp__sub_82CD1248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,14800(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1258;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82cd10e8
	ctx.lr = 0x82CD1270;
	sub_82CD10E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f1d60
	ctx.lr = 0x82CD1288;
	sub_822F1D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1250"))) PPC_WEAK_FUNC(sub_82CD1250);
PPC_FUNC_IMPL(__imp__sub_82CD1250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1258;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82cd10e8
	ctx.lr = 0x82CD1270;
	sub_82CD10E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f1d60
	ctx.lr = 0x82CD1288;
	sub_822F1D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1294"))) PPC_WEAK_FUNC(sub_82CD1294);
PPC_FUNC_IMPL(__imp__sub_82CD1294) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82cd10c0
	ctx.lr = 0x82CD12AC;
	sub_82CD10C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD12BC"))) PPC_WEAK_FUNC(sub_82CD12BC);
PPC_FUNC_IMPL(__imp__sub_82CD12BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD12C0"))) PPC_WEAK_FUNC(sub_82CD12C0);
PPC_FUNC_IMPL(__imp__sub_82CD12C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,14880(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14880);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14848
	ctx.r4.s64 = ctx.r11.s64 + 14848;
	// bl 0x822f2020
	ctx.lr = 0x82CD12EC;
	sub_822F2020(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82CD12F8;
	sub_826C3EF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// addi r4,r10,-22344
	ctx.r4.s64 = ctx.r10.s64 + -22344;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca69d0
	ctx.lr = 0x82CD1314;
	sub_82CA69D0(ctx, base);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82CD132C;
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD12C8"))) PPC_WEAK_FUNC(sub_82CD12C8);
PPC_FUNC_IMPL(__imp__sub_82CD12C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14848
	ctx.r4.s64 = ctx.r11.s64 + 14848;
	// bl 0x822f2020
	ctx.lr = 0x82CD12EC;
	sub_822F2020(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82CD12F8;
	sub_826C3EF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// addi r4,r10,-22344
	ctx.r4.s64 = ctx.r10.s64 + -22344;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ca69d0
	ctx.lr = 0x82CD1314;
	sub_82CA69D0(ctx, base);
}

__attribute__((alias("__imp__sub_82CD1314"))) PPC_WEAK_FUNC(sub_82CD1314);
PPC_FUNC_IMPL(__imp__sub_82CD1314) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82CD132C;
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD133C"))) PPC_WEAK_FUNC(sub_82CD133C);
PPC_FUNC_IMPL(__imp__sub_82CD133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1340"))) PPC_WEAK_FUNC(sub_82CD1340);
PPC_FUNC_IMPL(__imp__sub_82CD1340) {
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
	// bl 0x82cd1250
	ctx.lr = 0x82CD1358;
	sub_82CD1250(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
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

__attribute__((alias("__imp__sub_82CD137C"))) PPC_WEAK_FUNC(sub_82CD137C);
PPC_FUNC_IMPL(__imp__sub_82CD137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1380"))) PPC_WEAK_FUNC(sub_82CD1380);
PPC_FUNC_IMPL(__imp__sub_82CD1380) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ca5160
	ctx.lr = 0x82CD13A4;
	sub_82CA5160(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82CD13A8;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82CD13B4;
	sub_82CA89A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cd13c4
	if (!ctx.cr6.eq) goto loc_82CD13C4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,5656
	ctx.r31.s64 = ctx.r11.s64 + 5656;
loc_82CD13C4:
	// bl 0x82240578
	ctx.lr = 0x82CD13C8;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82CD13D4;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82CD13D8;
	sub_82240578(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// bl 0x82ca89a0
	ctx.lr = 0x82CD13E8;
	sub_82CA89A0(ctx, base);
	// bl 0x82ca5cf0
	ctx.lr = 0x82CD13EC;
	sub_82CA5CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1404"))) PPC_WEAK_FUNC(sub_82CD1404);
PPC_FUNC_IMPL(__imp__sub_82CD1404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1408"))) PPC_WEAK_FUNC(sub_82CD1408);
PPC_FUNC_IMPL(__imp__sub_82CD1408) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// bl 0x82cd1380
	ctx.lr = 0x82CD1434;
	sub_82CD1380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1444"))) PPC_WEAK_FUNC(sub_82CD1444);
PPC_FUNC_IMPL(__imp__sub_82CD1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1448"))) PPC_WEAK_FUNC(sub_82CD1448);
PPC_FUNC_IMPL(__imp__sub_82CD1448) {
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
	// bl 0x82cb7d90
	ctx.lr = 0x82CD1460;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd1478
	if (ctx.cr0.eq) goto loc_82CD1478;
	// bl 0x821eeb10
	ctx.lr = 0x82CD1478;
	sub_821EEB10(ctx, base);
loc_82CD1478:
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

__attribute__((alias("__imp__sub_82CD148C"))) PPC_WEAK_FUNC(sub_82CD148C);
PPC_FUNC_IMPL(__imp__sub_82CD148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1490"))) PPC_WEAK_FUNC(sub_82CD1490);
PPC_FUNC_IMPL(__imp__sub_82CD1490) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826c4b38
	ctx.lr = 0x82CD14B4;
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd14d0
	if (ctx.cr0.eq) goto loc_82CD14D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD14D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CD14D0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd14e0
	if (ctx.cr0.eq) goto loc_82CD14E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82CD14E0;
	sub_824FE010(ctx, base);
loc_82CD14E0:
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

__attribute__((alias("__imp__sub_82CD14FC"))) PPC_WEAK_FUNC(sub_82CD14FC);
PPC_FUNC_IMPL(__imp__sub_82CD14FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1500"))) PPC_WEAK_FUNC(sub_82CD1500);
PPC_FUNC_IMPL(__imp__sub_82CD1500) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cd1538
	if (ctx.cr6.eq) goto loc_82CD1538;
	// bl 0x826c4b38
	ctx.lr = 0x82CD151C;
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd1538
	if (ctx.cr0.eq) goto loc_82CD1538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CD1538:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1548"))) PPC_WEAK_FUNC(sub_82CD1548);
PPC_FUNC_IMPL(__imp__sub_82CD1548) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD1564;
	sub_82CD1FE0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r3,r31,28464
	ctx.r3.s64 = ctx.r31.s64 + 28464;
	// bl 0x82cd1500
	ctx.lr = 0x82CD1570;
	sub_82CD1500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,28464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28464, ctx.r11.u32);
	// bl 0x82cd2028
	ctx.lr = 0x82CD1580;
	sub_82CD2028(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1594"))) PPC_WEAK_FUNC(sub_82CD1594);
PPC_FUNC_IMPL(__imp__sub_82CD1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1598"))) PPC_WEAK_FUNC(sub_82CD1598);
PPC_FUNC_IMPL(__imp__sub_82CD1598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,28464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD15A4"))) PPC_WEAK_FUNC(sub_82CD15A4);
PPC_FUNC_IMPL(__imp__sub_82CD15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD15A8"))) PPC_WEAK_FUNC(sub_82CD15A8);
PPC_FUNC_IMPL(__imp__sub_82CD15A8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,28500(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28500);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82cd15e0
	if (!ctx.cr0.eq) goto loc_82CD15E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// stb r10,28500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28500, ctx.r10.u8);
	// addi r3,r9,5448
	ctx.r3.s64 = ctx.r9.s64 + 5448;
	// bl 0x82cd2598
	ctx.lr = 0x82CD15E0;
	sub_82CD2598(ctx, base);
loc_82CD15E0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,28464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28464, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82CD15FC"))) PPC_WEAK_FUNC(sub_82CD15FC);
PPC_FUNC_IMPL(__imp__sub_82CD15FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1600"))) PPC_WEAK_FUNC(sub_82CD1600);
PPC_FUNC_IMPL(__imp__sub_82CD1600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,14952(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14952);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CD1610;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD1628;
	sub_82CD1FE0(ctx, base);
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cd167c
	if (ctx.cr6.eq) goto loc_82CD167C;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CD1638:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd1674
	if (ctx.cr6.eq) goto loc_82CD1674;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c4b38
	ctx.lr = 0x82CD1658;
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd1674
	if (ctx.cr0.eq) goto loc_82CD1674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CD1674:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cd1638
	if (!ctx.cr6.eq) goto loc_82CD1638;
loc_82CD167C:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82ca5dc0
	ctx.lr = 0x82CD1684;
	sub_82CA5DC0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD168C;
	sub_82CD2028(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CD1608"))) PPC_WEAK_FUNC(sub_82CD1608);
PPC_FUNC_IMPL(__imp__sub_82CD1608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CD1610;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD1628;
	sub_82CD1FE0(ctx, base);
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cd167c
	if (ctx.cr6.eq) goto loc_82CD167C;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CD1638:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd1674
	if (ctx.cr6.eq) goto loc_82CD1674;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c4b38
	ctx.lr = 0x82CD1658;
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd1674
	if (ctx.cr0.eq) goto loc_82CD1674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CD1674:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cd1638
	if (!ctx.cr6.eq) goto loc_82CD1638;
loc_82CD167C:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82ca5dc0
	ctx.lr = 0x82CD1684;
	sub_82CA5DC0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD168C;
	sub_82CD2028(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CD1694"))) PPC_WEAK_FUNC(sub_82CD1694);
PPC_FUNC_IMPL(__imp__sub_82CD1694) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD16AC;
	sub_82CD2028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD16BC"))) PPC_WEAK_FUNC(sub_82CD16BC);
PPC_FUNC_IMPL(__imp__sub_82CD16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD16C0"))) PPC_WEAK_FUNC(sub_82CD16C0);
PPC_FUNC_IMPL(__imp__sub_82CD16C0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD16DC;
	sub_82CD1FE0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// b 0x82cd16f4
	goto loc_82CD16F4;
loc_82CD16E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,28460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28460, ctx.r11.u32);
	// bl 0x82cd1490
	ctx.lr = 0x82CD16F4;
	sub_82CD1490(ctx, base);
loc_82CD16F4:
	// lwz r3,28460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cd16e4
	if (!ctx.cr6.eq) goto loc_82CD16E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD1708;
	sub_82CD2028(ctx, base);
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

__attribute__((alias("__imp__sub_82CD171C"))) PPC_WEAK_FUNC(sub_82CD171C);
PPC_FUNC_IMPL(__imp__sub_82CD171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1720"))) PPC_WEAK_FUNC(sub_82CD1720);
PPC_FUNC_IMPL(__imp__sub_82CD1720) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,28460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cd1754
	if (!ctx.cr6.eq) goto loc_82CD1754;
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// bl 0x82cd2598
	ctx.lr = 0x82CD1754;
	sub_82CD2598(ctx, base);
loc_82CD1754:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8217dd10
	ctx.lr = 0x82CD175C;
	sub_8217DD10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd1778
	if (ctx.cr0.eq) goto loc_82CD1778;
	// lwz r11,28460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28460);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82cd177c
	goto loc_82CD177C;
loc_82CD1778:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CD177C:
	// stw r10,28460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28460, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CD1798"))) PPC_WEAK_FUNC(sub_82CD1798);
PPC_FUNC_IMPL(__imp__sub_82CD1798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82cd17bc
	if (ctx.cr6.lt) goto loc_82CD17BC;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82cd17c0
	goto loc_82CD17C0;
loc_82CD17BC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82CD17C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fffb68
	sub_82FFFB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD17C8"))) PPC_WEAK_FUNC(sub_82CD17C8);
PPC_FUNC_IMPL(__imp__sub_82CD17C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD17CC"))) PPC_WEAK_FUNC(sub_82CD17CC);
PPC_FUNC_IMPL(__imp__sub_82CD17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD17D0"))) PPC_WEAK_FUNC(sub_82CD17D0);
PPC_FUNC_IMPL(__imp__sub_82CD17D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,15032(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r10,r10,15016
	ctx.r10.s64 = ctx.r10.s64 + 15016;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r4,r9,22536
	ctx.r4.s64 = ctx.r9.s64 + 22536;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822f2020
	ctx.lr = 0x82CD1830;
	sub_822F2020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CD17D8"))) PPC_WEAK_FUNC(sub_82CD17D8);
PPC_FUNC_IMPL(__imp__sub_82CD17D8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r10,r10,15016
	ctx.r10.s64 = ctx.r10.s64 + 15016;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r4,r9,22536
	ctx.r4.s64 = ctx.r9.s64 + 22536;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822f2020
	ctx.lr = 0x82CD1830;
	sub_822F2020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CD184C"))) PPC_WEAK_FUNC(sub_82CD184C);
PPC_FUNC_IMPL(__imp__sub_82CD184C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x826c4980
	ctx.lr = 0x82CD1864;
	sub_826C4980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1874"))) PPC_WEAK_FUNC(sub_82CD1874);
PPC_FUNC_IMPL(__imp__sub_82CD1874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1878"))) PPC_WEAK_FUNC(sub_82CD1878);
PPC_FUNC_IMPL(__imp__sub_82CD1878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,15096(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15096);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82cd1608
	ctx.lr = 0x82CD18B0;
	sub_82CD1608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x822f1db0
	ctx.lr = 0x82CD18C0;
	sub_822F1DB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CD1880"))) PPC_WEAK_FUNC(sub_82CD1880);
PPC_FUNC_IMPL(__imp__sub_82CD1880) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82cd1608
	ctx.lr = 0x82CD18B0;
	sub_82CD1608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x822f1db0
	ctx.lr = 0x82CD18C0;
	sub_822F1DB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82CD18E4"))) PPC_WEAK_FUNC(sub_82CD18E4);
PPC_FUNC_IMPL(__imp__sub_82CD18E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x826c4980
	ctx.lr = 0x82CD18FC;
	sub_826C4980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD190C"))) PPC_WEAK_FUNC(sub_82CD190C);
PPC_FUNC_IMPL(__imp__sub_82CD190C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82171810
	ctx.lr = 0x82CD1928;
	sub_82171810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1938"))) PPC_WEAK_FUNC(sub_82CD1938);
PPC_FUNC_IMPL(__imp__sub_82CD1938) {
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
	// bl 0x82cd1880
	ctx.lr = 0x82CD1958;
	sub_82CD1880(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd1968
	if (ctx.cr0.eq) goto loc_82CD1968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82CD1968;
	sub_824FE010(ctx, base);
loc_82CD1968:
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

__attribute__((alias("__imp__sub_82CD1984"))) PPC_WEAK_FUNC(sub_82CD1984);
PPC_FUNC_IMPL(__imp__sub_82CD1984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1988"))) PPC_WEAK_FUNC(sub_82CD1988);
PPC_FUNC_IMPL(__imp__sub_82CD1988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,15160(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15160);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1998;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r30,28464(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cd1a38
	if (!ctx.cr6.eq) goto loc_82CD1A38;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD19BC;
	sub_82CD1FE0(ctx, base);
	// lwz r30,28464(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cd1a30
	if (!ctx.cr6.eq) goto loc_82CD1A30;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8217dd10
	ctx.lr = 0x82CD19D0;
	sub_8217DD10(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd19ec
	if (ctx.cr0.eq) goto loc_82CD19EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cd17d8
	ctx.lr = 0x82CD19E4;
	sub_82CD17D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cd19f0
	goto loc_82CD19F0;
loc_82CD19EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CD19F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd15a8
	ctx.lr = 0x82CD19F8;
	sub_82CD15A8(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12432
	ctx.r4.s64 = ctx.r10.s64 + -12432;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x821a8f68
	ctx.lr = 0x82CD1A14;
	sub_821A8F68(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r30.u32);
	// bl 0x826c4020
	ctx.lr = 0x82CD1A24;
	sub_826C4020(ctx, base);
	// lwz r11,28468(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28468);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,28492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28492, ctx.r11.u32);
loc_82CD1A30:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD1A38;
	sub_82CD2028(ctx, base);
loc_82CD1A38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1990"))) PPC_WEAK_FUNC(sub_82CD1990);
PPC_FUNC_IMPL(__imp__sub_82CD1990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1998;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r30,28464(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cd1a38
	if (!ctx.cr6.eq) goto loc_82CD1A38;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD19BC;
	sub_82CD1FE0(ctx, base);
	// lwz r30,28464(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cd1a30
	if (!ctx.cr6.eq) goto loc_82CD1A30;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8217dd10
	ctx.lr = 0x82CD19D0;
	sub_8217DD10(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd19ec
	if (ctx.cr0.eq) goto loc_82CD19EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cd17d8
	ctx.lr = 0x82CD19E4;
	sub_82CD17D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cd19f0
	goto loc_82CD19F0;
loc_82CD19EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CD19F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd15a8
	ctx.lr = 0x82CD19F8;
	sub_82CD15A8(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12432
	ctx.r4.s64 = ctx.r10.s64 + -12432;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x821a8f68
	ctx.lr = 0x82CD1A14;
	sub_821A8F68(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r30.u32);
	// bl 0x826c4020
	ctx.lr = 0x82CD1A24;
	sub_826C4020(ctx, base);
	// lwz r11,28468(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28468);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,28492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28492, ctx.r11.u32);
loc_82CD1A30:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD1A38;
	sub_82CD2028(ctx, base);
loc_82CD1A38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1A44"))) PPC_WEAK_FUNC(sub_82CD1A44);
PPC_FUNC_IMPL(__imp__sub_82CD1A44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd2028
	ctx.lr = 0x82CD1A5C;
	sub_82CD2028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1A6C"))) PPC_WEAK_FUNC(sub_82CD1A6C);
PPC_FUNC_IMPL(__imp__sub_82CD1A6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x824fe010
	ctx.lr = 0x82CD1A84;
	sub_824FE010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1A94"))) PPC_WEAK_FUNC(sub_82CD1A94);
PPC_FUNC_IMPL(__imp__sub_82CD1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1A98"))) PPC_WEAK_FUNC(sub_82CD1A98);
PPC_FUNC_IMPL(__imp__sub_82CD1A98) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fffb68
	ctx.lr = 0x82CD1AC0;
	sub_82FFFB68(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82cd1ad0
	if (!ctx.cr0.eq) goto loc_82CD1AD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82CD1AD0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD1AD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cd1ad4
	if (!ctx.cr6.eq) goto loc_82CD1AD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82CD1AF8;
	sub_821A8F68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cd1b14
	if (ctx.cr6.eq) goto loc_82CD1B14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fffb68
	ctx.lr = 0x82CD1B0C;
	sub_82FFFB68(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82cd1b1c
	if (!ctx.cr0.eq) goto loc_82CD1B1C;
loc_82CD1B14:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,22536
	ctx.r4.s64 = ctx.r11.s64 + 22536;
loc_82CD1B1C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD1B20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cd1b20
	if (!ctx.cr6.eq) goto loc_82CD1B20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821a8f68
	ctx.lr = 0x82CD1B44;
	sub_821A8F68(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1B5C"))) PPC_WEAK_FUNC(sub_82CD1B5C);
PPC_FUNC_IMPL(__imp__sub_82CD1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1B60"))) PPC_WEAK_FUNC(sub_82CD1B60);
PPC_FUNC_IMPL(__imp__sub_82CD1B60) {
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
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82cd1b94
	if (!ctx.cr6.gt) goto loc_82CD1B94;
	// bl 0x82cab770
	ctx.lr = 0x82CD1B80;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,42
	ctx.r10.s64 = 42;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82cd1b9c
	goto loc_82CD1B9C;
loc_82CD1B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
loc_82CD1B9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1BAC"))) PPC_WEAK_FUNC(sub_82CD1BAC);
PPC_FUNC_IMPL(__imp__sub_82CD1BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1BB0"))) PPC_WEAK_FUNC(sub_82CD1BB0);
PPC_FUNC_IMPL(__imp__sub_82CD1BB0) {
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
	// bl 0x82cbb0f0
	ctx.lr = 0x82CD1BC0;
	sub_82CBB0F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82cbb0e0
	ctx.lr = 0x82CD1BCC;
	sub_82CBB0E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1BE4"))) PPC_WEAK_FUNC(sub_82CD1BE4);
PPC_FUNC_IMPL(__imp__sub_82CD1BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1BE8"))) PPC_WEAK_FUNC(sub_82CD1BE8);
PPC_FUNC_IMPL(__imp__sub_82CD1BE8) {
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
	// bl 0x82cb7d90
	ctx.lr = 0x82CD1C00;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd1c18
	if (ctx.cr0.eq) goto loc_82CD1C18;
	// bl 0x821ee9e8
	ctx.lr = 0x82CD1C18;
	sub_821EE9E8(ctx, base);
loc_82CD1C18:
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

__attribute__((alias("__imp__sub_82CD1C2C"))) PPC_WEAK_FUNC(sub_82CD1C2C);
PPC_FUNC_IMPL(__imp__sub_82CD1C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1C30"))) PPC_WEAK_FUNC(sub_82CD1C30);
PPC_FUNC_IMPL(__imp__sub_82CD1C30) {
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
	// bl 0x82cbb0f0
	ctx.lr = 0x82CD1C4C;
	sub_82CBB0F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cbb0e0
	ctx.lr = 0x82CD1C58;
	sub_82CBB0E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82caae18
	ctx.lr = 0x82CD1C68;
	sub_82CAAE18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq 0x82cd1c90
	if (ctx.cr0.eq) goto loc_82CD1C90;
	// bl 0x82cb7d90
	ctx.lr = 0x82CD1C78;
	sub_82CB7D90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82CD1C88;
	sub_82CA2C60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cd1c9c
	goto loc_82CD1C9C;
loc_82CD1C90:
	// bl 0x82cb7d90
	ctx.lr = 0x82CD1C94;
	sub_82CB7D90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82CD1C9C:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CD1CBC"))) PPC_WEAK_FUNC(sub_82CD1CBC);
PPC_FUNC_IMPL(__imp__sub_82CD1CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1CC0"))) PPC_WEAK_FUNC(sub_82CD1CC0);
PPC_FUNC_IMPL(__imp__sub_82CD1CC0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8217dd10
	ctx.lr = 0x82CD1CDC;
	sub_8217DD10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82cd2648
	ctx.lr = 0x82CD1CE4;
	sub_82CD2648(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1CFC"))) PPC_WEAK_FUNC(sub_82CD1CFC);
PPC_FUNC_IMPL(__imp__sub_82CD1CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1D00"))) PPC_WEAK_FUNC(sub_82CD1D00);
PPC_FUNC_IMPL(__imp__sub_82CD1D00) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829ce870
	ctx.lr = 0x82CD1D1C;
	sub_829CE870(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82CD1D24;
	sub_824FE010(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1D38"))) PPC_WEAK_FUNC(sub_82CD1D38);
PPC_FUNC_IMPL(__imp__sub_82CD1D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd2650
	sub_82CD2650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1D40"))) PPC_WEAK_FUNC(sub_82CD1D40);
PPC_FUNC_IMPL(__imp__sub_82CD1D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd2658
	sub_82CD2658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1D48"))) PPC_WEAK_FUNC(sub_82CD1D48);
PPC_FUNC_IMPL(__imp__sub_82CD1D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1D50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x82cd1d7c
	goto loc_82CD1D7C;
loc_82CD1D60:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82CD1D7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cd1d60
	if (!ctx.cr6.eq) goto loc_82CD1D60;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cd1da4
	if (ctx.cr6.eq) goto loc_82CD1DA4;
loc_82CD1D90:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82CD1D98;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cd1d90
	if (!ctx.cr6.eq) goto loc_82CD1D90;
loc_82CD1DA4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cd1dcc
	if (ctx.cr6.eq) goto loc_82CD1DCC;
loc_82CD1DB8:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82CD1DC0;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cd1db8
	if (!ctx.cr6.eq) goto loc_82CD1DB8;
loc_82CD1DCC:
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1DD8"))) PPC_WEAK_FUNC(sub_82CD1DD8);
PPC_FUNC_IMPL(__imp__sub_82CD1DD8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD1DF8;
	sub_82CD1FE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28556
	ctx.r11.s64 = ctx.r11.s64 + 28556;
loc_82CD1E08:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd1e3c
	if (ctx.cr6.eq) goto loc_82CD1E3C;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82cd1e3c
	if (ctx.cr6.eq) goto loc_82CD1E3C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82cd1e08
	if (ctx.cr6.lt) goto loc_82CD1E08;
loc_82CD1E3C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x82cd2028
	ctx.lr = 0x82CD1E64;
	sub_82CD2028(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1E78"))) PPC_WEAK_FUNC(sub_82CD1E78);
PPC_FUNC_IMPL(__imp__sub_82CD1E78) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cd1ec0
	if (!ctx.cr6.gt) goto loc_82CD1EC0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28556
	ctx.r11.s64 = ctx.r11.s64 + 28556;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82cd1edc
	if (ctx.cr0.gt) goto loc_82CD1EDC;
loc_82CD1EC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1d48
	ctx.lr = 0x82CD1EC8;
	sub_82CD1D48(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cd1edc
	if (ctx.cr6.eq) goto loc_82CD1EDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826c4a78
	ctx.lr = 0x82CD1EDC;
	sub_826C4A78(ctx, base);
loc_82CD1EDC:
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

__attribute__((alias("__imp__sub_82CD1EF0"))) PPC_WEAK_FUNC(sub_82CD1EF0);
PPC_FUNC_IMPL(__imp__sub_82CD1EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD1EF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r11,328
	ctx.r8.s64 = ctx.r11.s64 + 328;
loc_82CD1F08:
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
	// bne 0x82cd1f08
	if (!ctx.cr0.eq) goto loc_82CD1F08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cd1f54
	if (!ctx.cr6.eq) goto loc_82CD1F54;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r30,r11,28568
	ctx.r30.s64 = ctx.r11.s64 + 28568;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82CD1F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd2648
	ctx.lr = 0x82CD1F44;
	sub_82CD2648(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cd1f3c
	if (ctx.cr6.lt) goto loc_82CD1F3C;
loc_82CD1F54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD1F60"))) PPC_WEAK_FUNC(sub_82CD1F60);
PPC_FUNC_IMPL(__imp__sub_82CD1F60) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r8,r11,328
	ctx.r8.s64 = ctx.r11.s64 + 328;
loc_82CD1F7C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82cd1f7c
	if (!ctx.cr0.eq) goto loc_82CD1F7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82cd1fc8
	if (!ctx.cr6.lt) goto loc_82CD1FC8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r30,r11,28568
	ctx.r30.s64 = ctx.r11.s64 + 28568;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82CD1FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x82CD1FB8;
	sub_829CE870(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cd1fb0
	if (ctx.cr6.lt) goto loc_82CD1FB0;
loc_82CD1FC8:
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

__attribute__((alias("__imp__sub_82CD1FE0"))) PPC_WEAK_FUNC(sub_82CD1FE0);
PPC_FUNC_IMPL(__imp__sub_82CD1FE0) {
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
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28568
	ctx.r11.s64 = ctx.r9.s64 + 28568;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cd2650
	ctx.lr = 0x82CD2010;
	sub_82CD2650(ctx, base);
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

__attribute__((alias("__imp__sub_82CD2028"))) PPC_WEAK_FUNC(sub_82CD2028);
PPC_FUNC_IMPL(__imp__sub_82CD2028) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28568
	ctx.r11.s64 = ctx.r11.s64 + 28568;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd2658
	sub_82CD2658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD2040"))) PPC_WEAK_FUNC(sub_82CD2040);
PPC_FUNC_IMPL(__imp__sub_82CD2040) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82cb1328
	ctx.lr = 0x82CD2054;
	sub_82CB1328(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD2068"))) PPC_WEAK_FUNC(sub_82CD2068);
PPC_FUNC_IMPL(__imp__sub_82CD2068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2070;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x82cd209c
	goto loc_82CD209C;
loc_82CD2084:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82cb1328
	ctx.lr = 0x82CD2090;
	sub_82CB1328(ctx, base);
	// sth r3,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r3.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82CD209C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82cd2084
	if (ctx.cr6.lt) goto loc_82CD2084;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD20B0"))) PPC_WEAK_FUNC(sub_82CD20B0);
PPC_FUNC_IMPL(__imp__sub_82CD20B0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD20EC"))) PPC_WEAK_FUNC(sub_82CD20EC);
PPC_FUNC_IMPL(__imp__sub_82CD20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD20F0"))) PPC_WEAK_FUNC(sub_82CD20F0);
PPC_FUNC_IMPL(__imp__sub_82CD20F0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD2130"))) PPC_WEAK_FUNC(sub_82CD2130);
PPC_FUNC_IMPL(__imp__sub_82CD2130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82CD2138;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82cd215c
	if (ctx.cr6.eq) goto loc_82CD215C;
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
loc_82CD215C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82CD2160:
	// bl 0x82cbb0d0
	ctx.lr = 0x82CD2164;
	sub_82CBB0D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82cd217c
	if (!ctx.cr6.gt) goto loc_82CD217C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82cb0410
	ctx.lr = 0x82CD2178;
	sub_82CB0410(ctx, base);
	// b 0x82cd2190
	goto loc_82CD2190;
loc_82CD217C:
	// bl 0x82cb7d90
	ctx.lr = 0x82CD2180;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_82CD2190:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cd21a0
	if (ctx.cr6.eq) goto loc_82CD21A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82cd2160
	goto loc_82CD2160;
loc_82CD21A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cd21c0
	if (ctx.cr6.eq) goto loc_82CD21C0;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cd21c0
	if (ctx.cr6.eq) goto loc_82CD21C0;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82cd21c4
	goto loc_82CD21C4;
loc_82CD21C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CD21C4:
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82cd2378
	if (ctx.cr6.lt) goto loc_82CD2378;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82cd2378
	if (ctx.cr6.eq) goto loc_82CD2378;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x82cd2378
	if (ctx.cr6.gt) goto loc_82CD2378;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82cd2218
	if (!ctx.cr6.gt) goto loc_82CD2218;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bne cr6,0x82cd2254
	if (!ctx.cr6.eq) goto loc_82CD2254;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82cd2254
	if (!ctx.cr6.eq) goto loc_82CD2254;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cd2250
	if (ctx.cr6.eq) goto loc_82CD2250;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82cd2254
	if (!ctx.cr6.eq) goto loc_82CD2254;
	// b 0x82cd2250
	goto loc_82CD2250;
loc_82CD2218:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82cd222c
	if (ctx.cr6.eq) goto loc_82CD222C;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x82cd2254
	goto loc_82CD2254;
loc_82CD222C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82cd224c
	if (ctx.cr6.eq) goto loc_82CD224C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82cd224c
	if (ctx.cr6.eq) goto loc_82CD224C;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x82cd2254
	goto loc_82CD2254;
loc_82CD224C:
	// li r28,16
	ctx.r28.s64 = 16;
loc_82CD2250:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82CD2254:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82cd2268
	goto loc_82CD2268;
loc_82CD2260:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82CD2268:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82cd2260
	if (ctx.cr6.eq) goto loc_82CD2260;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x82CD2280;
	sub_821EE9E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,15244
	ctx.r30.s64 = ctx.r11.s64 + 15244;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5e30
	ctx.lr = 0x82CD2298;
	sub_82CA5E30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cd22e0
	if (ctx.cr0.eq) goto loc_82CD22E0;
loc_82CD22A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r27,r10
	ctx.r27.s64 = ctx.r10.s8;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821ee9e8
	ctx.lr = 0x82CD22C4;
	sub_821EE9E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ca5e30
	ctx.lr = 0x82CD22D4;
	sub_82CA5E30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cd22a0
	if (!ctx.cr0.eq) goto loc_82CD22A0;
	// b 0x82cd22e8
	goto loc_82CD22E8;
loc_82CD22E0:
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82CD22E8:
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82cd2378
	if (ctx.cr6.eq) goto loc_82CD2378;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf. r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82cd2354
	if (ctx.cr0.lt) goto loc_82CD2354;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82cd2330
	if (ctx.cr6.gt) goto loc_82CD2330;
	// extsb r11,r27
	ctx.r11.s64 = ctx.r27.s8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cd2330
	if (ctx.cr6.lt) goto loc_82CD2330;
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// twllei r28,0
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82cd2354
	if (ctx.cr6.eq) goto loc_82CD2354;
loc_82CD2330:
	// bl 0x82cab770
	ctx.lr = 0x82CD2334;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82cd234c
	if (ctx.cr6.eq) goto loc_82CD234C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82CD234C:
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r23,43
	ctx.r23.s64 = 43;
loc_82CD2354:
	// extsb r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cd2364
	if (!ctx.cr6.eq) goto loc_82CD2364;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_82CD2364:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82cd2370
	if (ctx.cr6.eq) goto loc_82CD2370;
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
loc_82CD2370:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82cd2388
	goto loc_82CD2388;
loc_82CD2378:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82cd2384
	if (ctx.cr6.eq) goto loc_82CD2384;
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
loc_82CD2384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CD2388:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82CD2390"))) PPC_WEAK_FUNC(sub_82CD2390);
PPC_FUNC_IMPL(__imp__sub_82CD2390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CD2398;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cd23b8
	if (!ctx.cr6.eq) goto loc_82CD23B8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82CD23B8:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82cb7d90
	ctx.lr = 0x82CD23C0;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// b 0x82cd23d4
	goto loc_82CD23D4;
loc_82CD23C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82cb7d90
	ctx.lr = 0x82CD23D0;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_82CD23D4:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cd23c8
	if (!ctx.cr0.eq) goto loc_82CD23C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cd2404
	if (ctx.cr6.eq) goto loc_82CD2404;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82cd2404
	if (ctx.cr6.eq) goto loc_82CD2404;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82cd2408
	goto loc_82CD2408;
loc_82CD2404:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CD2408:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// bl 0x82cd2130
	ctx.lr = 0x82CD2420;
	sub_82CD2130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cd2430
	if (!ctx.cr6.eq) goto loc_82CD2430;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82CD2430:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cd244c
	if (!ctx.cr6.eq) goto loc_82CD244C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cd2474
	if (!ctx.cr6.eq) goto loc_82CD2474;
loc_82CD244C:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82cd2460
	if (!ctx.cr6.eq) goto loc_82CD2460;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82cd2474
	if (ctx.cr6.gt) goto loc_82CD2474;
loc_82CD2460:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cd24b4
	if (!ctx.cr6.eq) goto loc_82CD24B4;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82cd24a8
	if (!ctx.cr6.gt) goto loc_82CD24A8;
loc_82CD2474:
	// bl 0x82cab770
	ctx.lr = 0x82CD2478;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82cd2490
	if (ctx.cr6.eq) goto loc_82CD2490;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82CD2490:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82cd24b4
	if (ctx.cr6.eq) goto loc_82CD24B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cd24b4
	goto loc_82CD24B4;
loc_82CD24A8:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cd24b4
	if (!ctx.cr6.eq) goto loc_82CD24B4;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82CD24B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CD24BC"))) PPC_WEAK_FUNC(sub_82CD24BC);
PPC_FUNC_IMPL(__imp__sub_82CD24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD24C0"))) PPC_WEAK_FUNC(sub_82CD24C0);
PPC_FUNC_IMPL(__imp__sub_82CD24C0) {
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
	// bl 0x82cd24e8
	ctx.lr = 0x82CD24D0;
	sub_82CD24E8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD24E4"))) PPC_WEAK_FUNC(sub_82CD24E4);
PPC_FUNC_IMPL(__imp__sub_82CD24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD24E8"))) PPC_WEAK_FUNC(sub_82CD24E8);
PPC_FUNC_IMPL(__imp__sub_82CD24E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CD24F0;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cab770
	ctx.lr = 0x82CD250C;
	sub_82CAB770(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82cab770
	ctx.lr = 0x82CD2514;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82ca99c0
	ctx.lr = 0x82CD252C;
	sub_82CA99C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cab770
	ctx.lr = 0x82CD2534;
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82cab770
	ctx.lr = 0x82CD2540;
	sub_82CAB770(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// ble cr6,0x82cd2564
	if (!ctx.cr6.gt) goto loc_82CD2564;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3384);
loc_82CD2554:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fmul f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bgt 0x82cd2554
	if (ctx.cr0.gt) goto loc_82CD2554;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82CD2564:
	// bge cr6,0x82cd2580
	if (!ctx.cr6.lt) goto loc_82CD2580;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// lfd f0,448(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 448);
loc_82CD2574:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bne 0x82cd2574
	if (!ctx.cr0.eq) goto loc_82CD2574;
loc_82CD2580:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CD2590"))) PPC_WEAK_FUNC(sub_82CD2590);
PPC_FUNC_IMPL(__imp__sub_82CD2590) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cd24e8
	sub_82CD24E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD2594"))) PPC_WEAK_FUNC(sub_82CD2594);
PPC_FUNC_IMPL(__imp__sub_82CD2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2598"))) PPC_WEAK_FUNC(sub_82CD2598);
PPC_FUNC_IMPL(__imp__sub_82CD2598) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cd25ac
	if (!ctx.cr6.eq) goto loc_82CD25AC;
	// b 0x82ca5cf0
	sub_82CA5CF0(ctx, base);
	return;
loc_82CD25AC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r11.u32);
	// addi r11,r9,28716
	ctx.r11.s64 = ctx.r9.s64 + 28716;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD25C8"))) PPC_WEAK_FUNC(sub_82CD25C8);
PPC_FUNC_IMPL(__imp__sub_82CD25C8) {
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
	// lis r30,-31953
	ctx.r30.s64 = -2094071808;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bge cr6,0x82cd262c
	if (!ctx.cr6.lt) goto loc_82CD262C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r31,r10,28716
	ctx.r31.s64 = ctx.r10.s64 + 28716;
loc_82CD25F4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd2624
	if (ctx.cr6.eq) goto loc_82CD2624;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD2620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
loc_82CD2624:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82cd25f4
	if (ctx.cr6.lt) goto loc_82CD25F4;
loc_82CD262C:
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

__attribute__((alias("__imp__sub_82CD2644"))) PPC_WEAK_FUNC(sub_82CD2644);
PPC_FUNC_IMPL(__imp__sub_82CD2644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2648"))) PPC_WEAK_FUNC(sub_82CD2648);
PPC_FUNC_IMPL(__imp__sub_82CD2648) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD264C"))) PPC_WEAK_FUNC(sub_82CD264C);
PPC_FUNC_IMPL(__imp__sub_82CD264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2650"))) PPC_WEAK_FUNC(sub_82CD2650);
PPC_FUNC_IMPL(__imp__sub_82CD2650) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD2654"))) PPC_WEAK_FUNC(sub_82CD2654);
PPC_FUNC_IMPL(__imp__sub_82CD2654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2658"))) PPC_WEAK_FUNC(sub_82CD2658);
PPC_FUNC_IMPL(__imp__sub_82CD2658) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD265C"))) PPC_WEAK_FUNC(sub_82CD265C);
PPC_FUNC_IMPL(__imp__sub_82CD265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2660"))) PPC_WEAK_FUNC(sub_82CD2660);
PPC_FUNC_IMPL(__imp__sub_82CD2660) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cd2774
	if (ctx.cr6.eq) goto loc_82CD2774;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cd2774
	if (ctx.cr6.eq) goto loc_82CD2774;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82cd26a4
	if (!ctx.cr6.eq) goto loc_82CD26A4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82cd2774
	if (ctx.cr6.gt) goto loc_82CD2774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,15612
	ctx.r11.s64 = ctx.r11.s64 + 15612;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82CD26A4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82cd26d0
	if (!ctx.cr6.eq) goto loc_82CD26D0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82cd2774
	if (ctx.cr6.gt) goto loc_82CD2774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,15612
	ctx.r11.s64 = ctx.r11.s64 + 15612;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82CD26D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cd2740
	if (ctx.cr6.eq) goto loc_82CD2740;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cd2710
	if (ctx.cr6.eq) goto loc_82CD2710;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82cd2774
	if (!ctx.cr6.eq) goto loc_82CD2774;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82cd2774
	if (!ctx.cr6.eq) goto loc_82CD2774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,15612
	ctx.r11.s64 = ctx.r11.s64 + 15612;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82CD2710:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82cd2720
	if (ctx.cr6.eq) goto loc_82CD2720;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82cd2774
	if (!ctx.cr6.eq) goto loc_82CD2774;
loc_82CD2720:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,15612
	ctx.r11.s64 = ctx.r11.s64 + 15612;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82CD2740:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82cd2758
	if (ctx.cr6.eq) goto loc_82CD2758;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82cd2758
	if (ctx.cr6.eq) goto loc_82CD2758;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82cd2774
	if (!ctx.cr6.eq) goto loc_82CD2774;
loc_82CD2758:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,15612
	ctx.r9.s64 = ctx.r11.s64 + 15612;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82CD2774:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD277C"))) PPC_WEAK_FUNC(sub_82CD277C);
PPC_FUNC_IMPL(__imp__sub_82CD277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2780"))) PPC_WEAK_FUNC(sub_82CD2780);
PPC_FUNC_IMPL(__imp__sub_82CD2780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2788;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cd28e0
	if (ctx.cr6.gt) goto loc_82CD28E0;
	// beq cr6,0x82cd28c4
	if (ctx.cr6.eq) goto loc_82CD28C4;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd2870
	if (ctx.cr0.eq) goto loc_82CD2870;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82cd2818
	if (ctx.cr6.eq) goto loc_82CD2818;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82cd28f4
	if (!ctx.cr6.eq) goto loc_82CD28F4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cd280c
	if (ctx.cr6.eq) goto loc_82CD280C;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82cd280c
	if (!ctx.cr6.eq) goto loc_82CD280C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82cd280c
	if (!ctx.cr0.eq) goto loc_82CD280C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// bl 0x832b2c3c
	ctx.lr = 0x82CD2804;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CD280C;
	__imp__KfLowerIrql(ctx, base);
loc_82CD280C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD2818:
	// bl 0x832b2c0c
	ctx.lr = 0x82CD281C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cd2844
	if (ctx.cr6.eq) goto loc_82CD2844;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cd28b0
	if (ctx.cr6.eq) goto loc_82CD28B0;
loc_82CD2844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2c2c
	ctx.lr = 0x82CD284C;
	__imp__KeTryToAcquireSpinLockAtRaisedIrql(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cd28a4
	if (!ctx.cr6.eq) goto loc_82CD28A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b2c1c
	ctx.lr = 0x82CD2860;
	__imp__KfLowerIrql(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD2870:
	// bl 0x832b2c0c
	ctx.lr = 0x82CD2874;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cd289c
	if (ctx.cr6.eq) goto loc_82CD289C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cd28b0
	if (ctx.cr6.eq) goto loc_82CD28B0;
loc_82CD289C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2bfc
	ctx.lr = 0x82CD28A4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
loc_82CD28A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82CD28B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD28C4:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD28D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD28E0:
	// addis r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -131072;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cd2920
	if (ctx.cr0.eq) goto loc_82CD2920;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82cd2904
	if (ctx.cr6.eq) goto loc_82CD2904;
loc_82CD28F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD2904:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2914;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82CD2920:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832b221c
	ctx.lr = 0x82CD2930;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cd280c
	if (!ctx.cr6.eq) goto loc_82CD280C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD2948"))) PPC_WEAK_FUNC(sub_82CD2948);
PPC_FUNC_IMPL(__imp__sub_82CD2948) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15788
	ctx.r9.s64 = ctx.r11.s64 + 15788;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82cd2988
	if (ctx.cr6.eq) goto loc_82CD2988;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,28812
	ctx.r3.s64 = ctx.r11.s64 + 28812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd9fd8
	ctx.lr = 0x82CD2988;
	sub_82CD9FD8(ctx, base);
loc_82CD2988:
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

__attribute__((alias("__imp__sub_82CD29A0"))) PPC_WEAK_FUNC(sub_82CD29A0);
PPC_FUNC_IMPL(__imp__sub_82CD29A0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cd3368
	ctx.lr = 0x82CD29C0;
	sub_82CD3368(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,28900
	ctx.r5.s64 = ctx.r11.s64 + 28900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdb980
	ctx.lr = 0x82CD29D4;
	sub_82CDB980(ctx, base);
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

__attribute__((alias("__imp__sub_82CD29EC"))) PPC_WEAK_FUNC(sub_82CD29EC);
PPC_FUNC_IMPL(__imp__sub_82CD29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD29F0"))) PPC_WEAK_FUNC(sub_82CD29F0);
PPC_FUNC_IMPL(__imp__sub_82CD29F0) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2A18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2A38;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82CD2A54"))) PPC_WEAK_FUNC(sub_82CD2A54);
PPC_FUNC_IMPL(__imp__sub_82CD2A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2A58"))) PPC_WEAK_FUNC(sub_82CD2A58);
PPC_FUNC_IMPL(__imp__sub_82CD2A58) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2A80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2AA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82CD2ABC"))) PPC_WEAK_FUNC(sub_82CD2ABC);
PPC_FUNC_IMPL(__imp__sub_82CD2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2AC0"))) PPC_WEAK_FUNC(sub_82CD2AC0);
PPC_FUNC_IMPL(__imp__sub_82CD2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CD2AC8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x832b227c
	ctx.lr = 0x82CD2AF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2B20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CD2B2C"))) PPC_WEAK_FUNC(sub_82CD2B2C);
PPC_FUNC_IMPL(__imp__sub_82CD2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2B30"))) PPC_WEAK_FUNC(sub_82CD2B30);
PPC_FUNC_IMPL(__imp__sub_82CD2B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2B38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2B54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2B78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD2B84"))) PPC_WEAK_FUNC(sub_82CD2B84);
PPC_FUNC_IMPL(__imp__sub_82CD2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2B88"))) PPC_WEAK_FUNC(sub_82CD2B88);
PPC_FUNC_IMPL(__imp__sub_82CD2B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2B90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2BAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2BD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD2BDC"))) PPC_WEAK_FUNC(sub_82CD2BDC);
PPC_FUNC_IMPL(__imp__sub_82CD2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2BE0"))) PPC_WEAK_FUNC(sub_82CD2BE0);
PPC_FUNC_IMPL(__imp__sub_82CD2BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2BE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2C04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2C28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD2C34"))) PPC_WEAK_FUNC(sub_82CD2C34);
PPC_FUNC_IMPL(__imp__sub_82CD2C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2C38"))) PPC_WEAK_FUNC(sub_82CD2C38);
PPC_FUNC_IMPL(__imp__sub_82CD2C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CD2C40;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832b227c
	ctx.lr = 0x82CD2C60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2C88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CD2C94"))) PPC_WEAK_FUNC(sub_82CD2C94);
PPC_FUNC_IMPL(__imp__sub_82CD2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2C98"))) PPC_WEAK_FUNC(sub_82CD2C98);
PPC_FUNC_IMPL(__imp__sub_82CD2C98) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2CC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cdc180
	ctx.lr = 0x82CD2CC8;
	sub_82CDC180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2CD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82CD2CF0"))) PPC_WEAK_FUNC(sub_82CD2CF0);
PPC_FUNC_IMPL(__imp__sub_82CD2CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2CF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2D14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cdcfe8
	ctx.lr = 0x82CD2D20;
	sub_82CDCFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2D2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CD2D38"))) PPC_WEAK_FUNC(sub_82CD2D38);
PPC_FUNC_IMPL(__imp__sub_82CD2D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CD2D40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b227c
	ctx.lr = 0x82CD2D5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD2D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832b226c
	ctx.lr = 0x82CD2D80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

