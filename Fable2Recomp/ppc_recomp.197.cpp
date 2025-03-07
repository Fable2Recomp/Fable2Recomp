#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D0116C"))) PPC_WEAK_FUNC(sub_82D0116C);
PPC_FUNC_IMPL(__imp__sub_82D0116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01170"))) PPC_WEAK_FUNC(sub_82D01170);
PPC_FUNC_IMPL(__imp__sub_82D01170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D01178;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r31,1272
	ctx.r25.s64 = ctx.r31.s64 + 1272;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x832b227c
	ctx.lr = 0x82D011A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d005a0
	ctx.lr = 0x82D011B0;
	sub_82D005A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d011c4
	if (!ctx.cr0.eq) goto loc_82D011C4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82d011e0
	goto loc_82D011E0;
loc_82D011C4:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d017b0
	ctx.lr = 0x82D011DC;
	sub_82D017B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D011E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b226c
	ctx.lr = 0x82D011E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D011F4"))) PPC_WEAK_FUNC(sub_82D011F4);
PPC_FUNC_IMPL(__imp__sub_82D011F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D011F8"))) PPC_WEAK_FUNC(sub_82D011F8);
PPC_FUNC_IMPL(__imp__sub_82D011F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D01200;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r31,1272
	ctx.r28.s64 = ctx.r31.s64 + 1272;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832b227c
	ctx.lr = 0x82D01220;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d005a0
	ctx.lr = 0x82D0122C;
	sub_82D005A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d01240
	if (!ctx.cr0.eq) goto loc_82D01240;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82d01250
	goto loc_82D01250;
loc_82D01240:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d02158
	ctx.lr = 0x82D0124C;
	sub_82D02158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D01250:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82D01258;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D01264"))) PPC_WEAK_FUNC(sub_82D01264);
PPC_FUNC_IMPL(__imp__sub_82D01264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01268"))) PPC_WEAK_FUNC(sub_82D01268);
PPC_FUNC_IMPL(__imp__sub_82D01268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D01270;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r31,1272
	ctx.r28.s64 = ctx.r31.s64 + 1272;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832b227c
	ctx.lr = 0x82D01290;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d005a0
	ctx.lr = 0x82D0129C;
	sub_82D005A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d012b0
	if (!ctx.cr0.eq) goto loc_82D012B0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82d012c0
	goto loc_82D012C0;
loc_82D012B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d020e0
	ctx.lr = 0x82D012BC;
	sub_82D020E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D012C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82D012C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D012D4"))) PPC_WEAK_FUNC(sub_82D012D4);
PPC_FUNC_IMPL(__imp__sub_82D012D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D012D8"))) PPC_WEAK_FUNC(sub_82D012D8);
PPC_FUNC_IMPL(__imp__sub_82D012D8) {
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
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,31072
	ctx.r11.u64 = ctx.r11.u64 | 31072;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83004c90
	ctx.lr = 0x82D0130C;
	sub_83004C90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82d0131c
	if (!ctx.cr0.eq) goto loc_82D0131C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc0728
	ctx.lr = 0x82D0131C;
	sub_82CC0728(ctx, base);
loc_82D0131C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83004c20
	ctx.lr = 0x82D01338;
	sub_83004C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d01348
	if (!ctx.cr0.eq) goto loc_82D01348;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cc0728
	ctx.lr = 0x82D01348;
	sub_82CC0728(ctx, base);
loc_82D01348:
	// lwz r3,1304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	// bl 0x822c9380
	ctx.lr = 0x82D01350;
	sub_822C9380(ctx, base);
	// b 0x82d01364
	goto loc_82D01364;
loc_82D01354:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82196c58
	ctx.lr = 0x82D0135C;
	sub_82196C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d00c30
	ctx.lr = 0x82D01364;
	sub_82D00C30(ctx, base);
loc_82D01364:
	// lwz r11,1300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82d01354
	if (!ctx.cr6.eq) goto loc_82D01354;
	// bl 0x83004be0
	ctx.lr = 0x82D01378;
	sub_83004BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbbf60
	ctx.lr = 0x82D01380;
	sub_82CBBF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0728
	ctx.lr = 0x82D01388;
	sub_82CC0728(ctx, base);
}

__attribute__((alias("__imp__sub_82D01388"))) PPC_WEAK_FUNC(sub_82D01388);
PPC_FUNC_IMPL(__imp__sub_82D01388) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82D01390;
	sub_82CA2BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d014a4
	if (!ctx.cr6.eq) goto loc_82D014A4;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32048
	ctx.r10.s64 = -2100297728;
	// addi r11,r11,24360
	ctx.r11.s64 = ctx.r11.s64 + 24360;
	// lis r9,-32048
	ctx.r9.s64 = -2100297728;
	// lis r8,-32048
	ctx.r8.s64 = -2100297728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,3032
	ctx.r10.s64 = ctx.r10.s64 + 3032;
	// addi r9,r9,456
	ctx.r9.s64 = ctx.r9.s64 + 456;
	// addi r11,r8,592
	ctx.r11.s64 = ctx.r8.s64 + 592;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32048
	ctx.r7.s64 = -2100297728;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32048
	ctx.r6.s64 = -2100297728;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32048
	ctx.r5.s64 = -2100297728;
	// addi r10,r7,704
	ctx.r10.s64 = ctx.r7.s64 + 704;
	// addi r9,r6,3496
	ctx.r9.s64 = ctx.r6.s64 + 3496;
	// addi r11,r5,3608
	ctx.r11.s64 = ctx.r5.s64 + 3608;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32048
	ctx.r4.s64 = -2100297728;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-32048
	ctx.r31.s64 = -2100297728;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-32048
	ctx.r30.s64 = -2100297728;
	// addi r10,r4,816
	ctx.r10.s64 = ctx.r4.s64 + 816;
	// addi r9,r31,856
	ctx.r9.s64 = ctx.r31.s64 + 856;
	// addi r11,r30,1040
	ctx.r11.s64 = ctx.r30.s64 + 1040;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-32048
	ctx.r29.s64 = -2100297728;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-32048
	ctx.r28.s64 = -2100297728;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32048
	ctx.r27.s64 = -2100297728;
	// addi r10,r29,3720
	ctx.r10.s64 = ctx.r29.s64 + 3720;
	// addi r9,r28,3984
	ctx.r9.s64 = ctx.r28.s64 + 3984;
	// addi r11,r27,4080
	ctx.r11.s64 = ctx.r27.s64 + 4080;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-32048
	ctx.r26.s64 = -2100297728;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-32048
	ctx.r25.s64 = -2100297728;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-32048
	ctx.r24.s64 = -2100297728;
	// addi r10,r26,1176
	ctx.r10.s64 = ctx.r26.s64 + 1176;
	// addi r9,r25,1264
	ctx.r9.s64 = ctx.r25.s64 + 1264;
	// addi r11,r24,4272
	ctx.r11.s64 = ctx.r24.s64 + 4272;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-32048
	ctx.r23.s64 = -2100297728;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-32048
	ctx.r22.s64 = -2100297728;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-32211
	ctx.r21.s64 = -2110980096;
	// addi r10,r23,4360
	ctx.r10.s64 = ctx.r23.s64 + 4360;
	// addi r9,r22,4464
	ctx.r9.s64 = ctx.r22.s64 + 4464;
	// addi r11,r21,5752
	ctx.r11.s64 = ctx.r21.s64 + 5752;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-32048
	ctx.r20.s64 = -2100297728;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-32048
	ctx.r19.s64 = -2100297728;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-32048
	ctx.r18.s64 = -2100297728;
	// addi r10,r20,1312
	ctx.r10.s64 = ctx.r20.s64 + 1312;
	// addi r9,r19,4600
	ctx.r9.s64 = ctx.r19.s64 + 4600;
	// addi r11,r18,4712
	ctx.r11.s64 = ctx.r18.s64 + 4712;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_82D014A4:
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82D014A8"))) PPC_WEAK_FUNC(sub_82D014A8);
PPC_FUNC_IMPL(__imp__sub_82D014A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D014B0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,29072
	ctx.r29.s64 = ctx.r11.s64 + 29072;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d01388
	ctx.lr = 0x82D014D0;
	sub_82D01388(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,2240
	ctx.r3.s64 = 2240;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x821f4d88
	ctx.lr = 0x82D014E0;
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82d014f4
	if (!ctx.cr0.eq) goto loc_82D014F4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82d01698
	goto loc_82D01698;
loc_82D014F4:
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D01510;
	sub_82CA2C60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cffcb8
	ctx.lr = 0x82D0151C;
	sub_82CFFCB8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d0168c
	if (ctx.cr0.lt) goto loc_82D0168C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01568
	if (!ctx.cr6.gt) goto loc_82D01568;
	// addi r28,r31,1096
	ctx.r28.s64 = ctx.r31.s64 + 1096;
loc_82D01538:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d03da8
	ctx.lr = 0x82D0154C;
	sub_82D03DA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d0168c
	if (ctx.cr0.lt) goto loc_82D0168C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01538
	if (ctx.cr6.lt) goto loc_82D01538;
loc_82D01568:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d015b4
	if (!ctx.cr6.gt) goto loc_82D015B4;
	// addi r28,r31,1128
	ctx.r28.s64 = ctx.r31.s64 + 1128;
loc_82D0157C:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d022f0
	ctx.lr = 0x82D01598;
	sub_82D022F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d0168c
	if (ctx.cr0.lt) goto loc_82D0168C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d0157c
	if (ctx.cr6.lt) goto loc_82D0157C;
loc_82D015B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbc4b8
	ctx.lr = 0x82D015C8;
	sub_82CBC4B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r3.u32);
	// bne 0x82d015e0
	if (!ctx.cr0.eq) goto loc_82D015E0;
loc_82D015D4:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82d0168c
	goto loc_82D0168C;
loc_82D015E0:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832b23bc
	ctx.lr = 0x82D015EC;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d015d4
	if (ctx.cr0.eq) goto loc_82D015D4;
	// stw r25,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r25.u32);
	// addi r3,r31,1272
	ctx.r3.s64 = ctx.r31.s64 + 1272;
	// bl 0x832b258c
	ctx.lr = 0x82D01604;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d01684
	if (!ctx.cr6.eq) goto loc_82D01684;
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,4824
	ctx.r5.s64 = ctx.r11.s64 + 4824;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc8758
	ctx.lr = 0x82D01634;
	sub_82CC8758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r3.u32);
	// beq 0x82d015d4
	if (ctx.cr0.eq) goto loc_82D015D4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,1304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// bl 0x82196c58
	ctx.lr = 0x82D0164C;
	sub_82196C58(ctx, base);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d01684
	if (ctx.cr6.eq) goto loc_82D01684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc1318
	ctx.lr = 0x82D01674;
	sub_82CC1318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d01684
	if (!ctx.cr0.eq) goto loc_82D01684;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_82D01684:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d01698
	if (!ctx.cr6.lt) goto loc_82D01698;
loc_82D0168C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d00bd8
	ctx.lr = 0x82D01694;
	sub_82D00BD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D01698:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D016A8"))) PPC_WEAK_FUNC(sub_82D016A8);
PPC_FUNC_IMPL(__imp__sub_82D016A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D016B0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82d017a4
	if (ctx.cr6.eq) goto loc_82D017A4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3080(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
loc_82D0171C:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r8,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r8.u8);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// stb r10,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r10.u8);
	// bgt cr6,0x82d01748
	if (ctx.cr6.gt) goto loc_82D01748;
	// lbz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// slw r5,r29,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// and. r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82d01748
	if (!ctx.cr0.eq) goto loc_82D01748;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82d0174c
	goto loc_82D0174C;
loc_82D01748:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82D0174C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82d0171c
	if (ctx.cr6.lt) goto loc_82D0171C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d01770
	if (ctx.cr6.eq) goto loc_82D01770;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01770;
	sub_82CD2A58(ctx, base);
loc_82D01770:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d01784
	if (!ctx.cr6.eq) goto loc_82D01784;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82d01794
	goto loc_82D01794;
loc_82D01784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd29f0
	ctx.lr = 0x82D0178C;
	sub_82CD29F0(ctx, base);
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
loc_82D01794:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82cd2b30
	ctx.lr = 0x82D017A4;
	sub_82CD2B30(ctx, base);
loc_82D017A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D017B0"))) PPC_WEAK_FUNC(sub_82D017B0);
PPC_FUNC_IMPL(__imp__sub_82D017B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82d017cc
	if (ctx.cr6.eq) goto loc_82D017CC;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82d017d0
	goto loc_82D017D0;
loc_82D017CC:
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
loc_82D017D0:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82cd2ac0
	sub_82CD2AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D017DC"))) PPC_WEAK_FUNC(sub_82D017DC);
PPC_FUNC_IMPL(__imp__sub_82D017DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D017E0"))) PPC_WEAK_FUNC(sub_82D017E0);
PPC_FUNC_IMPL(__imp__sub_82D017E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D017E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01838
	if (!ctx.cr6.gt) goto loc_82D01838;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_82D01808:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0181C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d01844
	if (ctx.cr6.eq) goto loc_82D01844;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01808
	if (ctx.cr6.lt) goto loc_82D01808;
loc_82D01838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D0183C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82D01844:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82d0183c
	goto loc_82D0183C;
}

__attribute__((alias("__imp__sub_82D01854"))) PPC_WEAK_FUNC(sub_82D01854);
PPC_FUNC_IMPL(__imp__sub_82D01854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01858"))) PPC_WEAK_FUNC(sub_82D01858);
PPC_FUNC_IMPL(__imp__sub_82D01858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D01860;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r26,r31,72
	ctx.r26.s64 = ctx.r31.s64 + 72;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// stb r30,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r30.u8);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// beq cr6,0x82d018f0
	if (ctx.cr6.eq) goto loc_82D018F0;
	// bl 0x82cd2a58
	ctx.lr = 0x82D018EC;
	sub_82CD2A58(ctx, base);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82D018F0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r24,r31,80
	ctx.r24.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01908
	if (ctx.cr6.eq) goto loc_82D01908;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01904;
	sub_82CD2A58(ctx, base);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
loc_82D01908:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0191c
	if (ctx.cr6.eq) goto loc_82D0191C;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01918;
	sub_82CD2A58(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_82D0191C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82D01938:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,145
	ctx.r7.s64 = ctx.r1.s64 + 145;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r11,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u8);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stfsx f31,r9,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82d01938
	if (ctx.cr6.lt) goto loc_82D01938;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cd3308
	ctx.lr = 0x82D01974;
	sub_82CD3308(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d01a98
	if (ctx.cr0.lt) goto loc_82D01A98;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r30.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r29.u8);
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
loc_82D01998:
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,145
	ctx.r6.s64 = ctx.r1.s64 + 145;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stbx r29,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r29.u8);
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bgt cr6,0x82d019dc
	if (ctx.cr6.gt) goto loc_82D019DC;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82d019dc
	if (!ctx.cr0.eq) goto loc_82D019DC;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// b 0x82d019e4
	goto loc_82D019E4;
loc_82D019DC:
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// stfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
loc_82D019E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82d01998
	if (ctx.cr6.lt) goto loc_82D01998;
	// stw r25,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r25.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d01a0c
	if (!ctx.cr6.eq) goto loc_82D01A0C;
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82d01a1c
	goto loc_82D01A1C;
loc_82D01A0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cd29f0
	ctx.lr = 0x82D01A14;
	sub_82CD29F0(ctx, base);
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
loc_82D01A1C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cd3308
	ctx.lr = 0x82D01A2C;
	sub_82CD3308(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d01a98
	if (ctx.cr0.lt) goto loc_82D01A98;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01a90
	if (!ctx.cr6.gt) goto loc_82D01A90;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D01A44:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D01A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82d01a7c
	if (!ctx.cr0.lt) goto loc_82D01A7C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d01a90
	if (!ctx.cr6.eq) goto loc_82D01A90;
loc_82D01A7C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d01a44
	if (ctx.cr6.lt) goto loc_82D01A44;
loc_82D01A90:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82d01ac0
	if (!ctx.cr6.lt) goto loc_82D01AC0;
loc_82D01A98:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01aac
	if (ctx.cr6.eq) goto loc_82D01AAC;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01AA8;
	sub_82CD2A58(ctx, base);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82D01AAC:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01ac0
	if (ctx.cr6.eq) goto loc_82D01AC0;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01ABC;
	sub_82CD2A58(ctx, base);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
loc_82D01AC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D01AD0"))) PPC_WEAK_FUNC(sub_82D01AD0);
PPC_FUNC_IMPL(__imp__sub_82D01AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D01AD8;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r22,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r22.u8);
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r8,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r8.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stb r22,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r22.u8);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// bne cr6,0x82d01d20
	if (!ctx.cr6.eq) goto loc_82D01D20;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r30,68(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// li r31,1112
	ctx.r31.s64 = 1112;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r21,r11,-1112
	ctx.r21.s64 = ctx.r11.s64 + -1112;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
loc_82D01B74:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d01bac
	if (ctx.cr6.eq) goto loc_82D01BAC;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r9,196(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// rlwinm r9,r9,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// beq cr6,0x82d01bb0
	if (ctx.cr6.eq) goto loc_82D01BB0;
loc_82D01BAC:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82D01BB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d01c08
	if (ctx.cr6.eq) goto loc_82D01C08;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d01c04
	if (ctx.cr0.eq) goto loc_82D01C04;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d01bd8
	if (!ctx.cr6.eq) goto loc_82D01BD8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d01c08
	if (ctx.cr6.eq) goto loc_82D01C08;
loc_82D01BD8:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832b234c
	ctx.lr = 0x82D01BF8;
	__imp__XamUserAreUsersFriends(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d01c08
	if (!ctx.cr6.eq) goto loc_82D01C08;
loc_82D01C04:
	// stwx r23,r21,r31
	PPC_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r23.u32);
loc_82D01C08:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,1128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1128, ctx.xer);
	// blt cr6,0x82d01b74
	if (ctx.cr6.lt) goto loc_82D01B74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r25,r1,132
	ctx.r25.s64 = ctx.r1.s64 + 132;
	// li r31,1112
	ctx.r31.s64 = 1112;
	// addi r24,r28,-1076
	ctx.r24.s64 = ctx.r28.s64 + -1076;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82D01C2C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d01c50
	if (ctx.cr6.eq) goto loc_82D01C50;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lwz r9,192(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d01c54
	if (!ctx.cr6.eq) goto loc_82D01C54;
loc_82D01C50:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82D01C54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d01ce4
	if (ctx.cr6.eq) goto loc_82D01CE4;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d01c74
	if (!ctx.cr0.eq) goto loc_82D01C74;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82d01ce4
	if (!ctx.cr6.eq) goto loc_82D01CE4;
loc_82D01C74:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_82D01C7C:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82d01cd4
	if (ctx.cr6.eq) goto loc_82D01CD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d01cd4
	if (!ctx.cr6.eq) goto loc_82D01CD4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d01cd0
	if (ctx.cr0.eq) goto loc_82D01CD0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82d01cd0
	if (ctx.cr6.eq) goto loc_82D01CD0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// bl 0x82d00908
	ctx.lr = 0x82D01CCC;
	sub_82D00908(ctx, base);
	// b 0x82d01cd4
	goto loc_82D01CD4;
loc_82D01CD0:
	// stwx r23,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r23.u32);
loc_82D01CD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82d01c7c
	if (ctx.cr6.lt) goto loc_82D01C7C;
loc_82D01CE4:
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d01d00
	if (ctx.cr6.eq) goto loc_82D01D00;
	// lwzx r11,r24,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x82d01d00
	if (ctx.cr6.gt) goto loc_82D01D00;
	// stfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_82D01D00:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplwi cr6,r31,1128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1128, ctx.xer);
	// blt cr6,0x82d01c2c
	if (ctx.cr6.lt) goto loc_82D01C2C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x82cd2b88
	ctx.lr = 0x82D01D20;
	sub_82CD2B88(ctx, base);
loc_82D01D20:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D01D2C"))) PPC_WEAK_FUNC(sub_82D01D2C);
PPC_FUNC_IMPL(__imp__sub_82D01D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01D30"))) PPC_WEAK_FUNC(sub_82D01D30);
PPC_FUNC_IMPL(__imp__sub_82D01D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D01D38;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d01e0c
	if (ctx.cr6.eq) goto loc_82D01E0C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01d80
	if (!ctx.cr6.gt) goto loc_82D01D80;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
loc_82D01D60:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cfe748
	ctx.lr = 0x82D01D68;
	sub_82CFE748(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01d60
	if (ctx.cr6.lt) goto loc_82D01D60;
loc_82D01D80:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01dc0
	if (!ctx.cr6.gt) goto loc_82D01DC0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82D01D94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D01DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01d94
	if (ctx.cr6.lt) goto loc_82D01D94;
loc_82D01DC0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01dd4
	if (ctx.cr6.eq) goto loc_82D01DD4;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01DD0;
	sub_82CD2A58(ctx, base);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82D01DD4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01de8
	if (ctx.cr6.eq) goto loc_82D01DE8;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01DE4;
	sub_82CD2A58(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82D01DE8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d01dfc
	if (ctx.cr6.eq) goto loc_82D01DFC;
	// bl 0x82cd2a58
	ctx.lr = 0x82D01DF8;
	sub_82CD2A58(ctx, base);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_82D01DFC:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x821f5f18
	ctx.lr = 0x82D01E0C;
	sub_821F5F18(ctx, base);
loc_82D01E0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D01E14"))) PPC_WEAK_FUNC(sub_82D01E14);
PPC_FUNC_IMPL(__imp__sub_82D01E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01E18"))) PPC_WEAK_FUNC(sub_82D01E18);
PPC_FUNC_IMPL(__imp__sub_82D01E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D01E20;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01e7c
	if (!ctx.cr6.gt) goto loc_82D01E7C;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
loc_82D01E3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d00a00
	ctx.lr = 0x82D01E58;
	sub_82D00A00(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cfe4f0
	ctx.lr = 0x82D01E68;
	sub_82CFE4F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01e3c
	if (ctx.cr6.lt) goto loc_82D01E3C;
loc_82D01E7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d01eb8
	if (!ctx.cr6.gt) goto loc_82D01EB8;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82D01E90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D01EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d01e90
	if (ctx.cr6.lt) goto loc_82D01E90;
loc_82D01EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D01EC4"))) PPC_WEAK_FUNC(sub_82D01EC4);
PPC_FUNC_IMPL(__imp__sub_82D01EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01EC8"))) PPC_WEAK_FUNC(sub_82D01EC8);
PPC_FUNC_IMPL(__imp__sub_82D01EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D01ED0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d01f30
	if (ctx.cr6.eq) goto loc_82D01F30;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82D01EF4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d017e0
	ctx.lr = 0x82D01F00;
	sub_82D017E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d01f30
	if (ctx.cr0.eq) goto loc_82D01F30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D01F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d01f30
	if (ctx.cr0.lt) goto loc_82D01F30;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d01ef4
	if (ctx.cr6.lt) goto loc_82D01EF4;
loc_82D01F30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D01F3C"))) PPC_WEAK_FUNC(sub_82D01F3C);
PPC_FUNC_IMPL(__imp__sub_82D01F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01F40"))) PPC_WEAK_FUNC(sub_82D01F40);
PPC_FUNC_IMPL(__imp__sub_82D01F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D01F48;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d01fa8
	if (ctx.cr6.eq) goto loc_82D01FA8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82D01F6C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d017e0
	ctx.lr = 0x82D01F78;
	sub_82D017E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d01fa8
	if (ctx.cr0.eq) goto loc_82D01FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D01F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d01fa8
	if (ctx.cr0.lt) goto loc_82D01FA8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d01f6c
	if (ctx.cr6.lt) goto loc_82D01F6C;
loc_82D01FA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D01FB4"))) PPC_WEAK_FUNC(sub_82D01FB4);
PPC_FUNC_IMPL(__imp__sub_82D01FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01FB8"))) PPC_WEAK_FUNC(sub_82D01FB8);
PPC_FUNC_IMPL(__imp__sub_82D01FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D01FC0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D01FEC;
	sub_822BA2F8(ctx, base);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r26,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r26.u8);
	// bne cr6,0x82d02024
	if (!ctx.cr6.eq) goto loc_82D02024;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d02024
	if (!ctx.cr6.eq) goto loc_82D02024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d016a8
	ctx.lr = 0x82D02010;
	sub_82D016A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d02040
	if (!ctx.cr6.eq) goto loc_82D02040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d01ad0
	ctx.lr = 0x82D02020;
	sub_82D01AD0(ctx, base);
	// b 0x82d02040
	goto loc_82D02040;
loc_82D02024:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d01858
	ctx.lr = 0x82D02038;
	sub_82D01858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d0204c
	if (ctx.cr0.lt) goto loc_82D0204C;
loc_82D02040:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1308, ctx.r10.u32);
loc_82D0204C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D02054"))) PPC_WEAK_FUNC(sub_82D02054);
PPC_FUNC_IMPL(__imp__sub_82D02054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02058"))) PPC_WEAK_FUNC(sub_82D02058);
PPC_FUNC_IMPL(__imp__sub_82D02058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D02060;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D02074;
	sub_822BA2F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d020b0
	if (!ctx.cr6.gt) goto loc_82D020B0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82D02088:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0209C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d02088
	if (ctx.cr6.lt) goto loc_82D02088;
loc_82D020B0:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d020c8
	if (ctx.cr6.eq) goto loc_82D020C8;
	// bl 0x82cd2a58
	ctx.lr = 0x82D020C0;
	sub_82CD2A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82D020C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1308, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D020E0"))) PPC_WEAK_FUNC(sub_82D020E0);
PPC_FUNC_IMPL(__imp__sub_82D020E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D020E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,26900(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26900);
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// bl 0x82d017e0
	ctx.lr = 0x82D0210C;
	sub_82D017E0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82d02148
	if (ctx.cr0.eq) goto loc_82D02148;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82d02134
	if (ctx.cr6.eq) goto loc_82D02134;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d01ad0
	ctx.lr = 0x82D02134;
	sub_82D01AD0(ctx, base);
loc_82D02134:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cfd1c8
	ctx.lr = 0x82D02144;
	sub_82CFD1C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D02148:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D02154"))) PPC_WEAK_FUNC(sub_82D02154);
PPC_FUNC_IMPL(__imp__sub_82D02154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02158"))) PPC_WEAK_FUNC(sub_82D02158);
PPC_FUNC_IMPL(__imp__sub_82D02158) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82d0217c
	if (ctx.cr6.eq) goto loc_82D0217C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1308, ctx.r10.u32);
loc_82D0217C:
	// b 0x82d01ad0
	sub_82D01AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02180"))) PPC_WEAK_FUNC(sub_82D02180);
PPC_FUNC_IMPL(__imp__sub_82D02180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D02188;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d021e0
	if (!ctx.cr6.gt) goto loc_82D021E0;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_82D021AC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D021C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d021cc
	if (!ctx.cr6.eq) goto loc_82D021CC;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82D021CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d021ac
	if (ctx.cr6.lt) goto loc_82D021AC;
loc_82D021E0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d021f8
	if (ctx.cr6.eq) goto loc_82D021F8;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82d0222c
	goto loc_82D0222C;
loc_82D021F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d0222c
	if (!ctx.cr6.gt) goto loc_82D0222C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02228
	if (ctx.cr6.eq) goto loc_82D02228;
	// bl 0x82266070
	ctx.lr = 0x82D02214;
	sub_82266070(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82D02228:
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82D0222C:
	// bl 0x82266070
	ctx.lr = 0x82D02230;
	sub_82266070(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D02240"))) PPC_WEAK_FUNC(sub_82D02240);
PPC_FUNC_IMPL(__imp__sub_82D02240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D02248;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D02264;
	sub_822BA2F8(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d022d4
	if (!ctx.cr6.gt) goto loc_82D022D4;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
loc_82D02278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82D0228C:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d022a4
	if (ctx.cr6.eq) goto loc_82D022A4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82d022dc
	if (ctx.cr6.eq) goto loc_82D022DC;
loc_82D022A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82d0228c
	if (ctx.cr6.lt) goto loc_82D0228C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D022B8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d02278
	if (ctx.cr6.lt) goto loc_82D02278;
loc_82D022D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82D022DC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82cfe8d8
	ctx.lr = 0x82D022E8;
	sub_82CFE8D8(ctx, base);
	// b 0x82d022b8
	goto loc_82D022B8;
}

__attribute__((alias("__imp__sub_82D022EC"))) PPC_WEAK_FUNC(sub_82D022EC);
PPC_FUNC_IMPL(__imp__sub_82D022EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D022F0"))) PPC_WEAK_FUNC(sub_82D022F0);
PPC_FUNC_IMPL(__imp__sub_82D022F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82D022F8;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x821f4d88
	ctx.lr = 0x82D02328;
	sub_821F4D88(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82d0233c
	if (!ctx.cr0.eq) goto loc_82D0233C;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82d0253c
	goto loc_82D0253C;
loc_82D0233C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r20,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r20.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba2f8
	ctx.lr = 0x82D02358;
	sub_822BA2F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ba2f8
	ctx.lr = 0x82D02368;
	sub_822BA2F8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d023fc
	if (ctx.cr6.eq) goto loc_82D023FC;
	// addi r31,r25,12
	ctx.r31.s64 = ctx.r25.s64 + 12;
loc_82D02378:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x82d023fc
	if (!ctx.cr6.lt) goto loc_82D023FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0239C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82d023fc
	if (ctx.cr0.lt) goto loc_82D023FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D023BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x82d02378
	if (ctx.cr6.lt) goto loc_82D02378;
loc_82D023FC:
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// stw r30,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82d0253c
	if (ctx.cr6.lt) goto loc_82D0253C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// addi r22,r1,96
	ctx.r22.s64 = ctx.r1.s64 + 96;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82D02420:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822ba2f8
	ctx.lr = 0x82D02434;
	sub_822BA2F8(ctx, base);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82D02440:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d02470
	if (ctx.cr6.eq) goto loc_82D02470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82D02470:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x82d02440
	if (!ctx.cr0.eq) goto loc_82D02440;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d02500
	if (ctx.cr6.eq) goto loc_82D02500;
	// addi r7,r27,4
	ctx.r7.s64 = ctx.r27.s64 + 4;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cfe7f0
	ctx.lr = 0x82D0249C;
	sub_82CFE7F0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82d02514
	if (ctx.cr0.lt) goto loc_82D02514;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D024B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d024e8
	if (ctx.cr6.eq) goto loc_82D024E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D024DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82d02514
	if (ctx.cr0.lt) goto loc_82D02514;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82D024E8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82d024b4
	if (ctx.cr6.lt) goto loc_82D024B4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82d02514
	if (ctx.cr6.lt) goto loc_82D02514;
loc_82D02500:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x82d02420
	if (ctx.cr6.lt) goto loc_82D02420;
loc_82D02514:
	// stw r24,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r24.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82d0253c
	if (ctx.cr6.lt) goto loc_82D0253C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d01858
	ctx.lr = 0x82D02534;
	sub_82D01858(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x82d02548
	if (!ctx.cr0.lt) goto loc_82D02548;
loc_82D0253C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d01d30
	ctx.lr = 0x82D02544;
	sub_82D01D30(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_82D02548:
	// stw r25,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82D02558"))) PPC_WEAK_FUNC(sub_82D02558);
PPC_FUNC_IMPL(__imp__sub_82D02558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D02560;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d0257c
	if (!ctx.cr6.eq) goto loc_82D0257C;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D0257C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d02590
	if (!ctx.cr6.eq) goto loc_82D02590;
	// li r3,6130
	ctx.r3.s64 = 6130;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D02590:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d025a4
	if (!ctx.cr6.eq) goto loc_82D025A4;
	// li r3,6125
	ctx.r3.s64 = 6125;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D025A4:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d025bc
	if (ctx.cr6.lt) goto loc_82D025BC;
	// li r3,6145
	ctx.r3.s64 = 6145;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D025BC:
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r29,r31,18
	ctx.r29.s64 = ctx.r31.s64 + 18;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d025d4
	if (ctx.cr6.lt) goto loc_82D025D4;
	// li r3,6150
	ctx.r3.s64 = 6150;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D025D4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82d025e8
	if (!ctx.cr6.gt) goto loc_82D025E8;
	// li r3,6135
	ctx.r3.s64 = 6135;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D025E8:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82d02600
	if (!ctx.cr6.gt) goto loc_82D02600;
	// li r3,6140
	ctx.r3.s64 = 6140;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D02600:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d02668
	if (ctx.cr6.eq) goto loc_82D02668;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,64206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64206, ctx.xer);
	// bne cr6,0x82d02668
	if (!ctx.cr6.eq) goto loc_82D02668;
	// lbz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82d02628
	if (ctx.cr6.eq) goto loc_82D02628;
	// li r3,6110
	ctx.r3.s64 = 6110;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D02628:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d04b10
	ctx.lr = 0x82D02634;
	sub_82D04B10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d04398
	ctx.lr = 0x82D02644;
	sub_82D04398(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d04328
	ctx.lr = 0x82D02660;
	sub_82D04328(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d0266c
	goto loc_82D0266C;
loc_82D02668:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_82D0266C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D02674"))) PPC_WEAK_FUNC(sub_82D02674);
PPC_FUNC_IMPL(__imp__sub_82D02674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02678"))) PPC_WEAK_FUNC(sub_82D02678);
PPC_FUNC_IMPL(__imp__sub_82D02678) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221eb58
	ctx.lr = 0x82D0269C;
	sub_8221EB58(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d02558
	ctx.lr = 0x82D026A8;
	sub_82D02558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8221eb58
	ctx.lr = 0x82D026B4;
	sub_8221EB58(ctx, base);
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,29536
	ctx.r11.s64 = ctx.r11.s64 + 29536;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x82d026d8
	if (!ctx.cr6.lt) goto loc_82D026D8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82D026D8:
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x82d026e8
	if (!ctx.cr6.gt) goto loc_82D026E8;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_82D026E8:
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82D0271C"))) PPC_WEAK_FUNC(sub_82D0271C);
PPC_FUNC_IMPL(__imp__sub_82D0271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02720"))) PPC_WEAK_FUNC(sub_82D02720);
PPC_FUNC_IMPL(__imp__sub_82D02720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D02728;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d02740
	if (!ctx.cr6.eq) goto loc_82D02740;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d027d8
	goto loc_82D027D8;
loc_82D02740:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d027d4
	if (ctx.cr6.eq) goto loc_82D027D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,64206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64206, ctx.xer);
	// bne cr6,0x82d027d4
	if (!ctx.cr6.eq) goto loc_82D027D4;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82d0276c
	if (ctx.cr6.eq) goto loc_82D0276C;
	// li r3,6115
	ctx.r3.s64 = 6115;
	// b 0x82d027d8
	goto loc_82D027D8;
loc_82D0276C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82d04560
	ctx.lr = 0x82D0277C;
	sub_82D04560(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0279c
	if (ctx.cr6.eq) goto loc_82D0279C;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_82D0279C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d027b8
	if (ctx.cr6.eq) goto loc_82D027B8;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D027B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_82D027B8:
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D027C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82d027d8
	goto loc_82D027D8;
loc_82D027D4:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_82D027D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D027E0"))) PPC_WEAK_FUNC(sub_82D027E0);
PPC_FUNC_IMPL(__imp__sub_82D027E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d02720
	sub_82D02720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D027E4"))) PPC_WEAK_FUNC(sub_82D027E4);
PPC_FUNC_IMPL(__imp__sub_82D027E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D027E8"))) PPC_WEAK_FUNC(sub_82D027E8);
PPC_FUNC_IMPL(__imp__sub_82D027E8) {
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
	// bne cr6,0x82d0280c
	if (!ctx.cr6.eq) goto loc_82D0280C;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d028ec
	goto loc_82D028EC;
loc_82D0280C:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,29200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d028e8
	if (ctx.cr6.eq) goto loc_82D028E8;
	// lwz r11,29200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29200);
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d02898
	if (!ctx.cr0.eq) goto loc_82D02898;
loc_82D02890:
	// li r3,6000
	ctx.r3.s64 = 6000;
	// b 0x82d028ec
	goto loc_82D028EC;
loc_82D02898:
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// li r8,100
	ctx.r8.s64 = 100;
	// ori r10,r10,64206
	ctx.r10.u64 = ctx.r10.u64 | 64206;
	// li r9,3000
	ctx.r9.s64 = 3000;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d04430
	ctx.lr = 0x82D028CC;
	sub_82D04430(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d028e0
	if (ctx.cr0.eq) goto loc_82D028E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d02720
	ctx.lr = 0x82D028DC;
	sub_82D02720(ctx, base);
	// b 0x82d02890
	goto loc_82D02890;
loc_82D028E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d028ec
	goto loc_82D028EC;
loc_82D028E8:
	// li r3,6001
	ctx.r3.s64 = 6001;
loc_82D028EC:
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

__attribute__((alias("__imp__sub_82D02900"))) PPC_WEAK_FUNC(sub_82D02900);
PPC_FUNC_IMPL(__imp__sub_82D02900) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,29536
	ctx.r8.s64 = ctx.r9.s64 + 29536;
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51712
	ctx.r10.u64 = ctx.r10.u64 | 51712;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r11,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r11.u64);
	// std r11,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, ctx.r11.u64);
	// std r10,29536(r9)
	PPC_STORE_U64(ctx.r9.u32 + 29536, ctx.r10.u64);
	// b 0x82d027e8
	sub_82D027E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02930"))) PPC_WEAK_FUNC(sub_82D02930);
PPC_FUNC_IMPL(__imp__sub_82D02930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D02938;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d02a78
	if (ctx.cr6.eq) goto loc_82D02A78;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,64206
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64206, ctx.xer);
	// bne cr6,0x82d02a78
	if (!ctx.cr6.eq) goto loc_82D02A78;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x82d0296c
	if (ctx.cr6.eq) goto loc_82D0296C;
	// li r3,6115
	ctx.r3.s64 = 6115;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D0296C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d0297c
	if (!ctx.cr6.eq) goto loc_82D0297C;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D0297C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d02990
	if (!ctx.cr6.eq) goto loc_82D02990;
	// li r3,6130
	ctx.r3.s64 = 6130;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D02990:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d029a4
	if (!ctx.cr6.eq) goto loc_82D029A4;
	// li r3,6125
	ctx.r3.s64 = 6125;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D029A4:
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d029c0
	if (ctx.cr6.lt) goto loc_82D029C0;
	// li r3,6145
	ctx.r3.s64 = 6145;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D029C0:
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d029d4
	if (ctx.cr6.lt) goto loc_82D029D4;
	// li r3,6150
	ctx.r3.s64 = 6150;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D029D4:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// ble cr6,0x82d029ec
	if (!ctx.cr6.gt) goto loc_82D029EC;
	// li r3,6135
	ctx.r3.s64 = 6135;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D029EC:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// ble cr6,0x82d02a00
	if (!ctx.cr6.gt) goto loc_82D02A00;
	// li r3,6140
	ctx.r3.s64 = 6140;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D02A00:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82d04f10
	ctx.lr = 0x82D02A30;
	sub_82D04F10(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d02a70
	if (ctx.cr6.eq) goto loc_82D02A70;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D02A48:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,-48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -48, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82d02a48
	if (ctx.cr6.lt) goto loc_82D02A48;
loc_82D02A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d02a7c
	goto loc_82D02A7C;
loc_82D02A78:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_82D02A7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D02A84"))) PPC_WEAK_FUNC(sub_82D02A84);
PPC_FUNC_IMPL(__imp__sub_82D02A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02A88"))) PPC_WEAK_FUNC(sub_82D02A88);
PPC_FUNC_IMPL(__imp__sub_82D02A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D02A90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8221eb58
	ctx.lr = 0x82D02AA8;
	sub_8221EB58(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d02930
	ctx.lr = 0x82D02AB8;
	sub_82D02930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8221eb58
	ctx.lr = 0x82D02AC4;
	sub_8221EB58(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,29160
	ctx.r11.s64 = ctx.r11.s64 + 29160;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x82d02ae8
	if (!ctx.cr6.lt) goto loc_82D02AE8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82D02AE8:
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x82d02af8
	if (!ctx.cr6.gt) goto loc_82D02AF8;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_82D02AF8:
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D02B1C"))) PPC_WEAK_FUNC(sub_82D02B1C);
PPC_FUNC_IMPL(__imp__sub_82D02B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02B20"))) PPC_WEAK_FUNC(sub_82D02B20);
PPC_FUNC_IMPL(__imp__sub_82D02B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02B34"))) PPC_WEAK_FUNC(sub_82D02B34);
PPC_FUNC_IMPL(__imp__sub_82D02B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02B38"))) PPC_WEAK_FUNC(sub_82D02B38);
PPC_FUNC_IMPL(__imp__sub_82D02B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D02B40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d02b54
	if (!ctx.cr6.eq) goto loc_82D02B54;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d02be8
	goto loc_82D02BE8;
loc_82D02B54:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d02be4
	if (ctx.cr6.eq) goto loc_82D02BE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,64206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64206, ctx.xer);
	// bne cr6,0x82d02be4
	if (!ctx.cr6.eq) goto loc_82D02BE4;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82d02b80
	if (ctx.cr6.eq) goto loc_82D02B80;
	// li r3,6115
	ctx.r3.s64 = 6115;
	// b 0x82d02be8
	goto loc_82D02BE8;
loc_82D02B80:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82d052d8
	ctx.lr = 0x82D02B90;
	sub_82D052D8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d02bb0
	if (ctx.cr6.eq) goto loc_82D02BB0;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_82D02BB0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d02bcc
	if (ctx.cr6.eq) goto loc_82D02BCC;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_82D02BCC:
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d02be8
	goto loc_82D02BE8;
loc_82D02BE4:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_82D02BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D02BF0"))) PPC_WEAK_FUNC(sub_82D02BF0);
PPC_FUNC_IMPL(__imp__sub_82D02BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d02b38
	sub_82D02B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02BF4"))) PPC_WEAK_FUNC(sub_82D02BF4);
PPC_FUNC_IMPL(__imp__sub_82D02BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02BF8"))) PPC_WEAK_FUNC(sub_82D02BF8);
PPC_FUNC_IMPL(__imp__sub_82D02BF8) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d02c20
	if (!ctx.cr6.eq) goto loc_82D02C20;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x82d02d28
	goto loc_82D02D28;
loc_82D02C20:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lwz r11,29200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d02d24
	if (ctx.cr6.eq) goto loc_82D02D24;
	// lwz r11,29200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29200);
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d02cac
	if (!ctx.cr0.eq) goto loc_82D02CAC;
loc_82D02CA4:
	// li r3,6000
	ctx.r3.s64 = 6000;
	// b 0x82d02d28
	goto loc_82D02D28;
loc_82D02CAC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// ori r10,r10,64206
	ctx.r10.u64 = ctx.r10.u64 | 64206;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82d05108
	ctx.lr = 0x82D02CCC;
	sub_82D05108(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d02ce0
	if (ctx.cr0.eq) goto loc_82D02CE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d02b38
	ctx.lr = 0x82D02CDC;
	sub_82D02B38(ctx, base);
	// b 0x82d02ca4
	goto loc_82D02CA4;
loc_82D02CE0:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// addi r30,r10,29160
	ctx.r30.s64 = ctx.r10.s64 + 29160;
	// ori r11,r11,51712
	ctx.r11.u64 = ctx.r11.u64 | 51712;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r31,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r31.u64);
	// std r31,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r31.u64);
	// std r31,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r31.u64);
	// std r31,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r31.u64);
	// std r11,29160(r10)
	PPC_STORE_U64(ctx.r10.u32 + 29160, ctx.r11.u64);
	// bl 0x82cc0620
	ctx.lr = 0x82D02D14;
	sub_82CC0620(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x82d02d28
	goto loc_82D02D28;
loc_82D02D24:
	// li r3,6001
	ctx.r3.s64 = 6001;
loc_82D02D28:
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

__attribute__((alias("__imp__sub_82D02D40"))) PPC_WEAK_FUNC(sub_82D02D40);
PPC_FUNC_IMPL(__imp__sub_82D02D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d02bf8
	sub_82D02BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02D44"))) PPC_WEAK_FUNC(sub_82D02D44);
PPC_FUNC_IMPL(__imp__sub_82D02D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02D48"))) PPC_WEAK_FUNC(sub_82D02D48);
PPC_FUNC_IMPL(__imp__sub_82D02D48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02D5C"))) PPC_WEAK_FUNC(sub_82D02D5C);
PPC_FUNC_IMPL(__imp__sub_82D02D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02D60"))) PPC_WEAK_FUNC(sub_82D02D60);
PPC_FUNC_IMPL(__imp__sub_82D02D60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02D74"))) PPC_WEAK_FUNC(sub_82D02D74);
PPC_FUNC_IMPL(__imp__sub_82D02D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02D78"))) PPC_WEAK_FUNC(sub_82D02D78);
PPC_FUNC_IMPL(__imp__sub_82D02D78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02D8C"))) PPC_WEAK_FUNC(sub_82D02D8C);
PPC_FUNC_IMPL(__imp__sub_82D02D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02D90"))) PPC_WEAK_FUNC(sub_82D02D90);
PPC_FUNC_IMPL(__imp__sub_82D02D90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02DA4"))) PPC_WEAK_FUNC(sub_82D02DA4);
PPC_FUNC_IMPL(__imp__sub_82D02DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02DA8"))) PPC_WEAK_FUNC(sub_82D02DA8);
PPC_FUNC_IMPL(__imp__sub_82D02DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02DBC"))) PPC_WEAK_FUNC(sub_82D02DBC);
PPC_FUNC_IMPL(__imp__sub_82D02DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02DC0"))) PPC_WEAK_FUNC(sub_82D02DC0);
PPC_FUNC_IMPL(__imp__sub_82D02DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,29220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02DD4"))) PPC_WEAK_FUNC(sub_82D02DD4);
PPC_FUNC_IMPL(__imp__sub_82D02DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02DD8"))) PPC_WEAK_FUNC(sub_82D02DD8);
PPC_FUNC_IMPL(__imp__sub_82D02DD8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82d02e54
	if (ctx.cr6.lt) goto loc_82D02E54;
	// beq cr6,0x82d02e18
	if (ctx.cr6.eq) goto loc_82D02E18;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82d02e08
	if (ctx.cr6.lt) goto loc_82D02E08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d02f4c
	goto loc_82D02F4C;
loc_82D02E08:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r5,r11,24624
	ctx.r5.s64 = ctx.r11.s64 + 24624;
	// b 0x82d02e60
	goto loc_82D02E60;
loc_82D02E18:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d02e48
	if (ctx.cr6.eq) goto loc_82D02E48;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D02E28:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x82d02e28
	if (!ctx.cr0.eq) goto loc_82D02E28;
loc_82D02E48:
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82d02e58
	goto loc_82D02E58;
loc_82D02E54:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D02E58:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r5,r11,24368
	ctx.r5.s64 = ctx.r11.s64 + 24368;
loc_82D02E60:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d02f44
	if (ctx.cr6.eq) goto loc_82D02F44;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,26928(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26928);
	// lfd f13,3376(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
loc_82D02E7C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d02ecc
	if (ctx.cr6.eq) goto loc_82D02ECC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_82D02E90:
	// lha r10,0(r7)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + 0));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f11,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// fmul f11,f11,f12
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stfdx f11,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.f11.u64);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// bne 0x82d02e90
	if (!ctx.cr0.eq) goto loc_82D02E90;
loc_82D02ECC:
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D02ED8:
	// rlwinm r30,r10,3,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// lfd f11,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfdx f10,r30,r3
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r3.u32);
	// fmadd f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64;
	// bne 0x82d02ed8
	if (!ctx.cr0.eq) goto loc_82D02ED8;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// addi r11,r10,-32767
	ctx.r11.s64 = ctx.r10.s64 + -32767;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// blt cr6,0x82d02e7c
	if (ctx.cr6.lt) goto loc_82D02E7C;
loc_82D02F44:
	// divwu r3,r8,r31
	ctx.r3.u32 = ctx.r8.u32 / ctx.r31.u32;
	// twllei r31,0
loc_82D02F4C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02F58"))) PPC_WEAK_FUNC(sub_82D02F58);
PPC_FUNC_IMPL(__imp__sub_82D02F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D02F60"))) PPC_WEAK_FUNC(sub_82D02F60);
PPC_FUNC_IMPL(__imp__sub_82D02F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D02F68;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d02fb8
	if (!ctx.cr6.gt) goto loc_82D02FB8;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_82D02F88:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d02fc4
	if (ctx.cr6.eq) goto loc_82D02FC4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d02f88
	if (ctx.cr6.lt) goto loc_82D02F88;
loc_82D02FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D02FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82D02FC4:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82d02fbc
	goto loc_82D02FBC;
}

__attribute__((alias("__imp__sub_82D02FD4"))) PPC_WEAK_FUNC(sub_82D02FD4);
PPC_FUNC_IMPL(__imp__sub_82D02FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02FD8"))) PPC_WEAK_FUNC(sub_82D02FD8);
PPC_FUNC_IMPL(__imp__sub_82D02FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D02FE0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832b2fcc
	ctx.lr = 0x82D02FFC;
	__imp__XamVoiceHeadsetPresent(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d03018
	if (ctx.cr6.eq) goto loc_82D03018;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d03020
	if (ctx.cr6.eq) goto loc_82D03020;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d03028
	if (!ctx.cr6.eq) goto loc_82D03028;
loc_82D03018:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d03028
	if (ctx.cr6.eq) goto loc_82D03028;
loc_82D03020:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D03028:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d03048
	if (!ctx.cr6.eq) goto loc_82D03048;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d031c8
	if (ctx.cr6.eq) goto loc_82D031C8;
loc_82D03048:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832b233c
	ctx.lr = 0x82D03050;
	__imp__XamUserGetSigninState(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d03248
	if (ctx.cr6.eq) goto loc_82D03248;
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc558
	ctx.lr = 0x82D03074;
	sub_82CBC558(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d0319c
	if (ctx.cr6.eq) goto loc_82D0319C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d0319c
	if (!ctx.cr6.eq) goto loc_82D0319C;
	// stw r26,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r26.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d031c8
	if (!ctx.cr6.gt) goto loc_82D031C8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82D030A0:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-12
	ctx.xer.ca = ctx.r10.u32 > 11;
	ctx.r10.s64 = ctx.r10.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d03160
	if (ctx.cr0.eq) goto loc_82D03160;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82d0311c
	if (ctx.cr6.eq) goto loc_82D0311C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82d03180
	if (!ctx.cr6.eq) goto loc_82D03180;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// ble cr6,0x82d030e0
	if (!ctx.cr6.gt) goto loc_82D030E0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82D030E0:
	// lwa r10,32(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 32));
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d03180
	if (ctx.cr6.eq) goto loc_82D03180;
	// stb r26,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r26.u8);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82d0317c
	goto loc_82D0317C;
loc_82D0311C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// beq cr6,0x82d03134
	if (ctx.cr6.eq) goto loc_82D03134;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82d03138
	goto loc_82D03138;
loc_82D03134:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82D03138:
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq cr6,0x82d03154
	if (ctx.cr6.eq) goto loc_82D03154;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82d03158
	goto loc_82D03158;
loc_82D03154:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82D03158:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82d0317c
	goto loc_82D0317C;
loc_82D03160:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// beq cr6,0x82d03178
	if (ctx.cr6.eq) goto loc_82D03178;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82d0317c
	goto loc_82D0317C;
loc_82D03178:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82D0317C:
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82D03180:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d030a0
	if (ctx.cr6.lt) goto loc_82D030A0;
	// b 0x82d031c8
	goto loc_82D031C8;
loc_82D0319C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82d031c8
	if (ctx.cr6.eq) goto loc_82D031C8;
	// stw r26,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r26.u32);
loc_82D031AC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d031c8
	if (ctx.cr6.eq) goto loc_82D031C8;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D031C8:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82d03208
	if (!ctx.cr6.eq) goto loc_82D03208;
loc_82D031D0:
	// li r30,1128
	ctx.r30.s64 = 1128;
loc_82D031D4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d031f8
	if (ctx.cr6.eq) goto loc_82D031F8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82d031f8
	if (ctx.cr6.eq) goto loc_82D031F8;
	// bl 0x82d01ad0
	ctx.lr = 0x82D031F8;
	sub_82D01AD0(ctx, base);
loc_82D031F8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,1264
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1264, ctx.xer);
	// blt cr6,0x82d031d4
	if (ctx.cr6.lt) goto loc_82D031D4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D03208:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82d03240
	if (!ctx.cr6.eq) goto loc_82D03240;
	// lbz r11,198(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 198);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,26348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// bl 0x82d00908
	ctx.lr = 0x82D03240;
	sub_82D00908(ctx, base);
loc_82D03240:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82D03248:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d031ac
	if (ctx.cr6.eq) goto loc_82D031AC;
	// addi r7,r31,148
	ctx.r7.s64 = ctx.r31.s64 + 148;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r11,24880
	ctx.r8.s64 = ctx.r11.s64 + 24880;
	// addi r9,r31,180
	ctx.r9.s64 = ctx.r31.s64 + 180;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// bl 0x832b2f8c
	ctx.lr = 0x82D03284;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d032b0
	if (ctx.cr0.eq) goto loc_82D032B0;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82d032b0
	if (ctx.cr6.eq) goto loc_82D032B0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d032b8
	if (ctx.cr6.eq) goto loc_82D032B8;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x82d032b8
	goto loc_82D032B8;
loc_82D032B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_82D032B8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x832b235c
	ctx.lr = 0x82D032C8;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d03310
	if (!ctx.cr0.eq) goto loc_82D03310;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d03310
	if (ctx.cr6.eq) goto loc_82D03310;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,251
	ctx.r4.s64 = 251;
	// bl 0x832b235c
	ctx.lr = 0x82D032EC;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d03308
	if (!ctx.cr0.eq) goto loc_82D03308;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d03308
	if (!ctx.cr6.eq) goto loc_82D03308;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x82d03314
	goto loc_82D03314;
loc_82D03308:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82d03314
	goto loc_82D03314;
loc_82D03310:
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82D03314:
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d03328
	if (ctx.cr6.eq) goto loc_82D03328;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82D03328:
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x82d031d0
	goto loc_82D031D0;
}

__attribute__((alias("__imp__sub_82D0333C"))) PPC_WEAK_FUNC(sub_82D0333C);
PPC_FUNC_IMPL(__imp__sub_82D0333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03340"))) PPC_WEAK_FUNC(sub_82D03340);
PPC_FUNC_IMPL(__imp__sub_82D03340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82D03348;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r23,r27,72
	ctx.r23.s64 = ctx.r27.s64 + 72;
loc_82D0336C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82d03390
	if (!ctx.cr6.eq) goto loc_82D03390;
	// stwcx. r21,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d0336c
	if (!ctx.cr0.eq) goto loc_82D0336C;
	// b 0x82d03398
	goto loc_82D03398;
loc_82D03390:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82D03398:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d0351c
	if (!ctx.cr6.eq) goto loc_82D0351C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d03518
	if (ctx.cr6.eq) goto loc_82D03518;
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d03518
	if (ctx.cr0.eq) goto loc_82D03518;
	// addi r26,r27,68
	ctx.r26.s64 = ctx.r27.s64 + 68;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x832b228c
	ctx.lr = 0x82D033D0;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r28,r27,52
	ctx.r28.s64 = ctx.r27.s64 + 52;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82d03400
	goto loc_82D03400;
loc_82D033E0:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82d03408
	if (!ctx.cr6.lt) goto loc_82D03408;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82D03400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d033e0
	if (!ctx.cr6.eq) goto loc_82D033E0;
loc_82D03408:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b223c
	ctx.lr = 0x82D03410;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82d0351c
	if (ctx.cr6.lt) goto loc_82D0351C;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82d0350c
	goto loc_82D0350C;
loc_82D03420:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82d0351c
	if (!ctx.cr6.lt) goto loc_82D0351C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82d0351c
	if (ctx.cr6.eq) goto loc_82D0351C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r29,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r29.s64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d03458
	if (ctx.cr6.lt) goto loc_82D03458;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82D03458:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D0346C;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d03488
	if (!ctx.cr6.lt) goto loc_82D03488;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D03488:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d03508
	if (!ctx.cr6.eq) goto loc_82D03508;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b228c
	ctx.lr = 0x82D034A4;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d034d0
	if (ctx.cr6.eq) goto loc_82D034D0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d034c4
	if (!ctx.cr6.eq) goto loc_82D034C4;
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
loc_82D034C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_82D034D0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d034fc
	if (!ctx.cr6.eq) goto loc_82D034FC;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r27,60
	ctx.r11.s64 = ctx.r27.s64 + 60;
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d034f4
	if (ctx.cr6.eq) goto loc_82D034F4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82d034f8
	goto loc_82D034F8;
loc_82D034F4:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82D034F8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82D034FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b223c
	ctx.lr = 0x82D03504;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82D03508:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82D0350C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d03420
	if (!ctx.cr6.eq) goto loc_82D03420;
	// b 0x82d0351c
	goto loc_82D0351C;
loc_82D03518:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82D0351C:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82D03520:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d035b0
	if (!ctx.cr6.eq) goto loc_82D035B0;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d03520
	if (!ctx.cr0.eq) goto loc_82D03520;
	// b 0x82d035b8
	goto loc_82D035B8;
loc_82D03544:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82d03568
	if (!ctx.cr6.eq) goto loc_82D03568;
	// stwcx. r20,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r20.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d03544
	if (!ctx.cr0.eq) goto loc_82D03544;
	// b 0x82d03570
	goto loc_82D03570;
loc_82D03568:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82D03570:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d035c4
	if (ctx.cr6.eq) goto loc_82D035C4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d035c4
	if (ctx.cr6.eq) goto loc_82D035C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d035c4
	if (ctx.cr6.eq) goto loc_82D035C4;
loc_82D0358C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82d035b0
	if (!ctx.cr6.eq) goto loc_82D035B0;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d0358c
	if (!ctx.cr0.eq) goto loc_82D0358C;
	// b 0x82d035b8
	goto loc_82D035B8;
loc_82D035B0:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82D035B8:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d03544
	if (!ctx.cr6.eq) goto loc_82D03544;
loc_82D035C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82D035D0"))) PPC_WEAK_FUNC(sub_82D035D0);
PPC_FUNC_IMPL(__imp__sub_82D035D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D035D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// bl 0x832b245c
	ctx.lr = 0x82D035F0;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82d03670
	goto loc_82D03670;
loc_82D035FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82D03604:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d03628
	if (!ctx.cr6.eq) goto loc_82D03628;
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d03604
	if (!ctx.cr0.eq) goto loc_82D03604;
	// b 0x82d03630
	goto loc_82D03630;
loc_82D03628:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82D03630:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82d0367c
	if (ctx.cr6.eq) goto loc_82D0367C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D03640:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d03664
	if (!ctx.cr6.eq) goto loc_82D03664;
	// stwcx. r29,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d03640
	if (!ctx.cr0.eq) goto loc_82D03640;
	// b 0x82d0366c
	goto loc_82D0366C;
loc_82D03664:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82D0366C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82D03670:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d035fc
	if (!ctx.cr6.eq) goto loc_82D035FC;
	// b 0x82d03688
	goto loc_82D03688;
loc_82D0367C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d0367c
	if (!ctx.cr6.eq) goto loc_82D0367C;
loc_82D03688:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0369c
	if (ctx.cr6.eq) goto loc_82D0369C;
	// bl 0x832b2fdc
	ctx.lr = 0x82D03698;
	__imp__XamVoiceClose(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82D0369C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d06d90
	ctx.lr = 0x82D036A4;
	sub_82D06D90(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d036e4
	if (!ctx.cr6.gt) goto loc_82D036E4;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82D036BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D036D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d036bc
	if (ctx.cr6.lt) goto loc_82D036BC;
loc_82D036E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D036EC"))) PPC_WEAK_FUNC(sub_82D036EC);
PPC_FUNC_IMPL(__imp__sub_82D036EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D036F0"))) PPC_WEAK_FUNC(sub_82D036F0);
PPC_FUNC_IMPL(__imp__sub_82D036F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D036F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d03758
	if (ctx.cr6.eq) goto loc_82D03758;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82D0371C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d02f60
	ctx.lr = 0x82D03728;
	sub_82D02F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d03758
	if (ctx.cr0.eq) goto loc_82D03758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d03758
	if (ctx.cr0.lt) goto loc_82D03758;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d0371c
	if (ctx.cr6.lt) goto loc_82D0371C;
loc_82D03758:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D03764"))) PPC_WEAK_FUNC(sub_82D03764);
PPC_FUNC_IMPL(__imp__sub_82D03764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03768"))) PPC_WEAK_FUNC(sub_82D03768);
PPC_FUNC_IMPL(__imp__sub_82D03768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D03770;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d037d0
	if (ctx.cr6.eq) goto loc_82D037D0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82D03794:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d02f60
	ctx.lr = 0x82D037A0;
	sub_82D02F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d037d0
	if (ctx.cr0.eq) goto loc_82D037D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D037B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82d037d0
	if (ctx.cr0.lt) goto loc_82D037D0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d03794
	if (ctx.cr6.lt) goto loc_82D03794;
loc_82D037D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D037DC"))) PPC_WEAK_FUNC(sub_82D037DC);
PPC_FUNC_IMPL(__imp__sub_82D037DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D037E0"))) PPC_WEAK_FUNC(sub_82D037E0);
PPC_FUNC_IMPL(__imp__sub_82D037E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D037E8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d02fd8
	ctx.lr = 0x82D037F4;
	sub_82D02FD8(ctx, base);
	// addi r24,r25,76
	ctx.r24.s64 = ctx.r25.s64 + 76;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,76(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// b 0x82d038a8
	goto loc_82D038A8;
loc_82D03804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82d038b0
	if (ctx.cr6.eq) goto loc_82D038B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d0383c
	if (ctx.cr6.eq) goto loc_82D0383C;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d03830
	if (!ctx.cr6.eq) goto loc_82D03830;
	// stw r26,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r26.u32);
loc_82D03830:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82D0383C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d03860
	if (!ctx.cr6.eq) goto loc_82D03860;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
loc_82D03860:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r25,68
	ctx.r30.s64 = ctx.r25.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// bl 0x832b228c
	ctx.lr = 0x82D03874;
	__imp__KfAcquireSpinLock(ctx, base);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r11,r25,52
	ctx.r11.s64 = ctx.r25.s64 + 52;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d03894
	if (ctx.cr6.eq) goto loc_82D03894;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82d03898
	goto loc_82D03898;
loc_82D03894:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82D03898:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b223c
	ctx.lr = 0x82D038A4;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82D038A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d03804
	if (!ctx.cr6.eq) goto loc_82D03804;
loc_82D038B0:
	// lwz r27,60(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// addi r23,r25,60
	ctx.r23.s64 = ctx.r25.s64 + 60;
	// b 0x82d03a70
	goto loc_82D03A70;
loc_82D038BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d03a94
	if (!ctx.cr0.eq) goto loc_82D03A94;
	// addi r31,r25,68
	ctx.r31.s64 = ctx.r25.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b228c
	ctx.lr = 0x82D038DC;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cfe8d8
	ctx.lr = 0x82D038E8;
	sub_82CFE8D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d03900
	if (!ctx.cr0.eq) goto loc_82D03900;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cfe8d8
	ctx.lr = 0x82D038F8;
	sub_82CFE8D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82d03a7c
	if (!ctx.cr6.gt) goto loc_82D03A7C;
loc_82D03900:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d03928
	if (ctx.cr6.eq) goto loc_82D03928;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d0391c
	if (!ctx.cr6.eq) goto loc_82D0391C;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
loc_82D0391C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82D03928:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b223c
	ctx.lr = 0x82D03934;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d0394c
	if (ctx.cr6.eq) goto loc_82D0394C;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82d03950
	goto loc_82D03950;
loc_82D0394C:
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_82D03950:
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// addi r28,r25,84
	ctx.r28.s64 = ctx.r25.s64 + 84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm. r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82d03a38
	if (!ctx.cr0.gt) goto loc_82D03A38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82D0397C:
	// lha r10,0(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andi. r10,r9,7880
	ctx.r10.u64 = ctx.r9.u64 & 7880;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,7880
	ctx.r11.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82d05710
	ctx.lr = 0x82D039CC;
	sub_82D05710(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r10,0(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// addi r11,r10,-7880
	ctx.r11.s64 = ctx.r10.s64 + -7880;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andi. r10,r9,7880
	ctx.r10.u64 = ctx.r9.u64 & 7880;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r11,r10,7880
	ctx.r11.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82d05710
	ctx.lr = 0x82D03A18;
	sub_82D05710(ctx, base);
	// lha r11,80(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwimi r10,r11,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82d0397c
	if (!ctx.cr0.eq) goto loc_82D0397C;
loc_82D03A38:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x832b2fec
	ctx.lr = 0x82D03A64;
	__imp__XamVoiceSubmitPacket(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82d03a8c
	if (ctx.cr0.lt) goto loc_82D03A8C;
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_82D03A70:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82d038bc
	if (!ctx.cr6.eq) goto loc_82D038BC;
	// b 0x82d03a94
	goto loc_82D03A94;
loc_82D03A7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r25,68
	ctx.r3.s64 = ctx.r25.s64 + 68;
	// bl 0x832b223c
	ctx.lr = 0x82D03A88;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x82d03a94
	goto loc_82D03A94;
loc_82D03A8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82D03A94:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82d06e50
	ctx.lr = 0x82D03A9C;
	sub_82D06E50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d03ae0
	if (ctx.cr0.lt) goto loc_82D03AE0;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d03ae0
	if (!ctx.cr6.gt) goto loc_82D03AE0;
	// addi r31,r25,12
	ctx.r31.s64 = ctx.r25.s64 + 12;
loc_82D03AB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d03ab8
	if (ctx.cr6.lt) goto loc_82D03AB8;
loc_82D03AE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D03AEC"))) PPC_WEAK_FUNC(sub_82D03AEC);
PPC_FUNC_IMPL(__imp__sub_82D03AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03AF0"))) PPC_WEAK_FUNC(sub_82D03AF0);
PPC_FUNC_IMPL(__imp__sub_82D03AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D03AF8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// bl 0x82d02f60
	ctx.lr = 0x82D03B14;
	sub_82D02F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d03b3c
	if (ctx.cr0.eq) goto loc_82D03B3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D03B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D03B48"))) PPC_WEAK_FUNC(sub_82D03B48);
PPC_FUNC_IMPL(__imp__sub_82D03B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D03B50;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D03B6C;
	sub_822BA2F8(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d03bdc
	if (!ctx.cr6.gt) goto loc_82D03BDC;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_82D03B80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82D03B94:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d03bac
	if (ctx.cr6.eq) goto loc_82D03BAC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82d03be4
	if (ctx.cr6.eq) goto loc_82D03BE4;
loc_82D03BAC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82d03b94
	if (ctx.cr6.lt) goto loc_82D03B94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D03BC0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d03b80
	if (ctx.cr6.lt) goto loc_82D03B80;
loc_82D03BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82D03BE4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82cfe8d8
	ctx.lr = 0x82D03BF0;
	sub_82CFE8D8(ctx, base);
	// b 0x82d03bc0
	goto loc_82D03BC0;
}

__attribute__((alias("__imp__sub_82D03BF4"))) PPC_WEAK_FUNC(sub_82D03BF4);
PPC_FUNC_IMPL(__imp__sub_82D03BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03BF8"))) PPC_WEAK_FUNC(sub_82D03BF8);
PPC_FUNC_IMPL(__imp__sub_82D03BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D03C00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d03ce8
	if (ctx.cr6.eq) goto loc_82D03CE8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d03c28
	if (ctx.cr6.eq) goto loc_82D03C28;
	// bl 0x832b2fdc
	ctx.lr = 0x82D03C24;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D03C28:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d07388
	ctx.lr = 0x82D03C30;
	sub_82D07388(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d03c68
	if (!ctx.cr6.gt) goto loc_82D03C68;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
loc_82D03C48:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cfe748
	ctx.lr = 0x82D03C50;
	sub_82CFE748(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d03c48
	if (ctx.cr6.lt) goto loc_82D03C48;
loc_82D03C68:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d03ca8
	if (!ctx.cr6.gt) goto loc_82D03CA8;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82D03C7C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d03c7c
	if (ctx.cr6.lt) goto loc_82D03C7C;
loc_82D03CA8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82cfea78
	ctx.lr = 0x82D03CB0;
	sub_82CFEA78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x832b245c
	ctx.lr = 0x82D03CBC;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d03cd8
	if (ctx.cr6.eq) goto loc_82D03CD8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x821f5f18
	ctx.lr = 0x82D03CD4;
	sub_821F5F18(ctx, base);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
loc_82D03CD8:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x821f5f18
	ctx.lr = 0x82D03CE8;
	sub_821F5F18(ctx, base);
loc_82D03CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D03CF0"))) PPC_WEAK_FUNC(sub_82D03CF0);
PPC_FUNC_IMPL(__imp__sub_82D03CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D03CF8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d035d0
	ctx.lr = 0x82D03D08;
	sub_82D035D0(ctx, base);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2ffc
	ctx.lr = 0x82D03D1C;
	__imp__XamVoiceCreate(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82d03d80
	if (ctx.cr0.lt) goto loc_82D03D80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d07488
	ctx.lr = 0x82D03D30;
	sub_82D07488(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
loc_82D03D4C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d03d4c
	if (!ctx.cr0.eq) goto loc_82D03D4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,27944
	ctx.r4.s64 = ctx.r11.s64 + 27944;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x82ca2c60
	ctx.lr = 0x82D03D78;
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d03d98
	if (!ctx.cr6.lt) goto loc_82D03D98;
loc_82D03D80:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d03d98
	if (ctx.cr6.eq) goto loc_82D03D98;
	// bl 0x832b2fdc
	ctx.lr = 0x82D03D90;
	__imp__XamVoiceClose(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D03D98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D03DA4"))) PPC_WEAK_FUNC(sub_82D03DA4);
PPC_FUNC_IMPL(__imp__sub_82D03DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03DA8"))) PPC_WEAK_FUNC(sub_82D03DA8);
PPC_FUNC_IMPL(__imp__sub_82D03DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82D03DB0;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,464
	ctx.r3.s64 = 464;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// bl 0x821f4d88
	ctx.lr = 0x82D03DD4;
	sub_821F4D88(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// bne 0x82d03dec
	if (!ctx.cr0.eq) goto loc_82D03DEC;
loc_82D03DE0:
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
	// b 0x82d04108
	goto loc_82D04108;
loc_82D03DEC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r19,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r19.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r20,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r20.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r31,r28,180
	ctx.r31.s64 = ctx.r28.s64 + 180;
	// stw r11,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r11.u32);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lbz r9,198(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 198);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r8,r11,24880
	ctx.r8.s64 = ctx.r11.s64 + 24880;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,26348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26348);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,184(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 184, temp.u32);
	// bl 0x832b2f8c
	ctx.lr = 0x82D03E58;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x82d03e6c
	if (ctx.cr6.eq) goto loc_82D03E6C;
	// lis r22,-32768
	ctx.r22.s64 = -2147483648;
	// ori r22,r22,16389
	ctx.r22.u64 = ctx.r22.u64 | 16389;
	// b 0x82d04108
	goto loc_82D04108;
loc_82D03E6C:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x821f4d88
	ctx.lr = 0x82D03E7C;
	sub_821F4D88(ctx, base);
	// stw r3,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d03de0
	if (ctx.cr0.eq) goto loc_82D03DE0;
	// addi r31,r28,48
	ctx.r31.s64 = ctx.r28.s64 + 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82cfebc0
	ctx.lr = 0x82D03EA4;
	sub_82CFEBC0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82d04108
	if (ctx.cr0.lt) goto loc_82D04108;
	// addi r8,r28,52
	ctx.r8.s64 = ctx.r28.s64 + 52;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_82D03EB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r10,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// stw r20,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r20.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d03ee8
	if (ctx.cr6.eq) goto loc_82D03EE8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82d03eec
	goto loc_82D03EEC;
loc_82D03EE8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82D03EEC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82d03eb4
	if (ctx.cr6.lt) goto loc_82D03EB4;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822ba2f8
	ctx.lr = 0x82D03F0C;
	sub_822BA2F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba2f8
	ctx.lr = 0x82D03F1C;
	sub_822BA2F8(ctx, base);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d03fb0
	if (ctx.cr6.eq) goto loc_82D03FB0;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
loc_82D03F2C:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x82d03fb0
	if (!ctx.cr6.lt) goto loc_82D03FB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82d03fb0
	if (ctx.cr0.lt) goto loc_82D03FB0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D03F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x82d03f2c
	if (ctx.cr6.lt) goto loc_82D03F2C;
loc_82D03FB0:
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82d04108
	if (ctx.cr6.lt) goto loc_82D04108;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82D03FD4:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D03FE8;
	sub_822BA2F8(ctx, base);
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82D03FF4:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d04024
	if (ctx.cr6.eq) goto loc_82D04024;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D04014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82D04024:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x82d03ff4
	if (!ctx.cr0.eq) goto loc_82D03FF4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d040b4
	if (ctx.cr6.eq) goto loc_82D040B4;
	// addi r7,r26,4
	ctx.r7.s64 = ctx.r26.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cfe7f0
	ctx.lr = 0x82D04050;
	sub_82CFE7F0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82d040c8
	if (ctx.cr0.lt) goto loc_82D040C8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82D04068:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0409c
	if (ctx.cr6.eq) goto loc_82D0409C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D04090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82d040c8
	if (ctx.cr0.lt) goto loc_82D040C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82D0409C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82d04068
	if (ctx.cr6.lt) goto loc_82D04068;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82d040c8
	if (ctx.cr6.lt) goto loc_82D040C8;
loc_82D040B4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x82d03fd4
	if (ctx.cr6.lt) goto loc_82D03FD4;
loc_82D040C8:
	// stw r25,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r25.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82d04108
	if (ctx.cr6.lt) goto loc_82D04108;
	// addi r8,r28,4
	ctx.r8.s64 = ctx.r28.s64 + 4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r28,36
	ctx.r6.s64 = ctx.r28.s64 + 36;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d07518
	ctx.lr = 0x82D040F0;
	sub_82D07518(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r10.u32);
	// bge 0x82d04114
	if (!ctx.cr0.lt) goto loc_82D04114;
loc_82D04108:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d03bf8
	ctx.lr = 0x82D04110;
	sub_82D03BF8(ctx, base);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82D04114:
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82D04124"))) PPC_WEAK_FUNC(sub_82D04124);
PPC_FUNC_IMPL(__imp__sub_82D04124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04128"))) PPC_WEAK_FUNC(sub_82D04128);
PPC_FUNC_IMPL(__imp__sub_82D04128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D04130;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r24,r25,8
	ctx.r24.s64 = ctx.r25.s64 + 8;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82D04160:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0419c
	if (ctx.cr6.eq) goto loc_82D0419C;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82d04184
	if (!ctx.cr6.eq) goto loc_82D04184;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82d04188
	goto loc_82D04188;
loc_82D04184:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82D04188:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d041a0
	if (ctx.cr6.eq) goto loc_82D041A0;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82d041a0
	goto loc_82D041A0;
loc_82D0419C:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82D041A0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d04160
	if (!ctx.cr0.eq) goto loc_82D04160;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d04318
	if (ctx.cr6.eq) goto loc_82D04318;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82d04318
	if (ctx.cr6.eq) goto loc_82D04318;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// b 0x82d04310
	goto loc_82D04310;
loc_82D041C8:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d04318
	if (ctx.cr6.eq) goto loc_82D04318;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82d04318
	if (ctx.cr6.eq) goto loc_82D04318;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82D041F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d04228
	if (ctx.cr6.eq) goto loc_82D04228;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d04228
	if (ctx.cr6.lt) goto loc_82D04228;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82D04228:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d041f4
	if (!ctx.cr0.eq) goto loc_82D041F4;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82D04240:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d042c0
	if (ctx.cr6.eq) goto loc_82D042C0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D04274;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d04290
	if (!ctx.cr6.lt) goto loc_82D04290;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D04290:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d042c0
	if (!ctx.cr6.eq) goto loc_82D042C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82cfe8f8
	ctx.lr = 0x82D042B0;
	sub_82CFE8F8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d042c0
	if (!ctx.cr0.eq) goto loc_82D042C0;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_82D042C0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d04240
	if (!ctx.cr0.eq) goto loc_82D04240;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d042ec
	if (!ctx.cr6.lt) goto loc_82D042EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D042EC:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d04310
	if (!ctx.cr6.eq) goto loc_82D04310;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82cfe8f8
	ctx.lr = 0x82D0430C;
	sub_82CFE8F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82D04310:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82d041c8
	if (!ctx.cr6.eq) goto loc_82D041C8;
loc_82D04318:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D04324"))) PPC_WEAK_FUNC(sub_82D04324);
PPC_FUNC_IMPL(__imp__sub_82D04324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04328"))) PPC_WEAK_FUNC(sub_82D04328);
PPC_FUNC_IMPL(__imp__sub_82D04328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D04330;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r29,r11,26936
	ctx.r29.s64 = ctx.r11.s64 + 26936;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
loc_82D04364:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lha r5,0(r31)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d07640
	ctx.lr = 0x82D04378;
	sub_82D07640(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r29,34
	ctx.r11.s64 = ctx.r29.s64 + 34;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d04364
	if (ctx.cr6.lt) goto loc_82D04364;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D04394"))) PPC_WEAK_FUNC(sub_82D04394);
PPC_FUNC_IMPL(__imp__sub_82D04394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04398"))) PPC_WEAK_FUNC(sub_82D04398);
PPC_FUNC_IMPL(__imp__sub_82D04398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D043A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07e30
	ctx.lr = 0x82D043CC;
	sub_82D07E30(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07eb0
	ctx.lr = 0x82D043E0;
	sub_82D07EB0(ctx, base);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07d40
	ctx.lr = 0x82D043E8;
	sub_82D07D40(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bl 0x82d07de0
	ctx.lr = 0x82D043F0;
	sub_82D07DE0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07ce8
	ctx.lr = 0x82D043FC;
	sub_82D07CE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82d07a50
	ctx.lr = 0x82D04414;
	sub_82D07A50(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D0442C"))) PPC_WEAK_FUNC(sub_82D0442C);
PPC_FUNC_IMPL(__imp__sub_82D0442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04430"))) PPC_WEAK_FUNC(sub_82D04430);
PPC_FUNC_IMPL(__imp__sub_82D04430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D04438;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d04458
	if (!ctx.cr6.eq) goto loc_82D04458;
loc_82D04450:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d04550
	goto loc_82D04550;
loc_82D04458:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D04478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82d04450
	if (ctx.cr0.eq) goto loc_82D04450;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D044A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq 0x82d04450
	if (ctx.cr0.eq) goto loc_82D04450;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r26,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r26.u16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r26,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r26.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,371
	ctx.r3.s64 = 371;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bl 0x82d08b48
	ctx.lr = 0x82D044E8;
	sub_82D08B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82d04450
	if (!ctx.cr0.eq) goto loc_82D04450;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82d08ad0
	ctx.lr = 0x82D044FC;
	sub_82D08AD0(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d04450
	if (!ctx.cr0.eq) goto loc_82D04450;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82d08210
	ctx.lr = 0x82D0450C;
	sub_82D08210(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d04450
	if (!ctx.cr0.eq) goto loc_82D04450;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82d08110
	ctx.lr = 0x82D0451C;
	sub_82D08110(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d04450
	if (!ctx.cr0.eq) goto loc_82D04450;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// lfs f0,2720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82D04550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D0455C"))) PPC_WEAK_FUNC(sub_82D0455C);
PPC_FUNC_IMPL(__imp__sub_82D0455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04560"))) PPC_WEAK_FUNC(sub_82D04560);
PPC_FUNC_IMPL(__imp__sub_82D04560) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d045d4
	if (ctx.cr6.eq) goto loc_82D045D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08bb8
	ctx.lr = 0x82D04588;
	sub_82D08BB8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82d081c0
	ctx.lr = 0x82D04590;
	sub_82D081C0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82d082b8
	ctx.lr = 0x82D04598;
	sub_82D082B8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82d081c0
	ctx.lr = 0x82D045A0;
	sub_82D081C0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d045c4
	if (ctx.cr6.eq) goto loc_82D045C4;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D045BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82D045C4:
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D045D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D045D4:
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

__attribute__((alias("__imp__sub_82D045F0"))) PPC_WEAK_FUNC(sub_82D045F0);
PPC_FUNC_IMPL(__imp__sub_82D045F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-3344(r1)
	ea = -3344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,291
	ctx.r5.s64 = 291;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x82d08d28
	ctx.lr = 0x82D0461C;
	sub_82D08D28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,26976
	ctx.r9.s64 = ctx.r11.s64 + 26976;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,145
	ctx.r7.s64 = 145;
	// addi r8,r1,1240
	ctx.r8.s64 = ctx.r1.s64 + 1240;
loc_82D04634:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bgt 0x82d04634
	if (ctx.cr0.gt) goto loc_82D04634;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,291
	ctx.r5.s64 = 291;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d08fe0
	ctx.lr = 0x82D04688;
	sub_82D08FE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,2288
	ctx.r7.s64 = ctx.r1.s64 + 2288;
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,291
	ctx.r4.s64 = 291;
	// lfs f0,27560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27560);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82d08e88
	ctx.lr = 0x82D046B0;
	sub_82D08E88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,2288
	ctx.r4.s64 = ctx.r1.s64 + 2288;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82d088a0
	ctx.lr = 0x82D046C0;
	sub_82D088A0(ctx, base);
	// addi r1,r1,3344
	ctx.r1.s64 = ctx.r1.s64 + 3344;
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

__attribute__((alias("__imp__sub_82D046D8"))) PPC_WEAK_FUNC(sub_82D046D8);
PPC_FUNC_IMPL(__imp__sub_82D046D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D046E0;
	sub_82CA2BCC(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7508
	ctx.lr = 0x82D046E8;
	sub_82CA7508(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f28,f0
	ctx.f28.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f28,f29
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f29.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,80
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 80, ctx.xer);
	// ble cr6,0x82d04730
	if (!ctx.cr6.gt) goto loc_82D04730;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82D04730:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f31,3084(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82d047ac
	if (!ctx.cr6.gt) goto loc_82D047AC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// subf r25,r30,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r24,r30,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
loc_82D04774:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r22
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09530
	ctx.lr = 0x82D04790;
	sub_82D09530(ctx, base);
	// stfsx f1,r25,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r28.u32, temp.u32);
	// stw r21,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// stfsx f31,r24,r28
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r28.u32, temp.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// fadds f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82d04774
	if (!ctx.cr0.eq) goto loc_82D04774;
loc_82D047AC:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09530
	ctx.lr = 0x82D047BC;
	sub_82D09530(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stfsx f1,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// stwx r23,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r23.u32);
	// stfsx f28,r27,r31
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, temp.u32);
	// ble cr6,0x82d0487c
	if (!ctx.cr6.gt) goto loc_82D0487C;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lfs f10,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r4,r31,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r3,r31,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r31.s64;
loc_82D04800:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// fdivs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// bge cr6,0x82d0486c
	if (!ctx.cr6.lt) goto loc_82D0486C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r9,r22
	ctx.r11.u64 = ctx.r9.u64 + ctx.r22.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_82D04838:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f9,f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x82d04838
	if (ctx.cr6.lt) goto loc_82D04838;
loc_82D0486C:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d04800
	if (!ctx.cr0.eq) goto loc_82D04800;
loc_82D0487C:
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7554
	ctx.lr = 0x82D04888;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D0488C"))) PPC_WEAK_FUNC(sub_82D0488C);
PPC_FUNC_IMPL(__imp__sub_82D0488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04890"))) PPC_WEAK_FUNC(sub_82D04890);
PPC_FUNC_IMPL(__imp__sub_82D04890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D04898;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-3184(r1)
	ea = -3184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,1536
	ctx.r6.s64 = ctx.r1.s64 + 1536;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// bl 0x82d0a3c0
	ctx.lr = 0x82D048DC;
	sub_82D0A3C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// lfs f0,3212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d0a168
	ctx.lr = 0x82D0490C;
	sub_82D0A168(ctx, base);
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,1536
	ctx.r7.s64 = ctx.r1.s64 + 1536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82d09748
	ctx.lr = 0x82D04934;
	sub_82D09748(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d046d8
	ctx.lr = 0x82D04944;
	sub_82D046D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lhz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82d0496c
	if (!ctx.cr6.eq) goto loc_82D0496C;
	// extsh. r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d04a6c
	if (ctx.cr0.eq) goto loc_82D04A6C;
loc_82D0496C:
	// lha r7,36(r31)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 36));
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D04980:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x82d049e8
	if (ctx.cr6.lt) goto loc_82D049E8;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt 0x82d049dc
	if (ctx.cr0.lt) goto loc_82D049DC;
	// bge cr6,0x82d049e0
	if (!ctx.cr6.lt) goto loc_82D049E0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r9,r1,1936
	ctx.r9.s64 = ctx.r1.s64 + 1936;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r10,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// b 0x82d049fc
	goto loc_82D049FC;
loc_82D049DC:
	// blt cr6,0x82d049e8
	if (ctx.cr6.lt) goto loc_82D049E8;
loc_82D049E0:
	// lfs f11,1532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82d049f0
	goto loc_82D049F0;
loc_82D049E8:
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lfsx f11,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
loc_82D049F0:
	// addi r11,r1,1936
	ctx.r11.s64 = ctx.r1.s64 + 1936;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82D049FC:
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f11,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// blt cr6,0x82d04980
	if (ctx.cr6.lt) goto loc_82D04980;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,1936
	ctx.r11.s64 = ctx.r1.s64 + 1936;
	// li r10,256
	ctx.r10.s64 = 256;
	// lfs f0,2700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82D04A38:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d04a38
	if (!ctx.cr0.eq) goto loc_82D04A38;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1936
	ctx.r4.s64 = ctx.r1.s64 + 1936;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r11,29212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D04A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D04A6C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,1536
	ctx.r6.s64 = ctx.r1.s64 + 1536;
	// addi r5,r27,16
	ctx.r5.s64 = ctx.r27.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82d09d00
	ctx.lr = 0x82D04A84;
	sub_82D09D00(ctx, base);
	// addi r5,r27,20
	ctx.r5.s64 = ctx.r27.s64 + 20;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82d09cb8
	ctx.lr = 0x82D04A94;
	sub_82D09CB8(ctx, base);
	// addi r6,r1,1936
	ctx.r6.s64 = ctx.r1.s64 + 1936;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r24,145
	ctx.r4.s64 = ctx.r24.s64 + 145;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d08d28
	ctx.lr = 0x82D04AA8;
	sub_82D08D28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,1936
	ctx.r6.s64 = ctx.r1.s64 + 1936;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// lfs f1,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09048
	ctx.lr = 0x82D04AC0;
	sub_82D09048(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82d09278
	ctx.lr = 0x82D04ACC;
	sub_82D09278(ctx, base);
	// lwz r31,3268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3268);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82d09ae0
	ctx.lr = 0x82D04AE8;
	sub_82D09AE0(ctx, base);
	// lfs f5,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09678
	ctx.lr = 0x82D04B00;
	sub_82D09678(ctx, base);
	// stfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,3184
	ctx.r1.s64 = ctx.r1.s64 + 3184;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D04B10"))) PPC_WEAK_FUNC(sub_82D04B10);
PPC_FUNC_IMPL(__imp__sub_82D04B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D04B18;
	sub_82CA2BD8(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4352(r1)
	ea = -4352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r25,72(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d04b54
	if (!ctx.cr0.eq) goto loc_82D04B54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d04d18
	goto loc_82D04D18;
loc_82D04B54:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,160
	ctx.r11.s64 = 160;
loc_82D04B5C:
	// lha r9,0(r3)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 0));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bgt 0x82d04b5c
	if (ctx.cr0.gt) goto loc_82D04B5C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08c08
	ctx.lr = 0x82D04B98;
	sub_82D08C08(ctx, base);
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82d045f0
	ctx.lr = 0x82D04BAC;
	sub_82D045F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82d09488
	ctx.lr = 0x82D04BB8;
	sub_82D09488(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,145
	ctx.r5.s64 = 145;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d07f08
	ctx.lr = 0x82D04BD4;
	sub_82D07F08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r27,145
	ctx.r4.s64 = ctx.r27.s64 + 145;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08d28
	ctx.lr = 0x82D04BEC;
	sub_82D08D28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09048
	ctx.lr = 0x82D04C04;
	sub_82D09048(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d09278
	ctx.lr = 0x82D04C10;
	sub_82D09278(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// addi r6,r1,2208
	ctx.r6.s64 = ctx.r1.s64 + 2208;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d08e88
	ctx.lr = 0x82D04C28;
	sub_82D08E88(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
	// addi r4,r1,2208
	ctx.r4.s64 = ctx.r1.s64 + 2208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d04890
	ctx.lr = 0x82D04C54;
	sub_82D04890(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,225
	ctx.r5.s64 = 225;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x82d0a830
	ctx.lr = 0x82D04C74;
	sub_82D0A830(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// beq cr6,0x82d04ca4
	if (ctx.cr6.eq) goto loc_82D04CA4;
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0a6d0
	ctx.lr = 0x82D04CA4;
	sub_82D0A6D0(ctx, base);
loc_82D04CA4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d04d14
	if (ctx.cr6.eq) goto loc_82D04D14;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,2792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d04cf4
	if (!ctx.cr6.lt) goto loc_82D04CF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D04CF4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f13,-30920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d04d08
	if (!ctx.cr6.gt) goto loc_82D04D08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D04D08:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_82D04D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D04D18:
	// addi r1,r1,4352
	ctx.r1.s64 = ctx.r1.s64 + 4352;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D04D20"))) PPC_WEAK_FUNC(sub_82D04D20);
PPC_FUNC_IMPL(__imp__sub_82D04D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D04D28;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	ctx.lr = 0x82D04D30;
	sub_82CA7500(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f27,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f28,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f30,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lfs f29,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f26,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82d04d74
	if (ctx.cr6.lt) goto loc_82D04D74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D04D74:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r9,27568
	ctx.r28.s64 = ctx.r9.s64 + 27568;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bne cr6,0x82d04d98
	if (!ctx.cr6.eq) goto loc_82D04D98;
	// stfs f27,4(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x82d04d9c
	goto loc_82D04D9C;
loc_82D04D98:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82D04D9C:
	// lwa r11,8(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 8));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,27932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27928);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// bl 0x821fde30
	ctx.lr = 0x82D04DC8;
	sub_821FDE30(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,2300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16944);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmadds f12,f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d04dfc
	if (!ctx.cr6.lt) goto loc_82D04DFC;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82D04DFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27924);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d04e14
	if (!ctx.cr6.gt) goto loc_82D04E14;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82D04E14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d04e58
	if (ctx.cr6.gt) goto loc_82D04E58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d04e58
	if (ctx.cr6.lt) goto loc_82D04E58;
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82d04eb4
	goto loc_82D04EB4;
loc_82D04E58:
	// fcmpu cr6,f27,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// ble cr6,0x82d04e6c
	if (!ctx.cr6.gt) goto loc_82D04E6C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// b 0x82d04e70
	goto loc_82D04E70;
loc_82D04E6C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82D04E70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2740);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d04eb4
	if (!ctx.cr6.lt) goto loc_82D04EB4;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82d04eb4
	if (!ctx.cr6.lt) goto loc_82D04EB4;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82d04eb0
	if (!ctx.cr6.gt) goto loc_82D04EB0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82d04eb4
	goto loc_82D04EB4;
loc_82D04EB0:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_82D04EB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x82d04ec8
	if (ctx.cr6.lt) goto loc_82D04EC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D04EC8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0a9b8
	ctx.lr = 0x82D04EF0;
	sub_82D0A9B8(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	ctx.lr = 0x82D04F08;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D04F0C"))) PPC_WEAK_FUNC(sub_82D04F0C);
PPC_FUNC_IMPL(__imp__sub_82D04F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04F10"))) PPC_WEAK_FUNC(sub_82D04F10);
PPC_FUNC_IMPL(__imp__sub_82D04F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82D04F18;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lbz r23,0(r29)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r20,4(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r22,r11,27856
	ctx.r22.s64 = ctx.r11.s64 + 27856;
loc_82D04F64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r28,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d0b150
	ctx.lr = 0x82D04F74;
	sub_82D0B150(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 68, ctx.xer);
	// blt cr6,0x82d04f64
	if (ctx.cr6.lt) goto loc_82D04F64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d04d20
	ctx.lr = 0x82D04FA0;
	sub_82D04D20(ctx, base);
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d04fd0
	if (!ctx.cr6.eq) goto loc_82D04FD0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lhz r8,58(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// lhz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lfs f2,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0ace0
	ctx.lr = 0x82D04FD0;
	sub_82D0ACE0(ctx, base);
loc_82D04FD0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0ac38
	ctx.lr = 0x82D04FE4;
	sub_82D0AC38(ctx, base);
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// sth r10,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r10.u16);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d0502c
	if (!ctx.cr6.eq) goto loc_82D0502C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r11,29212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29212);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d050d0
	goto loc_82D050D0;
loc_82D0502C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r27,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r27.u16);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// sth r24,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r24.u16);
	// stb r23,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r23.u8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lhz r8,94(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 94);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bne cr6,0x82d050d0
	if (!ctx.cr6.eq) goto loc_82D050D0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sth r27,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r27.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d050d0
	if (!ctx.cr6.gt) goto loc_82D050D0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82D05080:
	// lha r8,0(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// blt cr6,0x82d05080
	if (ctx.cr6.lt) goto loc_82D05080;
loc_82D050D0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r11,29212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29212);
	// addi r4,r20,2056
	ctx.r4.s64 = ctx.r20.s64 + 2056;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D050E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r11,29212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29212);
	// addi r4,r20,2316
	ctx.r4.s64 = ctx.r20.s64 + 2316;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82D05108"))) PPC_WEAK_FUNC(sub_82D05108);
PPC_FUNC_IMPL(__imp__sub_82D05108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D05110;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d05128
	if (!ctx.cr6.eq) goto loc_82D05128;
loc_82D05120:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d052d0
	goto loc_82D052D0;
loc_82D05128:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// lfs f13,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lfs f12,27936(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27936);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lfs f11,2720(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2720);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// sth r30,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r30.u16);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// sth r30,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r30.u16);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// sth r10,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r10.u16);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// li r3,644
	ctx.r3.s64 = 644;
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,80
	ctx.r3.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,65
	ctx.r3.s64 = 65;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,65
	ctx.r3.s64 = 65;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,102
	ctx.r3.s64 = 102;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// lwz r11,29200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29200);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,104
	ctx.r3.s64 = 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D052B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d05120
	if (ctx.cr0.eq) goto loc_82D05120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0b240
	ctx.lr = 0x82D052C4;
	sub_82D0B240(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82D052D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D052D8"))) PPC_WEAK_FUNC(sub_82D052D8);
PPC_FUNC_IMPL(__imp__sub_82D052D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D052E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d053b8
	if (ctx.cr6.eq) goto loc_82D053B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d05314
	if (ctx.cr6.eq) goto loc_82D05314;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82D05314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08bb8
	ctx.lr = 0x82D0531C;
	sub_82D08BB8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d05338
	if (ctx.cr6.eq) goto loc_82D05338;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82D05338:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d05354
	if (ctx.cr6.eq) goto loc_82D05354;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82D05354:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d05370
	if (ctx.cr6.eq) goto loc_82D05370;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0536C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82D05370:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0538c
	if (ctx.cr6.eq) goto loc_82D0538C;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82D0538C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d053a8
	if (ctx.cr6.eq) goto loc_82D053A8;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D053A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82D053A8:
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D053B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D053B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D053C4"))) PPC_WEAK_FUNC(sub_82D053C4);
PPC_FUNC_IMPL(__imp__sub_82D053C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D053C8"))) PPC_WEAK_FUNC(sub_82D053C8);
PPC_FUNC_IMPL(__imp__sub_82D053C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D053D0;
	sub_82CA2BDC(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// srawi r28,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 1;
	// stfs f2,2660(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2660, temp.u32);
	// stfs f29,2668(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2668, temp.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,29208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 29208);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,29208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 29208);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D05440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d054d8
	if (!ctx.cr6.gt) goto loc_82D054D8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-31953
	ctx.r7.s64 = -2094071808;
	// lis r6,-31953
	ctx.r6.s64 = -2094071808;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,3056(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r7,25120(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25120);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r8,25124(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 25124);
	// lfs f13,-23896(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23896);
	ctx.f13.f64 = double(temp.f32);
loc_82D05474:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfsx f10,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,1456
	ctx.r5.s64 = ctx.r1.s64 + 1456;
	// fadds f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lfsx f12,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfsx f12,r4,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfsx f12,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfsx f12,r4,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// bne 0x82d05474
	if (!ctx.cr0.eq) goto loc_82D05474;
loc_82D054D8:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82d08e48
	ctx.lr = 0x82D054E8;
	sub_82D08E48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82d0551c
	if (!ctx.cr6.gt) goto loc_82D0551C;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// b 0x82d05520
	goto loc_82D05520;
loc_82D0551C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82D05520:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r10,r1,1280
	ctx.r10.s64 = ctx.r1.s64 + 1280;
	// addi r9,r1,2320
	ctx.r9.s64 = ctx.r1.s64 + 2320;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r11,40
	ctx.r11.s64 = 40;
loc_82D05534:
	// fadds f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f11,f7,f9,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82d05534
	if (!ctx.cr0.eq) goto loc_82D05534;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x82d05684
	if (ctx.cr6.eq) goto loc_82D05684;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,2660
	ctx.r8.s64 = ctx.r1.s64 + 2660;
	// addi r7,r1,2660
	ctx.r7.s64 = ctx.r1.s64 + 2660;
	// lfs f0,3092(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3092);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,2668
	ctx.r11.s64 = ctx.r1.s64 + 2668;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,2668
	ctx.r6.s64 = ctx.r1.s64 + 2668;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,2660
	ctx.r5.s64 = ctx.r1.s64 + 2660;
	// addi r8,r1,2660
	ctx.r8.s64 = ctx.r1.s64 + 2660;
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,2668
	ctx.r11.s64 = ctx.r1.s64 + 2668;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,2668
	ctx.r7.s64 = ctx.r1.s64 + 2668;
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	_mm_store_ps(ctx.v62.f32, _mm_blend_ps(_mm_load_ps(ctx.v62.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v58,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v58,v59,4,3
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 57), 4));
	// lvlx128 v59,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r10,20
	ctx.r10.s64 = 20;
	// vrlimi128 v56,v57,4,3
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx128 v57,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v57,v59,4,3
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 57), 4));
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v58,v58
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// vrlimi128 v59,v55,4,3
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 57), 4));
	// vor128 v61,v56,v56
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vrlimi128 v63,v57,3,2
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 78), 3));
	// vrlimi128 v62,v59,3,2
	_mm_store_ps(ctx.v62.f32, _mm_blend_ps(_mm_load_ps(ctx.v62.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 78), 3));
	// vrlimi128 v61,v60,3,2
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 78), 3));
loc_82D05644:
	// lvx128 v60,r0,r9
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// vmulfp128 v60,v60,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vmulfp128 v60,v60,v61
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v60,v60,v62
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vcfpsxws128 v60,v60,0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v60.f32)));
	// vpkswss128 v60,v60,v60
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v60,v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xAA));
	// stvewx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82d05644
	if (!ctx.cr0.eq) goto loc_82D05644;
	// b 0x82d056c0
	goto loc_82D056C0;
loc_82D05684:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,20
	ctx.r10.s64 = 20;
loc_82D05690:
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vpkswss128 v63,v63,v63
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82d05690
	if (!ctx.cr0.eq) goto loc_82D05690;
loc_82D056C0:
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,1456
	ctx.r9.s64 = ctx.r1.s64 + 1456;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r11,40
	ctx.r11.s64 = 40;
loc_82D056D0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d056d0
	if (!ctx.cr0.eq) goto loc_82D056D0;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D0570C"))) PPC_WEAK_FUNC(sub_82D0570C);
PPC_FUNC_IMPL(__imp__sub_82D0570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05710"))) PPC_WEAK_FUNC(sub_82D05710);
PPC_FUNC_IMPL(__imp__sub_82D05710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D05718;
	sub_82CA2BCC(ctx, base);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// addi r21,r6,8
	ctx.r21.s64 = ctx.r6.s64 + 8;
	// lhz r9,26(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 26);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d05748
	if (ctx.cr6.eq) goto loc_82D05748;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D05748:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d05760
	if (!ctx.cr6.eq) goto loc_82D05760;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05768
	goto loc_82D05768;
loc_82D05760:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05768:
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d057a4
	if (ctx.cr6.gt) goto loc_82D057A4;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d057b0
	goto loc_82D057B0;
loc_82D057A4:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D057B0:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,10(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// lhz r31,28(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82d057f8
	if (ctx.cr6.eq) goto loc_82D057F8;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D057F8:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d05810
	if (!ctx.cr6.eq) goto loc_82D05810;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05818
	goto loc_82D05818;
loc_82D05810:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05818:
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d05854
	if (ctx.cr6.gt) goto loc_82D05854;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05860
	goto loc_82D05860;
loc_82D05854:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D05860:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// lhz r31,30(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82d058a8
	if (ctx.cr6.eq) goto loc_82D058A8;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D058A8:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d058c0
	if (!ctx.cr6.eq) goto loc_82D058C0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d058c8
	goto loc_82D058C8;
loc_82D058C0:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D058C8:
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d05904
	if (ctx.cr6.gt) goto loc_82D05904;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05910
	goto loc_82D05910;
loc_82D05904:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D05910:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,14(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// lhz r31,32(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82d05958
	if (ctx.cr6.eq) goto loc_82D05958;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D05958:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d05970
	if (!ctx.cr6.eq) goto loc_82D05970;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05978
	goto loc_82D05978;
loc_82D05970:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05978:
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d059b4
	if (ctx.cr6.gt) goto loc_82D059B4;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d059c0
	goto loc_82D059C0;
loc_82D059B4:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D059C0:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// lhz r31,34(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82d05a08
	if (ctx.cr6.eq) goto loc_82D05A08;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D05A08:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d05a20
	if (!ctx.cr6.eq) goto loc_82D05A20;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05a28
	goto loc_82D05A28;
loc_82D05A20:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05A28:
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d05a64
	if (ctx.cr6.gt) goto loc_82D05A64;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05a70
	goto loc_82D05A70;
loc_82D05A64:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D05A70:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,18(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// lhz r26,36(r6)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r6.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82d05ab8
	if (ctx.cr6.eq) goto loc_82D05AB8;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82D05AB8:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r7,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82d05ad0
	if (!ctx.cr6.eq) goto loc_82D05AD0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05ad8
	goto loc_82D05AD8;
loc_82D05AD0:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05AD8:
	// srawi r26,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r26,r26,31
	ctx.r26.u64 = ctx.r26.u32 & 0x1;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// rlwinm r9,r9,3,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bgt cr6,0x82d05b14
	if (ctx.cr6.gt) goto loc_82D05B14;
	// subfic r10,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.s64 = 26 - ctx.r10.s64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x82d05b20
	goto loc_82D05B20;
loc_82D05B14:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_82D05B20:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lhz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// andc r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lhz r27,42(r6)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r6.u32 + 42);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x82d05b90
	if (ctx.cr6.eq) goto loc_82D05B90;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_82D05B90:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// bne cr6,0x82d05ba8
	if (!ctx.cr6.eq) goto loc_82D05BA8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05bb0
	goto loc_82D05BB0;
loc_82D05BA8:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_82D05BB0:
	// srawi r8,r28,10
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 10;
	// srawi r7,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 6;
	// clrlwi r30,r28,26
	ctx.r30.u64 = ctx.r28.u32 & 0x3F;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// xor r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// rlwinm r10,r8,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d05bec
	if (ctx.cr6.gt) goto loc_82D05BEC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05bf8
	goto loc_82D05BF8;
loc_82D05BEC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D05BF8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r9,2(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// lhz r30,44(r6)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// beq cr6,0x82d05c40
	if (ctx.cr6.eq) goto loc_82D05C40;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// clrlwi r10,r8,19
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFF;
loc_82D05C40:
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r8,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// bne cr6,0x82d05c58
	if (!ctx.cr6.eq) goto loc_82D05C58;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82d05c60
	goto loc_82D05C60;
loc_82D05C58:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82D05C60:
	// srawi r30,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 10;
	// clrlwi r29,r11,26
	ctx.r29.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82d05c9c
	if (ctx.cr6.gt) goto loc_82D05C9C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05ca8
	goto loc_82D05CA8;
loc_82D05C9C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82D05CA8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// neg r30,r10
	ctx.r30.s64 = -ctx.r10.s64;
	// sth r27,44(r6)
	PPC_STORE_U16(ctx.r6.u32 + 44, ctx.r27.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// andc r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ctx.r11.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// srawi r25,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82d05cf8
	if (ctx.cr6.lt) goto loc_82D05CF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D05CF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d05d10
	if (ctx.cr6.eq) goto loc_82D05D10;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// b 0x82d05d14
	goto loc_82D05D14;
loc_82D05D10:
	// li r9,64
	ctx.r9.s64 = 64;
loc_82D05D14:
	// lhz r27,50(r6)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r6.u32 + 50);
	// lhz r8,52(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 52);
	// subf r7,r27,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r27.s64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d05d38
	if (!ctx.cr6.lt) goto loc_82D05D38;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_82D05D38:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// bge cr6,0x82d05d5c
	if (!ctx.cr6.lt) goto loc_82D05D5C;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// b 0x82d05d64
	goto loc_82D05D64;
loc_82D05D5C:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
loc_82D05D64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d05d74
	if (ctx.cr6.eq) goto loc_82D05D74;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82d05ff4
	goto loc_82D05FF4;
loc_82D05D74:
	// subf r9,r25,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r25.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82d05d94
	if (!ctx.cr6.lt) goto loc_82D05D94;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// b 0x82d05d98
	goto loc_82D05D98;
loc_82D05D94:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D05D98:
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05dc0
	if (ctx.cr6.eq) goto loc_82D05DC0;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05DC0:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05dd8
	if (ctx.cr6.eq) goto loc_82D05DD8;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05DD8:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05df0
	if (ctx.cr6.eq) goto loc_82D05DF0;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05DF0:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e08
	if (ctx.cr6.eq) goto loc_82D05E08;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E08:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e20
	if (ctx.cr6.eq) goto loc_82D05E20;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E20:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e38
	if (ctx.cr6.eq) goto loc_82D05E38;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E38:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e50
	if (ctx.cr6.eq) goto loc_82D05E50;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E50:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e68
	if (ctx.cr6.eq) goto loc_82D05E68;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E68:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e80
	if (ctx.cr6.eq) goto loc_82D05E80;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E80:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05e98
	if (ctx.cr6.eq) goto loc_82D05E98;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05E98:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05eb0
	if (ctx.cr6.eq) goto loc_82D05EB0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05EB0:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05ec8
	if (ctx.cr6.eq) goto loc_82D05EC8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05EC8:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05ee0
	if (ctx.cr6.eq) goto loc_82D05EE0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05EE0:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d05ef8
	if (ctx.cr6.eq) goto loc_82D05EF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d05f0c
	goto loc_82D05F0C;
loc_82D05EF8:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
loc_82D05F0C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r9.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d05f38
	if (!ctx.cr6.lt) goto loc_82D05F38;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d05f40
	goto loc_82D05F40;
loc_82D05F38:
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82D05F40:
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -124, ctx.xer);
	// bge cr6,0x82d05f70
	if (!ctx.cr6.lt) goto loc_82D05F70;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05F70:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// blt cr6,0x82d05fd4
	if (ctx.cr6.lt) goto loc_82D05FD4;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bge cr6,0x82d05f88
	if (!ctx.cr6.lt) goto loc_82D05F88;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05F88:
	// cmpwi cr6,r11,246
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 246, ctx.xer);
	// bge cr6,0x82d05f98
	if (!ctx.cr6.lt) goto loc_82D05F98;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05F98:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x82d05fa8
	if (!ctx.cr6.lt) goto loc_82D05FA8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05FA8:
	// cmpwi cr6,r11,349
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 349, ctx.xer);
	// bge cr6,0x82d05fb8
	if (!ctx.cr6.lt) goto loc_82D05FB8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05FB8:
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// bge cr6,0x82d05fc8
	if (!ctx.cr6.lt) goto loc_82D05FC8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82d05fd8
	goto loc_82D05FD8;
loc_82D05FC8:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x82d05fd8
	if (ctx.cr6.lt) goto loc_82D05FD8;
loc_82D05FD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D05FD8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82d05ff4
	if (!ctx.cr6.lt) goto loc_82D05FF4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82d05ff4
	if (ctx.cr6.eq) goto loc_82D05FF4;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_82D05FF4:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// srawi. r31,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82d06008
	if (ctx.cr0.eq) goto loc_82D06008;
	// xori r11,r28,15
	ctx.r11.u64 = ctx.r28.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82D06008:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// rlwinm r23,r11,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,24940
	ctx.r9.s64 = ctx.r10.s64 + 24940;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lhzx r11,r23,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,0,21,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d06064
	if (!ctx.cr6.lt) goto loc_82D06064;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d06070
	goto loc_82D06070;
loc_82D06064:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82D06070:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// blt cr6,0x82d06080
	if (ctx.cr6.lt) goto loc_82D06080;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82D06080:
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// rlwinm r9,r27,0,23,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1F0;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d060b4
	if (!ctx.cr6.lt) goto loc_82D060B4;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x82d060c0
	goto loc_82D060C0;
loc_82D060B4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_82D060C0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x82d060d0
	if (ctx.cr6.gt) goto loc_82D060D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D060D0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82d06100
	if (!ctx.cr6.gt) goto loc_82D06100;
	// lhz r11,46(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 46);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82d06104
	if (ctx.cr6.eq) goto loc_82D06104;
loc_82D06100:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82D06104:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// extsh r22,r30
	ctx.r22.s64 = ctx.r30.s16;
	// addi r10,r11,24988
	ctx.r10.s64 = ctx.r11.s64 + 24988;
	// lhzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r22,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r22.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,544
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 544, ctx.xer);
	// bge cr6,0x82d06140
	if (!ctx.cr6.lt) goto loc_82D06140;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x82d0614c
	goto loc_82D0614C;
loc_82D06140:
	// cmpwi cr6,r10,5120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5120, ctx.xer);
	// blt cr6,0x82d0614c
	if (ctx.cr6.lt) goto loc_82D0614C;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_82D0614C:
	// lhz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 48);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// sth r11,52(r6)
	PPC_STORE_U16(ctx.r6.u32 + 52, ctx.r11.u16);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r4,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r29,18,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x1;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// xor r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r7,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 6;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// sth r7,50(r6)
	PPC_STORE_U16(ctx.r6.u32 + 50, ctx.r7.u16);
	// sth r10,48(r6)
	PPC_STORE_U16(ctx.r6.u32 + 48, ctx.r10.u16);
	// beq cr6,0x82d061ac
	if (ctx.cr6.eq) goto loc_82D061AC;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D061AC:
	// rlwinm r10,r29,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d061c4
	if (ctx.cr6.eq) goto loc_82D061C4;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D061C4:
	// rlwinm r10,r29,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d061dc
	if (ctx.cr6.eq) goto loc_82D061DC;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D061DC:
	// rlwinm r10,r29,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d061f4
	if (ctx.cr6.eq) goto loc_82D061F4;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D061F4:
	// rlwinm r10,r29,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d0620c
	if (ctx.cr6.eq) goto loc_82D0620C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D0620C:
	// rlwinm r10,r29,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d06224
	if (ctx.cr6.eq) goto loc_82D06224;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D06224:
	// rlwinm r10,r29,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d0623c
	if (ctx.cr6.eq) goto loc_82D0623C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D0623C:
	// rlwinm r10,r29,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d06254
	if (ctx.cr6.eq) goto loc_82D06254;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D06254:
	// rlwinm r10,r29,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d0626c
	if (ctx.cr6.eq) goto loc_82D0626C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D0626C:
	// rlwinm r10,r29,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d06284
	if (ctx.cr6.eq) goto loc_82D06284;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D06284:
	// rlwinm r10,r29,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d0629c
	if (ctx.cr6.eq) goto loc_82D0629C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D0629C:
	// rlwinm r10,r29,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d062b4
	if (ctx.cr6.eq) goto loc_82D062B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D062B4:
	// rlwinm r10,r29,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d062cc
	if (ctx.cr6.eq) goto loc_82D062CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D062CC:
	// rlwinm r10,r29,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d062e4
	if (ctx.cr6.eq) goto loc_82D062E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d062f8
	goto loc_82D062F8;
loc_82D062E4:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_82D062F8:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d06320
	if (!ctx.cr6.lt) goto loc_82D06320;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d06328
	goto loc_82D06328;
loc_82D06320:
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82D06328:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x82d06350
	if (ctx.cr6.eq) goto loc_82D06350;
	// subf r7,r29,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r29.s64;
	// subf r4,r29,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r29.s64;
	// li r31,-1024
	ctx.r31.s64 = -1024;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// b 0x82d06364
	goto loc_82D06364;
loc_82D06350:
	// add r10,r24,r29
	ctx.r10.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r7,r25,r29
	ctx.r7.u64 = ctx.r25.u64 + ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
loc_82D06364:
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r11,r30,-8191
	ctx.r11.s64 = ctx.r30.s64 + -8191;
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// clrlwi r11,r9,19
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 | ctx.r3.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// addi r3,r9,8192
	ctx.r3.s64 = ctx.r9.s64 + 8192;
	// andc r25,r28,r10
	ctx.r25.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r3,r11,0,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// and r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ctx.r10.u64;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// or r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 | ctx.r25.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// bge cr6,0x82d063d4
	if (!ctx.cr6.lt) goto loc_82D063D4;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
loc_82D063D4:
	// rlwinm r11,r4,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1;
	// rlwinm r9,r4,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x1;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d063f4
	if (ctx.cr6.eq) goto loc_82D063F4;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D063F4:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0640c
	if (ctx.cr6.eq) goto loc_82D0640C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D0640C:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06424
	if (ctx.cr6.eq) goto loc_82D06424;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D06424:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0643c
	if (ctx.cr6.eq) goto loc_82D0643C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D0643C:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06454
	if (ctx.cr6.eq) goto loc_82D06454;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D06454:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0646c
	if (ctx.cr6.eq) goto loc_82D0646C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D0646C:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06484
	if (ctx.cr6.eq) goto loc_82D06484;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D06484:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0649c
	if (ctx.cr6.eq) goto loc_82D0649C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D0649C:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d064b4
	if (ctx.cr6.eq) goto loc_82D064B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D064B4:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d064cc
	if (ctx.cr6.eq) goto loc_82D064CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D064CC:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d064e4
	if (ctx.cr6.eq) goto loc_82D064E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D064E4:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d064fc
	if (ctx.cr6.eq) goto loc_82D064FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D064FC:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06514
	if (ctx.cr6.eq) goto loc_82D06514;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D06514:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d0652c
	if (ctx.cr6.eq) goto loc_82D0652C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d06540
	goto loc_82D06540;
loc_82D0652C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
loc_82D06540:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,6
	ctx.xer.ca = ctx.r9.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r9.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d06568
	if (!ctx.cr6.lt) goto loc_82D06568;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82d06570
	goto loc_82D06570;
loc_82D06568:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82D06570:
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// ori r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 | 32;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subfic r3,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// subfe r8,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// not r3,r5
	ctx.r3.u64 = ~ctx.r5.u64;
	// rlwinm r11,r8,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFC00;
	// subfic r7,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r29.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// sth r11,42(r6)
	PPC_STORE_U16(ctx.r6.u32 + 42, ctx.r11.u16);
	// rlwinm r8,r4,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82D065C8:
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82d065f4
	if (!ctx.cr6.lt) goto loc_82D065F4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x82d065fc
	goto loc_82D065FC;
loc_82D065F4:
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
loc_82D065FC:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82d065c8
	if (!ctx.cr0.eq) goto loc_82D065C8;
	// lhz r4,28(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 28);
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// lhz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 40);
	// lhz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 32);
	// lhz r7,38(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 38);
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// lhz r11,30(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 30);
	// lhz r31,34(r6)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + 34);
	// xor r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// lhz r29,26(r6)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r6.u32 + 26);
	// sth r4,30(r6)
	PPC_STORE_U16(ctx.r6.u32 + 30, ctx.r4.u16);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r10,34(r6)
	PPC_STORE_U16(ctx.r6.u32 + 34, ctx.r10.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r11,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r11.u16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// sth r31,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r31.u16);
	// li r10,-4096
	ctx.r10.s64 = -4096;
	// sth r29,28(r6)
	PPC_STORE_U16(ctx.r6.u32 + 28, ctx.r29.u16);
	// sth r28,26(r6)
	PPC_STORE_U16(ctx.r6.u32 + 26, ctx.r28.u16);
	// sth r27,38(r6)
	PPC_STORE_U16(ctx.r6.u32 + 38, ctx.r27.u16);
	// sth r7,40(r6)
	PPC_STORE_U16(ctx.r6.u32 + 40, ctx.r7.u16);
	// blt cr6,0x82d0667c
	if (ctx.cr6.lt) goto loc_82D0667C;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_82D0667C:
	// lhz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,-8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8191, ctx.xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x82d06694
	if (ctx.cr6.lt) goto loc_82D06694;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D06694:
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,8191
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8191, ctx.xer);
	// blt cr6,0x82d066a4
	if (ctx.cr6.lt) goto loc_82D066A4;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_82D066A4:
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82d066bc
	if (!ctx.cr6.lt) goto loc_82D066BC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82d066c4
	goto loc_82D066C4;
loc_82D066BC:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_82D066C4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82d066d8
	if (!ctx.cr6.eq) goto loc_82D066D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82d066e4
	goto loc_82D066E4;
loc_82D066D8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_82D066E4:
	// lhz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12288, ctx.xer);
	// bge cr6,0x82d06708
	if (!ctx.cr6.lt) goto loc_82D06708;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_82D06708:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// blt cr6,0x82d06718
	if (ctx.cr6.lt) goto loc_82D06718;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_82D06718:
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// and r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ctx.r3.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r10,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// bge cr6,0x82d06740
	if (!ctx.cr6.lt) goto loc_82D06740;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82d06748
	goto loc_82D06748;
loc_82D06740:
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_82D06748:
	// subfic r10,r7,15360
	ctx.xer.ca = ctx.r7.u32 <= 15360;
	ctx.r10.s64 = 15360 - ctx.r7.s64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// neg r10,r9
	ctx.r10.s64 = -ctx.r9.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82d06778
	if (!ctx.cr6.lt) goto loc_82D06778;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D06778:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d06788
	if (!ctx.cr6.lt) goto loc_82D06788;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82D06788:
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
	// cmpwi cr6,r7,-11776
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -11776, ctx.xer);
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82d067a0
	if (ctx.cr6.lt) goto loc_82D067A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D067A0:
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// lhz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,22(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// addi r5,r9,24972
	ctx.r5.s64 = ctx.r9.s64 + 24972;
	// and r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ctx.r3.u64;
	// sth r7,46(r6)
	PPC_STORE_U16(ctx.r6.u32 + 46, ctx.r7.u16);
	// lhzx r5,r23,r5
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r5.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// srawi r9,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 5;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r9,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 7;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// sth r11,22(r6)
	PPC_STORE_U16(ctx.r6.u32 + 22, ctx.r11.u16);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r11,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, ctx.r11.u16);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82d06814
	if (!ctx.cr6.lt) goto loc_82D06814;
	// neg r10,r9
	ctx.r10.s64 = -ctx.r9.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_82D06814:
	// rlwinm r9,r11,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d0682c
	if (!ctx.cr6.lt) goto loc_82D0682C;
	// cmpwi cr6,r22,1536
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1536, ctx.xer);
	// bge cr6,0x82d06834
	if (!ctx.cr6.lt) goto loc_82D06834;
loc_82D0682C:
	// li r10,512
	ctx.r10.s64 = 512;
	// b 0x82d06840
	goto loc_82D06840;
loc_82D06834:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
loc_82D06840:
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// not r9,r3
	ctx.r9.u64 = ~ctx.r3.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r9,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 & ctx.r30.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// sth r10,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r10.u16);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D0686C"))) PPC_WEAK_FUNC(sub_82D0686C);
PPC_FUNC_IMPL(__imp__sub_82D0686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06870"))) PPC_WEAK_FUNC(sub_82D06870);
PPC_FUNC_IMPL(__imp__sub_82D06870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D06878;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06908
	if (ctx.cr6.eq) goto loc_82D06908;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
loc_82D068A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d068bc
	if (ctx.cr6.gt) goto loc_82D068BC;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_82D068BC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d068a4
	if (!ctx.cr0.eq) goto loc_82D068A4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d06908
	if (ctx.cr6.eq) goto loc_82D06908;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
loc_82D068D8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// divwu r8,r26,r11
	ctx.r8.u32 = ctx.r26.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf. r8,r8,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82d068fc
	if (ctx.cr0.eq) goto loc_82D068FC;
	// mullw r26,r11,r26
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
loc_82D068FC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d068d8
	if (!ctx.cr0.eq) goto loc_82D068D8;
loc_82D06908:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r27,r26,r30
	ctx.r27.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r30.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d069dc
	if (!ctx.cr6.eq) goto loc_82D069DC;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x821f4d88
	ctx.lr = 0x82D06928;
	sub_821F4D88(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mulli r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 * 28;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x821f4d88
	ctx.lr = 0x82D0693C;
	sub_821F4D88(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x821f4d88
	ctx.lr = 0x82D06950;
	sub_821F4D88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d06974
	if (ctx.cr6.eq) goto loc_82D06974;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d06974
	if (ctx.cr6.eq) goto loc_82D06974;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d069dc
	if (!ctx.cr6.eq) goto loc_82D069DC;
loc_82D06974:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d06998
	if (ctx.cr6.eq) goto loc_82D06998;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x821f5f18
	ctx.lr = 0x82D06994;
	sub_821F5F18(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82D06998:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d069b4
	if (ctx.cr6.eq) goto loc_82D069B4;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x821f5f18
	ctx.lr = 0x82D069B0;
	sub_821F5F18(ctx, base);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
loc_82D069B4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d069d0
	if (ctx.cr6.eq) goto loc_82D069D0;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x821f5f18
	ctx.lr = 0x82D069CC;
	sub_821F5F18(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82D069D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82D069DC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D069EC;
	sub_822BA2F8(ctx, base);
	// mulli r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 * 28;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ba2f8
	ctx.lr = 0x82D06A00;
	sub_822BA2F8(ctx, base);
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D06A14;
	sub_822BA2F8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// beq cr6,0x82d069d0
	if (ctx.cr6.eq) goto loc_82D069D0;
loc_82D06A34:
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r26.s64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne 0x82d06a34
	if (!ctx.cr0.eq) goto loc_82D06A34;
	// b 0x82d069d0
	goto loc_82D069D0;
}

__attribute__((alias("__imp__sub_82D06A58"))) PPC_WEAK_FUNC(sub_82D06A58);
PPC_FUNC_IMPL(__imp__sub_82D06A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D06A60;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r29,r31,144
	ctx.r29.s64 = ctx.r31.s64 + 144;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r23,144(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r25,148(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d06ae4
	if (ctx.cr6.eq) goto loc_82D06AE4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d06abc
	if (ctx.cr0.eq) goto loc_82D06ABC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D06ABC;
	sub_822BA2F8(ctx, base);
loc_82D06ABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D06AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82D06AE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,16000
	ctx.r24.s64 = 16000;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d06bd4
	if (!ctx.cr6.eq) goto loc_82D06BD4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d06b1c
	if (!ctx.cr6.eq) goto loc_82D06B1C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x82d06b1c
	if (ctx.cr6.lt) goto loc_82D06B1C;
	// addi r25,r25,200
	ctx.r25.s64 = ctx.r25.s64 + 200;
loc_82D06B1C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82d06b80
	if (ctx.cr6.eq) goto loc_82D06B80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d06b80
	if (!ctx.cr0.eq) goto loc_82D06B80;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d06b64
	if (ctx.cr6.eq) goto loc_82D06B64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82D06B44:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// bne 0x82d06b44
	if (!ctx.cr0.eq) goto loc_82D06B44;
loc_82D06B64:
	// divwu r11,r28,r26
	ctx.r11.u32 = ctx.r28.u32 / ctx.r26.u32;
	// twllei r26,0
	// subfc r11,r11,r25
	ctx.xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d06b84
	goto loc_82D06B84;
loc_82D06B80:
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82D06B84:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d06ba4
	if (!ctx.cr6.eq) goto loc_82D06BA4;
	// li r11,500
	ctx.r11.s64 = 500;
	// li r10,300
	ctx.r10.s64 = 300;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x82d06bd4
	goto loc_82D06BD4;
loc_82D06BA4:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d06bcc
	if (!ctx.cr6.gt) goto loc_82D06BCC;
	// mulli r10,r26,1000
	ctx.r10.s64 = ctx.r26.s64 * 1000;
	// divwu r10,r10,r24
	ctx.r10.u32 = ctx.r10.u32 / ctx.r24.u32;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82d06bd4
	goto loc_82D06BD4;
loc_82D06BCC:
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82D06BD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d06be8
	if (!ctx.cr6.eq) goto loc_82D06BE8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82d06bf4
	if (ctx.cr6.eq) goto loc_82D06BF4;
loc_82D06BE8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// ble cr6,0x82d06c18
	if (!ctx.cr6.gt) goto loc_82D06C18;
loc_82D06BF4:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,27944
	ctx.r4.s64 = ctx.r10.s64 + 27944;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x82ca2c60
	ctx.lr = 0x82D06C18;
	sub_82CA2C60(ctx, base);
loc_82D06C18:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d06c38
	if (!ctx.cr6.eq) goto loc_82D06C38;
	// mulli r11,r26,1000
	ctx.r11.s64 = ctx.r26.s64 * 1000;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82D06C38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82D06C40"))) PPC_WEAK_FUNC(sub_82D06C40);
PPC_FUNC_IMPL(__imp__sub_82D06C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D06C48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d06c78
	if (!ctx.cr6.eq) goto loc_82D06C78;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82D06C78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d06cb4
	if (ctx.cr6.eq) goto loc_82D06CB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d06cb4
	if (ctx.cr0.eq) goto loc_82D06CB4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832b2fec
	ctx.lr = 0x82D06CB4;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_82D06CB4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d06ccc
	if (ctx.cr6.eq) goto loc_82D06CCC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82d06ce0
	if (!ctx.cr6.lt) goto loc_82D06CE0;
loc_82D06CCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D06CE0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d06d00
	if (ctx.cr6.eq) goto loc_82D06D00;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x82d06d04
	goto loc_82D06D04;
loc_82D06D00:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82D06D04:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D06D10"))) PPC_WEAK_FUNC(sub_82D06D10);
PPC_FUNC_IMPL(__imp__sub_82D06D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D06D18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82cfe4c8
	ctx.lr = 0x82D06D44;
	sub_82CFE4C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82d06d5c
	if (!ctx.cr0.lt) goto loc_82D06D5C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82D06D5C:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d06d80
	if (ctx.cr6.eq) goto loc_82D06D80;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82d06d84
	goto loc_82D06D84;
loc_82D06D80:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82D06D84:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D06D90"))) PPC_WEAK_FUNC(sub_82D06D90);
PPC_FUNC_IMPL(__imp__sub_82D06D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D06D98;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d06e14
	if (!ctx.cr6.gt) goto loc_82D06E14;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
loc_82D06DBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cfe618
	ctx.lr = 0x82D06DD0;
	sub_82CFE618(ctx, base);
loc_82D06DD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d06dfc
	if (ctx.cr6.eq) goto loc_82D06DFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d06dec
	if (!ctx.cr6.eq) goto loc_82D06DEC;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82D06DEC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82d06dd0
	goto loc_82D06DD0;
loc_82D06DFC:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d06dbc
	if (ctx.cr6.lt) goto loc_82D06DBC;
loc_82D06E14:
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
loc_82D06E18:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d06e44
	if (ctx.cr6.eq) goto loc_82D06E44;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82d06e34
	if (!ctx.cr6.eq) goto loc_82D06E34;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82D06E34:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x82d06e18
	goto loc_82D06E18;
loc_82D06E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D06E4C"))) PPC_WEAK_FUNC(sub_82D06E4C);
PPC_FUNC_IMPL(__imp__sub_82D06E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06E50"))) PPC_WEAK_FUNC(sub_82D06E50);
PPC_FUNC_IMPL(__imp__sub_82D06E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D06E58;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// bl 0x82266070
	ctx.lr = 0x82D06E74;
	sub_82266070(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r14,28
	ctx.r14.s64 = 28;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// lwz r20,116(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// subf r11,r11,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r11.s64;
	// addi r21,r28,116
	ctx.r21.s64 = ctx.r28.s64 + 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82d071dc
	if (ctx.cr6.eq) goto loc_82D071DC;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r18,r11,25136
	ctx.r18.s64 = ctx.r11.s64 + 25136;
loc_82D06EAC:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82d071dc
	if (ctx.cr6.eq) goto loc_82D071DC;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d071dc
	if (!ctx.cr6.eq) goto loc_82D071DC;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d071dc
	if (!ctx.cr6.lt) goto loc_82D071DC;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82d071dc
	if (ctx.cr6.lt) goto loc_82D071DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// beq cr6,0x82d06f2c
	if (ctx.cr6.eq) goto loc_82D06F2C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82d06efc
	if (ctx.cr6.eq) goto loc_82D06EFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d06f0c
	if (!ctx.cr6.eq) goto loc_82D06F0C;
loc_82D06EFC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r15,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r15.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82D06F0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x822ba2f8
	ctx.lr = 0x82D06F1C;
	sub_822BA2F8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r16,1
	ctx.r16.s64 = 1;
	// stw r15,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r15.u32);
	// b 0x82d070cc
	goto loc_82D070CC;
loc_82D06F2C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d07070
	if (!ctx.cr6.eq) goto loc_82D07070;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r23,r28,24
	ctx.r23.s64 = ctx.r28.s64 + 24;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// mulli r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 * 3;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D06F64;
	sub_82CA2C60(ctx, base);
	// mulli r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 * 7;
	// add r24,r11,r30
	ctx.r24.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82D06F7C;
	sub_82CA2C60(ctx, base);
	// rlwinm. r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// ble 0x82d06ff0
	if (!ctx.cr0.gt) goto loc_82D06FF0;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_82D06F94:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d05710
	ctx.lr = 0x82D06FAC;
	sub_82D05710(ctx, base);
	// lha r11,0(r26)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r26.u32 + 0));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82d05710
	ctx.lr = 0x82D06FD4;
	sub_82D05710(ctx, base);
	// lha r11,0(r26)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r26.u32 + 0));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// bne 0x82d06f94
	if (!ctx.cr0.eq) goto loc_82D06F94;
loc_82D06FF0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82d070bc
	if (!ctx.cr6.gt) goto loc_82D070BC;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82D07010:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d05710
	ctx.lr = 0x82D07028;
	sub_82D05710(ctx, base);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d05710
	ctx.lr = 0x82D07050;
	sub_82D05710(ctx, base);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82d07010
	if (!ctx.cr0.eq) goto loc_82D07010;
	// b 0x82d070bc
	goto loc_82D070BC;
loc_82D07070:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d070d0
	if (!ctx.cr6.eq) goto loc_82D070D0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d070bc
	if (ctx.cr6.eq) goto loc_82D070BC;
loc_82D07094:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lhzx r8,r8,r18
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r18.u32);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// bne 0x82d07094
	if (!ctx.cr0.eq) goto loc_82D07094;
loc_82D070BC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r15,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r15.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82D070CC:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82D070D0:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d06a58
	ctx.lr = 0x82D070E0;
	sub_82D06A58(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d07180
	if (!ctx.cr6.eq) goto loc_82D07180;
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d07180
	if (!ctx.cr6.gt) goto loc_82D07180;
	// addi r27,r28,88
	ctx.r27.s64 = ctx.r28.s64 + 88;
loc_82D07100:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r11,r11,r14
	ctx.r11.s32 = ctx.r11.s32 / ctx.r14.s32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d07120
	if (ctx.cr6.lt) goto loc_82D07120;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// b 0x82d0712c
	goto loc_82D0712C;
loc_82D07120:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0712C:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ba2f8
	ctx.lr = 0x82D07140;
	sub_822BA2F8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// bl 0x82d06d10
	ctx.lr = 0x82D07160;
	sub_82D06D10(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d07100
	if (ctx.cr6.lt) goto loc_82D07100;
loc_82D07180:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d071a8
	if (ctx.cr6.eq) goto loc_82D071A8;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d0719c
	if (!ctx.cr6.eq) goto loc_82D0719C;
	// stw r15,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r15.u32);
loc_82D0719C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// stw r15,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r15.u32);
loc_82D071A8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d071c0
	if (!ctx.cr6.eq) goto loc_82D071C0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d06c40
	ctx.lr = 0x82D071C0;
	sub_82D06C40(ctx, base);
loc_82D071C0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r20,0(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82d06eac
	if (!ctx.cr6.eq) goto loc_82D06EAC;
loc_82D071DC:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stw r19,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d07288
	if (!ctx.cr6.gt) goto loc_82D07288;
	// addi r31,r28,80
	ctx.r31.s64 = ctx.r28.s64 + 80;
loc_82D071F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// addi r11,r11,332
	ctx.r11.s64 = ctx.r11.s64 + 332;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82cfe4f0
	ctx.lr = 0x82D07230;
	sub_82CFE4F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82D07240:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d07258
	if (ctx.cr6.eq) goto loc_82D07258;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d0726c
	if (ctx.cr6.eq) goto loc_82D0726C;
loc_82D07258:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82d07240
	if (ctx.cr6.lt) goto loc_82D07240;
	// stw r15,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r15.u32);
loc_82D0726C:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d071f4
	if (ctx.cr6.lt) goto loc_82D071F4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d07378
	if (ctx.cr6.lt) goto loc_82D07378;
loc_82D07288:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d07378
	if (!ctx.cr6.gt) goto loc_82D07378;
	// li r29,24
	ctx.r29.s64 = 24;
loc_82D0729C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_82D072AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d07368
	if (ctx.cr6.eq) goto loc_82D07368;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82d072d0
	if (!ctx.cr6.eq) goto loc_82D072D0;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r14
	ctx.r11.s32 = ctx.r11.s32 / ctx.r14.s32;
	// b 0x82d072e4
	goto loc_82D072E4;
loc_82D072D0:
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = ctx.r11.s32 / ctx.r29.s32;
loc_82D072E4:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d072f8
	if (ctx.cr6.lt) goto loc_82D072F8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// b 0x82d07304
	goto loc_82D07304;
loc_82D072F8:
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D07304:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82d07368
	if (ctx.cr6.eq) goto loc_82D07368;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d07368
	if (ctx.cr6.eq) goto loc_82D07368;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d07348
	if (ctx.cr6.eq) goto loc_82D07348;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82d0733c
	if (!ctx.cr6.eq) goto loc_82D0733C;
	// stw r15,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r15.u32);
loc_82D0733C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r15,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r15.u32);
loc_82D07348:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bne 0x82d07360
	if (!ctx.cr0.eq) goto loc_82D07360;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d06c40
	ctx.lr = 0x82D07360;
	sub_82D06C40(ctx, base);
loc_82D07360:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d072ac
	goto loc_82D072AC;
loc_82D07368:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d0729c
	if (ctx.cr6.lt) goto loc_82D0729C;
loc_82D07378:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07384"))) PPC_WEAK_FUNC(sub_82D07384);
PPC_FUNC_IMPL(__imp__sub_82D07384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07388"))) PPC_WEAK_FUNC(sub_82D07388);
PPC_FUNC_IMPL(__imp__sub_82D07388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D07390;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d0747c
	if (ctx.cr6.eq) goto loc_82D0747C;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d07418
	if (!ctx.cr6.gt) goto loc_82D07418;
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
loc_82D073B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cfe618
	ctx.lr = 0x82D073CC;
	sub_82CFE618(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d073e8
	if (ctx.cr6.eq) goto loc_82D073E8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x821f5f18
	ctx.lr = 0x82D073E4;
	sub_821F5F18(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82D073E8:
	// lwz r3,-36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d07404
	if (ctx.cr6.eq) goto loc_82D07404;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x821f5f18
	ctx.lr = 0x82D07400;
	sub_821F5F18(ctx, base);
	// stw r29,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r29.u32);
loc_82D07404:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d073b8
	if (ctx.cr6.lt) goto loc_82D073B8;
loc_82D07418:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d07434
	if (ctx.cr6.eq) goto loc_82D07434;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x821f5f18
	ctx.lr = 0x82D07430;
	sub_821F5F18(ctx, base);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
loc_82D07434:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d07450
	if (ctx.cr6.eq) goto loc_82D07450;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x821f5f18
	ctx.lr = 0x82D0744C;
	sub_821F5F18(ctx, base);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
loc_82D07450:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d0746c
	if (ctx.cr6.eq) goto loc_82D0746C;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x821f5f18
	ctx.lr = 0x82D07468;
	sub_821F5F18(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82D0746C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x821f5f18
	ctx.lr = 0x82D0747C;
	sub_821F5F18(ctx, base);
loc_82D0747C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D07484"))) PPC_WEAK_FUNC(sub_82D07484);
PPC_FUNC_IMPL(__imp__sub_82D07484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07488"))) PPC_WEAK_FUNC(sub_82D07488);
PPC_FUNC_IMPL(__imp__sub_82D07488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D07490;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d06d90
	ctx.lr = 0x82D074A0;
	sub_82D06D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06870
	ctx.lr = 0x82D074A8;
	sub_82D06870(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82d074e4
	goto loc_82D074E4;
loc_82D074B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82d074d0
	if (ctx.cr6.lt) goto loc_82D074D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82d074dc
	goto loc_82D074DC;
loc_82D074D0:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82D074DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06c40
	ctx.lr = 0x82D074E4;
	sub_82D06C40(ctx, base);
loc_82D074E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d074b0
	if (!ctx.cr6.eq) goto loc_82D074B0;
	// li r11,600
	ctx.r11.s64 = 600;
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// bl 0x82266070
	ctx.lr = 0x82D07508;
	sub_82266070(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D07518"))) PPC_WEAK_FUNC(sub_82D07518);
PPC_FUNC_IMPL(__imp__sub_82D07518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D07520;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x821f4d88
	ctx.lr = 0x82D0754C;
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82d07634
	if (ctx.cr0.eq) goto loc_82D07634;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82D07574;
	sub_82CA2C60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d07608
	if (ctx.cr6.eq) goto loc_82D07608;
	// addi r11,r30,22
	ctx.r11.s64 = ctx.r30.s64 + 22;
	// mulli r27,r28,24
	ctx.r27.s64 = ctx.r28.s64 * 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82D0758C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bl 0x821f4d88
	ctx.lr = 0x82D075A4;
	sub_821F4D88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// beq 0x82d07634
	if (ctx.cr0.eq) goto loc_82D07634;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x821f4d88
	ctx.lr = 0x82D075C0;
	sub_821F4D88(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d07634
	if (ctx.cr0.eq) goto loc_82D07634;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d07600
	if (ctx.cr6.eq) goto loc_82D07600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D075E0:
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82d075e0
	if (!ctx.cr0.eq) goto loc_82D075E0;
loc_82D07600:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d0758c
	if (!ctx.cr6.eq) goto loc_82D0758C;
loc_82D07608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06870
	ctx.lr = 0x82D07610;
	sub_82D06870(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82d07624
	if (!ctx.cr0.lt) goto loc_82D07624;
loc_82D07618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d07388
	ctx.lr = 0x82D07620;
	sub_82D07388(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D07624:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82D07634:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82d07618
	goto loc_82D07618;
}

__attribute__((alias("__imp__sub_82D07640"))) PPC_WEAK_FUNC(sub_82D07640);
PPC_FUNC_IMPL(__imp__sub_82D07640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82d07674
	if (!ctx.cr0.eq) goto loc_82D07674;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// b 0x82d0768c
	goto loc_82D0768C;
loc_82D07674:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r8.u8 & 0x3F));
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
loc_82D0768C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// ble cr6,0x82d076fc
	if (!ctx.cr6.gt) goto loc_82D076FC;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82d076d0
	if (ctx.cr6.lt) goto loc_82D076D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D076D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82d07730
	goto loc_82D07730;
loc_82D076FC:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x82d07730
	if (!ctx.cr6.eq) goto loc_82D07730;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d07730
	if (ctx.cr6.lt) goto loc_82D07730;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
loc_82D07730:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07738"))) PPC_WEAK_FUNC(sub_82D07738);
PPC_FUNC_IMPL(__imp__sub_82D07738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82d07744
	if (ctx.cr6.lt) goto loc_82D07744;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82D07744:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07750"))) PPC_WEAK_FUNC(sub_82D07750);
PPC_FUNC_IMPL(__imp__sub_82D07750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-31992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_82D0777C:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d077b4
	if (!ctx.cr6.lt) goto loc_82D077B4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82D077B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82d0777c
	if (ctx.cr6.lt) goto loc_82D0777C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D077C4"))) PPC_WEAK_FUNC(sub_82D077C4);
PPC_FUNC_IMPL(__imp__sub_82D077C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D077C8"))) PPC_WEAK_FUNC(sub_82D077C8);
PPC_FUNC_IMPL(__imp__sub_82D077C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D077D0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f5,3164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3164);
	ctx.f5.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d07844
	if (!ctx.cr6.gt) goto loc_82D07844;
	// lis r3,32639
	ctx.r3.s64 = 2139029504;
	// clrlwi. r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,65518
	ctx.r3.u64 = ctx.r3.u64 | 65518;
	// beq 0x82d07824
	if (ctx.cr0.eq) goto loc_82D07824;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D07818:
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82d07818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D07818;
loc_82D07824:
	// rlwinm. r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82d07844
	if (ctx.cr0.eq) goto loc_82D07844;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D07838:
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82d07838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D07838;
loc_82D07844:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82d078f0
	if (!ctx.cr6.gt) goto loc_82D078F0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82D07864:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d078e4
	if (!ctx.cr6.lt) goto loc_82D078E4;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82d078d0
	if (!ctx.cr0.gt) goto loc_82D078D0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82D0789C:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lfsx f13,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d078d0
	if (ctx.cr6.gt) goto loc_82D078D0;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,92
	ctx.r28.s64 = ctx.r1.s64 + 92;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r30,r9,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stfsx f13,r9,r29
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// stwx r30,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r30.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bgt 0x82d0789c
	if (ctx.cr0.gt) goto loc_82D0789C;
loc_82D078D0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stwx r4,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r4.u32);
loc_82D078E4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d07864
	if (ctx.cr6.lt) goto loc_82D07864;
loc_82D078F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d07a30
	if (!ctx.cr6.gt) goto loc_82D07A30;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r28,284(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// lfs f6,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f6.f64 = double(temp.f32);
loc_82D0790C:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82d07920
	if (ctx.cr6.lt) goto loc_82D07920;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D07920:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f10,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f13,f11,f13,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f4.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x82d07994
	if (!ctx.cr6.gt) goto loc_82D07994;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82D07978:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82d07a48
	if (ctx.cr6.eq) goto loc_82D07A48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82d07978
	if (ctx.cr6.lt) goto loc_82D07978;
loc_82D07994:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82D07998:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d07750
	ctx.lr = 0x82D079A4;
	sub_82D07750(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82d079b4
	if (ctx.cr6.lt) goto loc_82D079B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D079B4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmsubs f12,f12,f3,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 - ctx.f4.f64));
	// fmadds f0,f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fdivs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bge cr6,0x82d07a24
	if (!ctx.cr6.lt) goto loc_82D07A24;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
loc_82D07A24:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82d0790c
	if (!ctx.cr0.eq) goto loc_82D0790C;
loc_82D07A30:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82D07A48:
	// lwz r30,276(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x82d07998
	goto loc_82D07998;
}

__attribute__((alias("__imp__sub_82D07A50"))) PPC_WEAK_FUNC(sub_82D07A50);
PPC_FUNC_IMPL(__imp__sub_82D07A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82D07A58;
	sub_82CA2BB8(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addi r23,r10,25004
	ctx.r23.s64 = ctx.r10.s64 + 25004;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,28000
	ctx.r11.s64 = ctx.r11.s64 + 28000;
	// ble cr6,0x82d07a98
	if (!ctx.cr6.gt) goto loc_82D07A98;
	// addi r10,r11,1644
	ctx.r10.s64 = ctx.r11.s64 + 1644;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x82d07aa4
	goto loc_82D07AA4;
loc_82D07A98:
	// addi r10,r11,2744
	ctx.r10.s64 = ctx.r11.s64 + 2744;
	// addi r21,r11,48
	ctx.r21.s64 = ctx.r11.s64 + 48;
	// addi r9,r23,24
	ctx.r9.s64 = ctx.r23.s64 + 24;
loc_82D07AA4:
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r10,r11,3600
	ctx.r10.s64 = ctx.r11.s64 + 3600;
	// addi r8,r11,4324
	ctx.r8.s64 = ctx.r11.s64 + 4324;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// ble cr6,0x82d07af8
	if (!ctx.cr6.gt) goto loc_82D07AF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subf r7,r21,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r21.s64;
	// subf r8,r21,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r21.s64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82D07ADC:
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d07adc
	if (!ctx.cr0.eq) goto loc_82D07ADC;
loc_82D07AF8:
	// addi r11,r23,48
	ctx.r11.s64 = ctx.r23.s64 + 48;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// subf r22,r10,r9
	ctx.r22.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82D07B2C:
	// lwzx r11,r22,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r28.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82D07B40:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82d07b6c
	if (!ctx.cr6.gt) goto loc_82D07B6C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82D07B54:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bne 0x82d07b54
	if (!ctx.cr0.eq) goto loc_82D07B54;
loc_82D07B6C:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82d07b40
	if (!ctx.cr0.eq) goto loc_82D07B40;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// bge cr6,0x82d07bec
	if (!ctx.cr6.lt) goto loc_82D07BEC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r18,28(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r17,24(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r16,20(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// bl 0x82d077c8
	ctx.lr = 0x82D07BE8;
	sub_82D077C8(ctx, base);
	// b 0x82d07c40
	goto loc_82D07C40;
loc_82D07BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d07750
	ctx.lr = 0x82D07C00;
	sub_82D07750(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blt cr6,0x82d07c28
	if (ctx.cr6.lt) goto loc_82D07C28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D07C28:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82D07C40:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r23,48
	ctx.r6.s64 = ctx.r23.s64 + 48;
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// addi r27,r9,4
	ctx.r27.s64 = ctx.r9.s64 + 4;
	// addi r26,r8,4
	ctx.r26.s64 = ctx.r8.s64 + 4;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d07b2c
	if (ctx.cr6.lt) goto loc_82D07B2C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82d07cd8
	if (!ctx.cr6.gt) goto loc_82D07CD8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// subf r9,r10,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r10.s64;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// subf r8,r8,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r8.s64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82D07CBC:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d07cbc
	if (!ctx.cr0.eq) goto loc_82D07CBC;
loc_82D07CD8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82D07CE4"))) PPC_WEAK_FUNC(sub_82D07CE4);
PPC_FUNC_IMPL(__imp__sub_82D07CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07CE8"))) PPC_WEAK_FUNC(sub_82D07CE8);
PPC_FUNC_IMPL(__imp__sub_82D07CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-31984
	ctx.r11.s64 = ctx.r11.s64 + -31984;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82D07D08:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d07d24
	if (!ctx.cr6.lt) goto loc_82D07D24;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82D07D24:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d07d08
	if (ctx.cr6.lt) goto loc_82D07D08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07D3C"))) PPC_WEAK_FUNC(sub_82D07D3C);
PPC_FUNC_IMPL(__imp__sub_82D07D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07D40"))) PPC_WEAK_FUNC(sub_82D07D40);
PPC_FUNC_IMPL(__imp__sub_82D07D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-16944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82d07d60
	if (ctx.cr6.gt) goto loc_82D07D60;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82D07D60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27924);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d07d74
	if (!ctx.cr6.gt) goto loc_82D07D74;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82D07D74:
	// bl 0x821f3c80
	ctx.lr = 0x82D07D78;
	sub_821F3C80(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,-31720(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31720);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsub f12,f0,f1
	ctx.f12.f64 = ctx.f0.f64 - ctx.f1.f64;
	// lfs f0,-31728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82d07dc0
	if (!ctx.cr6.gt) goto loc_82D07DC0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82d07dd0
	goto loc_82D07DD0;
loc_82D07DC0:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82D07DD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07DE0"))) PPC_WEAK_FUNC(sub_82D07DE0);
PPC_FUNC_IMPL(__imp__sub_82D07DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,27932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27928);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// bl 0x821fde30
	ctx.lr = 0x82D07E18;
	sub_821FDE30(ctx, base);
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

__attribute__((alias("__imp__sub_82D07E2C"))) PPC_WEAK_FUNC(sub_82D07E2C);
PPC_FUNC_IMPL(__imp__sub_82D07E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07E30"))) PPC_WEAK_FUNC(sub_82D07E30);
PPC_FUNC_IMPL(__imp__sub_82D07E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f0,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82D07E4C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d07e68
	if (!ctx.cr6.lt) goto loc_82D07E68;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82D07E68:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d07e4c
	if (ctx.cr6.lt) goto loc_82D07E4C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d07ea0
	if (!ctx.cr6.lt) goto loc_82D07EA0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D07EA0:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07EAC"))) PPC_WEAK_FUNC(sub_82D07EAC);
PPC_FUNC_IMPL(__imp__sub_82D07EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07EB0"))) PPC_WEAK_FUNC(sub_82D07EB0);
PPC_FUNC_IMPL(__imp__sub_82D07EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D07EB8;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r3,0,28,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r5,r29,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r29.s64;
	// addi r3,r11,-31712
	ctx.r3.s64 = ctx.r11.s64 + -31712;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82d07738
	ctx.lr = 0x82D07EE4;
	sub_82D07738(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82d07ef8
	if (!ctx.cr6.eq) goto loc_82D07EF8;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82d07efc
	goto loc_82D07EFC;
loc_82D07EF8:
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82D07EFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D07F08"))) PPC_WEAK_FUNC(sub_82D07F08);
PPC_FUNC_IMPL(__imp__sub_82D07F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82D07F10;
	sub_82CA2BD8(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7500
	ctx.lr = 0x82D07F18;
	sub_82CA7500(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f27,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f27.f64 = double(temp.f32);
	// li r5,161
	ctx.r5.s64 = 161;
	// lfs f26,1576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1576);
	ctx.f26.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfsx f31,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f31.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfsx f30,r8,r28
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r11,-150
	ctx.r25.s64 = ctx.r11.s64 + -150;
	// bl 0x82d08d28
	ctx.lr = 0x82D07F78;
	sub_82D08D28(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,-31672(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31672);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-31676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31676);
	ctx.f11.f64 = double(temp.f32);
loc_82D07F8C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f30,f12
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// fmadds f31,f0,f10,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f30,f9,f10,f8
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f8.f64));
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f31,r10,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f30,r10,r28
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// fmuls f9,f28,f31
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fadds f8,f29,f31
	ctx.f8.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fmuls f0,f29,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmsubs f9,f29,f30,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 - ctx.f9.f64));
	// fsubs f29,f8,f13
	ctx.f29.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f28,f7,f10
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// blt cr6,0x82d08024
	if (ctx.cr6.lt) goto loc_82D08024;
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f0,f26
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82d08024
	if (!ctx.cr6.gt) goto loc_82D08024;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
loc_82D08024:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r11,160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 160, ctx.xer);
	// blt cr6,0x82d07f8c
	if (ctx.cr6.lt) goto loc_82D07F8C;
	// srawi r11,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 1;
	// stfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f28,36(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmpwi cr6,r27,80
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 80, ctx.xer);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// ble cr6,0x82d080b4
	if (!ctx.cr6.gt) goto loc_82D080B4;
	// subfic r10,r27,160
	ctx.xer.ca = ctx.r27.u32 <= 160;
	ctx.r10.s64 = 160 - ctx.r27.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,-31680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31680);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// ble cr6,0x82d080fc
	if (!ctx.cr6.gt) goto loc_82D080FC;
	// li r3,40
	ctx.r3.s64 = 40;
	// b 0x82d080fc
	goto loc_82D080FC;
loc_82D080B4:
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,-31680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// cmpwi cr6,r3,-40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -40, ctx.xer);
	// bge cr6,0x82d080fc
	if (!ctx.cr6.lt) goto loc_82D080FC;
	// li r3,-40
	ctx.r3.s64 = -40;
loc_82D080FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca754c
	ctx.lr = 0x82D08108;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82D0810C"))) PPC_WEAK_FUNC(sub_82D0810C);
PPC_FUNC_IMPL(__imp__sub_82D0810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08110"))) PPC_WEAK_FUNC(sub_82D08110);
PPC_FUNC_IMPL(__imp__sub_82D08110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bne 0x82d08154
	if (!ctx.cr0.eq) goto loc_82D08154;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d081a8
	goto loc_82D081A8;
loc_82D08154:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,29208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0818C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,29208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29208);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D081A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D081A8:
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

__attribute__((alias("__imp__sub_82D081C0"))) PPC_WEAK_FUNC(sub_82D081C0);
PPC_FUNC_IMPL(__imp__sub_82D081C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d081f8
	if (ctx.cr6.eq) goto loc_82D081F8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D081F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D081F8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82D08210"))) PPC_WEAK_FUNC(sub_82D08210);
PPC_FUNC_IMPL(__imp__sub_82D08210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D08218;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d08230
	if (!ctx.cr6.eq) goto loc_82D08230;
loc_82D08228:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d082b0
	goto loc_82D082B0;
loc_82D08230:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82d08228
	if (ctx.cr0.eq) goto loc_82D08228;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,29200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29200);
	// li r3,13
	ctx.r3.s64 = 13;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82d08228
	if (ctx.cr0.eq) goto loc_82D08228;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-30920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30920);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,29208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D082AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D082B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D082B8"))) PPC_WEAK_FUNC(sub_82D082B8);
PPC_FUNC_IMPL(__imp__sub_82D082B8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d0830c
	if (ctx.cr6.eq) goto loc_82D0830C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d082fc
	if (ctx.cr6.eq) goto loc_82D082FC;
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D082F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D082FC:
	// lwz r11,29204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D0830C:
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

__attribute__((alias("__imp__sub_82D08328"))) PPC_WEAK_FUNC(sub_82D08328);
PPC_FUNC_IMPL(__imp__sub_82D08328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// blt 0x82d0835c
	if (ctx.cr0.lt) goto loc_82D0835C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82D08348:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82d08348
	if (!ctx.cr0.lt) goto loc_82D08348;
loc_82D0835C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,2736(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2736);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// blt cr6,0x82d08398
	if (ctx.cr6.lt) goto loc_82D08398;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82D0837C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d08398
	if (!ctx.cr6.lt) goto loc_82D08398;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x82d0837c
	if (!ctx.cr0.lt) goto loc_82D0837C;
loc_82D08398:
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r3,76
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 76, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D083AC"))) PPC_WEAK_FUNC(sub_82D083AC);
PPC_FUNC_IMPL(__imp__sub_82D083AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D083B0"))) PPC_WEAK_FUNC(sub_82D083B0);
PPC_FUNC_IMPL(__imp__sub_82D083B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D083B8;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// srawi. r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x82d08410
	if (!ctx.cr0.gt) goto loc_82D08410;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82D083EC:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82d083ec
	if (!ctx.cr0.eq) goto loc_82D083EC;
loc_82D08410:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lfs f31,3084(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82d08440
	if (ctx.cr6.eq) goto loc_82D08440;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f0,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82D08440:
	// subfic r10,r9,65
	ctx.xer.ca = ctx.r9.u32 <= 65;
	ctx.r10.s64 = 65 - ctx.r9.s64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,29208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,29208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29208);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0847C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d08e08
	ctx.lr = 0x82D0848C;
	sub_82D08E08(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82d084dc
	if (!ctx.cr6.gt) goto loc_82D084DC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82d084ec
	goto loc_82D084EC;
loc_82D084DC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82D084EC:
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// ble 0x82d08538
	if (!ctx.cr0.gt) goto loc_82D08538;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82D08504:
	// srawi r7,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 15;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfsx f0,r7,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d08504
	if (!ctx.cr0.eq) goto loc_82D08504;
loc_82D08538:
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x82d08560
	if (ctx.cr6.lt) goto loc_82D08560;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82d08584
	goto loc_82D08584;
loc_82D08560:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r8,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, temp.u32);
loc_82D08584:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D08590"))) PPC_WEAK_FUNC(sub_82D08590);
PPC_FUNC_IMPL(__imp__sub_82D08590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,1076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f12,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d08604
	if (!ctx.cr6.gt) goto loc_82D08604;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82d08614
	goto loc_82D08614;
loc_82D08604:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82D08614:
	// stfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r9,r8,16384
	ctx.r9.s64 = ctx.r8.s64 + 16384;
	// li r10,63
	ctx.r10.s64 = 63;
loc_82D08624:
	// srawi r7,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 15;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d08624
	if (!ctx.cr0.eq) goto loc_82D08624;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,29208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d08e48
	ctx.lr = 0x82D08674;
	sub_82D08E48(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// srawi. r7,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lfs f0,26480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26480);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x82d086c4
	if (!ctx.cr0.gt) goto loc_82D086C4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82D08694:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
	// bne 0x82d08694
	if (!ctx.cr0.eq) goto loc_82D08694;
loc_82D086C4:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82d086dc
	if (ctx.cr6.eq) goto loc_82D086DC;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82D086DC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

__attribute__((alias("__imp__sub_82D086F4"))) PPC_WEAK_FUNC(sub_82D086F4);
PPC_FUNC_IMPL(__imp__sub_82D086F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D086F8"))) PPC_WEAK_FUNC(sub_82D086F8);
PPC_FUNC_IMPL(__imp__sub_82D086F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D08700;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,43
	ctx.r6.s64 = 43;
	// li r5,87
	ctx.r5.s64 = 87;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d0a300
	ctx.lr = 0x82D08734;
	sub_82D0A300(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-31100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822955c0
	ctx.lr = 0x82D08758;
	sub_822955C0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// ble cr6,0x82d08770
	if (!ctx.cr6.gt) goto loc_82D08770;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82D08770:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d08590
	ctx.lr = 0x82D08784;
	sub_82D08590(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-31104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31104);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82d09ea0
	ctx.lr = 0x82D087B0;
	sub_82D09EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-31108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0a510
	ctx.lr = 0x82D087C8;
	sub_82D0A510(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d083b0
	ctx.lr = 0x82D087DC;
	sub_82D083B0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-31112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d08864
	if (!ctx.cr6.gt) goto loc_82D08864;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82D08814:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d08850
	if (!ctx.cr6.lt) goto loc_82D08850;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfsx f12,r6,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82d08850
	if (ctx.cr6.lt) goto loc_82D08850;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82d08850
	if (!ctx.cr6.gt) goto loc_82D08850;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82D08850:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d08814
	if (ctx.cr6.lt) goto loc_82D08814;
loc_82D08864:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stwx r10,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r10,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D088A0"))) PPC_WEAK_FUNC(sub_82D088A0);
PPC_FUNC_IMPL(__imp__sub_82D088A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D088A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d09010
	ctx.lr = 0x82D088C4;
	sub_82D09010(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d09070
	ctx.lr = 0x82D088D8;
	sub_82D09070(ctx, base);
	// li r4,86
	ctx.r4.s64 = 86;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d08328
	ctx.lr = 0x82D088E4;
	sub_82D08328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d086f8
	ctx.lr = 0x82D08900;
	sub_82D086F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d08924
	if (!ctx.cr6.gt) goto loc_82D08924;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82D08924:
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt 0x82d08964
	if (ctx.cr0.lt) goto loc_82D08964;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82D0893C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82d0893c
	if (!ctx.cr0.lt) goto loc_82D0893C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82D08964:
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d0bc18
	ctx.lr = 0x82D08990;
	sub_82D0BC18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0b970
	ctx.lr = 0x82D089AC;
	sub_82D0B970(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82d089ec
	goto loc_82D089EC;
loc_82D089BC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d0b788
	ctx.lr = 0x82D089D8;
	sub_82D0B788(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
loc_82D089EC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge 0x82d089bc
	if (!ctx.cr0.lt) goto loc_82D089BC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d08a64
	if (!ctx.cr6.lt) goto loc_82D08A64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-31268
	ctx.r10.s64 = ctx.r10.s64 + -31268;
	// beq cr6,0x82d08a34
	if (ctx.cr6.eq) goto loc_82D08A34;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f13,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d08a90
	if (ctx.cr6.lt) goto loc_82D08A90;
loc_82D08A34:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lfsx f13,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f13,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d08a8c
	if (!ctx.cr6.lt) goto loc_82D08A8C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82d08a90
	goto loc_82D08A90;
loc_82D08A64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-31268
	ctx.r11.s64 = ctx.r11.s64 + -31268;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d08a90
	if (ctx.cr6.lt) goto loc_82D08A90;
loc_82D08A8C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82D08A90:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D08AB4"))) PPC_WEAK_FUNC(sub_82D08AB4);
PPC_FUNC_IMPL(__imp__sub_82D08AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08AB8"))) PPC_WEAK_FUNC(sub_82D08AB8);
PPC_FUNC_IMPL(__imp__sub_82D08AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,74
	ctx.r10.s64 = 74;
	// addi r11,r11,-31616
	ctx.r11.s64 = ctx.r11.s64 + -31616;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D08AD0"))) PPC_WEAK_FUNC(sub_82D08AD0);
PPC_FUNC_IMPL(__imp__sub_82D08AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82d08b10
	if (!ctx.cr0.eq) goto loc_82D08B10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d08b30
	goto loc_82D08B30;
loc_82D08B10:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82D08B30:
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

__attribute__((alias("__imp__sub_82D08B44"))) PPC_WEAK_FUNC(sub_82D08B44);
PPC_FUNC_IMPL(__imp__sub_82D08B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08B48"))) PPC_WEAK_FUNC(sub_82D08B48);
PPC_FUNC_IMPL(__imp__sub_82D08B48) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1492
	ctx.r4.s64 = 1492;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,29200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d08b8c
	if (!ctx.cr0.eq) goto loc_82D08B8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d08ba0
	goto loc_82D08BA0;
loc_82D08B8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82D08BA0:
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

__attribute__((alias("__imp__sub_82D08BB8"))) PPC_WEAK_FUNC(sub_82D08BB8);
PPC_FUNC_IMPL(__imp__sub_82D08BB8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d08bf0
	if (ctx.cr6.eq) goto loc_82D08BF0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,29204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D08BF0:
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

__attribute__((alias("__imp__sub_82D08C04"))) PPC_WEAK_FUNC(sub_82D08C04);
PPC_FUNC_IMPL(__imp__sub_82D08C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08C08"))) PPC_WEAK_FUNC(sub_82D08C08);
PPC_FUNC_IMPL(__imp__sub_82D08C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D08C10;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// lwz r24,4(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// divw r10,r4,r31
	ctx.r10.s32 = ctx.r4.s32 / ctx.r31.s32;
	// twllei r31,0
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// andc r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// twlgei r10,-1
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twllei r31,0
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// andc r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// subf r28,r11,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r10,-1
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// blt cr6,0x82d08c9c
	if (ctx.cr6.lt) goto loc_82D08C9C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,29212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29212);
	// b 0x82d08cc8
	goto loc_82D08CC8;
loc_82D08C9C:
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// rlwinm r25,r28,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,29212(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// add r4,r25,r27
	ctx.r4.u64 = ctx.r25.u64 + ctx.r27.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,29212(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29212);
loc_82D08CC8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// divw r11,r30,r31
	ctx.r11.s32 = ctx.r30.s32 / ctx.r31.s32;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twlgei r10,-1
	// divw r10,r9,r31
	ctx.r10.s32 = ctx.r9.s32 / ctx.r31.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twllei r31,0
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// twllei r31,0
	// twlgei r11,-1
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D08D24"))) PPC_WEAK_FUNC(sub_82D08D24);
PPC_FUNC_IMPL(__imp__sub_82D08D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08D28"))) PPC_WEAK_FUNC(sub_82D08D28);
PPC_FUNC_IMPL(__imp__sub_82D08D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D08D30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// twllei r11,0
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// twllei r11,0
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andc r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twlgei r9,-1
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// andc r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r9,-1
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x82d08dc8
	if (ctx.cr6.lt) goto loc_82D08DC8;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,29212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29212);
	// b 0x82d08df4
	goto loc_82D08DF4;
loc_82D08DC8:
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,29212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r11,29212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29212);
loc_82D08DF4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D08DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D08E04"))) PPC_WEAK_FUNC(sub_82D08E04);
PPC_FUNC_IMPL(__imp__sub_82D08E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08E08"))) PPC_WEAK_FUNC(sub_82D08E08);
PPC_FUNC_IMPL(__imp__sub_82D08E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D08E10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d0c230
	ctx.lr = 0x82D08E2C;
	sub_82D0C230(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bfe8
	ctx.lr = 0x82D08E3C;
	sub_82D0BFE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D08E44"))) PPC_WEAK_FUNC(sub_82D08E44);
PPC_FUNC_IMPL(__imp__sub_82D08E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08E48"))) PPC_WEAK_FUNC(sub_82D08E48);
PPC_FUNC_IMPL(__imp__sub_82D08E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D08E50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d0c108
	ctx.lr = 0x82D08E6C;
	sub_82D0C108(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0c230
	ctx.lr = 0x82D08E7C;
	sub_82D0C230(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D08E84"))) PPC_WEAK_FUNC(sub_82D08E84);
PPC_FUNC_IMPL(__imp__sub_82D08E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08E88"))) PPC_WEAK_FUNC(sub_82D08E88);
PPC_FUNC_IMPL(__imp__sub_82D08E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D08E90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subfic r6,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r6.s64 = 256 - ctx.r11.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// slw r5,r8,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// ble 0x82d08ef0
	if (!ctx.cr0.gt) goto loc_82D08EF0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D08EC8:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d08ec8
	if (!ctx.cr0.eq) goto loc_82D08EC8;
loc_82D08EF0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// srawi. r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// ble 0x82d08f38
	if (!ctx.cr0.gt) goto loc_82D08F38;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82D08F10:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d08f10
	if (!ctx.cr0.eq) goto loc_82D08F10;
loc_82D08F38:
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82d08f64
	if (ctx.cr6.eq) goto loc_82D08F64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82D08F64:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d08fac
	if (!ctx.cr6.lt) goto loc_82D08FAC;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82d08f90
	if (ctx.cr0.eq) goto loc_82D08F90;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82D08F84:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d08f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D08F84;
loc_82D08F90:
	// rlwinm. r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82d08fac
	if (ctx.cr0.eq) goto loc_82D08FAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82D08FA0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d08fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D08FA0;
loc_82D08FAC:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d0c230
	ctx.lr = 0x82D08FC4;
	sub_82D0C230(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bfe8
	ctx.lr = 0x82D08FD4;
	sub_82D0BFE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D08FDC"))) PPC_WEAK_FUNC(sub_82D08FDC);
PPC_FUNC_IMPL(__imp__sub_82D08FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08FE0"))) PPC_WEAK_FUNC(sub_82D08FE0);
PPC_FUNC_IMPL(__imp__sub_82D08FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82D08FF0:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bgt 0x82d08ff0
	if (ctx.cr0.gt) goto loc_82D08FF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09010"))) PPC_WEAK_FUNC(sub_82D09010);
PPC_FUNC_IMPL(__imp__sub_82D09010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82D09018:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x82d09018
	if (ctx.cr0.gt) goto loc_82D09018;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09044"))) PPC_WEAK_FUNC(sub_82D09044);
PPC_FUNC_IMPL(__imp__sub_82D09044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09048"))) PPC_WEAK_FUNC(sub_82D09048);
PPC_FUNC_IMPL(__imp__sub_82D09048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82D09050:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bgt 0x82d09050
	if (ctx.cr0.gt) goto loc_82D09050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09070"))) PPC_WEAK_FUNC(sub_82D09070);
PPC_FUNC_IMPL(__imp__sub_82D09070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D09078;
	sub_82CA2BEC(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d09198
	if (!ctx.cr6.lt) goto loc_82D09198;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
loc_82D0909C:
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82d0914c
	if (ctx.cr6.gt) goto loc_82D0914C;
	// lwz r9,-8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d090bc
	if (!ctx.cr6.gt) goto loc_82D090BC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D090BC:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d090cc
	if (!ctx.cr6.lt) goto loc_82D090CC;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82D090CC:
	// lwz r9,-4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d090e0
	if (!ctx.cr6.gt) goto loc_82D090E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82D090E0:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d090f0
	if (!ctx.cr6.lt) goto loc_82D090F0;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_82D090F0:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d09104
	if (!ctx.cr6.gt) goto loc_82D09104;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
loc_82D09104:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d09114
	if (!ctx.cr6.lt) goto loc_82D09114;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
loc_82D09114:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d09128
	if (!ctx.cr6.gt) goto loc_82D09128;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
loc_82D09128:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d09138
	if (!ctx.cr6.lt) goto loc_82D09138;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r29,r8,2
	ctx.r29.s64 = ctx.r8.s64 + 2;
loc_82D09138:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d0909c
	if (ctx.cr6.lt) goto loc_82D0909C;
loc_82D0914C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d09198
	if (!ctx.cr6.lt) goto loc_82D09198;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82D0915C:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82d09198
	if (!ctx.cr6.lt) goto loc_82D09198;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d09178
	if (!ctx.cr6.gt) goto loc_82D09178;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D09178:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d09188
	if (!ctx.cr6.lt) goto loc_82D09188;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82D09188:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d0915c
	if (ctx.cr6.lt) goto loc_82D0915C;
loc_82D09198:
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82d09214
	if (ctx.cr6.gt) goto loc_82D09214;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82D091B0:
	// lwz r9,-8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d091c4
	if (!ctx.cr6.gt) goto loc_82D091C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D091C4:
	// lwz r9,-4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d091d8
	if (!ctx.cr6.gt) goto loc_82D091D8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
loc_82D091D8:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d091ec
	if (!ctx.cr6.gt) goto loc_82D091EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
loc_82D091EC:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d09200
	if (!ctx.cr6.gt) goto loc_82D09200;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r31,r10,3
	ctx.r31.s64 = ctx.r10.s64 + 3;
loc_82D09200:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82d091b0
	if (!ctx.cr6.gt) goto loc_82D091B0;
loc_82D09214:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82d09248
	if (!ctx.cr6.lt) goto loc_82D09248;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82D09224:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d09238
	if (!ctx.cr6.gt) goto loc_82D09238;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D09238:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82d09224
	if (ctx.cr6.lt) goto loc_82D09224;
loc_82D09248:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// bge cr6,0x82d0925c
	if (!ctx.cr6.lt) goto loc_82D0925C;
	// stw r30,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r30.u32);
	// blt cr6,0x82d09264
	if (ctx.cr6.lt) goto loc_82D09264;
loc_82D0925C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82d09268
	goto loc_82D09268;
loc_82D09264:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D09268:
	// lfs f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D09278"))) PPC_WEAK_FUNC(sub_82D09278);
PPC_FUNC_IMPL(__imp__sub_82D09278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D09280;
	sub_82CA2BE8(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7508
	ctx.lr = 0x82D09288;
	sub_82CA7508(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f29.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r28,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// fdivs f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// lfs f0,-12388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12388);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-31096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31096);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lfs f12,26868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26868);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,29216(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29216);
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fdivs f1,f12,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D09314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fsubs f12,f31,f28
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,-4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// ble cr6,0x82d09400
	if (!ctx.cr6.gt) goto loc_82D09400;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82D09378:
	// fmsubs f12,f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// fmsubs f30,f12,f13,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fsubs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fsubs f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f0,f13,f30,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f12.f64));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// blt cr6,0x82d09378
	if (ctx.cr6.lt) goto loc_82D09378;
loc_82D09400:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82d0945c
	if (!ctx.cr6.lt) goto loc_82D0945C;
	// fmsubs f12,f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x82d0945c
	if (!ctx.cr6.lt) goto loc_82D0945C;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_82D0945C:
	// clrlwi. r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d09474
	if (ctx.cr0.eq) goto loc_82D09474;
	// fadds f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82D09474:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	ctx.lr = 0x82D09480;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D09484"))) PPC_WEAK_FUNC(sub_82D09484);
PPC_FUNC_IMPL(__imp__sub_82D09484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09488"))) PPC_WEAK_FUNC(sub_82D09488);
PPC_FUNC_IMPL(__imp__sub_82D09488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-31084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d094a0
	if (!ctx.cr6.gt) goto loc_82D094A0;
	// li r3,261
	ctx.r3.s64 = 261;
	// blr 
	return;
loc_82D094A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-31088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d094b8
	if (!ctx.cr6.gt) goto loc_82D094B8;
	// li r3,241
	ctx.r3.s64 = 241;
	// blr 
	return;
loc_82D094B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27936);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d094d0
	if (!ctx.cr6.gt) goto loc_82D094D0;
	// li r3,221
	ctx.r3.s64 = 221;
	// blr 
	return;
loc_82D094D0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,3032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d094e8
	if (!ctx.cr6.gt) goto loc_82D094E8;
	// li r3,201
	ctx.r3.s64 = 201;
	// blr 
	return;
loc_82D094E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d09500
	if (!ctx.cr6.gt) goto loc_82D09500;
	// li r3,181
	ctx.r3.s64 = 181;
	// blr 
	return;
loc_82D09500:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,3044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82d09528
	if (ctx.cr6.gt) goto loc_82D09528;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3076);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82d09528
	if (ctx.cr6.gt) goto loc_82D09528;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-31092(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31092);
	ctx.f0.f64 = double(temp.f32);
loc_82D09528:
	// li r3,161
	ctx.r3.s64 = 161;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09530"))) PPC_WEAK_FUNC(sub_82D09530);
PPC_FUNC_IMPL(__imp__sub_82D09530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r8,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 23;
	// clrlwi r7,r11,9
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFF;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r8,r7,16256
	ctx.r8.u64 = ctx.r7.u64 | 1065353216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09590"))) PPC_WEAK_FUNC(sub_82D09590);
PPC_FUNC_IMPL(__imp__sub_82D09590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f5,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lfs f6,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,3052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3052);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// lfs f3,-31064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31064);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,27524(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27524);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// b 0x82d095d8
	goto loc_82D095D8;
loc_82D095D0:
	// fmuls f0,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
loc_82D095D8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82d095d0
	if (ctx.cr6.lt) goto loc_82D095D0;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lfs f9,-31068(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31068);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-31072(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31072);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f10,f0,f9,f8
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// lfs f7,-31076(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31076);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f10,f0,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blelr 
	if (!ctx.cr0.gt) return;
loc_82D09614:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beq cr6,0x82d09658
	if (ctx.cr6.eq) goto loc_82D09658;
	// fadds f0,f10,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x82d09640
	goto loc_82D09640;
loc_82D09638:
	// fmuls f0,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
loc_82D09640:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82d09638
	if (ctx.cr6.lt) goto loc_82D09638;
	// fnmsubs f11,f0,f9,f8
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// fmadds f0,f11,f0,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82d0965c
	goto loc_82D0965C;
loc_82D09658:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
loc_82D0965C:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82d09614
	if (ctx.cr6.gt) goto loc_82D09614;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09674"))) PPC_WEAK_FUNC(sub_82D09674);
PPC_FUNC_IMPL(__imp__sub_82D09674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09678"))) PPC_WEAK_FUNC(sub_82D09678);
PPC_FUNC_IMPL(__imp__sub_82D09678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,26348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d09694
	if (ctx.cr6.gt) goto loc_82D09694;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f2.f64 = double(temp.f32);
loc_82D09694:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,-31052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31052);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-31056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d096e0
	if (ctx.cr6.lt) goto loc_82D096E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82d096d4
	if (!ctx.cr6.lt) goto loc_82D096D4;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82D096D4:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x82d096e0
	if (!ctx.cr6.gt) goto loc_82D096E0;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_82D096E0:
	// fcmpu cr6,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// ble cr6,0x82d0973c
	if (!ctx.cr6.gt) goto loc_82D0973C;
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// blt cr6,0x82d0973c
	if (ctx.cr6.lt) goto loc_82D0973C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x82d09730
	if (!ctx.cr6.lt) goto loc_82D09730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x82d09730
	if (!ctx.cr6.gt) goto loc_82D09730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,2912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2912);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82D09730:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bge cr6,0x82d0973c
	if (!ctx.cr6.lt) goto loc_82D0973C;
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
loc_82D0973C:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09744"))) PPC_WEAK_FUNC(sub_82D09744);
PPC_FUNC_IMPL(__imp__sub_82D09744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09748"))) PPC_WEAK_FUNC(sub_82D09748);
PPC_FUNC_IMPL(__imp__sub_82D09748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D09750;
	sub_82CA2BD4(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7508
	ctx.lr = 0x82D09758;
	sub_82CA7508(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f0,-31040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31040);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f28,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f28.f64 = double(temp.f32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f0,3212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fsubs f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82d097bc
	if (!ctx.cr6.lt) goto loc_82D097BC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82D097BC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f12,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-31080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31080);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d097f4
	if (!ctx.cr6.gt) goto loc_82D097F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D097F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f29,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f29.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x82d09840
	if (!ctx.cr6.gt) goto loc_82D09840;
loc_82D09820:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d09840
	if (ctx.cr6.gt) goto loc_82D09840;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d09820
	if (ctx.cr6.lt) goto loc_82D09820;
loc_82D09840:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82d09980
	if (!ctx.cr6.gt) goto loc_82D09980;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d09070
	ctx.lr = 0x82D0985C;
	sub_82D09070(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d09070
	ctx.lr = 0x82D09870;
	sub_82D09070(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d09888
	if (ctx.cr6.gt) goto loc_82D09888;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82D09888:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3084
	ctx.r11.s64 = ctx.r11.s64 + 3084;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82d098a4
	if (!ctx.cr6.eq) goto loc_82D098A4;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x82d098a8
	goto loc_82D098A8;
loc_82D098A4:
	// fdivs f1,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
loc_82D098A8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d09590
	ctx.lr = 0x82D098B8;
	sub_82D09590(ctx, base);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d09590
	ctx.lr = 0x82D098C8;
	sub_82D09590(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d09930
	if (!ctx.cr6.gt) goto loc_82D09930;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D098DC:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// fadds f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d09924
	if (!ctx.cr6.lt) goto loc_82D09924;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82D09924:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d098dc
	if (!ctx.cr0.eq) goto loc_82D098DC;
loc_82D09930:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,-31044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31044);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0a548
	ctx.lr = 0x82D09958;
	sub_82D0A548(ctx, base);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x82d0c520
	ctx.lr = 0x82D09978;
	sub_82D0C520(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82d09998
	goto loc_82D09998;
loc_82D09980:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,3084
	ctx.r11.s64 = ctx.r11.s64 + 3084;
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82D09998:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f13,-31048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31048);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f31,f12,f29,f13
	ctx.f31.f64 = double(float(-(ctx.f12.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// bgt cr6,0x82d099b8
	if (ctx.cr6.gt) goto loc_82D099B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
loc_82D099B8:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82d099c8
	if (ctx.cr6.lt) goto loc_82D099C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-31060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31060);
	ctx.f0.f64 = double(temp.f32);
loc_82D099C8:
	// fsubs f1,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// bl 0x821b1580
	ctx.lr = 0x82D099D0;
	sub_821B1580(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82d099f0
	if (!ctx.cr6.lt) goto loc_82D099F0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82d09a14
	goto loc_82D09A14;
loc_82D099F0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f13,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d09a08
	if (!ctx.cr6.gt) goto loc_82D09A08;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82d09a14
	goto loc_82D09A14;
loc_82D09A08:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82D09A14:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7554
	ctx.lr = 0x82D09A30;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D09A34"))) PPC_WEAK_FUNC(sub_82D09A34);
PPC_FUNC_IMPL(__imp__sub_82D09A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09A38"))) PPC_WEAK_FUNC(sub_82D09A38);
PPC_FUNC_IMPL(__imp__sub_82D09A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f4.f64;
	// lfs f0,2916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82d09a78
	if (ctx.cr6.gt) goto loc_82D09A78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82d09a78
	if (ctx.cr6.lt) goto loc_82D09A78;
	// fadds f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82d09ad4
	goto loc_82D09AD4;
loc_82D09A78:
	// fcmpu cr6,f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x82d09a8c
	if (!ctx.cr6.gt) goto loc_82D09A8C;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// b 0x82d09a90
	goto loc_82D09A90;
loc_82D09A8C:
	// fmr f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64;
loc_82D09A90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2740);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82d09ad4
	if (!ctx.cr6.lt) goto loc_82D09AD4;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82d09ad4
	if (!ctx.cr6.lt) goto loc_82D09AD4;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x82d09ad0
	if (!ctx.cr6.gt) goto loc_82D09AD0;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// b 0x82d09ad4
	goto loc_82D09AD4;
loc_82D09AD0:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_82D09AD4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09ADC"))) PPC_WEAK_FUNC(sub_82D09ADC);
PPC_FUNC_IMPL(__imp__sub_82D09ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09AE0"))) PPC_WEAK_FUNC(sub_82D09AE0);
PPC_FUNC_IMPL(__imp__sub_82D09AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D09AE8;
	sub_82CA2BD4(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7508
	ctx.lr = 0x82D09AF0;
	sub_82CA7508(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f2,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82d09b24
	if (!ctx.cr6.gt) goto loc_82D09B24;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82D09B24:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x82d09b6c
	if (!ctx.cr6.lt) goto loc_82D09B6C;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82D09B6C:
	// cmpwi cr6,r25,160
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 160, ctx.xer);
	// ble cr6,0x82d09b78
	if (!ctx.cr6.gt) goto loc_82D09B78;
	// li r25,160
	ctx.r25.s64 = 160;
loc_82D09B78:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f31,3088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3088);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// subf r29,r31,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r31.s64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82D09BA8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d08fe0
	ctx.lr = 0x82D09BB8;
	sub_82D08FE0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82d09bd0
	if (!ctx.cr6.gt) goto loc_82D09BD0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x82d09be0
	goto loc_82D09BE0;
loc_82D09BD0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d09be0
	if (!ctx.cr6.eq) goto loc_82D09BE0;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_82D09BE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82d09ba8
	if (!ctx.cr6.gt) goto loc_82D09BA8;
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82d09c40
	if (!ctx.cr6.gt) goto loc_82D09C40;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82d09c40
	if (!ctx.cr6.lt) goto loc_82D09C40;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82d0a370
	ctx.lr = 0x82D09C24;
	sub_82D0A370(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82d09c58
	goto loc_82D09C58;
loc_82D09C40:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_82D09C58:
	// subf r31,r30,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r30.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d08fe0
	ctx.lr = 0x82D09C6C;
	sub_82D08FE0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d08fe0
	ctx.lr = 0x82D09C84;
	sub_82D08FE0(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,3496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7554
	ctx.lr = 0x82D09CB4;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D09CB8"))) PPC_WEAK_FUNC(sub_82D09CB8);
PPC_FUNC_IMPL(__imp__sub_82D09CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D09CC0;
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d09cf8
	if (ctx.cr6.eq) goto loc_82D09CF8;
loc_82D09CD8:
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227efe8
	ctx.lr = 0x82D09CE0;
	sub_8227EFE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d09cd8
	if (!ctx.cr0.eq) goto loc_82D09CD8;
loc_82D09CF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D09D00"))) PPC_WEAK_FUNC(sub_82D09D00);
PPC_FUNC_IMPL(__imp__sub_82D09D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D09D08;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82d0c778
	ctx.lr = 0x82D09D28;
	sub_82D0C778(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_82D09D38:
	// li r7,-32
	ctx.r7.s64 = -32;
	// lvlx128 v63,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,48
	ctx.r6.s64 = 48;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lvlx128 v61,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,80
	ctx.r7.s64 = 80;
	// vrlimi128 v61,v63,4,3
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v60,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vrlimi128 v63,v60,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 57), 4));
	// lvlx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v62,2,2
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 78), 2));
	// lvlx128 v58,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// vrlimi128 v63,v60,2,2
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 78), 2));
	// vrlimi128 v61,v59,1,1
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 147), 1));
	// vrlimi128 v63,v58,1,1
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 147), 1));
	// vexptefp128 v62,v61
	ctx.fpscr.enableFlushMode();
	ctx.v62.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v62.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v62.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v62.f32[3] = exp2f(ctx.v61.f32[3]);
	// vexptefp128 v63,v63
	ctx.v63.f32[0] = exp2f(ctx.v63.f32[0]);
	ctx.v63.f32[1] = exp2f(ctx.v63.f32[1]);
	ctx.v63.f32[2] = exp2f(ctx.v63.f32[2]);
	ctx.v63.f32[3] = exp2f(ctx.v63.f32[3]);
	// stvx128 v62,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x82d09d38
	if (!ctx.cr0.eq) goto loc_82D09D38;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r11,29208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D09DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d08e48
	ctx.lr = 0x82D09DD4;
	sub_82D08E48(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// lfs f11,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lfs f13,26480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26480);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lfs f0,-31036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31036);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,436
	ctx.r10.s64 = ctx.r1.s64 + 436;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x82d09e4c
	if (ctx.cr6.lt) goto loc_82D09E4C;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82D09E1C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d09e1c
	if (!ctx.cr0.eq) goto loc_82D09E1C;
loc_82D09E4C:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82d09e64
	if (ctx.cr6.eq) goto loc_82D09E64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D09E64:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d09ea0
	ctx.lr = 0x82D09E7C;
	sub_82D09EA0(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d09530
	ctx.lr = 0x82D09E84;
	sub_82D09530(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D09E9C"))) PPC_WEAK_FUNC(sub_82D09E9C);
PPC_FUNC_IMPL(__imp__sub_82D09E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09EA0"))) PPC_WEAK_FUNC(sub_82D09EA0);
PPC_FUNC_IMPL(__imp__sub_82D09EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D09EA8;
	sub_82CA2BEC(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x82d09ec4
	if (!ctx.cr6.eq) goto loc_82D09EC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-31028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31028);
	ctx.f13.f64 = double(temp.f32);
loc_82D09EC4:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d09ed8
	if (ctx.cr0.eq) goto loc_82D09ED8;
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x82d09ee0
	goto loc_82D09EE0;
loc_82D09ED8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r29,r1,-112
	ctx.r29.s64 = ctx.r1.s64 + -112;
loc_82D09EE0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f10,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ble cr6,0x82d09fd8
	if (!ctx.cr6.gt) goto loc_82D09FD8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lfs f11,-31032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31032);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2744);
	ctx.f12.f64 = double(temp.f32);
loc_82D09F14:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82d09f48
	if (ctx.cr6.lt) goto loc_82D09F48;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
loc_82D09F2C:
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// fmadds f0,f8,f7,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f0.f64));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82d09f2c
	if (!ctx.cr0.eq) goto loc_82D09F2C;
loc_82D09F48:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d09f58
	if (!ctx.cr6.gt) goto loc_82D09F58;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82D09F58:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d09f64
	if (!ctx.cr6.lt) goto loc_82D09F64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82D09F64:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// blt cr6,0x82d09fbc
	if (ctx.cr6.lt) goto loc_82D09FBC;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D09F9C:
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f7,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// fnmsubs f8,f8,f0,f7
	ctx.f8.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d09f9c
	if (!ctx.cr0.eq) goto loc_82D09F9C;
loc_82D09FBC:
	// fnmsubs f0,f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blt cr6,0x82d09f14
	if (ctx.cr6.lt) goto loc_82D09F14;
loc_82D09FD8:
	// stfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D09FE0"))) PPC_WEAK_FUNC(sub_82D09FE0);
PPC_FUNC_IMPL(__imp__sub_82D09FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D09FE8;
	sub_82CA2BEC(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f8,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d0a034
	if (!ctx.cr6.lt) goto loc_82D0A034;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82D0A018:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d0a034
	if (!ctx.cr6.lt) goto loc_82D0A034;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d0a018
	if (ctx.cr6.lt) goto loc_82D0A018;
loc_82D0A034:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,2780(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x82d0a160
	if (!ctx.cr6.lt) goto loc_82D0A160;
	// subf r30,r9,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f6,3496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3496);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f7.f64 = double(temp.f32);
loc_82D0A060:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d0a160
	if (!ctx.cr6.lt) goto loc_82D0A160;
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d0a0d8
	if (!ctx.cr6.lt) goto loc_82D0A0D8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfsx f12,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82d0a0d8
	if (!ctx.cr6.lt) goto loc_82D0A0D8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82D0A090:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d0a0c0
	if (!ctx.cr6.lt) goto loc_82D0A0C0;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82d0a0ac
	if (!ctx.cr6.lt) goto loc_82D0A0AC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D0A0AC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f12,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82d0a090
	if (ctx.cr6.lt) goto loc_82D0A090;
loc_82D0A0C0:
	// fcmpu cr6,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// ble cr6,0x82d0a0d8
	if (!ctx.cr6.gt) goto loc_82D0A0D8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r30,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lfsx f13,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d0a110
	goto loc_82D0A110;
loc_82D0A0D8:
	// fadds f13,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmadds f13,f13,f8,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f8.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f13.u64);
	// lwz r9,-44(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f13,-40(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfsx f12,r30,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
loc_82D0A110:
	// fadds f10,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x82d0a128
	if (!ctx.cr6.gt) goto loc_82D0A128;
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
loc_82D0A128:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x82d0a14c
	goto loc_82D0A14C;
loc_82D0A13C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d0a158
	if (!ctx.cr6.lt) goto loc_82D0A158;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82D0A14C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82d0a13c
	if (ctx.cr6.lt) goto loc_82D0A13C;
loc_82D0A158:
	// fcmpu cr6,f10,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// blt cr6,0x82d0a060
	if (ctx.cr6.lt) goto loc_82D0A060;
loc_82D0A160:
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D0A164"))) PPC_WEAK_FUNC(sub_82D0A164);
PPC_FUNC_IMPL(__imp__sub_82D0A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A168"))) PPC_WEAK_FUNC(sub_82D0A168);
PPC_FUNC_IMPL(__imp__sub_82D0A168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D0A170;
	sub_82CA2BE0(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r11,r11,18144
	ctx.r11.s64 = ctx.r11.s64 + 18144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-31024
	ctx.r31.s64 = ctx.r10.s64 + -31024;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r31
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d09fe0
	ctx.lr = 0x82D0A1B8;
	sub_82D09FE0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// vrlimi128 v63,v61,8,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 228), 8));
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// vlogefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v63.f32[0] = log2f(ctx.v63.f32[0]);
	ctx.v63.f32[1] = log2f(ctx.v63.f32[1]);
	ctx.v63.f32[2] = log2f(ctx.v63.f32[2]);
	ctx.v63.f32[3] = log2f(ctx.v63.f32[3]);
	// vaddfp128 v63,v63,v62
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vexptefp128 v63,v63
	ctx.v63.f32[0] = exp2f(ctx.v63.f32[0]);
	ctx.v63.f32[1] = exp2f(ctx.v63.f32[1]);
	ctx.v63.f32[2] = exp2f(ctx.v63.f32[2]);
	ctx.v63.f32[3] = exp2f(ctx.v63.f32[3]);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// ble 0x82d0a26c
	if (!ctx.cr0.gt) goto loc_82D0A26C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
loc_82D0A204:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfsx f31,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmadds f0,f0,f30,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82d0a254
	if (!ctx.cr6.lt) goto loc_82D0A254;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	ctx.lr = 0x82D0A250;
	sub_82CA30E8(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82D0A254:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82d0a204
	if (!ctx.cr0.eq) goto loc_82D0A204;
loc_82D0A26C:
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// ble cr6,0x82d0a288
	if (!ctx.cr6.gt) goto loc_82D0A288;
	// li r30,256
	ctx.r30.s64 = 256;
loc_82D0A288:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82d0a2b4
	if (!ctx.cr6.lt) goto loc_82D0A2B4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	ctx.lr = 0x82D0A2B4;
	sub_82CA30E8(ctx, base);
loc_82D0A2B4:
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// bge cr6,0x82d0a2e8
	if (!ctx.cr6.lt) goto loc_82D0A2E8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r30,256
	ctx.xer.ca = ctx.r30.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r30.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f0,2796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2796);
	ctx.f0.f64 = double(temp.f32);
loc_82D0A2D0:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0a2d0
	if (!ctx.cr0.eq) goto loc_82D0A2D0;
loc_82D0A2E8:
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D0A2FC"))) PPC_WEAK_FUNC(sub_82D0A2FC);
PPC_FUNC_IMPL(__imp__sub_82D0A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A300"))) PPC_WEAK_FUNC(sub_82D0A300);
PPC_FUNC_IMPL(__imp__sub_82D0A300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82d0a364
	if (!ctx.cr6.lt) goto loc_82D0A364;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82D0A31C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d0a354
	if (ctx.cr6.lt) goto loc_82D0A354;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0a354
	if (!ctx.cr6.gt) goto loc_82D0A354;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82d0a364
	if (ctx.cr6.eq) goto loc_82D0A364;
loc_82D0A354:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82d0a31c
	if (ctx.cr6.lt) goto loc_82D0A31C;
loc_82D0A364:
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A36C"))) PPC_WEAK_FUNC(sub_82D0A36C);
PPC_FUNC_IMPL(__imp__sub_82D0A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A370"))) PPC_WEAK_FUNC(sub_82D0A370);
PPC_FUNC_IMPL(__imp__sub_82D0A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fadds f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82d0a3ac
	if (ctx.cr6.eq) goto loc_82D0A3AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82D0A3AC:
	// fmadds f0,f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A3BC"))) PPC_WEAK_FUNC(sub_82D0A3BC);
PPC_FUNC_IMPL(__imp__sub_82D0A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A3C0"))) PPC_WEAK_FUNC(sub_82D0A3C0);
PPC_FUNC_IMPL(__imp__sub_82D0A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D0A3C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x82d09010
	ctx.lr = 0x82D0A3EC;
	sub_82D09010(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0a300
	ctx.lr = 0x82D0A408;
	sub_82D0A300(ctx, base);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d0a4b8
	if (!ctx.cr6.gt) goto loc_82D0A4B8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lfs f9,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r6,r31,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r31.s64;
	// lfs f8,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,3056(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3056);
	ctx.f10.f64 = double(temp.f32);
loc_82D0A440:
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f13,f12,f10,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x82d0a480
	if (ctx.cr6.eq) goto loc_82D0A480;
	// fmuls f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82d0a484
	goto loc_82D0A484;
loc_82D0A480:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_82D0A484:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// fmadds f13,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0a440
	if (!ctx.cr0.eq) goto loc_82D0A440;
loc_82D0A4B8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x82d0a504
	if (ctx.cr6.gt) goto loc_82D0A504;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// subf r8,r31,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r31.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// lfs f13,2728(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0A4DC:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0a4dc
	if (!ctx.cr0.eq) goto loc_82D0A4DC;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D0A504:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D0A50C"))) PPC_WEAK_FUNC(sub_82D0A50C);
PPC_FUNC_IMPL(__imp__sub_82D0A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A510"))) PPC_WEAK_FUNC(sub_82D0A510);
PPC_FUNC_IMPL(__imp__sub_82D0A510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
loc_82D0A524:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82d0a524
	if (!ctx.cr0.eq) goto loc_82D0A524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A548"))) PPC_WEAK_FUNC(sub_82D0A548);
PPC_FUNC_IMPL(__imp__sub_82D0A548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D0A550;
	sub_82CA2BE4(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bgt cr6,0x82d0a564
	if (ctx.cr6.gt) goto loc_82D0A564;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82D0A564:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d0a59c
	if (!ctx.cr6.gt) goto loc_82D0A59C;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// subf r30,r7,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r7.s64;
	// subf r29,r7,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subf r28,r7,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D0A580:
	// lfsx f0,r30,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfsx f0,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r28,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r6.u32, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82d0a580
	if (!ctx.cr0.eq) goto loc_82D0A580;
loc_82D0A59C:
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82d0a5b0
	if (!ctx.cr6.gt) goto loc_82D0A5B0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82D0A5B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d0a608
	if (!ctx.cr6.gt) goto loc_82D0A608;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r27,r8,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82D0A5D4:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfsx f0,r28,r6
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r27,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82d0a5d4
	if (!ctx.cr0.eq) goto loc_82D0A5D4;
loc_82D0A608:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82d0a61c
	if (!ctx.cr6.gt) goto loc_82D0A61C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82D0A61C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d0a670
	if (!ctx.cr6.gt) goto loc_82D0A670;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r8,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82D0A63C:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfsx f0,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r6,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82d0a63c
	if (!ctx.cr0.eq) goto loc_82D0A63C;
loc_82D0A670:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82d0a6cc
	if (ctx.cr6.lt) goto loc_82D0A6CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d0a6c8
	if (!ctx.cr6.gt) goto loc_82D0A6C8;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lfs f13,2736(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2736);
	ctx.f13.f64 = double(temp.f32);
loc_82D0A69C:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0a6bc
	if (!ctx.cr6.gt) goto loc_82D0A6BC;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lfsx f0,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82D0A6BC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82d0a69c
	if (!ctx.cr0.eq) goto loc_82D0A69C;
loc_82D0A6C8:
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_82D0A6CC:
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D0A6D0"))) PPC_WEAK_FUNC(sub_82D0A6D0);
PPC_FUNC_IMPL(__imp__sub_82D0A6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7508
	ctx.lr = 0x82D0A6E8;
	sub_82CA7508(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f29,16(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82179348
	ctx.lr = 0x82D0A708;
	sub_82179348(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 22));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lhz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// bne 0x82d0a734
	if (!ctx.cr0.eq) goto loc_82D0A734;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
loc_82D0A734:
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82d0a748
	if (!ctx.cr0.eq) goto loc_82D0A748;
	// li r11,90
	ctx.r11.s64 = 90;
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
loc_82D0A748:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x821b1580
	ctx.lr = 0x82D0A758;
	sub_821B1580(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-31008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82d0ca90
	ctx.lr = 0x82D0A774;
	sub_82D0CA90(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lhz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82d0cb00
	ctx.lr = 0x82D0A788;
	sub_82D0CB00(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d0cb88
	ctx.lr = 0x82D0A794;
	sub_82D0CB88(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// lhz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// bl 0x82d0cd48
	ctx.lr = 0x82D0A7A8;
	sub_82D0CD48(ctx, base);
	// sth r3,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r3.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82d0ce18
	ctx.lr = 0x82D0A7BC;
	sub_82D0CE18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82d0a804
	if (ctx.cr0.eq) goto loc_82D0A804;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x82d0c928
	ctx.lr = 0x82D0A7E4;
	sub_82D0C928(ctx, base);
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82d0a80c
	if (ctx.cr0.eq) goto loc_82D0A80C;
	// lhz r4,22(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d0c7e8
	ctx.lr = 0x82D0A7FC;
	sub_82D0C7E8(ctx, base);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// b 0x82d0a80c
	goto loc_82D0A80C;
loc_82D0A804:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d0ca38
	ctx.lr = 0x82D0A80C;
	sub_82D0CA38(ctx, base);
loc_82D0A80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
	ctx.lr = 0x82D0A81C;
	sub_82CA7554(ctx, base);
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

__attribute__((alias("__imp__sub_82D0A830"))) PPC_WEAK_FUNC(sub_82D0A830);
PPC_FUNC_IMPL(__imp__sub_82D0A830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D0A838;
	sub_82CA2BDC(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82d09a38
	ctx.lr = 0x82D0A870;
	sub_82D09A38(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82d0a888
	if (!ctx.cr6.eq) goto loc_82D0A888;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_82D0A888:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d09488
	ctx.lr = 0x82D0A894;
	sub_82D09488(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d08d28
	ctx.lr = 0x82D0A8AC;
	sub_82D08D28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d09278
	ctx.lr = 0x82D0A8B8;
	sub_82D09278(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,3052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82d09ae0
	ctx.lr = 0x82D0A8D8;
	sub_82D09AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lfs f11,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82d0a8f4
	if (!ctx.cr6.eq) goto loc_82D0A8F4;
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82D0A8F4:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82d0a910
	if (!ctx.cr6.lt) goto loc_82D0A910;
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82D0A910:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82d0a91c
	if (!ctx.cr6.lt) goto loc_82D0A91C;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
loc_82D0A91C:
	// fsubs f9,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x82d0a940
	if (!ctx.cr6.lt) goto loc_82D0A940;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82d0a978
	goto loc_82D0A978;
loc_82D0A940:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-31004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31004);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82d0a964
	if (!ctx.cr6.lt) goto loc_82D0A964;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d0a96c
	if (ctx.cr6.gt) goto loc_82D0A96C;
loc_82D0A95C:
	// fdivs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// b 0x82d0a974
	goto loc_82D0A974;
loc_82D0A964:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d0a95c
	if (ctx.cr6.gt) goto loc_82D0A95C;
loc_82D0A96C:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82D0A974:
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82D0A978:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0a98c
	if (!ctx.cr6.lt) goto loc_82D0A98C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0A98C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0a9a0
	if (!ctx.cr6.gt) goto loc_82D0A9A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0A9A0:
	// stfs f10,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D0A9B8"))) PPC_WEAK_FUNC(sub_82D0A9B8);
PPC_FUNC_IMPL(__imp__sub_82D0A9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D0A9C0;
	sub_82CA2BCC(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r25,r7,320
	ctx.r25.s64 = ctx.r7.s64 + 320;
	// addi r24,r7,368
	ctx.r24.s64 = ctx.r7.s64 + 368;
	// lfs f0,2860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r28,r10,25060
	ctx.r28.s64 = ctx.r10.s64 + 25060;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// ble cr6,0x82d0a9fc
	if (!ctx.cr6.gt) goto loc_82D0A9FC;
	// addi r10,r11,1644
	ctx.r10.s64 = ctx.r11.s64 + 1644;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82d0aa08
	goto loc_82D0AA08;
loc_82D0A9FC:
	// addi r10,r11,2744
	ctx.r10.s64 = ctx.r11.s64 + 2744;
	// addi r22,r11,48
	ctx.r22.s64 = ctx.r11.s64 + 48;
	// addi r8,r28,24
	ctx.r8.s64 = ctx.r28.s64 + 24;
loc_82D0AA08:
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// addi r10,r11,3600
	ctx.r10.s64 = ctx.r11.s64 + 3600;
	// addi r7,r11,4324
	ctx.r7.s64 = ctx.r11.s64 + 4324;
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// stw r7,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r7.u32);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// addi r31,r10,-16
	ctx.r31.s64 = ctx.r10.s64 + -16;
	// subf r23,r7,r8
	ctx.r23.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f13,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f12,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
loc_82D0AA58:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x82d0ab2c
	if (!ctx.cr6.lt) goto loc_82D0AB2C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d0aab8
	if (!ctx.cr6.gt) goto loc_82D0AAB8;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_82D0AA9C:
	// lwz r21,0(r7)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82d0ab24
	if (ctx.cr6.eq) goto loc_82D0AB24;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d0aa9c
	if (ctx.cr6.lt) goto loc_82D0AA9C;
loc_82D0AAB8:
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82D0AABC:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmsubs f10,f8,f6,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fdivs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f0,f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f11.f64));
	// b 0x82d0ab4c
	goto loc_82D0AB4C;
loc_82D0AB24:
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x82d0aabc
	goto loc_82D0AABC;
loc_82D0AB2C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82D0AB4C:
	// lwzx r10,r23,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r8,r25,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r25.s64;
loc_82D0AB60:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82d0ab8c
	if (!ctx.cr6.gt) goto loc_82D0AB8C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_82D0AB74:
	// lfsx f11,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// bne 0x82d0ab74
	if (!ctx.cr0.eq) goto loc_82D0AB74;
loc_82D0AB8C:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82d0ab60
	if (!ctx.cr0.eq) goto loc_82D0AB60;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r28,48
	ctx.r7.s64 = ctx.r28.s64 + 48;
	// lfs f11,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x82d0aa58
	if (ctx.cr6.lt) goto loc_82D0AA58;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d0ac30
	if (!ctx.cr6.gt) goto loc_82D0AC30;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r9,r25,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r25.s64;
	// subf r8,r25,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r25.s64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82D0AC14:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0ac14
	if (!ctx.cr0.eq) goto loc_82D0AC14;
loc_82D0AC30:
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82D0AC34"))) PPC_WEAK_FUNC(sub_82D0AC34);
PPC_FUNC_IMPL(__imp__sub_82D0AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0AC38"))) PPC_WEAK_FUNC(sub_82D0AC38);
PPC_FUNC_IMPL(__imp__sub_82D0AC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 92);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82d0ac6c
	if (!ctx.cr6.eq) goto loc_82D0AC6C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f5.f64 = double(temp.f32);
	// b 0x82d0ac78
	goto loc_82D0AC78;
loc_82D0AC6C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f5,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f5.f64 = double(temp.f32);
loc_82D0AC78:
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r3,104
	ctx.r7.s64 = ctx.r3.s64 + 104;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f4,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82d0b368
	ctx.lr = 0x82D0ACBC;
	sub_82D0B368(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82D0ACE0"))) PPC_WEAK_FUNC(sub_82D0ACE0);
PPC_FUNC_IMPL(__imp__sub_82D0ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D0ACE8;
	sub_82CA2BD4(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7508
	ctx.lr = 0x82D0ACF0;
	sub_82CA7508(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r11,29208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29208);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r25,r30,2316
	ctx.r25.s64 = ctx.r30.s64 + 2316;
	// addi r26,r30,2056
	ctx.r26.s64 = ctx.r30.s64 + 2056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2316
	ctx.r5.s64 = 2316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0AD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,3056(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
loc_82D0AD50:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,25116(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25116);
	// lfs f0,-23896(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23896);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfsx f0,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0ad50
	if (!ctx.cr0.eq) goto loc_82D0AD50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r30,224
	ctx.r5.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f30,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,224(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
loc_82D0ADA8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// blt cr6,0x82d0adfc
	if (ctx.cr6.lt) goto loc_82D0ADFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82D0ADDC:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f12,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// fnmsubs f13,f13,f0,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d0addc
	if (!ctx.cr0.eq) goto loc_82D0ADDC;
loc_82D0ADFC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82d0ada8
	if (ctx.cr6.lt) goto loc_82D0ADA8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r9,r29,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r29.s64;
	// subf r8,r29,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r29.s64;
	// subf r7,r29,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82D0AE20:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f0,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0ae20
	if (!ctx.cr0.eq) goto loc_82D0AE20;
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// stfs f29,48(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// subf r6,r31,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r31.s64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82D0AE54:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// ble cr6,0x82d0aea4
	if (!ctx.cr6.gt) goto loc_82D0AEA4;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82D0AE88:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82d0ae88
	if (!ctx.cr0.eq) goto loc_82D0AE88;
loc_82D0AEA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82d0ae54
	if (!ctx.cr6.gt) goto loc_82D0AE54;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x82d0af14
	if (ctx.cr6.gt) goto loc_82D0AF14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subfic r6,r11,44
	ctx.xer.ca = ctx.r11.u32 <= 44;
	ctx.r6.s64 = 44 - ctx.r11.s64;
loc_82D0AED8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// li r11,12
	ctx.r11.s64 = 12;
loc_82D0AEE8:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d0aee8
	if (!ctx.cr0.eq) goto loc_82D0AEE8;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0aed8
	if (!ctx.cr0.eq) goto loc_82D0AED8;
loc_82D0AF14:
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,43
	ctx.r10.s64 = 43;
	// lwz r9,25128(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25128);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
loc_82D0AF28:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0af28
	if (!ctx.cr0.eq) goto loc_82D0AF28;
	// lwz r11,29208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29208);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0AF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,29208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29208);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0AF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// addi r10,r1,684
	ctx.r10.s64 = ctx.r1.s64 + 684;
	// lfs f13,-25448(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25448);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lfs f0,-25452(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25452);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,21
	ctx.r8.s64 = 21;
loc_82D0AFA4:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne 0x82d0afa4
	if (!ctx.cr0.eq) goto loc_82D0AFA4;
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d08e08
	ctx.lr = 0x82D0B010;
	sub_82D08E08(ctx, base);
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// li r10,65
	ctx.r10.s64 = 65;
	// addi r11,r11,-2316
	ctx.r11.s64 = ctx.r11.s64 + -2316;
	// subf r9,r25,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r25.s64;
loc_82D0B020:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsx f0,r9,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bgt 0x82d0b020
	if (ctx.cr0.gt) goto loc_82D0B020;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d0ce58
	ctx.lr = 0x82D0B058;
	sub_82D0CE58(ctx, base);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fcmpu cr6,f28,f30
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// bne cr6,0x82d0b078
	if (!ctx.cr6.eq) goto loc_82D0B078;
	// extsh. r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82d0b078
	if (!ctx.cr0.eq) goto loc_82D0B078;
	// extsh. r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d0b13c
	if (ctx.cr0.eq) goto loc_82D0B13C;
loc_82D0B078:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r7,r30,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r30.s64;
loc_82D0B088:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d0b0e0
	if (ctx.cr6.lt) goto loc_82D0B0E0;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// extsh r10,r23
	ctx.r10.s64 = ctx.r23.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// lfsx f12,r8,r26
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bgt cr6,0x82d0b0d8
	if (ctx.cr6.gt) goto loc_82D0B0D8;
	// lfsx f12,r8,r26
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82d0b0e4
	goto loc_82D0B0E4;
loc_82D0B0D8:
	// lfs f12,256(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82d0b0e4
	goto loc_82D0B0E4;
loc_82D0B0E0:
	// lfsx f12,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_82D0B0E4:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f12,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// blt cr6,0x82d0b088
	if (ctx.cr6.lt) goto loc_82D0B088;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r9,r26,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r26.s64;
	// li r10,65
	ctx.r10.s64 = 65;
	// lfs f0,-25456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82D0B124:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0b124
	if (!ctx.cr0.eq) goto loc_82D0B124;
loc_82D0B13C:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7554
	ctx.lr = 0x82D0B148;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82D0B14C"))) PPC_WEAK_FUNC(sub_82D0B14C);
PPC_FUNC_IMPL(__imp__sub_82D0B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B150"))) PPC_WEAK_FUNC(sub_82D0B150);
PPC_FUNC_IMPL(__imp__sub_82D0B150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D0B158;
	sub_82CA2BEC(ctx, base);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r9,r10,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r31,r9,-1
	ctx.r31.s64 = ctx.r9.s64 + -1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r5,r7,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82d0b1f4
	if (ctx.cr0.eq) goto loc_82D0B1F4;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// subfic r6,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r9.s64;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d0b1d0
	if (ctx.cr6.lt) goto loc_82D0B1D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D0B1D0:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// sraw r10,r31,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r10.s64 = ctx.r31.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x82d0b234
	goto loc_82D0B234;
loc_82D0B1F4:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// bne cr6,0x82d0b234
	if (!ctx.cr6.eq) goto loc_82D0B234;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d0b234
	if (ctx.cr6.lt) goto loc_82D0B234;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82D0B234:
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D0B23C"))) PPC_WEAK_FUNC(sub_82D0B23C);
PPC_FUNC_IMPL(__imp__sub_82D0B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B240"))) PPC_WEAK_FUNC(sub_82D0B240);
PPC_FUNC_IMPL(__imp__sub_82D0B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82d0b2a4
	if (ctx.cr6.eq) goto loc_82D0B2A4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,29200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0B280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82d0b290
	if (!ctx.cr0.eq) goto loc_82D0B290;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82d0b2a0
	goto loc_82D0B2A0;
loc_82D0B290:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lfs f0,-16940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82D0B2A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D0B2A4:
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

__attribute__((alias("__imp__sub_82D0B2BC"))) PPC_WEAK_FUNC(sub_82D0B2BC);
PPC_FUNC_IMPL(__imp__sub_82D0B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B2C0"))) PPC_WEAK_FUNC(sub_82D0B2C0);
PPC_FUNC_IMPL(__imp__sub_82D0B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f0,-25384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,-25388(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25388);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// ble cr6,0x82d0b33c
	if (!ctx.cr6.gt) goto loc_82D0B33C;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f12,-25392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25392);
	ctx.f12.f64 = double(temp.f32);
loc_82D0B2FC:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// blt cr6,0x82d0b318
	if (ctx.cr6.lt) goto loc_82D0B318;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82D0B318:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82d0b32c
	if (!ctx.cr0.eq) goto loc_82D0B32C;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82D0B32C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82d0b2fc
	if (ctx.cr6.lt) goto loc_82D0B2FC;
loc_82D0B33C:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82D0B34C:
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushMode();
	ctx.v63.f32[0] = exp2f(ctx.v63.f32[0]);
	ctx.v63.f32[1] = exp2f(ctx.v63.f32[1]);
	ctx.v63.f32[2] = exp2f(ctx.v63.f32[2]);
	ctx.v63.f32[3] = exp2f(ctx.v63.f32[3]);
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82d0b34c
	if (!ctx.cr0.eq) goto loc_82D0B34C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B368"))) PPC_WEAK_FUNC(sub_82D0B368);
PPC_FUNC_IMPL(__imp__sub_82D0B368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82D0B370;
	sub_82CA2BBC(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82ca74fc
	ctx.lr = 0x82D0B378;
	sub_82CA74FC(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lfs f0,3212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// fmuls f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fdivs f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82d0b3f8
	if (ctx.cr6.lt) goto loc_82D0B3F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82D0B3F8:
	// cmpwi cr6,r31,100
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 100, ctx.xer);
	// ble cr6,0x82d0b404
	if (!ctx.cr6.gt) goto loc_82D0B404;
	// li r31,100
	ctx.r31.s64 = 100;
loc_82D0B404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0b428
	if (!ctx.cr6.lt) goto loc_82D0B428;
	// li r11,100
	ctx.r11.s64 = 100;
	// twllei r31,0
	// divw r27,r11,r31
	ctx.r27.s32 = ctx.r11.s32 / ctx.r31.s32;
	// b 0x82d0b42c
	goto loc_82D0B42C;
loc_82D0B428:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D0B42C:
	// fmuls f13,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// mullw r21,r27,r31
	ctx.r21.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f0,804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r11,-25444
	ctx.r22.s64 = ctx.r11.s64 + -25444;
	// addi r11,r22,28
	ctx.r11.s64 = ctx.r22.s64 + 28;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r20,r29,r27
	ctx.r20.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// fdivs f27,f31,f0
	ctx.f27.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82D0B478:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82d0b49c
	if (ctx.cr6.gt) goto loc_82D0B49C;
	// addi r10,r22,28
	ctx.r10.s64 = ctx.r22.s64 + 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d0b478
	if (ctx.cr6.lt) goto loc_82D0B478;
loc_82D0B49C:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82d09530
	ctx.lr = 0x82D0B4A4;
	sub_82D09530(ctx, base);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lwz r30,388(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,396(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lfsx f0,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmadds f13,f1,f30,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f0.f64));
	// lfs f0,-25396(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25396);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82d0d018
	ctx.lr = 0x82D0B4F4;
	sub_82D0D018(ctx, base);
	// lfs f13,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-25380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82d0b53c
	if (!ctx.cr6.gt) goto loc_82D0B53C;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82d0b54c
	goto loc_82D0B54C;
loc_82D0B53C:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82D0B54C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,26868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26868);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// bl 0x82d0b2c0
	ctx.lr = 0x82D0B588;
	sub_82D0B2C0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r21,-1
	ctx.r10.s64 = ctx.r21.s64 + -1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82d0b5fc
	if (ctx.cr6.lt) goto loc_82D0B5FC;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r3,r30,r25
	ctx.r3.s64 = ctx.r25.s64 - ctx.r30.s64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
loc_82D0B5BC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82d0b5f0
	if (!ctx.cr6.gt) goto loc_82D0B5F0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
loc_82D0B5D4:
	// lfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfsx f0,r3,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bne 0x82d0b5d4
	if (!ctx.cr0.eq) goto loc_82D0B5D4;
loc_82D0B5F0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bne 0x82d0b5bc
	if (!ctx.cr0.eq) goto loc_82D0B5BC;
loc_82D0B5FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d0b660
	if (ctx.cr6.lt) goto loc_82D0B660;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r30,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_82D0B610:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// stfsx f0,r9,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// ble cr6,0x82d0b654
	if (!ctx.cr6.gt) goto loc_82D0B654;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82D0B640:
	// stfsx f10,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bne 0x82d0b640
	if (!ctx.cr0.eq) goto loc_82D0B640;
loc_82D0B654:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82d0b610
	if (!ctx.cr0.lt) goto loc_82D0B610;
loc_82D0B660:
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82d0b6e4
	if (!ctx.cr6.lt) goto loc_82D0B6E4;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,428(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r20,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r20.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D0B67C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// mulli r6,r9,16807
	ctx.r6.s64 = ctx.r9.s64 * 16807;
	// mulli r7,r7,16807
	ctx.r7.s64 = ctx.r7.s64 * 16807;
	// rlwinm r9,r6,16,1,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0x7FFF0000;
	// rlwinm r6,r6,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0b67c
	if (!ctx.cr0.eq) goto loc_82D0B67C;
loc_82D0B6E4:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82d0b748
	if (!ctx.cr6.gt) goto loc_82D0B748;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82D0B704:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0b704
	if (!ctx.cr0.eq) goto loc_82D0B704;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82d0b72c
	if (!ctx.cr6.gt) goto loc_82D0B72C;
	// fdivs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
loc_82D0B72C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82d0b748
	if (!ctx.cr6.gt) goto loc_82D0B748;
loc_82D0B734:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82d0b734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D0B734;
loc_82D0B748:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82d053c8
	ctx.lr = 0x82D0B774;
	sub_82D053C8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82ca7548
	ctx.lr = 0x82D0B780;
	sub_82CA7548(ctx, base);
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82D0B784"))) PPC_WEAK_FUNC(sub_82D0B784);
PPC_FUNC_IMPL(__imp__sub_82D0B784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B788"))) PPC_WEAK_FUNC(sub_82D0B788);
PPC_FUNC_IMPL(__imp__sub_82D0B788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D0B790;
	sub_82CA2BE0(ctx, base);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,3212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r30,-60(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r27,-60(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// srawi r29,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 1;
	// addi r11,r29,16384
	ctx.r11.s64 = ctx.r29.s64 + 16384;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// srawi r31,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 15;
	// blt cr6,0x82d0b944
	if (ctx.cr6.lt) goto loc_82D0B944;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r28,r11,-23888
	ctx.r28.s64 = ctx.r11.s64 + -23888;
	// lfs f9,-22992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22992);
	ctx.f9.f64 = double(temp.f32);
loc_82D0B814:
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r9,r8,-15872
	ctx.r9.s64 = ctx.r8.s64 + -15872;
	// srawi r31,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 15;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfsx f12,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfsx f11,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r10,-112
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -112, ctx.xer);
	// bgt cr6,0x82d0b898
	if (ctx.cr6.gt) goto loc_82D0B898;
	// subfic r6,r10,-112
	ctx.xer.ca = ctx.r10.u32 <= 4294967184;
	ctx.r6.s64 = -112 - ctx.r10.s64;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r3,r6,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_82D0B874:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f13,f8,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bne 0x82d0b874
	if (!ctx.cr0.eq) goto loc_82D0B874;
loc_82D0B898:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,112
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 112, ctx.xer);
	// bge cr6,0x82d0b900
	if (!ctx.cr6.lt) goto loc_82D0B900;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,448
	ctx.r10.s64 = ctx.r28.s64 + 448;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_82D0B8B0:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d0b934
	if (!ctx.cr6.lt) goto loc_82D0B934;
	// lfs f8,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r28,896
	ctx.r6.s64 = ctx.r28.s64 + 896;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fnmsubs f8,f7,f12,f8
	ctx.f8.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f7,f7,f11,f5
	ctx.f7.f64 = double(float(-(ctx.f7.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// fmadds f6,f5,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmuls f8,f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fmadds f8,f7,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// blt cr6,0x82d0b8b0
	if (ctx.cr6.lt) goto loc_82D0B8B0;
loc_82D0B900:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d0b934
	if (!ctx.cr6.lt) goto loc_82D0B934;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82D0B90C:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// bne 0x82d0b90c
	if (!ctx.cr0.eq) goto loc_82D0B90C;
loc_82D0B934:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// bne 0x82d0b814
	if (!ctx.cr0.eq) goto loc_82D0B814;
loc_82D0B944:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D0B96C"))) PPC_WEAK_FUNC(sub_82D0B96C);
PPC_FUNC_IMPL(__imp__sub_82D0B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B970"))) PPC_WEAK_FUNC(sub_82D0B970);
PPC_FUNC_IMPL(__imp__sub_82D0B970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,-22988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82d0b9a8
	if (!ctx.cr6.gt) goto loc_82D0B9A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D0B9A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B9B0"))) PPC_WEAK_FUNC(sub_82D0B9B0);
PPC_FUNC_IMPL(__imp__sub_82D0B9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D0B9B8;
	sub_82CA2BE0(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca7508
	ctx.lr = 0x82D0B9C0;
	sub_82CA7508(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f31,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,-22972(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22972);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f28,-22976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22976);
	ctx.f28.f64 = double(temp.f32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f29,-22980(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22980);
	ctx.f29.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,73
	ctx.r11.s64 = 73;
	// addi r29,r10,-31616
	ctx.r29.s64 = ctx.r10.s64 + -31616;
loc_82D0BA04:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d09070
	ctx.lr = 0x82D0BA18;
	sub_82D09070(ctx, base);
	// fmuls f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d0babc
	if (ctx.cr6.lt) goto loc_82D0BABC;
	// fmuls f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d0ba40
	if (ctx.cr6.lt) goto loc_82D0BA40;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82D0BA40:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82d0babc
	if (ctx.cr6.lt) goto loc_82D0BABC;
	// b 0x82d0ba78
	goto loc_82D0BA78;
loc_82D0BA6C:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_82D0BA78:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d0ba6c
	if (ctx.cr6.gt) goto loc_82D0BA6C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d0babc
	if (ctx.cr6.lt) goto loc_82D0BABC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82D0BA90:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0baac
	if (!ctx.cr6.lt) goto loc_82D0BAAC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82d0ba90
	if (!ctx.cr0.lt) goto loc_82D0BA90;
loc_82D0BAAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d0babc
	if (ctx.cr6.lt) goto loc_82D0BABC;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82d0ba04
	if (ctx.cr6.lt) goto loc_82D0BA04;
loc_82D0BABC:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca7554
	ctx.lr = 0x82D0BAD0;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D0BAD4"))) PPC_WEAK_FUNC(sub_82D0BAD4);
PPC_FUNC_IMPL(__imp__sub_82D0BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BAD8"))) PPC_WEAK_FUNC(sub_82D0BAD8);
PPC_FUNC_IMPL(__imp__sub_82D0BAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D0BAE0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,-31616
	ctx.r9.s64 = ctx.r11.s64 + -31616;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f0,2740(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2740);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82d0bc08
	if (ctx.cr6.gt) goto loc_82D0BC08;
	// lfsx f11,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2704(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82D0BB48:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d0bb48
	if (ctx.cr6.lt) goto loc_82D0BB48;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d0bb80
	if (!ctx.cr6.lt) goto loc_82D0BB80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d0bb80
	if (!ctx.cr6.lt) goto loc_82D0BB80;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D0BB80:
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,-16948(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82D0BB90:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d0bb90
	if (ctx.cr6.lt) goto loc_82D0BB90;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d0bbc8
	if (!ctx.cr6.lt) goto loc_82D0BBC8;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82d0bbc8
	if (!ctx.cr6.lt) goto loc_82D0BBC8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D0BBC8:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82d0bc08
	if (!ctx.cr6.eq) goto loc_82D0BC08;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82d0bbf8
	if (!ctx.cr6.eq) goto loc_82D0BBF8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfic r4,r31,74
	ctx.xer.ca = ctx.r31.u32 <= 74;
	ctx.r4.s64 = 74 - ctx.r31.s64;
	// bl 0x82d09070
	ctx.lr = 0x82D0BBE8;
	sub_82D09070(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d0bc08
	goto loc_82D0BC08;
loc_82D0BBF8:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82d0bc08
	if (!ctx.cr6.eq) goto loc_82D0BC08;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82D0BC08:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82D0BC18"))) PPC_WEAK_FUNC(sub_82D0BC18);
PPC_FUNC_IMPL(__imp__sub_82D0BC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82D0BC20;
	sub_82CA2BB4(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82ca7500
	ctx.lr = 0x82D0BC28;
	sub_82CA7500(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82d08fe0
	ctx.lr = 0x82D0BC58;
	sub_82D08FE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,3496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r11,-31616
	ctx.r19.s64 = ctx.r11.s64 + -31616;
	// fdivs f26,f0,f13
	ctx.f26.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82D0BC7C:
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// lfsx f1,r31,r19
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82d0d180
	ctx.lr = 0x82D0BC98;
	sub_82D0D180(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r31,296
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 296, ctx.xer);
	// blt cr6,0x82d0bc7c
	if (ctx.cr6.lt) goto loc_82D0BC7C;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// li r10,37
	ctx.r10.s64 = 37;
loc_82D0BCB4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82d0bcb4
	if (!ctx.cr0.eq) goto loc_82D0BCB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,-22984(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22984);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82d0bd08
	if (!ctx.cr6.lt) goto loc_82D0BD08;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_82D0BCF4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d0bcf4
	if (ctx.cr6.lt) goto loc_82D0BCF4;
loc_82D0BD08:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82D0BD18:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0bd30
	if (!ctx.cr6.lt) goto loc_82D0BD30;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82D0BD30:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,296
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 296, ctx.xer);
	// bge cr6,0x82d0bd4c
	if (!ctx.cr6.lt) goto loc_82D0BD4C;
	// lfsx f13,r10,r19
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82d0bd18
	if (!ctx.cr6.gt) goto loc_82D0BD18;
loc_82D0BD4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// lfs f28,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f28.f64 = double(temp.f32);
	// ble cr6,0x82d0bd64
	if (!ctx.cr6.gt) goto loc_82D0BD64;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
loc_82D0BD64:
	// rlwinm r30,r21,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfsx f31,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f31.f64 = double(temp.f32);
	// stfsx f0,r30,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// bl 0x82d0b9b0
	ctx.lr = 0x82D0BD84;
	sub_82D0B9B0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d0bad8
	ctx.lr = 0x82D0BD9C;
	sub_82D0BAD8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// ble cr6,0x82d0bde8
	if (!ctx.cr6.gt) goto loc_82D0BDE8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_82D0BDC0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r21,r8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82d0bdd4
	if (!ctx.cr6.eq) goto loc_82D0BDD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpw cr6,r21,r8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r8.s32, ctx.xer);
loc_82D0BDD4:
	// bgt cr6,0x82d0bde8
	if (ctx.cr6.gt) goto loc_82D0BDE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d0bdc0
	if (ctx.cr6.lt) goto loc_82D0BDC0;
loc_82D0BDE8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82d0bea0
	if (!ctx.cr6.eq) goto loc_82D0BEA0;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-22976(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -22976);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bne cr6,0x82d0be44
	if (!ctx.cr6.eq) goto loc_82D0BE44;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,432(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 432);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82d0be54
	if (!ctx.cr6.lt) goto loc_82D0BE54;
loc_82D0BE44:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d0bea0
	if (!ctx.cr6.gt) goto loc_82D0BEA0;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d0bea0
	if (ctx.cr6.lt) goto loc_82D0BEA0;
loc_82D0BE54:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82d0be84
	if (!ctx.cr6.gt) goto loc_82D0BE84;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_82D0BE6C:
	// lwz r6,-4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bne 0x82d0be6c
	if (!ctx.cr0.eq) goto loc_82D0BE6C;
loc_82D0BE84:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r21,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r21.u32);
	// blt cr6,0x82d0be9c
	if (ctx.cr6.lt) goto loc_82D0BE9C;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_82D0BE9C:
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_82D0BEA0:
	// stfsx f31,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r22,r23,-1
	ctx.r22.s64 = ctx.r23.s64 + -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82d0bfd0
	if (!ctx.cr6.gt) goto loc_82D0BFD0;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// subf r24,r26,r29
	ctx.r24.s64 = ctx.r29.s64 - ctx.r26.s64;
loc_82D0BEC0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82d0bed8
	if (ctx.cr6.eq) goto loc_82D0BED8;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82d0bed8
	if (ctx.cr6.eq) goto loc_82D0BED8;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82d0bfc0
	if (!ctx.cr6.eq) goto loc_82D0BFC0;
loc_82D0BED8:
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82d0bee8
	if (!ctx.cr6.eq) goto loc_82D0BEE8;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82D0BEE8:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lfsx f31,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f29,r10,r19
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82d0bf20
	if (!ctx.cr6.gt) goto loc_82D0BF20;
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82D0BF20:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r10,74
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 74, ctx.xer);
	// bge cr6,0x82d0bf4c
	if (!ctx.cr6.lt) goto loc_82D0BF4C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r10,r19
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
loc_82D0BF4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d0bf98
	if (!ctx.cr6.gt) goto loc_82D0BF98;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82D0BF5C:
	// lfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82d0d180
	ctx.lr = 0x82D0BF7C;
	sub_82D0D180(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82d0bf8c
	if (!ctx.cr6.gt) goto loc_82D0BF8C;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_82D0BF8C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82d0bf5c
	if (!ctx.cr0.eq) goto loc_82D0BF5C;
loc_82D0BF98:
	// stfsx f29,r24,r26
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r26.u32, temp.u32);
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82d0bfb4
	if (!ctx.cr6.eq) goto loc_82D0BFB4;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// ble cr6,0x82d0bfb4
	if (!ctx.cr6.gt) goto loc_82D0BFB4;
	// fadds f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
loc_82D0BFB4:
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82D0BFC0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82d0bec0
	if (ctx.cr6.lt) goto loc_82D0BEC0;
loc_82D0BFD0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82ca754c
	ctx.lr = 0x82D0BFE0;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_82D0BFE4"))) PPC_WEAK_FUNC(sub_82D0BFE4);
PPC_FUNC_IMPL(__imp__sub_82D0BFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BFE8"))) PPC_WEAK_FUNC(sub_82D0BFE8);
PPC_FUNC_IMPL(__imp__sub_82D0BFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82d0c040
	if (!ctx.cr6.eq) goto loc_82D0C040;
	// addi r6,r7,-22968
	ctx.r6.s64 = ctx.r7.s64 + -22968;
	// b 0x82d0c048
	goto loc_82D0C048;
loc_82D0C040:
	// addi r7,r7,-22968
	ctx.r7.s64 = ctx.r7.s64 + -22968;
	// addi r6,r7,1016
	ctx.r6.s64 = ctx.r7.s64 + 1016;
loc_82D0C048:
	// srawi r7,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82d0c0f4
	if (!ctx.cr6.gt) goto loc_82D0C0F4;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// lfs f0,3056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
loc_82D0C068:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f12,f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 - ctx.f7.f64));
	// fmadds f11,f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fneg f13,f9
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x82d0c068
	if (!ctx.cr0.eq) goto loc_82D0C068;
loc_82D0C0F4:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C108"))) PPC_WEAK_FUNC(sub_82D0C108);
PPC_FUNC_IMPL(__imp__sub_82D0C108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bne cr6,0x82d0c16c
	if (!ctx.cr6.eq) goto loc_82D0C16C;
	// addi r6,r7,-22968
	ctx.r6.s64 = ctx.r7.s64 + -22968;
	// b 0x82d0c174
	goto loc_82D0C174;
loc_82D0C16C:
	// addi r7,r7,-22968
	ctx.r7.s64 = ctx.r7.s64 + -22968;
	// addi r6,r7,1016
	ctx.r6.s64 = ctx.r7.s64 + 1016;
loc_82D0C174:
	// srawi r7,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 1;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lfs f0,3140(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f13,r31,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// ble cr6,0x82d0c224
	if (!ctx.cr6.gt) goto loc_82D0C224;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82D0C1A8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f10,f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmsubs f13,f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne 0x82d0c1a8
	if (!ctx.cr0.eq) goto loc_82D0C1A8;
loc_82D0C224:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C22C"))) PPC_WEAK_FUNC(sub_82D0C22C);
PPC_FUNC_IMPL(__imp__sub_82D0C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C230"))) PPC_WEAK_FUNC(sub_82D0C230);
PPC_FUNC_IMPL(__imp__sub_82D0C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82D0C238;
	sub_82CA2BC8(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-21704
	ctx.r11.s64 = ctx.r11.s64 + -21704;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// addi r31,r11,1536
	ctx.r31.s64 = ctx.r11.s64 + 1536;
	// beq cr6,0x82d0c258
	if (ctx.cr6.eq) goto loc_82D0C258;
	// addi r31,r11,1920
	ctx.r31.s64 = ctx.r11.s64 + 1920;
loc_82D0C258:
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// mulli r20,r11,96
	ctx.r20.s64 = ctx.r11.s64 * 96;
loc_82D0C260:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r27,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 2;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r28,r10,-16
	ctx.r28.s64 = ctx.r10.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x82d0c3d0
	if (!ctx.cr6.gt) goto loc_82D0C3D0;
	// addi r21,r27,-4
	ctx.r21.s64 = ctx.r27.s64 + -4;
	// mulli r24,r27,12
	ctx.r24.s64 = ctx.r27.s64 * 12;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
loc_82D0C294:
	// subf r31,r20,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r20.s64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82d0c3c0
	if (ctx.cr6.lt) goto loc_82D0C3C0;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// rlwinm r26,r27,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r11,30,2,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_82D0C2B0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r6,r24,r10
	ctx.r6.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r7,r26,r10
	ctx.r7.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// subf r11,r10,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82D0C2C8:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfsx f7,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfsx f5,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f6,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fsubs f31,f10,f8
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fadds f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f8,f31,f5
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f5.f64));
	// fmuls f7,f31,f4
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f6,f10,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmsubs f8,f12,f4,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 - ctx.f8.f64));
	// stfsx f8,r11,r8
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fmadds f12,f12,f5,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmsubs f12,f9,f11,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfsx f12,r11,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmadds f12,f9,f3,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmsubs f12,f13,f2,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 - ctx.f31.f64));
	// stfsx f12,r11,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82d0c2c8
	if (!ctx.cr0.eq) goto loc_82D0C2C8;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bne 0x82d0c2b0
	if (!ctx.cr0.eq) goto loc_82D0C2B0;
loc_82D0C3C0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subf r28,r24,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r24.s64;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// bne 0x82d0c294
	if (!ctx.cr0.eq) goto loc_82D0C294;
loc_82D0C3D0:
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// mulli r20,r11,96
	ctx.r20.s64 = ctx.r11.s64 * 96;
	// add r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 + ctx.r31.u64;
	// bgt cr6,0x82d0c260
	if (ctx.cr6.gt) goto loc_82D0C260;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x82d0c4a8
	if (!ctx.cr6.gt) goto loc_82D0C4A8;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82D0C418:
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfsx f11,r8,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fsubs f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne 0x82d0c418
	if (!ctx.cr0.eq) goto loc_82D0C418;
loc_82D0C4A8:
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// srawi r9,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82d0c518
	if (!ctx.cr6.gt) goto loc_82D0C518;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82D0C4C8:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82d0c4f4
	if (!ctx.cr6.gt) goto loc_82D0C4F4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// stfsx f13,r10,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
loc_82D0C4F4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82D0C4F8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// xor r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d0c4f8
	if (ctx.cr6.lt) goto loc_82D0C4F8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82d0c4c8
	if (ctx.cr6.lt) goto loc_82D0C4C8;
loc_82D0C518:
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82D0C520"))) PPC_WEAK_FUNC(sub_82D0C520);
PPC_FUNC_IMPL(__imp__sub_82D0C520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D0C528;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7504
	ctx.lr = 0x82D0C530;
	sub_82CA7504(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lfs f27,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f27.f64 = double(temp.f32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d0c59c
	if (!ctx.cr6.gt) goto loc_82D0C59C;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lfs f13,-16936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16936);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lfs f0,-19684(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19684);
	ctx.f0.f64 = double(temp.f32);
loc_82D0C57C:
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0c57c
	if (!ctx.cr0.eq) goto loc_82D0C57C;
loc_82D0C59C:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d08ab8
	ctx.lr = 0x82D0C5A8;
	sub_82D08AB8(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ble cr6,0x82d0c638
	if (!ctx.cr6.gt) goto loc_82D0C638;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
loc_82D0C5D4:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0c5f0
	if (!ctx.cr6.lt) goto loc_82D0C5F0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0C5F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d0c5d4
	if (ctx.cr6.lt) goto loc_82D0C5D4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82d0c638
	if (ctx.cr6.lt) goto loc_82D0C638;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bge cr6,0x82d0c64c
	if (!ctx.cr6.lt) goto loc_82D0C64C;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// b 0x82d0c64c
	goto loc_82D0C64C;
loc_82D0C638:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82D0C64C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f29,3116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3116);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82d0c678
	if (!ctx.cr6.gt) goto loc_82D0C678;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D0C664:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0c664
	if (!ctx.cr0.eq) goto loc_82D0C664;
loc_82D0C678:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,3196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,-19688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19688);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,-16944(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16944);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f13,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f2,f28,f0
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, ctx.f30.f64);
	// bge cr6,0x82d0c6b4
	if (!ctx.cr6.lt) goto loc_82D0C6B4;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
loc_82D0C6B4:
	// fadds f3,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,27924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27924);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, ctx.f28.f64);
	// ble cr6,0x82d0c6cc
	if (!ctx.cr6.gt) goto loc_82D0C6CC;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
loc_82D0C6CC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// bl 0x82d0d2d8
	ctx.lr = 0x82D0C6EC;
	sub_82D0D2D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, ctx.f30.f64);
	// bge cr6,0x82d0c718
	if (!ctx.cr6.lt) goto loc_82D0C718;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
loc_82D0C718:
	// fadds f3,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, ctx.f28.f64);
	// ble cr6,0x82d0c728
	if (!ctx.cr6.gt) goto loc_82D0C728;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
loc_82D0C728:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// bl 0x82d0d2d8
	ctx.lr = 0x82D0C748;
	sub_82D0D2D8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f29,0(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fdivs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7550
	ctx.lr = 0x82D0C774;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D0C778"))) PPC_WEAK_FUNC(sub_82D0C778);
PPC_FUNC_IMPL(__imp__sub_82D0C778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,1020
	ctx.r11.s64 = ctx.r4.s64 + 1020;
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r9,r9,41600
	ctx.r9.u64 = ctx.r9.u64 | 41600;
loc_82D0C788:
	// addi r9,r9,-162
	ctx.r9.s64 = ctx.r9.s64 + -162;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r8,r8,65
	ctx.r8.s64 = ctx.r8.s64 + 65;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r8,r8,209
	ctx.r8.s64 = ctx.r8.s64 + 209;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// addi r8,r8,29
	ctx.r8.s64 = ctx.r8.s64 + 29;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bgt cr6,0x82d0c788
	if (ctx.cr6.gt) goto loc_82D0C788;
	// li r10,17789
	ctx.r10.s64 = 17789;
	// li r9,87
	ctx.r9.s64 = 87;
loc_82D0C7C8:
	// addi r10,r10,-203
	ctx.r10.s64 = ctx.r10.s64 + -203;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x82d0c7c8
	if (!ctx.cr0.eq) goto loc_82D0C7C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C7E8"))) PPC_WEAK_FUNC(sub_82D0C7E8);
PPC_FUNC_IMPL(__imp__sub_82D0C7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh. r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82d0c800
	if (ctx.cr0.gt) goto loc_82D0C800;
	// li r4,176
	ctx.r4.s64 = 176;
loc_82D0C800:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,2908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2676);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d0c83c
	if (ctx.cr6.gt) goto loc_82D0C83C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82d0c860
	if (!ctx.cr6.lt) goto loc_82D0C860;
loc_82D0C83C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82d0c84c
	if (!ctx.cr6.lt) goto loc_82D0C84C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82d0c850
	goto loc_82D0C850;
loc_82D0C84C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82D0C850:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82d0c868
	if (!ctx.cr6.eq) goto loc_82D0C868;
loc_82D0C860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d0c918
	goto loc_82D0C918;
loc_82D0C868:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f1,3384(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3384);
	// bge cr6,0x82d0c8cc
	if (!ctx.cr6.lt) goto loc_82D0C8CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-19668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19668);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821fe378
	ctx.lr = 0x82D0C888;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-19672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19672);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0c8a4
	if (!ctx.cr6.lt) goto loc_82D0C8A4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0C8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,3108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// b 0x82d0c918
	goto loc_82D0C918;
loc_82D0C8CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-19676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19676);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821fe378
	ctx.lr = 0x82D0C8DC;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-19680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19680);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0c8f4
	if (!ctx.cr6.gt) goto loc_82D0C8F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0C8F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
loc_82D0C918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C928"))) PPC_WEAK_FUNC(sub_82D0C928);
PPC_FUNC_IMPL(__imp__sub_82D0C928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm. r9,r3,29,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,-19664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19664);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x82d0c98c
	if (!ctx.cr0.gt) goto loc_82D0C98C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82D0C968:
	// lfsx f11,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsx f11,r10,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82d0c968
	if (!ctx.cr0.eq) goto loc_82D0C968;
loc_82D0C98C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x82d0c9c4
	if (ctx.cr6.gt) goto loc_82D0C9C4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D0C9A0:
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsx f11,r11,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfsx f11,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// ble cr6,0x82d0c9a0
	if (!ctx.cr6.gt) goto loc_82D0C9A0;
loc_82D0C9C4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fdivs f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_82D0C9DC:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ble cr6,0x82d0c9dc
	if (!ctx.cr6.gt) goto loc_82D0C9DC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// lfs f0,-16944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CA34"))) PPC_WEAK_FUNC(sub_82D0CA34);
PPC_FUNC_IMPL(__imp__sub_82D0CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CA38"))) PPC_WEAK_FUNC(sub_82D0CA38);
PPC_FUNC_IMPL(__imp__sub_82D0CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi cr6,r11,84
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 84, ctx.xer);
	// bgt cr6,0x82d0ca78
	if (ctx.cr6.gt) goto loc_82D0CA78;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-19660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19660);
	ctx.f0.f64 = double(temp.f32);
loc_82D0CA50:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// ble cr6,0x82d0ca50
	if (!ctx.cr6.gt) goto loc_82D0CA50;
	// b 0x82d0ca80
	goto loc_82D0CA80;
loc_82D0CA78:
	// li r11,84
	ctx.r11.s64 = 84;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
loc_82D0CA80:
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CA90"))) PPC_WEAK_FUNC(sub_82D0CA90);
PPC_FUNC_IMPL(__imp__sub_82D0CA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-19632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0cac4
	if (!ctx.cr6.gt) goto loc_82D0CAC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,-19636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19636);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19640);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// lfs f13,-19644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19644);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d0cae0
	goto loc_82D0CAE0;
loc_82D0CAC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,-19648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19648);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19652);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// lfs f13,-19656(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19656);
	ctx.f13.f64 = double(temp.f32);
loc_82D0CAE0:
	// fmadds f0,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82d0caf8
	if (ctx.cr6.gt) goto loc_82D0CAF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0CAF8:
	// stb r11,19(r4)
	PPC_STORE_U8(ctx.r4.u32 + 19, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CB00"))) PPC_WEAK_FUNC(sub_82D0CB00);
PPC_FUNC_IMPL(__imp__sub_82D0CB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,19(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d0cb74
	if (ctx.cr6.eq) goto loc_82D0CB74;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-19624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-19628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d0cb44
	if (!ctx.cr6.lt) goto loc_82D0CB44;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0CB44:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82d0cb74
	if (ctx.cr6.lt) goto loc_82D0CB74;
	// lhz r11,14(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,14(r6)
	PPC_STORE_U16(ctx.r6.u32 + 14, ctx.r11.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82d0cb6c
	if (!ctx.cr6.gt) goto loc_82D0CB6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d0cb78
	goto loc_82D0CB78;
loc_82D0CB6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d0cb7c
	goto loc_82D0CB7C;
loc_82D0CB74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0CB78:
	// sth r11,14(r6)
	PPC_STORE_U16(ctx.r6.u32 + 14, ctx.r11.u16);
loc_82D0CB7C:
	// stb r11,20(r6)
	PPC_STORE_U8(ctx.r6.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CB84"))) PPC_WEAK_FUNC(sub_82D0CB84);
PPC_FUNC_IMPL(__imp__sub_82D0CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CB88"))) PPC_WEAK_FUNC(sub_82D0CB88);
PPC_FUNC_IMPL(__imp__sub_82D0CB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19632);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d0cbc4
	if (!ctx.cr6.lt) goto loc_82D0CBC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-19596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19596);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-19600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19600);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82d0cbec
	if (!ctx.cr6.lt) goto loc_82D0CBEC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82d0cbec
	goto loc_82D0CBEC;
loc_82D0CBC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19604);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d0cbe0
	if (!ctx.cr6.lt) goto loc_82D0CBE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19608);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82d0cbe8
	goto loc_82D0CBE8;
loc_82D0CBE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19612);
	ctx.f0.f64 = double(temp.f32);
loc_82D0CBE8:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82D0CBEC:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82d0cce4
	if (!ctx.cr6.lt) goto loc_82D0CCE4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f9,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f9.f64 = double(temp.f32);
	// bgt 0x82d0cc30
	if (ctx.cr0.gt) goto loc_82D0CC30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,3052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f10,2920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2920);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f12,f10,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82d0cc30
	if (ctx.cr6.gt) goto loc_82D0CC30;
	// fmadds f0,f12,f10,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
loc_82D0CC30:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,-16936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x82d0cc9c
	if (ctx.cr6.gt) goto loc_82D0CC9C;
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bge cr6,0x82d0cc78
	if (!ctx.cr6.lt) goto loc_82D0CC78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,-19616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19616);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f11,-31004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31004);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82d0cd14
	if (ctx.cr6.gt) goto loc_82D0CD14;
	// fmadds f0,f12,f11,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// b 0x82d0cd14
	goto loc_82D0CD14;
loc_82D0CC78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2676);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f13,2824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2824);
	ctx.f13.f64 = double(temp.f32);
loc_82D0CC8C:
	// fmadds f13,f1,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_82D0CC90:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d0cd14
	if (ctx.cr6.gt) goto loc_82D0CD14;
	// b 0x82d0cd10
	goto loc_82D0CD10;
loc_82D0CC9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,26348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x82d0ccc8
	if (ctx.cr6.gt) goto loc_82D0CCC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f13,2912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2912);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d0cc8c
	goto loc_82D0CC8C;
loc_82D0CCC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f12,2704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2704);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// b 0x82d0cc90
	goto loc_82D0CC90;
loc_82D0CCE4:
	// lbz r11,19(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d0cd14
	if (!ctx.cr6.eq) goto loc_82D0CD14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f12,3196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3196);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d0cd14
	if (ctx.cr6.lt) goto loc_82D0CD14;
loc_82D0CD10:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0CD14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-19620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19620);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d0cd28
	if (!ctx.cr6.gt) goto loc_82D0CD28;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D0CD28:
	// lbz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82d0cd3c
	if (ctx.cr0.gt) goto loc_82D0CD3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r11.u8);
loc_82D0CD3C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CD44"))) PPC_WEAK_FUNC(sub_82D0CD44);
PPC_FUNC_IMPL(__imp__sub_82D0CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CD48"))) PPC_WEAK_FUNC(sub_82D0CD48);
PPC_FUNC_IMPL(__imp__sub_82D0CD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82d0cd58
	if (ctx.cr6.lt) goto loc_82D0CD58;
	// li r4,255
	ctx.r4.s64 = 255;
loc_82D0CD58:
	// lbz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d0cda0
	if (!ctx.cr6.eq) goto loc_82D0CDA0;
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r10.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d0ce08
	if (!ctx.cr6.eq) goto loc_82D0CE08;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82d0ce08
	if (ctx.cr6.lt) goto loc_82D0CE08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r6)
	PPC_STORE_U8(ctx.r6.u32 + 21, ctx.r11.u8);
	// b 0x82d0ce08
	goto loc_82D0CE08;
loc_82D0CDA0:
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lha r11,-10(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + -10));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d0ce08
	if (!ctx.cr6.gt) goto loc_82D0CE08;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,32700
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32700, ctx.xer);
	// stb r10,21(r6)
	PPC_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// ble cr6,0x82d0ce08
	if (!ctx.cr6.gt) goto loc_82D0CE08;
	// li r11,32700
	ctx.r11.s64 = 32700;
	// sth r11,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
loc_82D0CE08:
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CE14"))) PPC_WEAK_FUNC(sub_82D0CE14);
PPC_FUNC_IMPL(__imp__sub_82D0CE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CE18"))) PPC_WEAK_FUNC(sub_82D0CE18);
PPC_FUNC_IMPL(__imp__sub_82D0CE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d0ce50
	if (!ctx.cr6.eq) goto loc_82D0CE50;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d0ce50
	if (!ctx.cr6.eq) goto loc_82D0CE50;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d0ce50
	if (!ctx.cr6.eq) goto loc_82D0CE50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-31052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82D0CE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CE58"))) PPC_WEAK_FUNC(sub_82D0CE58);
PPC_FUNC_IMPL(__imp__sub_82D0CE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D0CE60;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7508
	ctx.lr = 0x82D0CE68;
	sub_82CA7508(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d09070
	ctx.lr = 0x82D0CE88;
	sub_82D09070(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r11,11
	ctx.r11.s64 = 11;
	// lfs f31,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_82D0CE9C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fnmsubs f0,f0,f0,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bne 0x82d0ce9c
	if (!ctx.cr0.eq) goto loc_82D0CE9C;
	// bl 0x82d09530
	ctx.lr = 0x82D0CEB8;
	sub_82D09530(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f29,f13,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f31.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// li r30,5
	ctx.r30.s64 = 5;
	// lfs f31,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f31.f64 = double(temp.f32);
	// lis r28,-31953
	ctx.r28.s64 = -2094071808;
	// lfs f0,3168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3168);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f30,f1,f31,f30
	ctx.f30.f64 = double(float(-(ctx.f1.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82D0CEE8:
	// lwz r11,25124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25124);
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// fmadds f1,f0,f28,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f29.f64));
	// bl 0x82d09530
	ctx.lr = 0x82D0CEFC;
	sub_82D09530(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d0cee8
	if (!ctx.cr0.eq) goto loc_82D0CEE8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-19592
	ctx.r8.s64 = ctx.r9.s64 + -19592;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// lfs f12,-19592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19592);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82D0CF2C:
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfsx f9,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f0,f8,f0,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d0cf7c
	if (!ctx.cr6.gt) goto loc_82D0CF7C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82D0CF7C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82d0cf88
	if (ctx.cr6.gt) goto loc_82D0CF88;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82D0CF88:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82d0cfac
	if (!ctx.cr6.lt) goto loc_82D0CFAC;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_82D0CFAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x82d0cf2c
	if (ctx.cr6.lt) goto loc_82D0CF2C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d09070
	ctx.lr = 0x82D0CFD8;
	sub_82D09070(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82D0CFEC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0cfec
	if (!ctx.cr0.eq) goto loc_82D0CFEC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7554
	ctx.lr = 0x82D0D010;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82D0D014"))) PPC_WEAK_FUNC(sub_82D0D014);
PPC_FUNC_IMPL(__imp__sub_82D0D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D018"))) PPC_WEAK_FUNC(sub_82D0D018);
PPC_FUNC_IMPL(__imp__sub_82D0D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D0D020;
	sub_82CA2BDC(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// lfs f13,2308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2308);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r8,2056
	ctx.r4.s64 = ctx.r8.s64 + 2056;
	// stfs f13,2312(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2312, temp.u32);
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// lfs f13,2568(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2568);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r8,2316
	ctx.r3.s64 = ctx.r8.s64 + 2316;
	// stfs f13,2572(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2572, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82d0d148
	if (!ctx.cr6.gt) goto loc_82D0D148;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// lfs f9,2680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-19572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -19572);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f10,-19568(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -19568);
	ctx.f10.f64 = double(temp.f32);
	// subf r26,r8,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f11,-19564(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -19564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-19560(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -19560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,19912(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 19912);
	ctx.f7.f64 = double(temp.f32);
loc_82D0D08C:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x82d0d0a0
	if (!ctx.cr6.gt) goto loc_82D0D0A0;
	// fnmsubs f13,f0,f12,f11
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// fmadds f13,f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// b 0x82d0d0a4
	goto loc_82D0D0A4;
loc_82D0D0A0:
	// fmuls f13,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
loc_82D0D0A4:
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fctiwz f6,f13
	ctx.f6.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f6,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f6.u64);
	// lwz r11,-92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r31.u64);
	// lfd f6,-88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsx f5,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f31,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f31,f31,f5
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fsubs f30,f30,f3
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f6,f31,f13,f5
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f5,f30,f13,f3
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fsubs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f6,f5,f4,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfsx f6,r26,r8
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, temp.u32);
	// lfsx f6,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f31,f31,f3
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// fsubs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f31,f13,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f13,f5,f13,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsubs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fmadds f13,f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82d0d08c
	if (!ctx.cr0.eq) goto loc_82D0D08C;
loc_82D0D148:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82d0d174
	if (!ctx.cr6.lt) goto loc_82D0D174;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82D0D15C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82d0d15c
	if (!ctx.cr0.eq) goto loc_82D0D15C;
loc_82D0D174:
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82D0D180"))) PPC_WEAK_FUNC(sub_82D0D180);
PPC_FUNC_IMPL(__imp__sub_82D0D180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D0D188;
	sub_82CA2BE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// li r31,16384
	ctx.r31.s64 = 16384;
	// lfs f0,26484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26484);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,3132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-22992(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -22992);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r8,-52(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// fctiwz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// divw r29,r3,r8
	ctx.r29.s32 = ctx.r3.s32 / ctx.r8.s32;
	// mullw r11,r10,r5
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// twllei r8,0
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bge cr6,0x82d0d208
	if (!ctx.cr6.lt) goto loc_82D0D208;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82D0D1F0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// blt cr6,0x82d0d1f0
	if (ctx.cr6.lt) goto loc_82D0D1F0;
loc_82D0D208:
	// addi r10,r29,2048
	ctx.r10.s64 = ctx.r29.s64 + 2048;
	// srawi r8,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 12;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82d0d2b8
	if (!ctx.cr6.lt) goto loc_82D0D2B8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-31953
	ctx.r30.s64 = -2094071808;
	// lfs f11,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,25124(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25124);
loc_82D0D22C:
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// stfs f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r31,r31,-32768
	ctx.r31.s64 = ctx.r31.s64 + -32768;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d0d294
	if (!ctx.cr6.lt) goto loc_82D0D294;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
loc_82D0D248:
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// lwz r28,-64(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lfsx f10,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f10,-56(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r11,-56(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82d0d27c
	if (!ctx.cr6.gt) goto loc_82D0D27C;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
loc_82D0D27C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mullw r11,r10,r5
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d0d248
	if (ctx.cr6.lt) goto loc_82D0D248;
loc_82D0D294:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// lfsx f9,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// fmadds f13,f9,f10,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// blt cr6,0x82d0d22c
	if (ctx.cr6.lt) goto loc_82D0D22C;
loc_82D0D2B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-19688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19688);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D0D2D8"))) PPC_WEAK_FUNC(sub_82D0D2D8);
PPC_FUNC_IMPL(__imp__sub_82D0D2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// fcmpu cr6,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bgt cr6,0x82d0d374
	if (ctx.cr6.gt) goto loc_82D0D374;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r3,-31953
	ctx.r3.s64 = -2094071808;
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2760);
	ctx.f13.f64 = double(temp.f32);
loc_82D0D2FC:
	// fmadds f11,f2,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwz r4,-28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// ble cr6,0x82d0d350
	if (!ctx.cr6.gt) goto loc_82D0D350;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82D0D324:
	// lwzx r31,r5,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,25124(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25124);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r31,r31,r4
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// addis r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 8388608;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r31,r31,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0x3FC;
	// lfsx f10,r31,r30
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// bne 0x82d0d324
	if (!ctx.cr0.eq) goto loc_82D0D324;
loc_82D0D350:
	// lfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d0d368
	if (!ctx.cr6.gt) goto loc_82D0D368;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82D0D368:
	// fadds f2,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// ble cr6,0x82d0d2fc
	if (!ctx.cr6.gt) goto loc_82D0D2FC;
loc_82D0D374:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0D380"))) PPC_WEAK_FUNC(sub_82D0D380);
PPC_FUNC_IMPL(__imp__sub_82D0D380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74d0
	ctx.lr = 0x82D0D390;
	sub_82CA74D0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f0,3344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3344);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f4,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// lfd f10,3560(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3560);
	// lfs f26,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	ctx.f26.f64 = double(temp.f32);
	// lfs f6,3204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3204);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f0,f26
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f9,f8,f26
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// ble cr6,0x82d0d8d4
	if (!ctx.cr6.gt) goto loc_82D0D8D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmuls f25,f13,f12
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// lfd f9,-19408(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19408);
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// lfd f9,3568(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3568);
	// lfs f5,-16948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16948);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,2680(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2680);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsqrts f27,f9
	ctx.f27.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmsubs f3,f10,f5,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 - ctx.f4.f64));
	// stfs f3,-180(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fsubs f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f30,f31,f11
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f29,f25,f31
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f31,f30,f13
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f30,f29,f26
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// stfs f30,16(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f6,f3,f28
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f6,f1,f28
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// ble cr6,0x82d0d8d4
	if (!ctx.cr6.gt) goto loc_82D0D8D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmsubs f31,f8,f5,f7
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 - ctx.f7.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f20,f0,f12
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// fnmsubs f30,f7,f5,f8
	ctx.f30.f64 = double(float(-(ctx.f7.f64 * ctx.f5.f64 - ctx.f8.f64)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfd f6,3552(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3552);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f22,-16940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16940);
	ctx.f22.f64 = double(temp.f32);
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// lfd f2,2352(r9)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r9.u32 + 2352);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f24,-19416(r8)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r8.u32 + -19416);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// lfd f23,-19424(r7)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + -19424);
	// lfd f21,-19528(r11)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19528);
	// lfs f1,19808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19808);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f19,f10,f22
	ctx.f19.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// fsqrts f29,f2
	ctx.f29.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsqrts f24,f24
	ctx.f24.f64 = double(float(sqrt(ctx.f24.f64)));
	// fsqrts f23,f23
	ctx.f23.f64 = double(float(sqrt(ctx.f23.f64)));
	// fsubs f18,f19,f4
	ctx.f18.f64 = double(float(ctx.f19.f64 - ctx.f4.f64));
	// fmuls f2,f29,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f24,f24,f6
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f6.f64));
	// fsubs f19,f19,f5
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f5.f64));
	// fsqrts f21,f21
	ctx.f21.f64 = double(float(sqrt(ctx.f21.f64)));
	// fmuls f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f20,f20,f18
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f18.f64));
	// fmuls f17,f31,f2
	ctx.f17.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// fmuls f16,f18,f24
	ctx.f16.f64 = double(float(ctx.f18.f64 * ctx.f24.f64));
	// fmuls f23,f3,f23
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f23.f64));
	// fmuls f15,f30,f2
	ctx.f15.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// fmuls f21,f21,f19
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f19.f64));
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f24,f20,f24
	ctx.f24.f64 = double(float(ctx.f20.f64 * ctx.f24.f64));
	// fmuls f19,f17,f0
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fmuls f18,f16,f0
	ctx.f18.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// fmuls f23,f23,f9
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// fmuls f17,f15,f0
	ctx.f17.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// fmuls f21,f21,f0
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f25,f25,f11
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// fmuls f24,f24,f1
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f1.f64));
	// stfs f24,52(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmuls f20,f19,f13
	ctx.f20.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// fmuls f19,f18,f13
	ctx.f19.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// fmuls f24,f23,f28
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// stfs f24,56(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fmuls f18,f17,f12
	ctx.f18.f64 = double(float(ctx.f17.f64 * ctx.f12.f64));
	// fmuls f24,f21,f11
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f11.f64));
	// fmuls f26,f25,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// stfs f26,40(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f23,f20,f1
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f1.f64));
	// stfs f23,36(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f26,f19,f1
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f1.f64));
	// stfs f26,44(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f1,f18,f1
	ctx.f1.f64 = double(float(ctx.f18.f64 * ctx.f1.f64));
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fmuls f1,f24,f28
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f28.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// ble cr6,0x82d0d8d4
	if (!ctx.cr6.gt) goto loc_82D0D8D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f26,f7,f8
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f1,f8,f8
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmuls f25,f31,f0
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f24,f30,f0
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f31,f10,f10
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f8,2728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f23,f10,f8
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f8,2740(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2740);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,-19388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19388);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f30,-192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmuls f21,f0,f12
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f30,2944(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2944);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f19,f29,f9
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// lfs f18,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f20,f6,f27
	ctx.f20.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fnmsubs f17,f26,f30,f1
	ctx.f17.f64 = double(float(-(ctx.f26.f64 * ctx.f30.f64 - ctx.f1.f64)));
	// lfs f30,-19688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19688);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f16,f25,f2
	ctx.f16.f64 = double(float(ctx.f25.f64 * ctx.f2.f64));
	// stfs f30,-192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmr f15,f30
	ctx.f15.f64 = ctx.f30.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmuls f14,f24,f2
	ctx.f14.f64 = double(float(ctx.f24.f64 * ctx.f2.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmsubs f30,f31,f18,f8
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f18.f64 - ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f18,f23,f5
	ctx.f18.f64 = double(float(ctx.f23.f64 - ctx.f5.f64));
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// fsubs f2,f23,f4
	ctx.f2.f64 = double(float(ctx.f23.f64 - ctx.f4.f64));
	// stfs f2,-192(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fadds f23,f17,f7
	ctx.f23.f64 = double(float(ctx.f17.f64 + ctx.f7.f64));
	// lfs f17,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f21,f17,f21
	ctx.f21.f64 = double(float(ctx.f17.f64 * ctx.f21.f64));
	// lfs f2,-25384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25384);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f17,f17,f9
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f9.f64));
	// lfs f8,19924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19924);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f16,f16,f11
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f11.f64));
	// fmuls f14,f14,f11
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f11.f64));
	// fmuls f19,f19,f0
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// fmuls f20,f18,f20
	ctx.f20.f64 = double(float(ctx.f18.f64 * ctx.f20.f64));
	// fadds f5,f30,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// stfs f5,-192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lfs f18,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f29,f23,f29
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f29.f64));
	// fmuls f18,f18,f0
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// lfs f30,3196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3196);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f21,f21,f27
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f27.f64));
	// fmuls f27,f17,f27
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f27.f64));
	// fmuls f17,f16,f13
	ctx.f17.f64 = double(float(ctx.f16.f64 * ctx.f13.f64));
	// fmuls f16,f14,f12
	ctx.f16.f64 = double(float(ctx.f14.f64 * ctx.f12.f64));
	// fmuls f19,f19,f13
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// fmuls f14,f20,f3
	ctx.f14.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f18,f18,f2
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f2.f64));
	// stfs f18,80(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f21,f21,f13
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f18,f17,f8
	ctx.f18.f64 = double(float(ctx.f17.f64 * ctx.f8.f64));
	// stfs f18,68(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fmuls f18,f16,f8
	ctx.f18.f64 = double(float(ctx.f16.f64 * ctx.f8.f64));
	// stfs f18,92(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fmuls f19,f19,f12
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// fmuls f18,f14,f13
	ctx.f18.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// fmuls f20,f20,f5
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f5.f64));
	// fmuls f29,f29,f2
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// stfs f29,96(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fmuls f29,f21,f30
	ctx.f29.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
	// stfs f29,72(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fmuls f29,f27,f15
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f15.f64));
	// stfs f29,88(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fmuls f19,f19,f30
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f30.f64));
	// stfs f19,64(r3)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fmuls f29,f18,f8
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f8.f64));
	// fmuls f20,f20,f0
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmuls f8,f20,f8
	ctx.f8.f64 = double(float(ctx.f20.f64 * ctx.f8.f64));
	// stfs f29,76(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// ble cr6,0x82d0d8d4
	if (!ctx.cr6.gt) goto loc_82D0D8D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f28,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f28.u64);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f8,-19456(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19456);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fsqrts f15,f8
	ctx.f15.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f8,400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 400);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f8,-192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f29,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	ctx.f29.f64 = double(temp.f32);
	// lfs f17,2956(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2956);
	ctx.f17.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f21,2976(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2976);
	ctx.f21.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f27,3048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3048);
	ctx.f27.f64 = double(temp.f32);
	// lfd f8,-19544(r9)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -19544);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfd f8,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f8.u64);
	// lfd f20,-19448(r11)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19448);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f21,-184(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// lfs f19,1928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1928);
	ctx.f19.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f21,-19472(r8)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r8.u32 + -19472);
	// lfs f8,-19392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19392);
	ctx.f8.f64 = double(temp.f32);
	// lfs f18,-19396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19396);
	ctx.f18.f64 = double(temp.f32);
	// lfd f16,-19488(r10)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r10.u32 + -19488);
	// lfs f14,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f14.f64 = double(temp.f32);
	// stfd f30,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.f30.u64);
	// lfd f28,-176(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stfd f2,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f2.u64);
	// lfs f30,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f26,f29
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// fmsubs f26,f10,f17,f4
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f17.f64 - ctx.f4.f64));
	// fmuls f27,f10,f27
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f17,f15,f6
	ctx.f17.f64 = double(float(ctx.f15.f64 * ctx.f6.f64));
	// fsqrts f20,f20
	ctx.f20.f64 = double(float(sqrt(ctx.f20.f64)));
	// fmuls f19,f10,f19
	ctx.f19.f64 = double(float(ctx.f10.f64 * ctx.f19.f64));
	// lfs f10,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f2,f1,f22,f29
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f22.f64 - ctx.f29.f64));
	// fmsubs f27,f31,f18,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f18.f64 - ctx.f27.f64));
	// fmuls f26,f26,f17
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f17.f64));
	// fsqrts f21,f21
	ctx.f21.f64 = double(float(sqrt(ctx.f21.f64)));
	// fsubs f1,f1,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fmuls f6,f20,f6
	ctx.f6.f64 = double(float(ctx.f20.f64 * ctx.f6.f64));
	// fmuls f20,f15,f9
	ctx.f20.f64 = double(float(ctx.f15.f64 * ctx.f9.f64));
	// fmsubs f31,f31,f14,f19
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f14.f64 - ctx.f19.f64));
	// fsqrts f29,f16
	ctx.f29.f64 = double(float(sqrt(ctx.f16.f64)));
	// fadds f19,f2,f7
	ctx.f19.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fmuls f25,f26,f25
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f25.f64));
	// fmuls f5,f21,f5
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f5.f64));
	// fadds f27,f27,f30
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// fsqrts f18,f28
	ctx.f18.f64 = double(float(sqrt(ctx.f28.f64)));
	// fmadds f7,f7,f22,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f22.f64 + ctx.f1.f64));
	// fmuls f20,f20,f0
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fmuls f31,f19,f6
	ctx.f31.f64 = double(float(ctx.f19.f64 * ctx.f6.f64));
	// fmuls f29,f25,f13
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f27,f18,f27
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f27.f64));
	// fmuls f22,f21,f3
	ctx.f22.f64 = double(float(ctx.f21.f64 * ctx.f3.f64));
	// fmuls f26,f26,f24
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f25,f20,f11
	ctx.f25.f64 = double(float(ctx.f20.f64 * ctx.f11.f64));
	// fmuls f6,f15,f23
	ctx.f6.f64 = double(float(ctx.f15.f64 * ctx.f23.f64));
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f31,f29,f8
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// stfs f31,108(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f9,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f9.f64));
	// fmuls f29,f26,f12
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f31,f25,f13
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f7,f6,f3
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmuls f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f31,f27,f11
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// lfd f2,-176(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fmuls f27,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,3136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfd f30,-192(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f13,-19400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19400);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f29,f8
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// stfs f9,132(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmuls f8,f7,f2
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfs f12,3128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,3216(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3216);
	ctx.f11.f64 = double(temp.f32);
	// lfd f28,-168(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f9,104(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// stfs f7,116(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// stfs f6,100(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fmuls f9,f5,f28
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f9,112(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f8,136(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
loc_82D0D8D4:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca751c
	ctx.lr = 0x82D0D8DC;
	sub_82CA751C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0D8E8"))) PPC_WEAK_FUNC(sub_82D0D8E8);
PPC_FUNC_IMPL(__imp__sub_82D0D8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r10,r11,-19016
	ctx.r10.s64 = ctx.r11.s64 + -19016;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,25652(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25652);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d0d920
	if (!ctx.cr6.lt) goto loc_82D0D920;
loc_82D0D908:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82d0d928
	if (ctx.cr6.eq) goto loc_82D0D928;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82d0d908
	if (ctx.cr6.lt) goto loc_82D0D908;
loc_82D0D920:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_82D0D928:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0D930"))) PPC_WEAK_FUNC(sub_82D0D930);
PPC_FUNC_IMPL(__imp__sub_82D0D930) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r8,-15736
	ctx.r9.s64 = ctx.r8.s64 + -15736;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d0d9dc
	if (ctx.cr6.eq) goto loc_82D0D9DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r8,5
	ctx.r8.s64 = 5;
loc_82D0D970:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d0d980
	if (ctx.cr6.eq) goto loc_82D0D980;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82D0D980:
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82d0d9a4
	if (!ctx.cr6.lt) goto loc_82D0D9A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d0d99c
	if (!ctx.cr6.eq) goto loc_82D0D99C;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// b 0x82d0d9c4
	goto loc_82D0D9C4;
loc_82D0D99C:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82d0d9c0
	goto loc_82D0D9C0;
loc_82D0D9A4:
	// ble cr6,0x82d0d9c4
	if (!ctx.cr6.gt) goto loc_82D0D9C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d0d9b8
	if (!ctx.cr6.eq) goto loc_82D0D9B8;
	// addis r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 16777216;
	// b 0x82d0d9c4
	goto loc_82D0D9C4;
loc_82D0D9B8:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
loc_82D0D9C0:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82D0D9C4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82d0d970
	if (!ctx.cr0.eq) goto loc_82D0D970;
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82D0D9DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0D9E4"))) PPC_WEAK_FUNC(sub_82D0D9E4);
PPC_FUNC_IMPL(__imp__sub_82D0D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

