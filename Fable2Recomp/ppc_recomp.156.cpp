#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B8C900"))) PPC_WEAK_FUNC(sub_82B8C900);
PPC_FUNC_IMPL(__imp__sub_82B8C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82B8C908;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82b8bea0
	ctx.lr = 0x82B8C928;
	sub_82B8BEA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8C940;
	sub_82B8BA00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8C950;
	sub_82B8BA00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8C960;
	sub_82B8BA70(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8C96C;
	sub_82B8BA70(ctx, base);
	// lwz r25,308(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8C97C;
	sub_82B8BA70(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B8C980:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8C98C;
	sub_82B8BA00(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r31,4096
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4096, ctx.xer);
	// blt cr6,0x82b8c980
	if (ctx.cr6.lt) goto loc_82B8C980;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi. r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82b8ca54
	if (ctx.cr0.eq) goto loc_82B8CA54;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8C9D4:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bgt cr6,0x82b8ca00
	if (ctx.cr6.gt) goto loc_82B8CA00;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8ca20
	goto loc_82B8CA20;
loc_82B8CA00:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8CA20:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b8c9d4
	if (ctx.cr6.lt) goto loc_82B8C9D4;
loc_82B8CA54:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82b8caf0
	if (ctx.cr0.eq) goto loc_82B8CAF0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8CA70:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bgt cr6,0x82b8ca9c
	if (ctx.cr6.gt) goto loc_82B8CA9C;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8cabc
	goto loc_82B8CABC;
loc_82B8CA9C:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8CABC:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b8ca70
	if (ctx.cr6.lt) goto loc_82B8CA70;
loc_82B8CAF0:
	// lwz r30,316(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8CB00;
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8CB0C;
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8CB18;
	sub_82B8BC08(ctx, base);
	// rlwinm r20,r28,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82b8d004
	if (!ctx.cr6.gt) goto loc_82B8D004;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// addi r22,r11,26776
	ctx.r22.s64 = ctx.r11.s64 + 26776;
	// addi r3,r10,25312
	ctx.r3.s64 = ctx.r10.s64 + 25312;
loc_82B8CB40:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b8cff4
	if (!ctx.cr6.gt) goto loc_82B8CFF4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82B8CB50:
	// lhz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 32);
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8cbb8
	if (!ctx.cr6.eq) goto loc_82B8CBB8;
loc_82B8CB74:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b8cb74
	if (ctx.cr6.eq) goto loc_82B8CB74;
loc_82B8CBB8:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwzx r7,r11,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82b8cc90
	if (!ctx.cr6.eq) goto loc_82B8CC90;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bgt cr6,0x82b8cc0c
	if (ctx.cr6.gt) goto loc_82B8CC0C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// b 0x82b8cc30
	goto loc_82B8CC30;
loc_82B8CC0C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// bgt cr6,0x82b8cc68
	if (ctx.cr6.gt) goto loc_82B8CC68;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// b 0x82b8cf10
	goto loc_82B8CF10;
loc_82B8CC68:
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// srw r11,r6,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 | ctx.r11.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// b 0x82b8cf10
	goto loc_82B8CF10;
loc_82B8CC90:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r9,r19
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b8ccd4
	if (ctx.cr6.eq) goto loc_82B8CCD4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82b8cde8
	if (!ctx.cr6.eq) goto loc_82B8CDE8;
loc_82B8CCD4:
	// lhz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8cd3c
	if (!ctx.cr6.eq) goto loc_82B8CD3C;
loc_82B8CCF8:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// srw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8ccf8
	if (ctx.cr6.eq) goto loc_82B8CCF8;
loc_82B8CD3C:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rotlwi r6,r11,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge 0x82b8cd90
	if (!ctx.cr0.lt) goto loc_82B8CD90;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b8cd9c
	goto loc_82B8CD9C;
loc_82B8CD90:
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x82b8cd9c
	if (!ctx.cr6.gt) goto loc_82B8CD9C;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8CD9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82b8cdac
	if (!ctx.cr6.lt) goto loc_82B8CDAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8cdb8
	goto loc_82B8CDB8;
loc_82B8CDAC:
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// ble cr6,0x82b8cdb8
	if (!ctx.cr6.gt) goto loc_82B8CDB8;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8CDB8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b8cdc8
	if (!ctx.cr6.lt) goto loc_82B8CDC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b8cdd4
	goto loc_82B8CDD4;
loc_82B8CDC8:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x82b8cdd4
	if (!ctx.cr6.gt) goto loc_82B8CDD4;
	// li r11,31
	ctx.r11.s64 = 31;
loc_82B8CDD4:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
loc_82B8CDE8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b8cdfc
	if (ctx.cr6.eq) goto loc_82B8CDFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82b8cf10
	if (!ctx.cr6.eq) goto loc_82B8CF10;
loc_82B8CDFC:
	// lhz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8ce64
	if (!ctx.cr6.eq) goto loc_82B8CE64;
loc_82B8CE20:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b8ce20
	if (ctx.cr6.eq) goto loc_82B8CE20;
loc_82B8CE64:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rotlwi r6,r11,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r7,r5,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r9,r5,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3F;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge 0x82b8ceb8
	if (!ctx.cr0.lt) goto loc_82B8CEB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b8cec4
	goto loc_82B8CEC4;
loc_82B8CEB8:
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x82b8cec4
	if (!ctx.cr6.gt) goto loc_82B8CEC4;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8CEC4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82b8ced4
	if (!ctx.cr6.lt) goto loc_82B8CED4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8cee0
	goto loc_82B8CEE0;
loc_82B8CED4:
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// ble cr6,0x82b8cee0
	if (!ctx.cr6.gt) goto loc_82B8CEE0;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8CEE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b8cef0
	if (!ctx.cr6.lt) goto loc_82B8CEF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b8cefc
	goto loc_82B8CEFC;
loc_82B8CEF0:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x82b8cefc
	if (!ctx.cr6.gt) goto loc_82B8CEFC;
	// li r11,31
	ctx.r11.s64 = 31;
loc_82B8CEFC:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_82B8CF10:
	// lhz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B8CF30:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8cf84
	if (!ctx.cr6.eq) goto loc_82B8CF84;
loc_82B8CF40:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r5,r31,27
	ctx.r5.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8cf40
	if (ctx.cr6.eq) goto loc_82B8CF40;
loc_82B8CF84:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82b8cf30
	if (ctx.cr6.lt) goto loc_82B8CF30;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// rlwimi r5,r11,4,20,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF00F);
	// rlwimi r7,r9,28,28,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r17,r10,4,20,27
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFF0) | (ctx.r17.u64 & 0xFFFFFFFFFFFFF00F);
	// stb r5,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r5.u8);
	// rlwimi r6,r8,28,28,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r7,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r7.u8);
	// stb r17,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r17.u8);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stb r6,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r6.u8);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// blt cr6,0x82b8cb50
	if (ctx.cr6.lt) goto loc_82B8CB50;
loc_82B8CFF4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r21,r21,r19
	ctx.r21.u64 = ctx.r21.u64 + ctx.r19.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82b8cb40
	if (ctx.cr6.lt) goto loc_82B8CB40;
loc_82B8D004:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82B8D00C"))) PPC_WEAK_FUNC(sub_82B8D00C);
PPC_FUNC_IMPL(__imp__sub_82B8D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8D010"))) PPC_WEAK_FUNC(sub_82B8D010);
PPC_FUNC_IMPL(__imp__sub_82B8D010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82B8D018;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r5,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// stw r28,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r28.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// bl 0x82b8bea0
	ctx.lr = 0x82B8D040;
	sub_82B8BEA0(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8D058;
	sub_82B8BA00(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8D064;
	sub_82B8BA00(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8D070;
	sub_82B8BA00(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8D080;
	sub_82B8BA00(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// addi r14,r11,-7800
	ctx.r14.s64 = ctx.r11.s64 + -7800;
	// srawi r17,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r29.s32 >> 2;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// bl 0x82b8ba70
	ctx.lr = 0x82B8D0A8;
	sub_82B8BA70(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r27,r11,-7764
	ctx.r27.s64 = ctx.r11.s64 + -7764;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x82b8ba70
	ctx.lr = 0x82B8D0C0;
	sub_82B8BA70(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r26,r11,-7728
	ctx.r26.s64 = ctx.r11.s64 + -7728;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// bl 0x82b8ba70
	ctx.lr = 0x82B8D0D8;
	sub_82B8BA70(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r31,4(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b8d134
	if (ctx.cr0.eq) goto loc_82B8D134;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82B8D0F4:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8D100;
	sub_82B8BA00(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r31,4(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82b8d0f4
	if (ctx.cr6.lt) goto loc_82B8D0F4;
loc_82B8D134:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r22,128(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// srawi. r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b8d1d8
	if (ctx.cr0.eq) goto loc_82B8D1D8;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_82B8D158:
	// clrlwi r11,r24,27
	ctx.r11.u64 = ctx.r24.u32 & 0x1F;
	// srawi r10,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bgt cr6,0x82b8d184
	if (ctx.cr6.gt) goto loc_82B8D184;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d1a4
	goto loc_82B8D1A4;
loc_82B8D184:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D1A4:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82b8d158
	if (ctx.cr6.lt) goto loc_82B8D158;
loc_82B8D1D8:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b8d274
	if (ctx.cr0.eq) goto loc_82B8D274;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_82B8D1F4:
	// clrlwi r11,r24,27
	ctx.r11.u64 = ctx.r24.u32 & 0x1F;
	// srawi r10,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bgt cr6,0x82b8d220
	if (ctx.cr6.gt) goto loc_82B8D220;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d240
	goto loc_82B8D240;
loc_82B8D220:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D240:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82b8d1f4
	if (ctx.cr6.lt) goto loc_82B8D1F4;
loc_82B8D274:
	// lwz r31,460(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8D284;
	sub_82B8BC08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8D290;
	sub_82B8BC08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8D29C;
	sub_82B8BC08(ctx, base);
	// lwz r16,452(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8D2AC;
	sub_82B8BA70(ctx, base);
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82b8d348
	if (ctx.cr0.eq) goto loc_82B8D348;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_82B8D2C8:
	// clrlwi r11,r24,27
	ctx.r11.u64 = ctx.r24.u32 & 0x1F;
	// srawi r10,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bgt cr6,0x82b8d2f4
	if (ctx.cr6.gt) goto loc_82B8D2F4;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d314
	goto loc_82B8D314;
loc_82B8D2F4:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D314:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r4,8(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b8d2c8
	if (ctx.cr6.lt) goto loc_82B8D2C8;
loc_82B8D348:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8D354;
	sub_82B8BC08(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82b8df98
	if (!ctx.cr6.gt) goto loc_82B8DF98;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r5,r11,7952
	ctx.r5.s64 = ctx.r11.s64 + 7952;
	// addi r25,r10,7696
	ctx.r25.s64 = ctx.r10.s64 + 7696;
	// addi r11,r9,8048
	ctx.r11.s64 = ctx.r9.s64 + 8048;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// li r27,255
	ctx.r27.s64 = 255;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r23,7
	ctx.r23.s64 = 7;
loc_82B8D3A4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b8df88
	if (!ctx.cr6.gt) goto loc_82B8DF88;
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mullw r17,r8,r7
	ctx.r17.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// b 0x82b8d3cc
	goto loc_82B8D3CC;
loc_82B8D3C8:
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
loc_82B8D3CC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bgt cr6,0x82b8d5c0
	if (ctx.cr6.gt) goto loc_82B8D5C0;
	// lhz r10,32(r16)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r16.u32 + 32);
	// lwz r9,20(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b8d43c
	if (!ctx.cr6.eq) goto loc_82B8D43C;
loc_82B8D3F8:
	// srawi r10,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 5;
	// clrlwi r8,r24,27
	ctx.r8.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r4,r6,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// srw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b8d3f8
	if (ctx.cr6.eq) goto loc_82B8D3F8;
loc_82B8D43C:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// rotlwi r8,r11,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// srawi r29,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82b8d4c4
	if (ctx.cr6.eq) goto loc_82B8D4C4;
	// clrlwi r10,r24,27
	ctx.r10.u64 = ctx.r24.u32 & 0x1F;
	// srawi r9,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 5;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bgt cr6,0x82b8d498
	if (ctx.cr6.gt) goto loc_82B8D498;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
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
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r26,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// subfic r6,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r10.s64;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// add r18,r11,r10
	ctx.r18.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82b8d5c0
	if (!ctx.cr6.eq) goto loc_82B8D5C0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// srawi r10,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 5;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// clrlwi r11,r24,27
	ctx.r11.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82b8d564
	if (!ctx.cr6.eq) goto loc_82B8D564;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bgt cr6,0x82b8d510
	if (ctx.cr6.gt) goto loc_82B8D510;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// b 0x82b8d530
	goto loc_82B8D530;
loc_82B8D510:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// srw r3,r6,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_82B8D530:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82b8d550
	if (ctx.cr6.eq) goto loc_82B8D550;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r20,r8,r10
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D550:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r11,4,20,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// clrlwi r20,r6,24
	ctx.r20.u64 = ctx.r6.u32 & 0xFF;
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D564:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bgt cr6,0x82b8d584
	if (ctx.cr6.gt) goto loc_82B8D584;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// b 0x82b8d5a4
	goto loc_82B8D5A4;
loc_82B8D584:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// srw r3,r6,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B8D5A4:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82b8d5c4
	if (!ctx.cr6.eq) goto loc_82B8D5C4;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// lbzx r20,r11,r25
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D5C0:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
loc_82B8D5C4:
	// mullw r30,r15,r19
	ctx.r30.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r19.s32);
	// add r10,r17,r30
	ctx.r10.u64 = ctx.r17.u64 + ctx.r30.u64;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-10776
	ctx.r12.s64 = ctx.r12.s64 + -10776;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82B8D5F8;
	case 1:
		goto loc_82B8D650;
	case 2:
		goto loc_82B8D6A8;
	case 3:
		goto loc_82B8D724;
	case 4:
		// ERROR: 0x2F090002
		return;
	case 5:
		// ERROR: 0x40990038
		return;
	case 6:
		// ERROR: 0x554B103A
		return;
	case 7:
		// ERROR: 0x39000004
		return;
	case 8:
		// ERROR: 0x7D2BE214
		return;
	case 9:
		// ERROR: 0x7D2A4B78
		return;
	case 10:
		// ERROR: 0x39600004
		return;
	case 11:
		// ERROR: 0x9AAA0000
		return;
	case 12:
		// ERROR: 0x356BFFFF
		return;
	case 13:
		// ERROR: 0x7D4A9A14
		return;
	case 14:
		// ERROR: 0x4082FFF4
		return;
	case 15:
		// ERROR: 0x3508FFFF
		return;
	case 16:
		// ERROR: 0x7D293A14
		return;
	case 17:
		// ERROR: 0x4082FFE0
		return;
	case 18:
		// ERROR: 0x48000934
		return;
	case 19:
		// ERROR: 0x7EA9AB78
		return;
	case 20:
		// ERROR: 0x39400008
		return;
	case 21:
		// ERROR: 0x7D4903A6
		return;
	case 22:
		// ERROR: 0x992B0000
		return;
	case 23:
		// ERROR: 0x396B0001
		return;
	case 24:
		// ERROR: 0x4200FFF8
		return;
	case 25:
		// ERROR: 0x48000918
		return;
	case 26:
		// ERROR: 0x2F090002
		return;
	case 27:
		// ERROR: 0x40990038
		return;
	case 28:
		// ERROR: 0x554B103A
		return;
	case 29:
		// ERROR: 0x39000004
		return;
	case 30:
		// ERROR: 0x7D2BE214
		return;
	case 31:
		// ERROR: 0x7D2A4B78
		return;
	case 32:
		// ERROR: 0x39600004
		return;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-10760(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10760);
	// lwz r21,-10672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10672);
	// lwz r21,-10584(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10584);
	// lwz r21,-10460(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -10460);
loc_82B8D5F8:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82b8d634
	if (!ctx.cr6.gt) goto loc_82B8D634;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82B8D60C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B8D614:
	// stb r21,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r21.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// bne 0x82b8d614
	if (!ctx.cr0.eq) goto loc_82B8D614;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d60c
	if (!ctx.cr0.eq) goto loc_82B8D60C;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D634:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B8D640:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b8d640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B8D640;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D650:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82b8d68c
	if (!ctx.cr6.gt) goto loc_82B8D68C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82B8D664:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B8D66C:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// bne 0x82b8d66c
	if (!ctx.cr0.eq) goto loc_82B8D66C;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d664
	if (!ctx.cr0.eq) goto loc_82B8D664;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D68C:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B8D698:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b8d698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B8D698;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D6A8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82b8d70c
	if (ctx.cr6.eq) goto loc_82B8D70C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82b8d6ec
	if (ctx.cr6.eq) goto loc_82B8D6EC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82B8D6C4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B8D6CC:
	// stb r20,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r20.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// bne 0x82b8d6cc
	if (!ctx.cr0.eq) goto loc_82B8D6CC;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d6c4
	if (!ctx.cr0.eq) goto loc_82B8D6C4;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D6EC:
	// stb r20,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r20.u8);
	// stb r20,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r20.u8);
	// stb r21,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r21.u8);
	// stb r21,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r21.u8);
	// stb r21,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r21.u8);
	// stb r21,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r21.u8);
	// stb r21,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r21.u8);
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D70C:
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B8D714:
	// stb r20,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r20.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b8d714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B8D714;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D724:
	// lhz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r14.u32 + 32);
	// lwz r8,20(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b8d790
	if (!ctx.cr6.eq) goto loc_82B8D790;
loc_82B8D74C:
	// srawi r9,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 5;
	// clrlwi r7,r24,27
	ctx.r7.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r4,r6,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// srw r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b8d74c
	if (ctx.cr6.eq) goto loc_82B8D74C;
loc_82B8D790:
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// rotlwi r4,r10,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lhz r8,32(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 32);
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r8,4(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b8d810
	if (!ctx.cr6.eq) goto loc_82B8D810;
loc_82B8D7CC:
	// srawi r8,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 5;
	// clrlwi r4,r24,27
	ctx.r4.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r8,r3,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// srw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b8d7cc
	if (ctx.cr6.eq) goto loc_82B8D7CC;
loc_82B8D810:
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rotlwi r8,r9,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf. r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bge 0x82b8d834
	if (!ctx.cr0.lt) goto loc_82B8D834;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x82b8d840
	goto loc_82B8D840;
loc_82B8D834:
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// ble cr6,0x82b8d840
	if (!ctx.cr6.gt) goto loc_82B8D840;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8D840:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82b8d850
	if (!ctx.cr6.lt) goto loc_82B8D850;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x82b8d85c
	goto loc_82B8D85C;
loc_82B8D850:
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// ble cr6,0x82b8d85c
	if (!ctx.cr6.gt) goto loc_82B8D85C;
	// li r10,63
	ctx.r10.s64 = 63;
loc_82B8D85C:
	// lbzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82B8D878:
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b8d8dc
	if (!ctx.cr6.eq) goto loc_82B8D8DC;
loc_82B8D898:
	// srawi r6,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 5;
	// clrlwi r5,r24,27
	ctx.r5.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// srw r5,r6,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r6,r5,31
	ctx.r6.u64 = ctx.r5.u32 & 0x1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r5,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b8d898
	if (ctx.cr6.eq) goto loc_82B8D898;
loc_82B8D8DC:
	// lhz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// rotlwi r5,r5,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b8d950
	if (!ctx.cr6.eq) goto loc_82B8D950;
loc_82B8D908:
	// srawi r6,r24,5
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 5;
	// clrlwi r14,r24,27
	ctx.r14.u64 = ctx.r24.u32 & 0x1F;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// srw r6,r6,r14
	ctx.r6.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r14.u8 & 0x3F));
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b8d908
	if (ctx.cr6.eq) goto loc_82B8D908;
loc_82B8D950:
	// lhz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// srawi r14,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r14.s64 = ctx.r5.s32 >> 3;
	// rotlwi r6,r6,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// clrlwi r5,r5,29
	ctx.r5.u64 = ctx.r5.u32 & 0x7;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// stb r5,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r5.u8);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r14,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r14.u8);
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// stb r5,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r5.u8);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// blt cr6,0x82b8d878
	if (ctx.cr6.lt) goto loc_82B8D878;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82b8ddcc
	if (ctx.cr6.eq) goto loc_82B8DDCC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82b8daf8
	if (ctx.cr6.eq) goto loc_82B8DAF8;
	// lwz r14,420(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r17,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B8D9B4:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82B8D9C4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-9760
	ctx.r12.s64 = ctx.r12.s64 + -9760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-9728(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9728);
	// lwz r21,-9720(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9720);
	// lwz r21,-9712(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r21,-9692(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9692);
	// lwz r21,-9664(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9664);
	// lwz r21,-9636(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9636);
	// lwz r21,-9608(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9608);
	// lwz r21,-9580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9580);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82b8daa4
	goto loc_82B8DAA4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82B8DAA4:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// divw r11,r10,r23
	ctx.r11.s32 = ctx.r10.s32 / ctx.r23.s32;
loc_82B8DAAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b8dabc
	if (!ctx.cr6.lt) goto loc_82B8DABC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82b8dac8
	goto loc_82B8DAC8;
loc_82B8DABC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82b8dac8
	if (!ctx.cr6.gt) goto loc_82B8DAC8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B8DAC8:
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// stbx r11,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u8);
	// blt cr6,0x82b8d9c4
	if (ctx.cr6.lt) goto loc_82B8D9C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r3,r3,r14
	ctx.r3.u64 = ctx.r3.u64 + ctx.r14.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82b8d9b4
	if (ctx.cr6.lt) goto loc_82B8D9B4;
	// b 0x82b8df60
	goto loc_82B8DF60;
loc_82B8DAF8:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// stb r21,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r21.u8);
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// stb r21,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r21.u8);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// stb r21,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r21.u8);
	// addi r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 5;
	// stb r21,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r21.u8);
	// addi r26,r11,6
	ctx.r26.s64 = ctx.r11.s64 + 6;
	// stb r21,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r21.u8);
	// addi r25,r11,7
	ctx.r25.s64 = ctx.r11.s64 + 7;
	// stb r21,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r21.u8);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_82B8DB3C:
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// clrlwi r5,r8,29
	ctx.r5.u64 = ctx.r8.u32 & 0x7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// lbz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// srawi r6,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// lbz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// clrlwi r17,r8,29
	ctx.r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r16,r4,31
	ctx.r16.u64 = ctx.r4.u32 & 0x1;
	// lbz r15,0(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r14,4(r10)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// slw r5,r16,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r5.u8 & 0x3F));
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// srawi r5,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// stb r3,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r3.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// slw r3,r5,r17
	ctx.r3.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r17.u8 & 0x3F));
	// srawi r5,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 2;
	// lbz r4,2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// clrlwi r17,r8,29
	ctx.r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// slw r3,r5,r17
	ctx.r3.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r17.u8 & 0x3F));
	// clrlwi r17,r8,29
	ctx.r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r4,r15,31
	ctx.r4.u64 = ctx.r15.u32 & 0x1;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// slw r17,r4,r17
	ctx.r17.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r17.u8 & 0x3F));
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
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// srawi r3,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r15.s32 >> 1;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r4,r8,29
	ctx.r4.u64 = ctx.r8.u32 & 0x7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r16,r3,r4
	ctx.r16.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lbz r3,2(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// or r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 | ctx.r3.u64;
	// srawi r17,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r15.s32 >> 2;
	// stb r3,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r3.u8);
	// clrlwi r31,r8,29
	ctx.r31.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r17,r17,31
	ctx.r17.u64 = ctx.r17.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// srawi r3,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// slw r5,r17,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r31.u8 & 0x3F));
	// lbz r17,2(r6)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// or r3,r16,r17
	ctx.r3.u64 = ctx.r16.u64 | ctx.r17.u64;
	// clrlwi r17,r8,29
	ctx.r17.u64 = ctx.r8.u32 & 0x7;
	// stb r3,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r3.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// clrlwi r15,r14,31
	ctx.r15.u64 = ctx.r14.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r3,r15,r17
	ctx.r3.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r17.u8 & 0x3F));
	// lbz r17,8(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// srawi r4,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r14.s32 >> 1;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// ld r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
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
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// srawi r5,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r14.s32 >> 2;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lbz r16,2(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// srawi r6,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// clrlwi r15,r8,29
	ctx.r15.u64 = ctx.r8.u32 & 0x7;
	// or r4,r4,r16
	ctx.r4.u64 = ctx.r4.u64 | ctx.r16.u64;
	// clrlwi r3,r17,31
	ctx.r3.u64 = ctx.r17.u32 & 0x1;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r3,r3,r15
	ctx.r3.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r15.u8 & 0x3F));
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// clrlwi r15,r8,29
	ctx.r15.u64 = ctx.r8.u32 & 0x7;
	// lbz r16,2(r7)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r4,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r17.s32 >> 1;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stb r5,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r5.u8);
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// clrlwi r16,r8,29
	ctx.r16.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r17,r17,31
	ctx.r17.u64 = ctx.r17.u32 & 0x1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r17,r17,r16
	ctx.r17.u64 = ctx.r16.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r16.u8 & 0x3F));
	// lbz r16,2(r6)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// or r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 | ctx.r16.u64;
	// addi r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 2;
	// stb r3,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r3.u8);
	// slw r4,r4,r15
	ctx.r4.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r15.u8 & 0x3F));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
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
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// or r7,r17,r10
	ctx.r7.u64 = ctx.r17.u64 | ctx.r10.u64;
	// stb r7,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r7.u8);
	// blt cr6,0x82b8db3c
	if (ctx.cr6.lt) goto loc_82B8DB3C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r16,452(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r15,92(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r7,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r7.u8);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r5,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r5.u8);
	// li r27,255
	ctx.r27.s64 = 255;
	// stb r6,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r6.u8);
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// stb r3,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// stb r4,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r4.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r28,380(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82b8df60
	goto loc_82B8DF60;
loc_82B8DDCC:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82B8DDD0:
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
loc_82B8DDE0:
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-8708
	ctx.r12.s64 = ctx.r12.s64 + -8708;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-8676(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8676);
	// lwz r21,-8668(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8668);
	// lwz r21,-8660(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8660);
	// lwz r21,-8640(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8640);
	// lwz r21,-8608(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8608);
	// lwz r21,-8576(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8576);
	// lwz r21,-8544(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8544);
	// lwz r21,-8512(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8512);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// b 0x82b8ded0
	goto loc_82B8DED0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / ctx.r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / ctx.r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / ctx.r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / ctx.r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_82B8DED0:
	// addi r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 3;
	// divw r5,r6,r23
	ctx.r5.s32 = ctx.r6.s32 / ctx.r23.s32;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82B8DEDC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82b8def0
	if (!ctx.cr6.lt) goto loc_82B8DEF0;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// b 0x82b8defc
	goto loc_82B8DEFC;
loc_82B8DEF0:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// ble cr6,0x82b8defc
	if (!ctx.cr6.gt) goto loc_82B8DEFC;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
loc_82B8DEFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82b8dde0
	if (ctx.cr6.lt) goto loc_82B8DDE0;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lbzx r4,r10,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r10,r7,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// rotlwi r7,r10,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r10,r6,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzx r6,r5,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// rotlwi r5,r6,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x82b8ddd0
	if (ctx.cr6.lt) goto loc_82B8DDD0;
loc_82B8DF60:
	// lwz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B8DF64:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b8d3c8
	if (ctx.cr6.lt) goto loc_82B8D3C8;
	// lwz r17,136(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82B8DF88:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82b8d3a4
	if (ctx.cr6.lt) goto loc_82B8D3A4;
loc_82B8DF98:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8DFA0"))) PPC_WEAK_FUNC(sub_82B8DFA0);
PPC_FUNC_IMPL(__imp__sub_82B8DFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82B8DFA8;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8DFE0;
	sub_82B8BA00(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8DFEC;
	sub_82B8BA00(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8DFF8;
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8E004;
	sub_82B8BA70(ctx, base);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi. r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b8e060
	if (ctx.cr0.eq) goto loc_82B8E060;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B8E020:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	ctx.lr = 0x82B8E02C;
	sub_82B8BA00(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82b8e020
	if (ctx.cr6.lt) goto loc_82B8E020;
loc_82B8E060:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi. r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82b8e104
	if (ctx.cr0.eq) goto loc_82B8E104;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8E084:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bgt cr6,0x82b8e0b0
	if (ctx.cr6.gt) goto loc_82B8E0B0;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8e0d0
	goto loc_82B8E0D0;
loc_82B8E0B0:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8E0D0:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b8e084
	if (ctx.cr6.lt) goto loc_82B8E084;
loc_82B8E104:
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8E114;
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b8bc08
	ctx.lr = 0x82B8E120;
	sub_82B8BC08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B8E130:
	// lhz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 32);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82b8e198
	if (!ctx.cr6.eq) goto loc_82B8E198;
loc_82B8E154:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r4,r5,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// srw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b8e154
	if (ctx.cr6.eq) goto loc_82B8E154;
loc_82B8E198:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rotlwi r8,r11,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8e21c
	if (ctx.cr6.eq) goto loc_82B8E21C;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// srawi r9,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 5;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bgt cr6,0x82b8e1f0
	if (ctx.cr6.gt) goto loc_82B8E1F0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
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
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r5,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r10.s64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82b8e230
	if (!ctx.cr6.eq) goto loc_82B8E230;
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
loc_82B8E230:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82b8e310
	if (!ctx.cr6.gt) goto loc_82B8E310;
	// mullw r8,r27,r23
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r23.s32);
loc_82B8E240:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82b8e2e0
	if (ctx.cr6.lt) goto loc_82B8E2E0;
	// lhz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8e2b0
	if (!ctx.cr6.eq) goto loc_82B8E2B0;
loc_82B8E26C:
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// clrlwi r20,r31,27
	ctx.r20.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// srw r10,r10,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r20.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8e26c
	if (ctx.cr6.eq) goto loc_82B8E26C;
loc_82B8E2B0:
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rotlwi r20,r10,4
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r19,r11,r8
	ctx.r19.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lwzx r11,r20,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stbx r11,r19,r26
	PPC_STORE_U8(ctx.r19.u32 + ctx.r26.u32, ctx.r11.u8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82b8e2ec
	goto loc_82B8E2EC;
loc_82B8E2E0:
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbx r6,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r6.u8);
loc_82B8E2EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82b8e304
	if (ctx.cr6.lt) goto loc_82B8E304;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
loc_82B8E304:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82b8e240
	if (ctx.cr6.lt) goto loc_82B8E240;
loc_82B8E310:
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82b8e130
	if (ctx.cr6.lt) goto loc_82B8E130;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82B8E320"))) PPC_WEAK_FUNC(sub_82B8E320);
PPC_FUNC_IMPL(__imp__sub_82B8E320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82B8E328;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// stw r15,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r15.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82b8e360
	if (ctx.cr6.lt) goto loc_82B8E360;
	// twi 31,r0,22
loc_82B8E360:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82b8e544
	if (!ctx.cr6.eq) goto loc_82B8E544;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82b8e4d8
	if (ctx.cr6.eq) goto loc_82B8E4D8;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x82b8e4d8
	if (ctx.cr6.eq) goto loc_82B8E4D8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82b8e4d0
	if (ctx.cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82b8e4d0
	if (ctx.cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82b8e4d0
	if (ctx.cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bne cr6,0x82b8e400
	if (!ctx.cr6.eq) goto loc_82B8E400;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ble cr6,0x82b8e538
	if (!ctx.cr6.gt) goto loc_82B8E538;
	// addi r8,r27,2
	ctx.r8.s64 = ctx.r27.s64 + 2;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_82B8E3B0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82b8e3e8
	if (!ctx.cr6.gt) goto loc_82B8E3E8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82B8E3C0:
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82b8e3c0
	if (!ctx.cr0.eq) goto loc_82B8E3C0;
loc_82B8E3E8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r8,r15
	ctx.r8.u64 = ctx.r8.u64 + ctx.r15.u64;
	// bne 0x82b8e3b0
	if (!ctx.cr0.eq) goto loc_82B8E3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8E400:
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-7140
	ctx.r12.s64 = ctx.r12.s64 + -7140;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-7108(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7108);
	// lwz r21,-7108(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7108);
	// lwz r21,-7096(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7096);
	// lwz r21,-7108(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7108);
	// lwz r21,-7108(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7108);
	// lwz r21,-7096(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7096);
	// lwz r21,-6960(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6960);
	// lwz r21,-7084(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7084);
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
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ble cr6,0x82b8e538
	if (!ctx.cr6.gt) goto loc_82B8E538;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82B8E474:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82b8e4b8
	if (!ctx.cr6.gt) goto loc_82B8E4B8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
loc_82B8E484:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b8e4ac
	if (!ctx.cr6.gt) goto loc_82B8E4AC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82B8E494:
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82b8e494
	if (!ctx.cr0.eq) goto loc_82B8E494;
loc_82B8E4AC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// bne 0x82b8e484
	if (!ctx.cr0.eq) goto loc_82B8E484;
loc_82B8E4B8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bne 0x82b8e474
	if (!ctx.cr0.eq) goto loc_82B8E474;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8E4D0:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x82b8e4dc
	goto loc_82B8E4DC;
loc_82B8E4D8:
	// li r28,8
	ctx.r28.s64 = 8;
loc_82B8E4DC:
	// addi r11,r16,3
	ctx.r11.s64 = ctx.r16.s64 + 3;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r9,r18,3
	ctx.r9.s64 = ctx.r18.s64 + 3;
	// srawi r25,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 2;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r10,r19
	ctx.r29.u64 = ctx.r10.u64 + ctx.r19.u64;
	// ble 0x82b8e538
	if (!ctx.cr0.gt) goto loc_82B8E538;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82B8E4FC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82b8e52c
	if (!ctx.cr6.gt) goto loc_82B8E52C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82B8E50C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B8E51C;
	sub_82CA2C60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x82b8e50c
	if (!ctx.cr0.eq) goto loc_82B8E50C;
loc_82B8E52C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 + ctx.r15.u64;
	// bne 0x82b8e4fc
	if (!ctx.cr0.eq) goto loc_82B8E4FC;
loc_82B8E538:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8E544:
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bgt cr6,0x82b8ebc4
	if (ctx.cr6.gt) goto loc_82B8EBC4;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-6812
	ctx.r12.s64 = ctx.r12.s64 + -6812;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
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
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6760);
	// lwz r21,-6760(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6760);
	// lwz r21,-6760(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6760);
	// lwz r21,-6760(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6760);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-6760(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6760);
loc_82B8E598:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82b8e5ac
	if (!ctx.cr6.eq) goto loc_82B8E5AC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = ctx.r11.u64 | 338;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5AC:
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bne cr6,0x82b8e5c0
	if (!ctx.cr6.eq) goto loc_82B8E5C0;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = ctx.r11.u64 | 338;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5C0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82b8e5d4
	if (!ctx.cr6.eq) goto loc_82B8E5D4;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5D4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82b8e5ec
	if (!ctx.cr6.eq) goto loc_82B8E5EC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
loc_82B8E5E4:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82b8ebc4
	if (!ctx.cr6.eq) goto loc_82B8EBC4;
loc_82B8E5EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,420(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// lwz r23,396(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lwz r22,364(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// lwz r21,356(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// addi r27,r6,7184
	ctx.r27.s64 = ctx.r6.s64 + 7184;
	// addi r15,r7,7440
	ctx.r15.s64 = ctx.r7.s64 + 7440;
	// addi r26,r8,-7800
	ctx.r26.s64 = ctx.r8.s64 + -7800;
	// addi r25,r9,-7764
	ctx.r25.s64 = ctx.r9.s64 + -7764;
	// addi r24,r10,-7728
	ctx.r24.s64 = ctx.r10.s64 + -7728;
	// addi r14,r11,7696
	ctx.r14.s64 = ctx.r11.s64 + 7696;
loc_82B8E634:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-6576
	ctx.r12.s64 = ctx.r12.s64 + -6576;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-6524(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6524);
	// lwz r21,-6512(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6512);
	// lwz r21,-6512(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6512);
	// lwz r21,-6488(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6488);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-6524(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6524);
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r29,8
	ctx.r29.s64 = 8;
	// b 0x82b8e6b8
	goto loc_82B8E6B8;
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r29,16
	ctx.r29.s64 = 16;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82b8e6b8
	if (!ctx.cr6.eq) goto loc_82B8E6B8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82b8e6b8
	goto loc_82B8E6B8;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,16
	ctx.r29.s64 = 16;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B8E6B8:
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-6424
	ctx.r12.s64 = ctx.r12.s64 + -6424;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-6380(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6380);
	// lwz r21,-5868(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5868);
	// lwz r21,-5808(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5808);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-6276(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6276);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-5708(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5708);
	// lwz r21,-6328(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6328);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8c1c8
	ctx.lr = 0x82B8E744;
	sub_82B8C1C8(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8c900
	ctx.lr = 0x82B8E778;
	sub_82B8C900(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// beq cr6,0x82b8e824
	if (ctx.cr6.eq) goto loc_82B8E824;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82b8e824
	if (ctx.cr6.eq) goto loc_82B8E824;
	// bl 0x82b8bea0
	ctx.lr = 0x82B8E790;
	sub_82B8BEA0(ctx, base);
	// lbz r9,5(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 5);
	// lbz r8,6(r19)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + 6);
	// addi r11,r16,3
	ctx.r11.s64 = ctx.r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = ctx.r18.s64 + 3;
	// lwz r7,4(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r4,r9,r15
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r15.u32);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// rotlwi r10,r4,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r8,r5,r15
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r15.u32);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// ble 0x82b8e988
	if (!ctx.cr0.gt) goto loc_82B8E988;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r8,r31,6
	ctx.r8.s64 = ctx.r31.s64 + 6;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82B8E7E0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b8e814
	if (!ctx.cr6.gt) goto loc_82B8E814;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8E7F0:
	// sth r9,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r9.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r9.u16);
	// stb r30,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r30.u8);
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82b8e7f0
	if (!ctx.cr0.eq) goto loc_82B8E7F0;
loc_82B8E814:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82b8e7e0
	if (!ctx.cr0.eq) goto loc_82B8E7E0;
	// b 0x82b8e988
	goto loc_82B8E988;
loc_82B8E824:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82b8e8a0
	if (ctx.cr6.eq) goto loc_82B8E8A0;
	// addi r11,r16,3
	ctx.r11.s64 = ctx.r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = ctx.r18.s64 + 3;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82b8e988
	if (!ctx.cr0.gt) goto loc_82B8E988;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82B8E84C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b8e890
	if (!ctx.cr6.gt) goto loc_82B8E890;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8E85C:
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r4.u8);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82b8e85c
	if (!ctx.cr0.eq) goto loc_82B8E85C;
loc_82B8E890:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82b8e84c
	if (!ctx.cr0.eq) goto loc_82B8E84C;
	// b 0x82b8e988
	goto loc_82B8E988;
loc_82B8E8A0:
	// bl 0x82b8bea0
	ctx.lr = 0x82B8E8A4;
	sub_82B8BEA0(ctx, base);
	// lwz r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// addi r11,r16,3
	ctx.r11.s64 = ctx.r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = ctx.r18.s64 + 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r8,r9,r14
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r14.u32);
	// rotlwi r6,r8,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r10,r3,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// ble 0x82b8e99c
	if (!ctx.cr0.gt) goto loc_82B8E99C;
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82B8E8E0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b8e904
	if (!ctx.cr6.gt) goto loc_82B8E904;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82B8E8F0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82b8e8f0
	if (!ctx.cr0.eq) goto loc_82B8E8F0;
loc_82B8E904:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x82b8e8e0
	if (!ctx.cr0.eq) goto loc_82B8E8E0;
	// b 0x82b8e99c
	goto loc_82B8E99C;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8d010
	ctx.lr = 0x82B8E94C;
	sub_82B8D010(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8d010
	ctx.lr = 0x82B8E988;
	sub_82B8D010(ctx, base);
loc_82B8E988:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b8ebb8
	if (ctx.cr6.eq) goto loc_82B8EBB8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82b8ebb8
	if (ctx.cr6.eq) goto loc_82B8EBB8;
loc_82B8E99C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// blt cr6,0x82b8e634
	if (ctx.cr6.lt) goto loc_82B8E634;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8E9B4:
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-5680
	ctx.r12.s64 = ctx.r12.s64 + -5680;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r21,-5648(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5648);
	// lwz r21,-5648(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5648);
	// lwz r21,-5636(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5636);
	// lwz r21,-5648(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5648);
	// lwz r21,-5648(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5648);
	// lwz r21,-5636(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5636);
	// lwz r21,-5624(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5624);
	// lwz r21,-5616(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5616);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82b8ea18
	goto loc_82B8EA18;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82b8ea18
	goto loc_82B8EA18;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82b8ea14
	goto loc_82B8EA14;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B8EA14:
	// li r31,4
	ctx.r31.s64 = 4;
loc_82B8EA18:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b8ebb8
	if (!ctx.cr6.gt) goto loc_82B8EBB8;
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r28,420(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// lwz r22,412(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// lwz r21,404(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// lwz r23,396(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r27,r31,-1
	ctx.r27.s64 = ctx.r31.s64 + -1;
	// addi r26,r9,-7800
	ctx.r26.s64 = ctx.r9.s64 + -7800;
	// addi r25,r10,-7764
	ctx.r25.s64 = ctx.r10.s64 + -7764;
	// addi r24,r11,-7728
	ctx.r24.s64 = ctx.r11.s64 + -7728;
loc_82B8EA5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82b8eba4
	if (ctx.cr6.gt) goto loc_82B8EBA4;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-5500
	ctx.r12.s64 = ctx.r12.s64 + -5500;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
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
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5464);
	// lwz r21,-5464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5464);
	// lwz r21,-5464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5464);
	// lwz r21,-5404(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5404);
	// lwz r21,-5356(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5356);
	// lwz r21,-5212(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5212);
	// lwz r21,-5288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5288);
	// lwz r21,-5288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5288);
	// lwz r21,-5288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5288);
loc_82B8EAA8:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8d010
	ctx.lr = 0x82B8EAE0;
	sub_82B8D010(ctx, base);
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EAE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82b8dfa0
	ctx.lr = 0x82B8EB10;
	sub_82B8DFA0(ctx, base);
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EB14:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82b8eba4
	if (!ctx.cr6.gt) goto loc_82B8EBA4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
loc_82B8EB24:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82b8eb48
	if (!ctx.cr6.gt) goto loc_82B8EB48;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82B8EB34:
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne 0x82b8eb34
	if (!ctx.cr0.eq) goto loc_82B8EB34;
loc_82B8EB48:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r15
	ctx.r9.u64 = ctx.r9.u64 + ctx.r15.u64;
	// bne 0x82b8eb24
	if (!ctx.cr0.eq) goto loc_82B8EB24;
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EB58:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// ble cr6,0x82b8eba4
	if (!ctx.cr6.gt) goto loc_82B8EBA4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_82B8EB70:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82b8eb98
	if (!ctx.cr6.gt) goto loc_82B8EB98;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r27.s64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82B8EB84:
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne 0x82b8eb84
	if (!ctx.cr0.eq) goto loc_82B8EB84;
loc_82B8EB98:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r8,r8,r15
	ctx.r8.u64 = ctx.r8.u64 + ctx.r15.u64;
	// bne 0x82b8eb70
	if (!ctx.cr0.eq) goto loc_82B8EB70;
loc_82B8EBA4:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82b8ea5c
	if (!ctx.cr0.eq) goto loc_82B8EA5C;
loc_82B8EBB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8EBC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8EBD0"))) PPC_WEAK_FUNC(sub_82B8EBD0);
PPC_FUNC_IMPL(__imp__sub_82B8EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82B8EBD8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22464
	ctx.r9.s64 = ctx.r10.s64 + -22464;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r28,r31,220
	ctx.r28.s64 = ctx.r31.s64 + 220;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// addi r26,r31,292
	ctx.r26.s64 = ctx.r31.s64 + 292;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// sth r11,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r11.u16);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// sth r11,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r11.u16);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// sth r11,288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 288, ctx.r11.u16);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// sth r11,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r11.u16);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// addi r25,r31,328
	ctx.r25.s64 = ctx.r31.s64 + 328;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED28;
	sub_82B8BA70(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED34;
	sub_82B8BA70(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED40;
	sub_82B8BA70(ctx, base);
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r8,-7800
	ctx.r3.s64 = ctx.r8.s64 + -7800;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED50;
	sub_82B8BA70(ctx, base);
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r7,-7764
	ctx.r3.s64 = ctx.r7.s64 + -7764;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED60;
	sub_82B8BA70(ctx, base);
	// lis r6,-31924
	ctx.r6.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r6,-7728
	ctx.r3.s64 = ctx.r6.s64 + -7728;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED70;
	sub_82B8BA70(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED7C;
	sub_82B8BA70(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED88;
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b8ba70
	ctx.lr = 0x82B8ED94;
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b8fbe0
	ctx.lr = 0x82B8EDA0;
	sub_82B8FBE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82B8EDAC"))) PPC_WEAK_FUNC(sub_82B8EDAC);
PPC_FUNC_IMPL(__imp__sub_82B8EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8EDB0"))) PPC_WEAK_FUNC(sub_82B8EDB0);
PPC_FUNC_IMPL(__imp__sub_82B8EDB0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// addi r10,r11,-22464
	ctx.r10.s64 = ctx.r11.s64 + -22464;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b8ede8
	if (ctx.cr6.eq) goto loc_82B8EDE8;
	// bl 0x8221be68
	ctx.lr = 0x82B8EDE8;
	sub_8221BE68(ctx, base);
loc_82B8EDE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE00;
	sub_82B8C170(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE08;
	sub_82B8C170(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE10;
	sub_82B8C170(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE18;
	sub_82B8C170(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE20;
	sub_82B8C170(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE28;
	sub_82B8C170(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE30;
	sub_82B8C170(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE38;
	sub_82B8C170(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82b8c170
	ctx.lr = 0x82B8EE40;
	sub_82B8C170(ctx, base);
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

__attribute__((alias("__imp__sub_82B8EE58"))) PPC_WEAK_FUNC(sub_82B8EE58);
PPC_FUNC_IMPL(__imp__sub_82B8EE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82B8EE60;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r8,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x82b876d8
	ctx.lr = 0x82B8EE94;
	sub_82B876D8(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r11,-9848
	ctx.r29.s64 = ctx.r11.s64 + -9848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r8,r29,108
	ctx.r8.s64 = ctx.r29.s64 + 108;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,26,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// rlwinm r6,r7,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// addic. r8,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r8.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82b8f210
	if (ctx.cr0.eq) goto loc_82B8F210;
	// beq cr6,0x82b8efc4
	if (ctx.cr6.eq) goto loc_82B8EFC4;
loc_82B8EECC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f210
	if (ctx.cr6.eq) goto loc_82B8F210;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B8EEEC;
	sub_82CA2C60(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
loc_82B8EEF4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8ef98
	if (ctx.cr6.eq) goto loc_82B8EF98;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b87648
	ctx.lr = 0x82B8EF18;
	sub_82B87648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b876d8
	ctx.lr = 0x82B8EF24;
	sub_82B876D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mulli r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 * 112;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,8(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r7,r6,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82B8EF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r5,r4,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	ctx.lr = 0x82B8EF88;
	sub_822C2628(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x82b8eef4
	if (ctx.cr6.lt) goto loc_82B8EEF4;
loc_82B8EF98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r11,r10,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b8eecc
	if (ctx.cr6.lt) goto loc_82B8EECC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8EFC4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// addi r22,r10,-3516
	ctx.r22.s64 = ctx.r10.s64 + -3516;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r21,r9,7532
	ctx.r21.s64 = ctx.r9.s64 + 7532;
loc_82B8EFE4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f210
	if (ctx.cr6.eq) goto loc_82B8F210;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82B8F004;
	sub_82CA2C60(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r27,r1,256
	ctx.r27.s64 = ctx.r1.s64 + 256;
loc_82B8F00C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f1f0
	if (ctx.cr6.eq) goto loc_82B8F1F0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b921e0
	ctx.lr = 0x82B8F028;
	sub_82B921E0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821f9f40
	ctx.lr = 0x82B8F044;
	sub_821F9F40(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821faaa0
	ctx.lr = 0x82B8F054;
	sub_821FAAA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b876d8
	ctx.lr = 0x82B8F060;
	sub_82B876D8(ctx, base);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,492(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// mulli r6,r7,112
	ctx.r6.s64 = ctx.r7.s64 * 112;
	// lwz r24,216(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r23,220(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r16,r6,r29
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// rlwinm r6,r4,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// divw r4,r8,r11
	ctx.r4.s32 = ctx.r8.s32 / ctx.r11.s32;
	// mullw r15,r7,r6
	ctx.r15.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r14,r4,r15
	ctx.r14.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// twllei r11,0
	// twllei r11,0
	// twlgei r8,-1
	// twlgei r7,-1
	// bl 0x82be4ec0
	ctx.lr = 0x82B8F0F8;
	sub_82BE4EC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82B8F10C;
	sub_82CA3190(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82b876d8
	ctx.lr = 0x82B8F118;
	sub_82B876D8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mulli r4,r6,112
	ctx.r4.s64 = ctx.r6.s64 * 112;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r14,132(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,8(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r7,r4,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82B8F160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b7b870
	ctx.lr = 0x82B8F174;
	sub_82B7B870(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// clrlwi r6,r16,26
	ctx.r6.u64 = ctx.r16.u32 & 0x3F;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x830060b8
	ctx.lr = 0x82B8F1A0;
	sub_830060B8(ctx, base);
	// lwz r3,24(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	ctx.lr = 0x82B8F1B8;
	sub_822C2628(ctx, base);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82be4f60
	ctx.lr = 0x82B8F1C4;
	sub_82BE4F60(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x821fc1f0
	ctx.lr = 0x82B8F1D8;
	sub_821FC1F0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x82b8f00c
	if (ctx.cr6.lt) goto loc_82B8F00C;
loc_82B8F1F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r11,r10,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b8efe4
	if (ctx.cr6.lt) goto loc_82B8EFE4;
loc_82B8F210:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F21C"))) PPC_WEAK_FUNC(sub_82B8F21C);
PPC_FUNC_IMPL(__imp__sub_82B8F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F220"))) PPC_WEAK_FUNC(sub_82B8F220);
PPC_FUNC_IMPL(__imp__sub_82B8F220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82B8F228;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82b876d8
	ctx.lr = 0x82B8F25C;
	sub_82B876D8(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,-9848
	ctx.r28.s64 = ctx.r11.s64 + -9848;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// addi r8,r28,108
	ctx.r8.s64 = ctx.r28.s64 + 108;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r7,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b8f354
	if (ctx.cr6.eq) goto loc_82B8F354;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,26,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addic. r8,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r8.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b8f55c
	if (ctx.cr0.eq) goto loc_82B8F55C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82B8F298:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f55c
	if (ctx.cr6.eq) goto loc_82B8F55C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228ff90
	ctx.lr = 0x82B8F2B8;
	sub_8228FF90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82b876d8
	ctx.lr = 0x82B8F2C8;
	sub_82B876D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82b8f5e8
	ctx.lr = 0x82B8F2D8;
	sub_82B8F5E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B8F308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r5,r9,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r8,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	ctx.lr = 0x82B8F328;
	sub_822C2628(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// rlwinm r11,r6,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82b8f298
	if (ctx.cr6.lt) goto loc_82B8F298;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82B8F354:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// addic. r9,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b8f55c
	if (ctx.cr0.eq) goto loc_82B8F55C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r19,r11,-1124
	ctx.r19.s64 = ctx.r11.s64 + -1124;
	// addi r25,r10,-3516
	ctx.r25.s64 = ctx.r10.s64 + -3516;
	// addi r24,r9,7532
	ctx.r24.s64 = ctx.r9.s64 + 7532;
loc_82B8F380:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f55c
	if (ctx.cr6.eq) goto loc_82B8F55C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b920f0
	ctx.lr = 0x82B8F394;
	sub_82B920F0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821f9f40
	ctx.lr = 0x82B8F3B0;
	sub_821F9F40(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821faaa0
	ctx.lr = 0x82B8F3C0;
	sub_821FAAA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b876d8
	ctx.lr = 0x82B8F3CC;
	sub_82B876D8(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r23,200(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// add r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 + ctx.r11.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r6,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwzx r16,r7,r28
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// divw r7,r4,r11
	ctx.r7.s32 = ctx.r4.s32 / ctx.r11.s32;
	// divw r4,r8,r11
	ctx.r4.s32 = ctx.r8.s32 / ctx.r11.s32;
	// mullw r15,r7,r6
	ctx.r15.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r14,r4,r15
	ctx.r14.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// twllei r11,0
	// twllei r11,0
	// twlgei r8,-1
	// twlgei r7,-1
	// bl 0x82be4ec0
	ctx.lr = 0x82B8F460;
	sub_82BE4EC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82B8F474;
	sub_82CA3190(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b876d8
	ctx.lr = 0x82B8F480;
	sub_82B876D8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mulli r4,r6,112
	ctx.r4.s64 = ctx.r6.s64 * 112;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r22,8(r5)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r7,r4,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x82B8F4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b7b870
	ctx.lr = 0x82B8F4D4;
	sub_82B7B870(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// clrlwi r6,r16,26
	ctx.r6.u64 = ctx.r16.u32 & 0x3F;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x830060b8
	ctx.lr = 0x82B8F500;
	sub_830060B8(ctx, base);
	// lwz r3,24(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	ctx.lr = 0x82B8F518;
	sub_822C2628(ctx, base);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x82be4f60
	ctx.lr = 0x82B8F52C;
	sub_82BE4F60(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x821fc1f0
	ctx.lr = 0x82B8F53C;
	sub_821FC1F0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r9,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b8f380
	if (ctx.cr6.lt) goto loc_82B8F380;
loc_82B8F55C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F568"))) PPC_WEAK_FUNC(sub_82B8F568);
PPC_FUNC_IMPL(__imp__sub_82B8F568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B8F570;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
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
	ctx.r10.s64 = ctx.r11.s64 + 328;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r29,r11,220
	ctx.r29.s64 = ctx.r11.s64 + 220;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r10,r11,184
	ctx.r10.s64 = ctx.r11.s64 + 184;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r31,r11,148
	ctx.r31.s64 = ctx.r11.s64 + 148;
	// addi r30,r11,112
	ctx.r30.s64 = ctx.r11.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r28,r11,40
	ctx.r28.s64 = ctx.r11.s64 + 40;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82b8e320
	ctx.lr = 0x82B8F5E0;
	sub_82B8E320(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B8F5E8"))) PPC_WEAK_FUNC(sub_82B8F5E8);
PPC_FUNC_IMPL(__imp__sub_82B8F5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mulli r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 * 112;
	// addi r11,r11,-9848
	ctx.r11.s64 = ctx.r11.s64 + -9848;
	// addi r9,r11,108
	ctx.r9.s64 = ctx.r11.s64 + 108;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// cmplwi cr6,r10,43
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// addi r12,r12,-2512
	ctx.r12.s64 = ctx.r12.s64 + -2512;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82B8F700
		return;
	case 1:
		// ERROR: 0x82B8F70C
		return;
	case 2:
		// ERROR: 0x82B8F708
		return;
	case 3:
		// ERROR: 0x82B8F70C
		return;
	case 4:
		// ERROR: 0x82B8F70C
		return;
	case 5:
		// ERROR: 0x82B8F70C
		return;
	case 6:
		// ERROR: 0x82B8F70C
		return;
	case 7:
		// ERROR: 0x82B8F70C
		return;
	case 8:
		// ERROR: 0x82B8F70C
		return;
	case 9:
		// ERROR: 0x82B8F70C
		return;
	case 10:
		// ERROR: 0x82B8F70C
		return;
	case 11:
		// ERROR: 0x82B8F70C
		return;
	case 12:
		// ERROR: 0x82B8F70C
		return;
	case 13:
		// ERROR: 0x82B8F70C
		return;
	case 14:
		// ERROR: 0x82B8F70C
		return;
	case 15:
		// ERROR: 0x82B8F70C
		return;
	case 16:
		// ERROR: 0x82B8F70C
		return;
	case 17:
		// ERROR: 0x82B8F70C
		return;
	case 18:
		// ERROR: 0x82B8F70C
		return;
	case 19:
		// ERROR: 0x82B8F70C
		return;
	case 20:
		// ERROR: 0x82B8F70C
		return;
	case 21:
		// ERROR: 0x82B8F70C
		return;
	case 22:
		// ERROR: 0x82B8F70C
		return;
	case 23:
		// ERROR: 0x82B8F70C
		return;
	case 24:
		// ERROR: 0x82B8F70C
		return;
	case 25:
		// ERROR: 0x82B8F70C
		return;
	case 26:
		// ERROR: 0x82B8F70C
		return;
	case 27:
		// ERROR: 0x82B8F70C
		return;
	case 28:
		// ERROR: 0x82B8F70C
		return;
	case 29:
		// ERROR: 0x82B8F70C
		return;
	case 30:
		// ERROR: 0x82B8F70C
		return;
	case 31:
		// ERROR: 0x82B8F70C
		return;
	case 32:
		// ERROR: 0x82B8F70C
		return;
	case 33:
		// ERROR: 0x82B8F70C
		return;
	case 34:
		// ERROR: 0x82B8F70C
		return;
	case 35:
		// ERROR: 0x82B8F70C
		return;
	case 36:
		// ERROR: 0x82B8F70C
		return;
	case 37:
		// ERROR: 0x82B8F70C
		return;
	case 38:
		// ERROR: 0x82B8F6E0
		return;
	case 39:
		// ERROR: 0x82B8F70C
		return;
	case 40:
		// ERROR: 0x82B8F6E8
		return;
	case 41:
		// ERROR: 0x82B8F70C
		return;
	case 42:
		// ERROR: 0x82B8F6F0
		return;
	case 43:
		// ERROR: 0x82B8F6F8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B8F630"))) PPC_WEAK_FUNC(sub_82B8F630);
PPC_FUNC_IMPL(__imp__sub_82B8F630) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-2304(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2304);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2296(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2296);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2336(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2336);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2328(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2328);
	// lwz r21,-2292(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2292);
	// lwz r21,-2320(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2320);
	// lwz r21,-2312(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2312);
	// lwz r3,3920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F6E8"))) PPC_WEAK_FUNC(sub_82B8F6E8);
PPC_FUNC_IMPL(__imp__sub_82B8F6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F6F0"))) PPC_WEAK_FUNC(sub_82B8F6F0);
PPC_FUNC_IMPL(__imp__sub_82B8F6F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4368);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F6F8"))) PPC_WEAK_FUNC(sub_82B8F6F8);
PPC_FUNC_IMPL(__imp__sub_82B8F6F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4480);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F700"))) PPC_WEAK_FUNC(sub_82B8F700);
PPC_FUNC_IMPL(__imp__sub_82B8F700) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F708"))) PPC_WEAK_FUNC(sub_82B8F708);
PPC_FUNC_IMPL(__imp__sub_82B8F708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F710"))) PPC_WEAK_FUNC(sub_82B8F710);
PPC_FUNC_IMPL(__imp__sub_82B8F710) {
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
	// bl 0x82b8edb0
	ctx.lr = 0x82B8F730;
	sub_82B8EDB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f748
	if (ctx.cr6.eq) goto loc_82B8F748;
	// bl 0x8221be68
	ctx.lr = 0x82B8F744;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8F748:
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

__attribute__((alias("__imp__sub_82B8F760"))) PPC_WEAK_FUNC(sub_82B8F760);
PPC_FUNC_IMPL(__imp__sub_82B8F760) {
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
	// bl 0x82b8bea0
	ctx.lr = 0x82B8F774;
	sub_82B8BEA0(ctx, base);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r3,28508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b8f7a4
	if (!ctx.cr6.eq) goto loc_82B8F7A4;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8221f388
	ctx.lr = 0x82B8F78C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b8f79c
	if (ctx.cr6.eq) goto loc_82B8F79C;
	// bl 0x82b8ebd0
	ctx.lr = 0x82B8F798;
	sub_82B8EBD0(ctx, base);
	// b 0x82b8f7a0
	goto loc_82B8F7A0;
loc_82B8F79C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8F7A0:
	// stw r3,28508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28508, ctx.r3.u32);
loc_82B8F7A4:
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

__attribute__((alias("__imp__sub_82B8F7B8"))) PPC_WEAK_FUNC(sub_82B8F7B8);
PPC_FUNC_IMPL(__imp__sub_82B8F7B8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8f7e0
	if (!ctx.cr6.eq) goto loc_82B8F7E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8f7ec
	goto loc_82B8F7EC;
loc_82B8F7E0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
loc_82B8F7EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r10,r8
	ctx.r8.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b8f838
	if (!ctx.cr6.lt) goto loc_82B8F838;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f820
	if (ctx.cr6.eq) goto loc_82B8F820;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82B8F820:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B8F838:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b90080
	ctx.lr = 0x82B8F850;
	sub_82B90080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F860"))) PPC_WEAK_FUNC(sub_82B8F860);
PPC_FUNC_IMPL(__imp__sub_82B8F860) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b8f88c
	if (!ctx.cr6.eq) goto loc_82B8F88C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8f898
	goto loc_82B8F898;
loc_82B8F88C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
loc_82B8F898:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82b8f8c8
	if (!ctx.cr6.lt) goto loc_82B8F8C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8f8bc
	if (ctx.cr6.eq) goto loc_82B8F8BC;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82B8F8BC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82b8f8e4
	goto loc_82B8F8E4;
loc_82B8F8C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b90450
	ctx.lr = 0x82B8F8E4;
	sub_82B90450(ctx, base);
loc_82B8F8E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82b8f9e0
	if (ctx.cr6.eq) goto loc_82B8F9E0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r3,7116(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7116);
	// beq cr6,0x82b8f970
	if (ctx.cr6.eq) goto loc_82B8F970;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r4,r9,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82b8f9e0
	if (ctx.cr6.lt) goto loc_82B8F9E0;
	// lhzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// sthx r9,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u16);
	// sthx r8,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u16);
loc_82B8F970:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8f9e0
	if (ctx.cr6.eq) goto loc_82B8F9E0;
loc_82B8F978:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r4,r7,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b8f9e0
	if (ctx.cr6.lt) goto loc_82B8F9E0;
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// sthx r9,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u16);
	// sthx r8,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u16);
	// bne cr6,0x82b8f978
	if (!ctx.cr6.eq) goto loc_82B8F978;
loc_82B8F9E0:
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

__attribute__((alias("__imp__sub_82B8F9F4"))) PPC_WEAK_FUNC(sub_82B8F9F4);
PPC_FUNC_IMPL(__imp__sub_82B8F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F9F8"))) PPC_WEAK_FUNC(sub_82B8F9F8);
PPC_FUNC_IMPL(__imp__sub_82B8F9F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B8FA00;
	sub_82CA2BE8(ctx, base);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lhz r5,-2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + -2);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b8fa48
	if (ctx.cr6.eq) goto loc_82B8FA48;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82B8FA48:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b8fbdc
	if (ctx.cr6.eq) goto loc_82B8FBDC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,7116(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7116);
loc_82B8FA68:
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b8fa84
	if (!ctx.cr6.eq) goto loc_82B8FA84;
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
loc_82B8FA84:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b8fb70
	if (!ctx.cr6.lt) goto loc_82B8FB70;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82b8fb10
	if (!ctx.cr6.lt) goto loc_82B8FB10;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82b8fbdc
	if (ctx.cr6.lt) goto loc_82B8FBDC;
loc_82B8FB10:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82b8fb58
	if (!ctx.cr6.lt) goto loc_82B8FB58;
	// lhzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lhzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
	// sthx r7,r28,r11
	PPC_STORE_U16(ctx.r28.u32 + ctx.r11.u32, ctx.r7.u16);
	// b 0x82b8fa68
	goto loc_82B8FA68;
loc_82B8FB58:
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lhz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// sthx r8,r28,r11
	PPC_STORE_U16(ctx.r28.u32 + ctx.r11.u32, ctx.r8.u16);
	// b 0x82b8fa68
	goto loc_82B8FA68;
loc_82B8FB70:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b8fbdc
	if (!ctx.cr6.lt) goto loc_82B8FBDC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b8fbdc
	if (ctx.cr6.lt) goto loc_82B8FBDC;
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// sthx r10,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u16);
	// sthx r9,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u16);
loc_82B8FBDC:
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B8FBE0"))) PPC_WEAK_FUNC(sub_82B8FBE0);
PPC_FUNC_IMPL(__imp__sub_82B8FBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82B8FBE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8fc10
	if (ctx.cr6.eq) goto loc_82B8FC10;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82b8fca0
	if (!ctx.cr6.lt) goto loc_82B8FCA0;
loc_82B8FC10:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b903d8
	ctx.lr = 0x82B8FC1C;
	sub_82B903D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82b8fc6c
	if (ctx.cr6.eq) goto loc_82B8FC6C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B8FC4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8fc5c
	if (ctx.cr6.eq) goto loc_82B8FC5C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_82B8FC5C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b8fc4c
	if (!ctx.cr6.eq) goto loc_82B8FC4C;
loc_82B8FC6C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 1;
	// beq cr6,0x82b8fc88
	if (ctx.cr6.eq) goto loc_82B8FC88;
	// bl 0x8221be68
	ctx.lr = 0x82B8FC88;
	sub_8221BE68(ctx, base);
loc_82B8FC88:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r10,r29,512
	ctx.r10.s64 = ctx.r29.s64 + 512;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82B8FCA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82B8FCA8"))) PPC_WEAK_FUNC(sub_82B8FCA8);
PPC_FUNC_IMPL(__imp__sub_82B8FCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82B8FCB0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bne cr6,0x82b8fcf8
	if (!ctx.cr6.eq) goto loc_82B8FCF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8fd04
	goto loc_82B8FD04;
loc_82B8FCF8:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82B8FD04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b90078
	if (ctx.cr6.eq) goto loc_82B90078;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b8fd38
	if (!ctx.cr6.lt) goto loc_82B8FD38;
	// bl 0x82a97648
	ctx.lr = 0x82B8FD30;
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B8FD38:
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b8fea8
	if (!ctx.cr6.lt) goto loc_82B8FEA8;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b8fd5c
	if (ctx.cr6.lt) goto loc_82B8FD5C;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B8FD5C:
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b8fd68
	if (!ctx.cr6.lt) goto loc_82B8FD68;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_82B8FD68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6ddf8
	ctx.lr = 0x82B8FD74;
	sub_82B6DDF8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82b8fdc4
	if (ctx.cr6.eq) goto loc_82B8FDC4;
loc_82B8FD8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8fdb4
	if (ctx.cr6.eq) goto loc_82B8FDB4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82B8FDB4:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b8fd8c
	if (!ctx.cr6.eq) goto loc_82B8FD8C;
loc_82B8FDC4:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b8fe0c
	if (ctx.cr6.eq) goto loc_82B8FE0C;
loc_82B8FDD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8fe00
	if (ctx.cr6.eq) goto loc_82B8FE00;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
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
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82b8fdd4
	if (!ctx.cr0.eq) goto loc_82B8FDD4;
loc_82B8FE0C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b8fe64
	if (ctx.cr6.eq) goto loc_82B8FE64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82B8FE2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8fe54
	if (ctx.cr6.eq) goto loc_82B8FE54;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82B8FE54:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b8fe2c
	if (!ctx.cr6.eq) goto loc_82B8FE2C;
loc_82B8FE64:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82b8fe84
	if (ctx.cr6.eq) goto loc_82B8FE84;
	// bl 0x8221be68
	ctx.lr = 0x82B8FE84;
	sub_8221BE68(ctx, base);
loc_82B8FE84:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B8FEA8:
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b8ffa8
	if (!ctx.cr6.lt) goto loc_82B8FFA8;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// beq cr6,0x82b8ff08
	if (ctx.cr6.eq) goto loc_82B8FF08;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82B8FED0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8fef8
	if (ctx.cr6.eq) goto loc_82B8FEF8;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82B8FEF8:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b8fed0
	if (!ctx.cr6.eq) goto loc_82B8FED0;
loc_82B8FF08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// subf. r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b8ff54
	if (ctx.cr0.eq) goto loc_82B8FF54;
loc_82B8FF1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b8ff48
	if (ctx.cr6.eq) goto loc_82B8FF48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82B8FF48:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82b8ff1c
	if (!ctx.cr0.eq) goto loc_82B8FF1C;
loc_82B8FF54:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b90078
	if (ctx.cr6.eq) goto loc_82B90078;
loc_82B8FF70:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b8ff70
	if (!ctx.cr6.eq) goto loc_82B8FF70;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82B8FFA8:
	// rlwinm r6,r31,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b8fff8
	if (ctx.cr6.eq) goto loc_82B8FFF8;
loc_82B8FFC0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b8ffe8
	if (ctx.cr6.eq) goto loc_82B8FFE8;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82B8FFE8:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b8ffc0
	if (!ctx.cr6.eq) goto loc_82B8FFC0;
loc_82B8FFF8:
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b90038
	if (ctx.cr6.eq) goto loc_82B90038;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_82B90008:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// bne cr6,0x82b90008
	if (!ctx.cr6.eq) goto loc_82B90008;
loc_82B90038:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b90078
	if (ctx.cr6.eq) goto loc_82B90078;
loc_82B90048:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b90048
	if (!ctx.cr6.eq) goto loc_82B90048;
loc_82B90078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82B90080"))) PPC_WEAK_FUNC(sub_82B90080);
PPC_FUNC_IMPL(__imp__sub_82B90080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82B90088;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r25,4(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r24,8(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r27,12
	ctx.r27.s64 = 12;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b900bc
	if (!ctx.cr6.eq) goto loc_82B900BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b900c8
	goto loc_82B900C8;
loc_82B900BC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_82B900C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b903cc
	if (ctx.cr6.eq) goto loc_82B903CC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// divw r11,r7,r27
	ctx.r11.s32 = ctx.r7.s32 / ctx.r27.s32;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b900fc
	if (!ctx.cr6.lt) goto loc_82B900FC;
	// bl 0x82a97648
	ctx.lr = 0x82B900F4;
	sub_82A97648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82B900FC:
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b9025c
	if (!ctx.cr6.lt) goto loc_82B9025C;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b90120
	if (ctx.cr6.lt) goto loc_82B90120;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B90120:
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b9012c
	if (!ctx.cr6.lt) goto loc_82B9012C;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_82B9012C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b7ffa8
	ctx.lr = 0x82B90138;
	sub_82B7FFA8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x82b90180
	if (ctx.cr6.eq) goto loc_82B90180;
loc_82B90150:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b90170
	if (ctx.cr6.eq) goto loc_82B90170;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_82B90170:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b90150
	if (!ctx.cr6.eq) goto loc_82B90150;
loc_82B90180:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b901b0
	if (ctx.cr6.eq) goto loc_82B901B0;
loc_82B90190:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b901a4
	if (ctx.cr6.eq) goto loc_82B901A4;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
loc_82B901A4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82b90190
	if (!ctx.cr0.eq) goto loc_82B90190;
loc_82B901B0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82b90208
	if (ctx.cr6.eq) goto loc_82B90208;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82B901D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b901f8
	if (ctx.cr6.eq) goto loc_82B901F8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_82B901F8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b901d8
	if (!ctx.cr6.eq) goto loc_82B901D8;
loc_82B90208:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r10,r27
	ctx.r11.s32 = ctx.r10.s32 / ctx.r27.s32;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82b90228
	if (ctx.cr6.eq) goto loc_82B90228;
	// bl 0x8221be68
	ctx.lr = 0x82B90228;
	sub_8221BE68(ctx, base);
loc_82B90228:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82B9025C:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r9,r10,r27
	ctx.r9.s32 = ctx.r10.s32 / ctx.r27.s32;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bge cr6,0x82b90328
	if (!ctx.cr6.lt) goto loc_82B90328;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x82b902bc
	if (ctx.cr6.eq) goto loc_82B902BC;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_82B9028C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b902ac
	if (ctx.cr6.eq) goto loc_82B902AC;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_82B902AC:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b9028c
	if (!ctx.cr6.eq) goto loc_82B9028C;
loc_82B902BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = ctx.r9.s32 / ctx.r27.s32;
	// subf. r9,r8,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b902f0
	if (ctx.cr0.eq) goto loc_82B902F0;
loc_82B902D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b902e4
	if (ctx.cr6.eq) goto loc_82B902E4;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
loc_82B902E4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82b902d0
	if (!ctx.cr0.eq) goto loc_82B902D0;
loc_82B902F0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b903cc
	if (ctx.cr6.eq) goto loc_82B903CC;
loc_82B90308:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b90308
	if (!ctx.cr6.eq) goto loc_82B90308;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82B90328:
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b90370
	if (ctx.cr6.eq) goto loc_82B90370;
loc_82B90340:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b90360
	if (ctx.cr6.eq) goto loc_82B90360;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
loc_82B90360:
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b90340
	if (!ctx.cr6.eq) goto loc_82B90340;
loc_82B90370:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b903a8
	if (ctx.cr6.eq) goto loc_82B903A8;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_82B90380:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// bne cr6,0x82b90380
	if (!ctx.cr6.eq) goto loc_82B90380;
loc_82B903A8:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b903cc
	if (ctx.cr6.eq) goto loc_82B903CC;
loc_82B903B4:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b903b4
	if (!ctx.cr6.eq) goto loc_82B903B4;
loc_82B903CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82B903D4"))) PPC_WEAK_FUNC(sub_82B903D4);
PPC_FUNC_IMPL(__imp__sub_82B903D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B903D8"))) PPC_WEAK_FUNC(sub_82B903D8);
PPC_FUNC_IMPL(__imp__sub_82B903D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b90430
	if (ctx.cr6.eq) goto loc_82B90430;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x82b90430
	if (!ctx.cr6.lt) goto loc_82B90430;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = ctx.r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82B90424;
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82B90430:
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8221f388
	ctx.lr = 0x82B90438;
	sub_8221F388(ctx, base);
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

__attribute__((alias("__imp__sub_82B9044C"))) PPC_WEAK_FUNC(sub_82B9044C);
PPC_FUNC_IMPL(__imp__sub_82B9044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90450"))) PPC_WEAK_FUNC(sub_82B90450);
PPC_FUNC_IMPL(__imp__sub_82B90450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82B90458;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b90480
	if (!ctx.cr6.eq) goto loc_82B90480;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b9048c
	goto loc_82B9048C;
loc_82B90480:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
loc_82B9048C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b90704
	if (ctx.cr6.eq) goto loc_82B90704;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b904c0
	if (!ctx.cr6.lt) goto loc_82B904C0;
	// bl 0x82a97648
	ctx.lr = 0x82B904B8;
	sub_82A97648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B904C0:
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b905e0
	if (!ctx.cr6.lt) goto loc_82B905E0;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82b904e4
	if (ctx.cr6.lt) goto loc_82B904E4;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82B904E4:
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82b904f0
	if (!ctx.cr6.lt) goto loc_82B904F0;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_82B904F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b903d8
	ctx.lr = 0x82B904FC;
	sub_82B903D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x82b90534
	if (ctx.cr6.eq) goto loc_82B90534;
loc_82B90514:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b90524
	if (ctx.cr6.eq) goto loc_82B90524;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
loc_82B90524:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82b90514
	if (!ctx.cr6.eq) goto loc_82B90514;
loc_82B90534:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b9055c
	if (ctx.cr6.eq) goto loc_82B9055C;
loc_82B90544:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b90550
	if (ctx.cr6.eq) goto loc_82B90550;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
loc_82B90550:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82b90544
	if (!ctx.cr0.eq) goto loc_82B90544;
loc_82B9055C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b9059c
	if (ctx.cr6.eq) goto loc_82B9059C;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82B9057C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b9058c
	if (ctx.cr6.eq) goto loc_82B9058C;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_82B9058C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b9057c
	if (!ctx.cr6.eq) goto loc_82B9057C;
loc_82B9059C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82b905bc
	if (ctx.cr6.eq) goto loc_82B905BC;
	// bl 0x8221be68
	ctx.lr = 0x82B905BC;
	sub_8221BE68(ctx, base);
loc_82B905BC:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B905E0:
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b90688
	if (!ctx.cr6.lt) goto loc_82B90688;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x82b90628
	if (ctx.cr6.eq) goto loc_82B90628;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82B90608:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b90618
	if (ctx.cr6.eq) goto loc_82B90618;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_82B90618:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b90608
	if (!ctx.cr6.eq) goto loc_82B90608;
loc_82B90628:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// subf. r10,r9,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b90654
	if (ctx.cr0.eq) goto loc_82B90654;
loc_82B9063C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b90648
	if (ctx.cr6.eq) goto loc_82B90648;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
loc_82B90648:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82b9063c
	if (!ctx.cr0.eq) goto loc_82B9063C;
loc_82B90654:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b90704
	if (ctx.cr6.eq) goto loc_82B90704;
loc_82B90670:
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b90670
	if (!ctx.cr6.eq) goto loc_82B90670;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82B90688:
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b906c0
	if (ctx.cr6.eq) goto loc_82B906C0;
loc_82B906A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b906b0
	if (ctx.cr6.eq) goto loc_82B906B0;
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
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b906a0
	if (!ctx.cr6.eq) goto loc_82B906A0;
loc_82B906C0:
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b906e4
	if (ctx.cr6.eq) goto loc_82B906E4;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82B906D0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bne cr6,0x82b906d0
	if (!ctx.cr6.eq) goto loc_82B906D0;
loc_82B906E4:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b90704
	if (ctx.cr6.eq) goto loc_82B90704;
loc_82B906F4:
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b906f4
	if (!ctx.cr6.eq) goto loc_82B906F4;
loc_82B90704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82B9070C"))) PPC_WEAK_FUNC(sub_82B9070C);
PPC_FUNC_IMPL(__imp__sub_82B9070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90710"))) PPC_WEAK_FUNC(sub_82B90710);
PPC_FUNC_IMPL(__imp__sub_82B90710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9071C"))) PPC_WEAK_FUNC(sub_82B9071C);
PPC_FUNC_IMPL(__imp__sub_82B9071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90720"))) PPC_WEAK_FUNC(sub_82B90720);
PPC_FUNC_IMPL(__imp__sub_82B90720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9072C"))) PPC_WEAK_FUNC(sub_82B9072C);
PPC_FUNC_IMPL(__imp__sub_82B9072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90730"))) PPC_WEAK_FUNC(sub_82B90730);
PPC_FUNC_IMPL(__imp__sub_82B90730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9073C"))) PPC_WEAK_FUNC(sub_82B9073C);
PPC_FUNC_IMPL(__imp__sub_82B9073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90740"))) PPC_WEAK_FUNC(sub_82B90740);
PPC_FUNC_IMPL(__imp__sub_82B90740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9074C"))) PPC_WEAK_FUNC(sub_82B9074C);
PPC_FUNC_IMPL(__imp__sub_82B9074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90750"))) PPC_WEAK_FUNC(sub_82B90750);
PPC_FUNC_IMPL(__imp__sub_82B90750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9075C"))) PPC_WEAK_FUNC(sub_82B9075C);
PPC_FUNC_IMPL(__imp__sub_82B9075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90760"))) PPC_WEAK_FUNC(sub_82B90760);
PPC_FUNC_IMPL(__imp__sub_82B90760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9076C"))) PPC_WEAK_FUNC(sub_82B9076C);
PPC_FUNC_IMPL(__imp__sub_82B9076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90770"))) PPC_WEAK_FUNC(sub_82B90770);
PPC_FUNC_IMPL(__imp__sub_82B90770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9077C"))) PPC_WEAK_FUNC(sub_82B9077C);
PPC_FUNC_IMPL(__imp__sub_82B9077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90780"))) PPC_WEAK_FUNC(sub_82B90780);
PPC_FUNC_IMPL(__imp__sub_82B90780) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B907DC"))) PPC_WEAK_FUNC(sub_82B907DC);
PPC_FUNC_IMPL(__imp__sub_82B907DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B907E0"))) PPC_WEAK_FUNC(sub_82B907E0);
PPC_FUNC_IMPL(__imp__sub_82B907E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B907EC"))) PPC_WEAK_FUNC(sub_82B907EC);
PPC_FUNC_IMPL(__imp__sub_82B907EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B907F0"))) PPC_WEAK_FUNC(sub_82B907F0);
PPC_FUNC_IMPL(__imp__sub_82B907F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9084C"))) PPC_WEAK_FUNC(sub_82B9084C);
PPC_FUNC_IMPL(__imp__sub_82B9084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90850"))) PPC_WEAK_FUNC(sub_82B90850);
PPC_FUNC_IMPL(__imp__sub_82B90850) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9085C"))) PPC_WEAK_FUNC(sub_82B9085C);
PPC_FUNC_IMPL(__imp__sub_82B9085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90860"))) PPC_WEAK_FUNC(sub_82B90860);
PPC_FUNC_IMPL(__imp__sub_82B90860) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B908BC"))) PPC_WEAK_FUNC(sub_82B908BC);
PPC_FUNC_IMPL(__imp__sub_82B908BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B908C0"))) PPC_WEAK_FUNC(sub_82B908C0);
PPC_FUNC_IMPL(__imp__sub_82B908C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B908CC"))) PPC_WEAK_FUNC(sub_82B908CC);
PPC_FUNC_IMPL(__imp__sub_82B908CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B908D0"))) PPC_WEAK_FUNC(sub_82B908D0);
PPC_FUNC_IMPL(__imp__sub_82B908D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne cr6,0x82b9090c
	if (!ctx.cr6.eq) goto loc_82B9090C;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82B9090C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b9091c
	if (!ctx.cr6.eq) goto loc_82B9091C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82B9091C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90954"))) PPC_WEAK_FUNC(sub_82B90954);
PPC_FUNC_IMPL(__imp__sub_82B90954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90958"))) PPC_WEAK_FUNC(sub_82B90958);
PPC_FUNC_IMPL(__imp__sub_82B90958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90964"))) PPC_WEAK_FUNC(sub_82B90964);
PPC_FUNC_IMPL(__imp__sub_82B90964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90968"))) PPC_WEAK_FUNC(sub_82B90968);
PPC_FUNC_IMPL(__imp__sub_82B90968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-27852
	ctx.r10.s64 = ctx.r11.s64 + -27852;
	// lfs f13,-27852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90990"))) PPC_WEAK_FUNC(sub_82B90990);
PPC_FUNC_IMPL(__imp__sub_82B90990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9099C"))) PPC_WEAK_FUNC(sub_82B9099C);
PPC_FUNC_IMPL(__imp__sub_82B9099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B909A0"))) PPC_WEAK_FUNC(sub_82B909A0);
PPC_FUNC_IMPL(__imp__sub_82B909A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-27852
	ctx.r10.s64 = ctx.r11.s64 + -27852;
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-27852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90A10"))) PPC_WEAK_FUNC(sub_82B90A10);
PPC_FUNC_IMPL(__imp__sub_82B90A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90A34"))) PPC_WEAK_FUNC(sub_82B90A34);
PPC_FUNC_IMPL(__imp__sub_82B90A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90A38"))) PPC_WEAK_FUNC(sub_82B90A38);
PPC_FUNC_IMPL(__imp__sub_82B90A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90A44"))) PPC_WEAK_FUNC(sub_82B90A44);
PPC_FUNC_IMPL(__imp__sub_82B90A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90A48"))) PPC_WEAK_FUNC(sub_82B90A48);
PPC_FUNC_IMPL(__imp__sub_82B90A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-19240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90A84"))) PPC_WEAK_FUNC(sub_82B90A84);
PPC_FUNC_IMPL(__imp__sub_82B90A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90A88"))) PPC_WEAK_FUNC(sub_82B90A88);
PPC_FUNC_IMPL(__imp__sub_82B90A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90AB8"))) PPC_WEAK_FUNC(sub_82B90AB8);
PPC_FUNC_IMPL(__imp__sub_82B90AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23980);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b90acc
	if (ctx.cr6.eq) goto loc_82B90ACC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82b90ad0
	goto loc_82B90AD0;
loc_82B90ACC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82B90AD0:
	// stw r11,23980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90AD8"))) PPC_WEAK_FUNC(sub_82B90AD8);
PPC_FUNC_IMPL(__imp__sub_82B90AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23980);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90AE4"))) PPC_WEAK_FUNC(sub_82B90AE4);
PPC_FUNC_IMPL(__imp__sub_82B90AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90AE8"))) PPC_WEAK_FUNC(sub_82B90AE8);
PPC_FUNC_IMPL(__imp__sub_82B90AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90AF0"))) PPC_WEAK_FUNC(sub_82B90AF0);
PPC_FUNC_IMPL(__imp__sub_82B90AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90AFC"))) PPC_WEAK_FUNC(sub_82B90AFC);
PPC_FUNC_IMPL(__imp__sub_82B90AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B00"))) PPC_WEAK_FUNC(sub_82B90B00);
PPC_FUNC_IMPL(__imp__sub_82B90B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B0C"))) PPC_WEAK_FUNC(sub_82B90B0C);
PPC_FUNC_IMPL(__imp__sub_82B90B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B10"))) PPC_WEAK_FUNC(sub_82B90B10);
PPC_FUNC_IMPL(__imp__sub_82B90B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B18"))) PPC_WEAK_FUNC(sub_82B90B18);
PPC_FUNC_IMPL(__imp__sub_82B90B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B3C"))) PPC_WEAK_FUNC(sub_82B90B3C);
PPC_FUNC_IMPL(__imp__sub_82B90B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B40"))) PPC_WEAK_FUNC(sub_82B90B40);
PPC_FUNC_IMPL(__imp__sub_82B90B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B4C"))) PPC_WEAK_FUNC(sub_82B90B4C);
PPC_FUNC_IMPL(__imp__sub_82B90B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B50"))) PPC_WEAK_FUNC(sub_82B90B50);
PPC_FUNC_IMPL(__imp__sub_82B90B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B5C"))) PPC_WEAK_FUNC(sub_82B90B5C);
PPC_FUNC_IMPL(__imp__sub_82B90B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B60"))) PPC_WEAK_FUNC(sub_82B90B60);
PPC_FUNC_IMPL(__imp__sub_82B90B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B6C"))) PPC_WEAK_FUNC(sub_82B90B6C);
PPC_FUNC_IMPL(__imp__sub_82B90B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B70"))) PPC_WEAK_FUNC(sub_82B90B70);
PPC_FUNC_IMPL(__imp__sub_82B90B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B7C"))) PPC_WEAK_FUNC(sub_82B90B7C);
PPC_FUNC_IMPL(__imp__sub_82B90B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B80"))) PPC_WEAK_FUNC(sub_82B90B80);
PPC_FUNC_IMPL(__imp__sub_82B90B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90B8C"))) PPC_WEAK_FUNC(sub_82B90B8C);
PPC_FUNC_IMPL(__imp__sub_82B90B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90B90"))) PPC_WEAK_FUNC(sub_82B90B90);
PPC_FUNC_IMPL(__imp__sub_82B90B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90BAC"))) PPC_WEAK_FUNC(sub_82B90BAC);
PPC_FUNC_IMPL(__imp__sub_82B90BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90BB0"))) PPC_WEAK_FUNC(sub_82B90BB0);
PPC_FUNC_IMPL(__imp__sub_82B90BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90BBC"))) PPC_WEAK_FUNC(sub_82B90BBC);
PPC_FUNC_IMPL(__imp__sub_82B90BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90BC0"))) PPC_WEAK_FUNC(sub_82B90BC0);
PPC_FUNC_IMPL(__imp__sub_82B90BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90BE4"))) PPC_WEAK_FUNC(sub_82B90BE4);
PPC_FUNC_IMPL(__imp__sub_82B90BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90BE8"))) PPC_WEAK_FUNC(sub_82B90BE8);
PPC_FUNC_IMPL(__imp__sub_82B90BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90BF4"))) PPC_WEAK_FUNC(sub_82B90BF4);
PPC_FUNC_IMPL(__imp__sub_82B90BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90BF8"))) PPC_WEAK_FUNC(sub_82B90BF8);
PPC_FUNC_IMPL(__imp__sub_82B90BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C1C"))) PPC_WEAK_FUNC(sub_82B90C1C);
PPC_FUNC_IMPL(__imp__sub_82B90C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90C20"))) PPC_WEAK_FUNC(sub_82B90C20);
PPC_FUNC_IMPL(__imp__sub_82B90C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C2C"))) PPC_WEAK_FUNC(sub_82B90C2C);
PPC_FUNC_IMPL(__imp__sub_82B90C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90C30"))) PPC_WEAK_FUNC(sub_82B90C30);
PPC_FUNC_IMPL(__imp__sub_82B90C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C4C"))) PPC_WEAK_FUNC(sub_82B90C4C);
PPC_FUNC_IMPL(__imp__sub_82B90C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90C50"))) PPC_WEAK_FUNC(sub_82B90C50);
PPC_FUNC_IMPL(__imp__sub_82B90C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C5C"))) PPC_WEAK_FUNC(sub_82B90C5C);
PPC_FUNC_IMPL(__imp__sub_82B90C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90C60"))) PPC_WEAK_FUNC(sub_82B90C60);
PPC_FUNC_IMPL(__imp__sub_82B90C60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C68"))) PPC_WEAK_FUNC(sub_82B90C68);
PPC_FUNC_IMPL(__imp__sub_82B90C68) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C70"))) PPC_WEAK_FUNC(sub_82B90C70);
PPC_FUNC_IMPL(__imp__sub_82B90C70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C78"))) PPC_WEAK_FUNC(sub_82B90C78);
PPC_FUNC_IMPL(__imp__sub_82B90C78) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C8C"))) PPC_WEAK_FUNC(sub_82B90C8C);
PPC_FUNC_IMPL(__imp__sub_82B90C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90C90"))) PPC_WEAK_FUNC(sub_82B90C90);
PPC_FUNC_IMPL(__imp__sub_82B90C90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90C98"))) PPC_WEAK_FUNC(sub_82B90C98);
PPC_FUNC_IMPL(__imp__sub_82B90C98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90CAC"))) PPC_WEAK_FUNC(sub_82B90CAC);
PPC_FUNC_IMPL(__imp__sub_82B90CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90CB0"))) PPC_WEAK_FUNC(sub_82B90CB0);
PPC_FUNC_IMPL(__imp__sub_82B90CB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90CB8"))) PPC_WEAK_FUNC(sub_82B90CB8);
PPC_FUNC_IMPL(__imp__sub_82B90CB8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90CCC"))) PPC_WEAK_FUNC(sub_82B90CCC);
PPC_FUNC_IMPL(__imp__sub_82B90CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90CD0"))) PPC_WEAK_FUNC(sub_82B90CD0);
PPC_FUNC_IMPL(__imp__sub_82B90CD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90CD8"))) PPC_WEAK_FUNC(sub_82B90CD8);
PPC_FUNC_IMPL(__imp__sub_82B90CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r11.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D18"))) PPC_WEAK_FUNC(sub_82B90D18);
PPC_FUNC_IMPL(__imp__sub_82B90D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D24"))) PPC_WEAK_FUNC(sub_82B90D24);
PPC_FUNC_IMPL(__imp__sub_82B90D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90D28"))) PPC_WEAK_FUNC(sub_82B90D28);
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

__attribute__((alias("__imp__sub_82B90D34"))) PPC_WEAK_FUNC(sub_82B90D34);
PPC_FUNC_IMPL(__imp__sub_82B90D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90D38"))) PPC_WEAK_FUNC(sub_82B90D38);
PPC_FUNC_IMPL(__imp__sub_82B90D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D40"))) PPC_WEAK_FUNC(sub_82B90D40);
PPC_FUNC_IMPL(__imp__sub_82B90D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D5C"))) PPC_WEAK_FUNC(sub_82B90D5C);
PPC_FUNC_IMPL(__imp__sub_82B90D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90D60"))) PPC_WEAK_FUNC(sub_82B90D60);
PPC_FUNC_IMPL(__imp__sub_82B90D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D70"))) PPC_WEAK_FUNC(sub_82B90D70);
PPC_FUNC_IMPL(__imp__sub_82B90D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D8C"))) PPC_WEAK_FUNC(sub_82B90D8C);
PPC_FUNC_IMPL(__imp__sub_82B90D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90D90"))) PPC_WEAK_FUNC(sub_82B90D90);
PPC_FUNC_IMPL(__imp__sub_82B90D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90D9C"))) PPC_WEAK_FUNC(sub_82B90D9C);
PPC_FUNC_IMPL(__imp__sub_82B90D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90DA0"))) PPC_WEAK_FUNC(sub_82B90DA0);
PPC_FUNC_IMPL(__imp__sub_82B90DA0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90DB8"))) PPC_WEAK_FUNC(sub_82B90DB8);
PPC_FUNC_IMPL(__imp__sub_82B90DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90DC0"))) PPC_WEAK_FUNC(sub_82B90DC0);
PPC_FUNC_IMPL(__imp__sub_82B90DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90DC8"))) PPC_WEAK_FUNC(sub_82B90DC8);
PPC_FUNC_IMPL(__imp__sub_82B90DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,11864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11864, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b90ddc
	if (!ctx.cr6.eq) goto loc_82B90DDC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90DDC:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E00"))) PPC_WEAK_FUNC(sub_82B90E00);
PPC_FUNC_IMPL(__imp__sub_82B90E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E08"))) PPC_WEAK_FUNC(sub_82B90E08);
PPC_FUNC_IMPL(__imp__sub_82B90E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,11868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11868, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b90e1c
	if (!ctx.cr6.eq) goto loc_82B90E1C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90E1C:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E40"))) PPC_WEAK_FUNC(sub_82B90E40);
PPC_FUNC_IMPL(__imp__sub_82B90E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E48"))) PPC_WEAK_FUNC(sub_82B90E48);
PPC_FUNC_IMPL(__imp__sub_82B90E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,11872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11872, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b90e5c
	if (!ctx.cr6.eq) goto loc_82B90E5C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90E5C:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E80"))) PPC_WEAK_FUNC(sub_82B90E80);
PPC_FUNC_IMPL(__imp__sub_82B90E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E88"))) PPC_WEAK_FUNC(sub_82B90E88);
PPC_FUNC_IMPL(__imp__sub_82B90E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90E90"))) PPC_WEAK_FUNC(sub_82B90E90);
PPC_FUNC_IMPL(__imp__sub_82B90E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EA0"))) PPC_WEAK_FUNC(sub_82B90EA0);
PPC_FUNC_IMPL(__imp__sub_82B90EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EB0"))) PPC_WEAK_FUNC(sub_82B90EB0);
PPC_FUNC_IMPL(__imp__sub_82B90EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EC0"))) PPC_WEAK_FUNC(sub_82B90EC0);
PPC_FUNC_IMPL(__imp__sub_82B90EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90ECC"))) PPC_WEAK_FUNC(sub_82B90ECC);
PPC_FUNC_IMPL(__imp__sub_82B90ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90ED0"))) PPC_WEAK_FUNC(sub_82B90ED0);
PPC_FUNC_IMPL(__imp__sub_82B90ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EDC"))) PPC_WEAK_FUNC(sub_82B90EDC);
PPC_FUNC_IMPL(__imp__sub_82B90EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90EE0"))) PPC_WEAK_FUNC(sub_82B90EE0);
PPC_FUNC_IMPL(__imp__sub_82B90EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EEC"))) PPC_WEAK_FUNC(sub_82B90EEC);
PPC_FUNC_IMPL(__imp__sub_82B90EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90EF0"))) PPC_WEAK_FUNC(sub_82B90EF0);
PPC_FUNC_IMPL(__imp__sub_82B90EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90EFC"))) PPC_WEAK_FUNC(sub_82B90EFC);
PPC_FUNC_IMPL(__imp__sub_82B90EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F00"))) PPC_WEAK_FUNC(sub_82B90F00);
PPC_FUNC_IMPL(__imp__sub_82B90F00) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F0C"))) PPC_WEAK_FUNC(sub_82B90F0C);
PPC_FUNC_IMPL(__imp__sub_82B90F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F10"))) PPC_WEAK_FUNC(sub_82B90F10);
PPC_FUNC_IMPL(__imp__sub_82B90F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F1C"))) PPC_WEAK_FUNC(sub_82B90F1C);
PPC_FUNC_IMPL(__imp__sub_82B90F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F20"))) PPC_WEAK_FUNC(sub_82B90F20);
PPC_FUNC_IMPL(__imp__sub_82B90F20) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F2C"))) PPC_WEAK_FUNC(sub_82B90F2C);
PPC_FUNC_IMPL(__imp__sub_82B90F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F30"))) PPC_WEAK_FUNC(sub_82B90F30);
PPC_FUNC_IMPL(__imp__sub_82B90F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F3C"))) PPC_WEAK_FUNC(sub_82B90F3C);
PPC_FUNC_IMPL(__imp__sub_82B90F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F40"))) PPC_WEAK_FUNC(sub_82B90F40);
PPC_FUNC_IMPL(__imp__sub_82B90F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F4C"))) PPC_WEAK_FUNC(sub_82B90F4C);
PPC_FUNC_IMPL(__imp__sub_82B90F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F50"))) PPC_WEAK_FUNC(sub_82B90F50);
PPC_FUNC_IMPL(__imp__sub_82B90F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F5C"))) PPC_WEAK_FUNC(sub_82B90F5C);
PPC_FUNC_IMPL(__imp__sub_82B90F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F60"))) PPC_WEAK_FUNC(sub_82B90F60);
PPC_FUNC_IMPL(__imp__sub_82B90F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F6C"))) PPC_WEAK_FUNC(sub_82B90F6C);
PPC_FUNC_IMPL(__imp__sub_82B90F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F70"))) PPC_WEAK_FUNC(sub_82B90F70);
PPC_FUNC_IMPL(__imp__sub_82B90F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F7C"))) PPC_WEAK_FUNC(sub_82B90F7C);
PPC_FUNC_IMPL(__imp__sub_82B90F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F80"))) PPC_WEAK_FUNC(sub_82B90F80);
PPC_FUNC_IMPL(__imp__sub_82B90F80) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F8C"))) PPC_WEAK_FUNC(sub_82B90F8C);
PPC_FUNC_IMPL(__imp__sub_82B90F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90F90"))) PPC_WEAK_FUNC(sub_82B90F90);
PPC_FUNC_IMPL(__imp__sub_82B90F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90F9C"))) PPC_WEAK_FUNC(sub_82B90F9C);
PPC_FUNC_IMPL(__imp__sub_82B90F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90FA0"))) PPC_WEAK_FUNC(sub_82B90FA0);
PPC_FUNC_IMPL(__imp__sub_82B90FA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90FAC"))) PPC_WEAK_FUNC(sub_82B90FAC);
PPC_FUNC_IMPL(__imp__sub_82B90FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90FB0"))) PPC_WEAK_FUNC(sub_82B90FB0);
PPC_FUNC_IMPL(__imp__sub_82B90FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B90FBC"))) PPC_WEAK_FUNC(sub_82B90FBC);
PPC_FUNC_IMPL(__imp__sub_82B90FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90FC0"))) PPC_WEAK_FUNC(sub_82B90FC0);
PPC_FUNC_IMPL(__imp__sub_82B90FC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x82b90fd0
	if (!ctx.cr6.eq) goto loc_82B90FD0;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_82B90FD0:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91000"))) PPC_WEAK_FUNC(sub_82B91000);
PPC_FUNC_IMPL(__imp__sub_82B91000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9100C"))) PPC_WEAK_FUNC(sub_82B9100C);
PPC_FUNC_IMPL(__imp__sub_82B9100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91010"))) PPC_WEAK_FUNC(sub_82B91010);
PPC_FUNC_IMPL(__imp__sub_82B91010) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12028(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12028);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91018"))) PPC_WEAK_FUNC(sub_82B91018);
PPC_FUNC_IMPL(__imp__sub_82B91018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10380);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b91050
	if (ctx.cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b91050
	if (ctx.cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82b91050
	if (ctx.cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82B91050:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10380, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B910A8"))) PPC_WEAK_FUNC(sub_82B910A8);
PPC_FUNC_IMPL(__imp__sub_82B910A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B910B0"))) PPC_WEAK_FUNC(sub_82B910B0);
PPC_FUNC_IMPL(__imp__sub_82B910B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b910e8
	if (ctx.cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b910e8
	if (ctx.cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82b910e8
	if (ctx.cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82B910E8:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10384, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91140"))) PPC_WEAK_FUNC(sub_82B91140);
PPC_FUNC_IMPL(__imp__sub_82B91140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12036);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91148"))) PPC_WEAK_FUNC(sub_82B91148);
PPC_FUNC_IMPL(__imp__sub_82B91148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b91180
	if (ctx.cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b91180
	if (ctx.cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82b91180
	if (ctx.cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82B91180:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10388, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B911D8"))) PPC_WEAK_FUNC(sub_82B911D8);
PPC_FUNC_IMPL(__imp__sub_82B911D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12040);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B911E0"))) PPC_WEAK_FUNC(sub_82B911E0);
PPC_FUNC_IMPL(__imp__sub_82B911E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91204"))) PPC_WEAK_FUNC(sub_82B91204);
PPC_FUNC_IMPL(__imp__sub_82B91204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91208"))) PPC_WEAK_FUNC(sub_82B91208);
PPC_FUNC_IMPL(__imp__sub_82B91208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91218"))) PPC_WEAK_FUNC(sub_82B91218);
PPC_FUNC_IMPL(__imp__sub_82B91218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91228"))) PPC_WEAK_FUNC(sub_82B91228);
PPC_FUNC_IMPL(__imp__sub_82B91228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91234"))) PPC_WEAK_FUNC(sub_82B91234);
PPC_FUNC_IMPL(__imp__sub_82B91234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91238"))) PPC_WEAK_FUNC(sub_82B91238);
PPC_FUNC_IMPL(__imp__sub_82B91238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91244"))) PPC_WEAK_FUNC(sub_82B91244);
PPC_FUNC_IMPL(__imp__sub_82B91244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91248"))) PPC_WEAK_FUNC(sub_82B91248);
PPC_FUNC_IMPL(__imp__sub_82B91248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91264"))) PPC_WEAK_FUNC(sub_82B91264);
PPC_FUNC_IMPL(__imp__sub_82B91264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91268"))) PPC_WEAK_FUNC(sub_82B91268);
PPC_FUNC_IMPL(__imp__sub_82B91268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91274"))) PPC_WEAK_FUNC(sub_82B91274);
PPC_FUNC_IMPL(__imp__sub_82B91274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91278"))) PPC_WEAK_FUNC(sub_82B91278);
PPC_FUNC_IMPL(__imp__sub_82B91278) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91294"))) PPC_WEAK_FUNC(sub_82B91294);
PPC_FUNC_IMPL(__imp__sub_82B91294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91298"))) PPC_WEAK_FUNC(sub_82B91298);
PPC_FUNC_IMPL(__imp__sub_82B91298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B912A0"))) PPC_WEAK_FUNC(sub_82B912A0);
PPC_FUNC_IMPL(__imp__sub_82B912A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B912AC"))) PPC_WEAK_FUNC(sub_82B912AC);
PPC_FUNC_IMPL(__imp__sub_82B912AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B912B0"))) PPC_WEAK_FUNC(sub_82B912B0);
PPC_FUNC_IMPL(__imp__sub_82B912B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10556);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r11,r10,0,24,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B912C4"))) PPC_WEAK_FUNC(sub_82B912C4);
PPC_FUNC_IMPL(__imp__sub_82B912C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B912C8"))) PPC_WEAK_FUNC(sub_82B912C8);
PPC_FUNC_IMPL(__imp__sub_82B912C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B912EC"))) PPC_WEAK_FUNC(sub_82B912EC);
PPC_FUNC_IMPL(__imp__sub_82B912EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B912F0"))) PPC_WEAK_FUNC(sub_82B912F0);
PPC_FUNC_IMPL(__imp__sub_82B912F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B912F8"))) PPC_WEAK_FUNC(sub_82B912F8);
PPC_FUNC_IMPL(__imp__sub_82B912F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9131C"))) PPC_WEAK_FUNC(sub_82B9131C);
PPC_FUNC_IMPL(__imp__sub_82B9131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91320"))) PPC_WEAK_FUNC(sub_82B91320);
PPC_FUNC_IMPL(__imp__sub_82B91320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91328"))) PPC_WEAK_FUNC(sub_82B91328);
PPC_FUNC_IMPL(__imp__sub_82B91328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91344"))) PPC_WEAK_FUNC(sub_82B91344);
PPC_FUNC_IMPL(__imp__sub_82B91344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91348"))) PPC_WEAK_FUNC(sub_82B91348);
PPC_FUNC_IMPL(__imp__sub_82B91348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91350"))) PPC_WEAK_FUNC(sub_82B91350);
PPC_FUNC_IMPL(__imp__sub_82B91350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91374"))) PPC_WEAK_FUNC(sub_82B91374);
PPC_FUNC_IMPL(__imp__sub_82B91374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91378"))) PPC_WEAK_FUNC(sub_82B91378);
PPC_FUNC_IMPL(__imp__sub_82B91378) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91380"))) PPC_WEAK_FUNC(sub_82B91380);
PPC_FUNC_IMPL(__imp__sub_82B91380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9138C"))) PPC_WEAK_FUNC(sub_82B9138C);
PPC_FUNC_IMPL(__imp__sub_82B9138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91390"))) PPC_WEAK_FUNC(sub_82B91390);
PPC_FUNC_IMPL(__imp__sub_82B91390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9139C"))) PPC_WEAK_FUNC(sub_82B9139C);
PPC_FUNC_IMPL(__imp__sub_82B9139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B913A0"))) PPC_WEAK_FUNC(sub_82B913A0);
PPC_FUNC_IMPL(__imp__sub_82B913A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913AC"))) PPC_WEAK_FUNC(sub_82B913AC);
PPC_FUNC_IMPL(__imp__sub_82B913AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B913B0"))) PPC_WEAK_FUNC(sub_82B913B0);
PPC_FUNC_IMPL(__imp__sub_82B913B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913BC"))) PPC_WEAK_FUNC(sub_82B913BC);
PPC_FUNC_IMPL(__imp__sub_82B913BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B913C0"))) PPC_WEAK_FUNC(sub_82B913C0);
PPC_FUNC_IMPL(__imp__sub_82B913C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913CC"))) PPC_WEAK_FUNC(sub_82B913CC);
PPC_FUNC_IMPL(__imp__sub_82B913CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B913D0"))) PPC_WEAK_FUNC(sub_82B913D0);
PPC_FUNC_IMPL(__imp__sub_82B913D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913D8"))) PPC_WEAK_FUNC(sub_82B913D8);
PPC_FUNC_IMPL(__imp__sub_82B913D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13596, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913E0"))) PPC_WEAK_FUNC(sub_82B913E0);
PPC_FUNC_IMPL(__imp__sub_82B913E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913E8"))) PPC_WEAK_FUNC(sub_82B913E8);
PPC_FUNC_IMPL(__imp__sub_82B913E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B913F8"))) PPC_WEAK_FUNC(sub_82B913F8);
PPC_FUNC_IMPL(__imp__sub_82B913F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91404"))) PPC_WEAK_FUNC(sub_82B91404);
PPC_FUNC_IMPL(__imp__sub_82B91404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91408"))) PPC_WEAK_FUNC(sub_82B91408);
PPC_FUNC_IMPL(__imp__sub_82B91408) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9143C"))) PPC_WEAK_FUNC(sub_82B9143C);
PPC_FUNC_IMPL(__imp__sub_82B9143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91440"))) PPC_WEAK_FUNC(sub_82B91440);
PPC_FUNC_IMPL(__imp__sub_82B91440) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B914D4"))) PPC_WEAK_FUNC(sub_82B914D4);
PPC_FUNC_IMPL(__imp__sub_82B914D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B914D8"))) PPC_WEAK_FUNC(sub_82B914D8);
PPC_FUNC_IMPL(__imp__sub_82B914D8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B914E8"))) PPC_WEAK_FUNC(sub_82B914E8);
PPC_FUNC_IMPL(__imp__sub_82B914E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9151C"))) PPC_WEAK_FUNC(sub_82B9151C);
PPC_FUNC_IMPL(__imp__sub_82B9151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91520"))) PPC_WEAK_FUNC(sub_82B91520);
PPC_FUNC_IMPL(__imp__sub_82B91520) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	ctx.r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B915AC"))) PPC_WEAK_FUNC(sub_82B915AC);
PPC_FUNC_IMPL(__imp__sub_82B915AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B915B0"))) PPC_WEAK_FUNC(sub_82B915B0);
PPC_FUNC_IMPL(__imp__sub_82B915B0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B915C0"))) PPC_WEAK_FUNC(sub_82B915C0);
PPC_FUNC_IMPL(__imp__sub_82B915C0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B915D4"))) PPC_WEAK_FUNC(sub_82B915D4);
PPC_FUNC_IMPL(__imp__sub_82B915D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B915D8"))) PPC_WEAK_FUNC(sub_82B915D8);
PPC_FUNC_IMPL(__imp__sub_82B915D8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9166C"))) PPC_WEAK_FUNC(sub_82B9166C);
PPC_FUNC_IMPL(__imp__sub_82B9166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91670"))) PPC_WEAK_FUNC(sub_82B91670);
PPC_FUNC_IMPL(__imp__sub_82B91670) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91680"))) PPC_WEAK_FUNC(sub_82B91680);
PPC_FUNC_IMPL(__imp__sub_82B91680) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11924(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11924);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9168C"))) PPC_WEAK_FUNC(sub_82B9168C);
PPC_FUNC_IMPL(__imp__sub_82B9168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91690"))) PPC_WEAK_FUNC(sub_82B91690);
PPC_FUNC_IMPL(__imp__sub_82B91690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lfs f0,1024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

