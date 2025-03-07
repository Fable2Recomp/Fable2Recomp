#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831D7110"))) PPC_WEAK_FUNC(sub_831D7110);
PPC_FUNC_IMPL(__imp__sub_831D7110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x831D7118;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83110128
	ctx.lr = 0x831D7134;
	sub_83110128(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r24,r26,4
	ctx.r24.s64 = ctx.r26.s64 + 4;
	// ori r11,r26,1
	ctx.r11.u64 = ctx.r26.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = ctx.r24.u64 | 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_831D7160:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x831d7570
	if (!ctx.cr6.eq) goto loc_831D7570;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d73bc
	if (ctx.cr0.eq) goto loc_831D73BC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831d73d8
	if (ctx.cr6.eq) goto loc_831D73D8;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm. r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d73bc
	if (ctx.cr0.eq) goto loc_831D73BC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d71dc
	if (!ctx.cr0.eq) goto loc_831D71DC;
	// lwz r9,40(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
loc_831D71AC:
	// rlwinm r10,r11,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d71dc
	if (!ctx.cr0.eq) goto loc_831D71DC;
	// lwz r27,52(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d71ac
	if (ctx.cr0.eq) goto loc_831D71AC;
loc_831D71DC:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d73bc
	if (ctx.cr0.eq) goto loc_831D73BC;
	// rlwinm r10,r11,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFF;
	// lwz r9,40(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d73bc
	if (!ctx.cr0.eq) goto loc_831D73BC;
	// lwz r28,8(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_831D7210:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d79a0
	if (ctx.cr6.eq) goto loc_831D79A0;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_831D7220:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d7244
	if (ctx.cr6.eq) goto loc_831D7244;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831d723c
	if (ctx.cr6.eq) goto loc_831D723C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831d7220
	goto loc_831D7220;
loc_831D723C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x831d7248
	goto loc_831D7248;
loc_831D7244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D7248:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d73b4
	if (ctx.cr0.eq) goto loc_831D73B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123cb8
	ctx.lr = 0x831D725C;
	sub_83123CB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x831d727c
	if (ctx.cr6.eq) goto loc_831D727C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831d7280
	if (!ctx.cr6.eq) goto loc_831D7280;
loc_831D727C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831D7280:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7a1c
	if (ctx.cr0.eq) goto loc_831D7A1C;
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d72ec
	if (!ctx.cr0.eq) goto loc_831D72EC;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d72c8
	if (!ctx.cr0.eq) goto loc_831D72C8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d72c8
	if (ctx.cr0.eq) goto loc_831D72C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d72d4
	if (!ctx.cr6.gt) goto loc_831D72D4;
loc_831D72C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D72D4;
	sub_83172038(ctx, base);
loc_831D72D4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D72EC:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d73b4
	if (!ctx.cr0.eq) goto loc_831D73B4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831d73b4
	if (ctx.cr0.eq) goto loc_831D73B4;
loc_831D7304:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x831d7398
	if (!ctx.cr6.eq) goto loc_831D7398;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831914e0
	ctx.lr = 0x831D732C;
	sub_831914E0(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7398
	if (!ctx.cr0.eq) goto loc_831D7398;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7374
	if (!ctx.cr0.eq) goto loc_831D7374;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7374
	if (ctx.cr0.eq) goto loc_831D7374;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7380
	if (!ctx.cr6.gt) goto loc_831D7380;
loc_831D7374:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7380;
	sub_83172038(ctx, base);
loc_831D7380:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D7398:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d73b4
	if (!ctx.cr0.eq) goto loc_831D73B4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d7304
	if (!ctx.cr6.eq) goto loc_831D7304;
loc_831D73B4:
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x831d7210
	goto loc_831D7210;
loc_831D73BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d73d8
	if (ctx.cr6.eq) goto loc_831D73D8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x831d73dc
	if (!ctx.cr6.eq) goto loc_831D73DC;
loc_831D73D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D73DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7570
	if (ctx.cr0.eq) goto loc_831D7570;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_831D73F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d761c
	if (ctx.cr6.eq) goto loc_831D761C;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// slw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7430
	if (!ctx.cr0.eq) goto loc_831D7430;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x831d73f0
	goto loc_831D73F0;
loc_831D7430:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7448
	if (!ctx.cr0.eq) goto loc_831D7448;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8317a200
	ctx.lr = 0x831D7448;
	sub_8317A200(ctx, base);
loc_831D7448:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7524
	if (!ctx.cr0.eq) goto loc_831D7524;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831d7524
	if (ctx.cr0.eq) goto loc_831D7524;
loc_831D7460:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7508
	if (ctx.cr0.eq) goto loc_831D7508;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_831D7470:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d7508
	if (ctx.cr6.eq) goto loc_831D7508;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831d7490
	if (!ctx.cr0.eq) goto loc_831D7490;
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d7498
	if (ctx.cr0.eq) goto loc_831D7498;
loc_831D7490:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831d7470
	goto loc_831D7470;
loc_831D7498:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123cb8
	ctx.lr = 0x831D74A4;
	sub_83123CB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x831d7508
	if (ctx.cr0.eq) goto loc_831D7508;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7508
	if (!ctx.cr0.eq) goto loc_831D7508;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x831d74f0
	if (ctx.cr6.eq) goto loc_831D74F0;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x831d74f0
	if (ctx.cr6.eq) goto loc_831D74F0;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x831d74f0
	if (ctx.cr6.eq) goto loc_831D74F0;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x831d74f0
	if (ctx.cr6.eq) goto loc_831D74F0;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x831d74f0
	if (ctx.cr6.eq) goto loc_831D74F0;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831d74f4
	if (!ctx.cr6.eq) goto loc_831D74F4;
loc_831D74F0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831D74F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7508
	if (ctx.cr0.eq) goto loc_831D7508;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831d7c10
	ctx.lr = 0x831D7508;
	sub_831D7C10(ctx, base);
loc_831D7508:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7524
	if (!ctx.cr0.eq) goto loc_831D7524;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d7460
	if (!ctx.cr6.eq) goto loc_831D7460;
loc_831D7524:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7570
	if (!ctx.cr0.eq) goto loc_831D7570;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7570
	if (!ctx.cr0.eq) goto loc_831D7570;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831d7570
	if (ctx.cr0.eq) goto loc_831D7570;
loc_831D7544:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d7558
	if (ctx.cr0.eq) goto loc_831D7558;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_831D7558:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7570
	if (!ctx.cr0.eq) goto loc_831D7570;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d7544
	if (!ctx.cr6.eq) goto loc_831D7544;
loc_831D7570:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_831D7574:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d7840
	if (ctx.cr6.eq) goto loc_831D7840;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7594
	if (!ctx.cr0.eq) goto loc_831D7594;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x831d7598
	if (ctx.cr0.eq) goto loc_831D7598;
loc_831D7594:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831D7598:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7838
	if (ctx.cr0.eq) goto loc_831D7838;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d77cc
	if (ctx.cr0.eq) goto loc_831D77CC;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d77cc
	if (ctx.cr0.eq) goto loc_831D77CC;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_831D75B4:
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83123cb8
	ctx.lr = 0x831D75C4;
	sub_83123CB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x831d75b4
	if (ctx.cr0.eq) goto loc_831D75B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x831d75b4
	if (!ctx.cr6.eq) goto loc_831D75B4;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d77cc
	if (!ctx.cr0.eq) goto loc_831D77CC;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x7;
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8310fc68
	ctx.lr = 0x831D75FC;
	sub_8310FC68(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d76fc
	if (ctx.cr0.eq) goto loc_831D76FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831d7704
	goto loc_831D7704;
loc_831D761C:
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d76b4
	if (ctx.cr0.eq) goto loc_831D76B4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_831D762C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d7570
	if (ctx.cr6.eq) goto loc_831D7570;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83123cb8
	ctx.lr = 0x831D7640;
	sub_83123CB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d76ac
	if (!ctx.cr0.eq) goto loc_831D76AC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7688
	if (!ctx.cr0.eq) goto loc_831D7688;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7688
	if (ctx.cr0.eq) goto loc_831D7688;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7694
	if (!ctx.cr6.gt) goto loc_831D7694;
loc_831D7688:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7694;
	sub_83172038(ctx, base);
loc_831D7694:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D76AC:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x831d762c
	goto loc_831D762C;
loc_831D76B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d7570
	if (ctx.cr6.eq) goto loc_831D7570;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831914e0
	ctx.lr = 0x831D76D4;
	sub_831914E0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d76f4
	if (ctx.cr0.eq) goto loc_831D76F4;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x831d58e0
	ctx.lr = 0x831D76F4;
	sub_831D58E0(ctx, base);
loc_831D76F4:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x831d76b4
	goto loc_831D76B4;
loc_831D76FC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_831D7704:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123cb8
	ctx.lr = 0x831D770C;
	sub_83123CB8(ctx, base);
	// oris r11,r31,1024
	ctx.r11.u64 = ctx.r31.u64 | 67108864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7748
	if (!ctx.cr0.eq) goto loc_831D7748;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7748
	if (ctx.cr0.eq) goto loc_831D7748;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7754
	if (!ctx.cr6.gt) goto loc_831D7754;
loc_831D7748:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7754;
	sub_83172038(ctx, base);
loc_831D7754:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d77a8
	if (!ctx.cr0.eq) goto loc_831D77A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d77a8
	if (ctx.cr0.eq) goto loc_831D77A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d77b4
	if (!ctx.cr6.gt) goto loc_831D77B4;
loc_831D77A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D77B4;
	sub_83172038(ctx, base);
loc_831D77B4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D77CC:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7838
	if (!ctx.cr0.eq) goto loc_831D7838;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7814
	if (!ctx.cr0.eq) goto loc_831D7814;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7814
	if (ctx.cr0.eq) goto loc_831D7814;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7820
	if (!ctx.cr6.gt) goto loc_831D7820;
loc_831D7814:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7820;
	sub_83172038(ctx, base);
loc_831D7820:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D7838:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x831d7574
	goto loc_831D7574;
loc_831D7840:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x831d785c
	if (ctx.cr6.lt) goto loc_831D785C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ble cr6,0x831d7860
	if (!ctx.cr6.gt) goto loc_831D7860;
loc_831D785C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D7860:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d79a0
	if (ctx.cr0.eq) goto loc_831D79A0;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_831D786C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d79a0
	if (ctx.cr6.eq) goto loc_831D79A0;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d7998
	if (ctx.cr6.eq) goto loc_831D7998;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d78e4
	if (ctx.cr0.eq) goto loc_831D78E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x831d78a8
	if (ctx.cr6.lt) goto loc_831D78A8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ble cr6,0x831d78ac
	if (!ctx.cr6.gt) goto loc_831D78AC;
loc_831D78A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D78AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7998
	if (!ctx.cr0.eq) goto loc_831D7998;
	// b 0x831d78c0
	goto loc_831D78C0;
loc_831D78B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_831D78C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x831d78b8
	if (ctx.cr6.eq) goto loc_831D78B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7998
	if (!ctx.cr0.eq) goto loc_831D7998;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x831d7940
	goto loc_831D7940;
loc_831D78E4:
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7998
	if (ctx.cr0.eq) goto loc_831D7998;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x831d7928
	if (ctx.cr6.eq) goto loc_831D7928;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x831d7928
	if (ctx.cr6.eq) goto loc_831D7928;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x831d7928
	if (ctx.cr6.eq) goto loc_831D7928;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x831d7928
	if (ctx.cr6.eq) goto loc_831D7928;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x831d7928
	if (ctx.cr6.eq) goto loc_831D7928;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831d792c
	if (!ctx.cr6.eq) goto loc_831D792C;
loc_831D7928:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831D792C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7998
	if (ctx.cr0.eq) goto loc_831D7998;
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7998
	if (!ctx.cr0.eq) goto loc_831D7998;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
loc_831D7940:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7974
	if (!ctx.cr0.eq) goto loc_831D7974;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7974
	if (ctx.cr0.eq) goto loc_831D7974;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7980
	if (!ctx.cr6.gt) goto loc_831D7980;
loc_831D7974:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7980;
	sub_83172038(ctx, base);
loc_831D7980:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D7998:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x831d786c
	goto loc_831D786C;
loc_831D79A0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7a28
	if (!ctx.cr0.eq) goto loc_831D7A28;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831d7a28
	if (ctx.cr0.eq) goto loc_831D7A28;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x831d7a14
	if (!ctx.cr0.eq) goto loc_831D7A14;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830fd2b8
	ctx.lr = 0x831D7A14;
	sub_830FD2B8(ctx, base);
loc_831D7A14:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x831d7160
	goto loc_831D7160;
loc_831D7A1C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830fd318
	ctx.lr = 0x831D7A28;
	sub_830FD318(ctx, base);
loc_831D7A28:
	// lwz r10,976(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 976);
	// addi r11,r25,972
	ctx.r11.s64 = ctx.r25.s64 + 972;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r26,976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 976, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831D7A40"))) PPC_WEAK_FUNC(sub_831D7A40);
PPC_FUNC_IMPL(__imp__sub_831D7A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831D7A48;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83110128
	ctx.lr = 0x831D7A60;
	sub_83110128(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = ctx.r28.u64 | 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831D7A88:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831D7A8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d7ad0
	if (ctx.cr6.eq) goto loc_831D7AD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7aac
	if (!ctx.cr0.eq) goto loc_831D7AAC;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x831d7ab0
	if (ctx.cr0.eq) goto loc_831D7AB0;
loc_831D7AAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D7AB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7ac8
	if (ctx.cr0.eq) goto loc_831D7AC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d7110
	ctx.lr = 0x831D7AC8;
	sub_831D7110(ctx, base);
loc_831D7AC8:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x831d7a8c
	goto loc_831D7A8C;
loc_831D7AD0:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831D7AD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d7b7c
	if (ctx.cr6.eq) goto loc_831D7B7C;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d7b74
	if (ctx.cr6.eq) goto loc_831D7B74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7b00
	if (!ctx.cr0.eq) goto loc_831D7B00;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x831d7b04
	if (ctx.cr0.eq) goto loc_831D7B04;
loc_831D7B00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D7B04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d7b74
	if (ctx.cr0.eq) goto loc_831D7B74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7b74
	if (!ctx.cr0.eq) goto loc_831D7B74;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7b50
	if (!ctx.cr0.eq) goto loc_831D7B50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7b50
	if (ctx.cr0.eq) goto loc_831D7B50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7b5c
	if (!ctx.cr6.gt) goto loc_831D7B5C;
loc_831D7B50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7B5C;
	sub_83172038(ctx, base);
loc_831D7B5C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D7B74:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x831d7ad4
	goto loc_831D7AD4;
loc_831D7B7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7bf4
	if (!ctx.cr0.eq) goto loc_831D7BF4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831d7bf4
	if (ctx.cr0.eq) goto loc_831D7BF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x831d7a88
	if (!ctx.cr0.eq) goto loc_831D7A88;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830fd2b8
	ctx.lr = 0x831D7BF0;
	sub_830FD2B8(ctx, base);
	// b 0x831d7a88
	goto loc_831D7A88;
loc_831D7BF4:
	// lwz r10,976(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 976);
	// addi r11,r27,972
	ctx.r11.s64 = ctx.r27.s64 + 972;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 976, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831D7C0C"))) PPC_WEAK_FUNC(sub_831D7C0C);
PPC_FUNC_IMPL(__imp__sub_831D7C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D7C10"))) PPC_WEAK_FUNC(sub_831D7C10);
PPC_FUNC_IMPL(__imp__sub_831D7C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831D7C18;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// bne cr6,0x831d7c84
	if (!ctx.cr6.eq) goto loc_831D7C84;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x8310fc68
	ctx.lr = 0x831D7C4C;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d7c6c
	if (ctx.cr0.eq) goto loc_831D7C6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831d7c74
	goto loc_831D7C74;
loc_831D7C6C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_831D7C74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123cb8
	ctx.lr = 0x831D7C7C;
	sub_83123CB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831d7ca8
	goto loc_831D7CA8;
loc_831D7C84:
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// bne cr6,0x831d7ca8
	if (!ctx.cr6.eq) goto loc_831D7CA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8310fc68
	ctx.lr = 0x831D7CA0;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// lwzx r29,r3,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_831D7CA8:
	// oris r11,r30,1024
	ctx.r11.u64 = ctx.r30.u64 | 67108864;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x831d7d8c
	if (ctx.cr6.eq) goto loc_831D7D8C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7ce8
	if (!ctx.cr0.eq) goto loc_831D7CE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7ce8
	if (ctx.cr0.eq) goto loc_831D7CE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7cf4
	if (!ctx.cr6.gt) goto loc_831D7CF4;
loc_831D7CE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7CF4;
	sub_83172038(ctx, base);
loc_831D7CF4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_831D7D0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d7d84
	if (ctx.cr6.eq) goto loc_831D7D84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d7d84
	if (!ctx.cr0.eq) goto loc_831D7D84;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// beq cr6,0x831d7db0
	if (ctx.cr6.eq) goto loc_831D7DB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7d60
	if (!ctx.cr0.eq) goto loc_831D7D60;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831d7d60
	if (ctx.cr0.eq) goto loc_831D7D60;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831d7d6c
	if (!ctx.cr6.gt) goto loc_831D7D6C;
loc_831D7D60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83172038
	ctx.lr = 0x831D7D6C;
	sub_83172038(ctx, base);
loc_831D7D6C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r29,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u32);
loc_831D7D84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_831D7D8C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831D7D90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d7d0c
	if (ctx.cr6.eq) goto loc_831D7D0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d7110
	ctx.lr = 0x831D7DA8;
	sub_831D7110(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x831d7d90
	goto loc_831D7D90;
loc_831D7DB0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_831D7DB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d7d84
	if (ctx.cr6.eq) goto loc_831D7D84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d7110
	ctx.lr = 0x831D7DCC;
	sub_831D7110(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x831d7db4
	goto loc_831D7DB4;
}

__attribute__((alias("__imp__sub_831D7DD4"))) PPC_WEAK_FUNC(sub_831D7DD4);
PPC_FUNC_IMPL(__imp__sub_831D7DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D7DD8"))) PPC_WEAK_FUNC(sub_831D7DD8);
PPC_FUNC_IMPL(__imp__sub_831D7DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x831D7DE0;
	sub_82CA2BB8(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// beq cr6,0x831d7fbc
	if (ctx.cr6.eq) goto loc_831D7FBC;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// beq cr6,0x831d8020
	if (ctx.cr6.eq) goto loc_831D8020;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// ble cr6,0x831d7fbc
	if (!ctx.cr6.gt) goto loc_831D7FBC;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x831d7f98
	if (!ctx.cr6.gt) goto loc_831D7F98;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x831d7fbc
	if (!ctx.cr6.eq) goto loc_831D7FBC;
	// addi r25,r23,4
	ctx.r25.s64 = ctx.r23.s64 + 4;
loc_831D7E50:
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d7fbc
	if (ctx.cr6.eq) goto loc_831D7FBC;
	// lwz r28,16(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d7f84
	if (ctx.cr6.eq) goto loc_831D7F84;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x831d7f84
	if (!ctx.cr6.eq) goto loc_831D7F84;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r27,r22,30
	ctx.r27.u64 = ctx.r22.u32 & 0x3;
	// lfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ca960
	ctx.lr = 0x831D7E90;
	sub_831CA960(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_831D7E98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d7f4c
	if (ctx.cr6.eq) goto loc_831D7F4C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x831d7f84
	if (!ctx.cr6.eq) goto loc_831D7F84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d7f84
	if (ctx.cr6.eq) goto loc_831D7F84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831d7f84
	if (!ctx.cr6.eq) goto loc_831D7F84;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x831d7f84
	if (!ctx.cr6.eq) goto loc_831D7F84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,27,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831cab88
	ctx.lr = 0x831D7EF8;
	sub_831CAB88(ctx, base);
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d7f24
	if (!ctx.cr0.eq) goto loc_831D7F24;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x831d7f38
	goto loc_831D7F38;
loc_831D7F24:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
loc_831D7F38:
	// bl 0x831ca960
	ctx.lr = 0x831D7F3C;
	sub_831CA960(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bne cr6,0x831d7f84
	if (!ctx.cr6.eq) goto loc_831D7F84;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x831d7e98
	goto loc_831D7E98;
loc_831D7F4C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ccd60
	ctx.lr = 0x831D7F58;
	sub_831CCD60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d3f50
	ctx.lr = 0x831D7F68;
	sub_831D3F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83123570
	ctx.lr = 0x831D7F78;
	sub_83123570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123628
	ctx.lr = 0x831D7F84;
	sub_83123628(ctx, base);
loc_831D7F84:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x831d7e50
	if (!ctx.cr6.eq) goto loc_831D7E50;
	// addi r25,r26,8
	ctx.r25.s64 = ctx.r26.s64 + 8;
	// b 0x831d7e50
	goto loc_831D7E50;
loc_831D7F98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x831d7fb8
	if (ctx.cr6.eq) goto loc_831D7FB8;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_831D7FB8:
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
loc_831D7FBC:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_831D7FC8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r6,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// slw r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831d8178
	if (ctx.cr6.lt) goto loc_831D8178;
	// beq cr6,0x831d8168
	if (ctx.cr6.eq) goto loc_831D8168;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x831d8294
	if (!ctx.cr6.lt) goto loc_831D8294;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// b 0x831d8170
	goto loc_831D8170;
loc_831D8020:
	// lwz r26,4(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_831D8024:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d82a8
	if (ctx.cr6.eq) goto loc_831D82A8;
	// lwz r29,16(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d8160
	if (ctx.cr6.eq) goto loc_831D8160;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x831d8160
	if (!ctx.cr6.eq) goto loc_831D8160;
	// lwz r27,44(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x831d8160
	if (!ctx.cr6.eq) goto loc_831D8160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfd f31,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x831D8080;
	sub_8310FC68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r3,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r31,r10,17,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// bl 0x8310fc68
	ctx.lr = 0x831D80A0;
	sub_8310FC68(ctx, base);
	// lwzx r10,r3,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cffe8
	ctx.lr = 0x831D80C4;
	sub_831CFFE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x831d8160
	if (ctx.cr0.eq) goto loc_831D8160;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
loc_831D80D0:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d8160
	if (ctx.cr6.eq) goto loc_831D8160;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831d814c
	if (ctx.cr6.eq) goto loc_831D814C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8100
	if (!ctx.cr0.eq) goto loc_831D8100;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// beq 0x831d8104
	if (ctx.cr0.eq) goto loc_831D8104;
loc_831D8100:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831D8104:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d814c
	if (ctx.cr0.eq) goto loc_831D814C;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cd310
	ctx.lr = 0x831D8138;
	sub_831CD310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d814c
	if (!ctx.cr0.eq) goto loc_831D814C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831D814C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d80d0
	if (!ctx.cr6.eq) goto loc_831D80D0;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x831d80d0
	goto loc_831D80D0;
loc_831D8160:
	// lwz r26,8(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x831d8024
	goto loc_831D8024;
loc_831D8168:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
loc_831D8170:
	// stfiwx f0,0,r8
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// b 0x831d81c0
	goto loc_831D81C0;
loc_831D8178:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi. r7,r11,1
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831d81a0
	if (ctx.cr0.eq) goto loc_831D81A0;
	// rlwinm. r11,r11,0,1,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x831d81a4
	if (ctx.cr0.eq) goto loc_831D81A4;
loc_831D81A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D81A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d81bc
	if (!ctx.cr0.eq) goto loc_831D81BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_831D81BC:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_831D81C0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x831d7fc8
	if (ctx.cr6.lt) goto loc_831D7FC8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d0300
	ctx.lr = 0x831D81E8;
	sub_831D0300(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d66b0
	ctx.lr = 0x831D8210;
	sub_831D66B0(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// beq 0x831d82a4
	if (ctx.cr0.eq) goto loc_831D82A4;
	// addi r28,r23,4
	ctx.r28.s64 = ctx.r23.s64 + 4;
loc_831D8224:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d82a0
	if (ctx.cr6.eq) goto loc_831D82A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831d8280
	if (ctx.cr6.eq) goto loc_831D8280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d8254
	if (ctx.cr0.eq) goto loc_831D8254;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831d8258
	if (ctx.cr0.eq) goto loc_831D8258;
loc_831D8254:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_831D8258:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8280
	if (ctx.cr0.eq) goto loc_831D8280;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d4c18
	ctx.lr = 0x831D8270;
	sub_831D4C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwimi r11,r30,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_831D8280:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d8224
	if (!ctx.cr6.eq) goto loc_831D8224;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x831d8224
	goto loc_831D8224;
loc_831D8294:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830fd318
	ctx.lr = 0x831D82A0;
	sub_830FD318(ctx, base);
loc_831D82A0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_831D82A4:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_831D82A8:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// std r11,0(r16)
	PPC_STORE_U64(ctx.r16.u32 + 0, ctx.r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_831D82C0"))) PPC_WEAK_FUNC(sub_831D82C0);
PPC_FUNC_IMPL(__imp__sub_831D82C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x831D82C8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r29,r11,27,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r30,r11,27
	ctx.r30.u64 = ctx.r11.u32 & 0x1F;
loc_831D82F0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x831d848c
	if (ctx.cr6.eq) goto loc_831D848C;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x831d8400
	if (ctx.cr6.eq) goto loc_831D8400;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x831d8478
	if (!ctx.cr6.eq) goto loc_831D8478;
	// rlwinm r11,r27,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFF000;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x831d6b98
	ctx.lr = 0x831D8338;
	sub_831D6B98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8478
	if (ctx.cr0.eq) goto loc_831D8478;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831d8478
	if (ctx.cr6.eq) goto loc_831D8478;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r10,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8368
	if (ctx.cr0.eq) goto loc_831D8368;
	// rlwinm. r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8368
	if (ctx.cr0.eq) goto loc_831D8368;
loc_831D8360:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831d8390
	goto loc_831D8390;
loc_831D8368:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8378
	if (ctx.cr0.eq) goto loc_831D8378;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8360
	if (!ctx.cr0.eq) goto loc_831D8360;
loc_831D8378:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d838c
	if (ctx.cr0.eq) goto loc_831D838C;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x831d8390
	if (!ctx.cr0.eq) goto loc_831D8390;
loc_831D838C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D8390:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8478
	if (ctx.cr0.eq) goto loc_831D8478;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// beq 0x831d83d0
	if (ctx.cr0.eq) goto loc_831D83D0;
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d83d0
	if (ctx.cr0.eq) goto loc_831D83D0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_831D83D0:
	// and r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d83e4
	if (ctx.cr0.eq) goto loc_831D83E4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_831D83E4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d83f8
	if (ctx.cr0.eq) goto loc_831D83F8;
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d83f8
	if (ctx.cr0.eq) goto loc_831D83F8;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_831D83F8:
	// or r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x831d82f0
	goto loc_831D82F0;
loc_831D8400:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x831d8478
	if (!ctx.cr6.eq) goto loc_831D8478;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8478
	if (!ctx.cr0.eq) goto loc_831D8478;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// beq cr6,0x831d8478
	if (ctx.cr6.eq) goto loc_831D8478;
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x831d8448
	if (ctx.cr0.eq) goto loc_831D8448;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d8448
	if (ctx.cr0.eq) goto loc_831D8448;
loc_831D8440:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831d8470
	goto loc_831D8470;
loc_831D8448:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d8458
	if (ctx.cr0.eq) goto loc_831D8458;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8440
	if (!ctx.cr0.eq) goto loc_831D8440;
loc_831D8458:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d846c
	if (ctx.cr0.eq) goto loc_831D846C;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x831d8470
	if (!ctx.cr0.eq) goto loc_831D8470;
loc_831D846C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831D8470:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8534
	if (!ctx.cr0.eq) goto loc_831D8534;
loc_831D8478:
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_831D848C:
	// lwz r31,44(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310fb10
	ctx.lr = 0x831D849C;
	sub_8310FB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8478
	if (ctx.cr0.eq) goto loc_831D8478;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8478
	if (!ctx.cr0.eq) goto loc_831D8478;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// beq cr6,0x831d8478
	if (ctx.cr6.eq) goto loc_831D8478;
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x831d84e0
	if (ctx.cr0.eq) goto loc_831D84E0;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d84e0
	if (ctx.cr0.eq) goto loc_831D84E0;
loc_831D84D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831d8508
	goto loc_831D8508;
loc_831D84E0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d84f0
	if (ctx.cr0.eq) goto loc_831D84F0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d84d8
	if (!ctx.cr0.eq) goto loc_831D84D8;
loc_831D84F0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d8504
	if (ctx.cr0.eq) goto loc_831D8504;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x831d8508
	if (!ctx.cr0.eq) goto loc_831D8508;
loc_831D8504:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831D8508:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831d8478
	if (ctx.cr0.eq) goto loc_831D8478;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d8534
	if (ctx.cr6.eq) goto loc_831D8534;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r7,28(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8478
	if (!ctx.cr0.eq) goto loc_831D8478;
loc_831D8534:
	// rlwinm r10,r9,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r29,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x6;
	// rlwinm r7,r29,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r29,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x6;
	// rlwinm r9,r29,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x6;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r29,r10,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// rlwimi r29,r6,2,0,29
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r29.u64 & 0xFFFFFFFF00000003);
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8584
	if (ctx.cr0.eq) goto loc_831D8584;
	// rlwinm. r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8584
	if (ctx.cr0.eq) goto loc_831D8584;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_831D8584:
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8598
	if (ctx.cr0.eq) goto loc_831D8598;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_831D8598:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d85ac
	if (ctx.cr0.eq) goto loc_831D85AC;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d85ac
	if (ctx.cr0.eq) goto loc_831D85AC;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_831D85AC:
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x831d82f0
	goto loc_831D82F0;
}

__attribute__((alias("__imp__sub_831D85B4"))) PPC_WEAK_FUNC(sub_831D85B4);
PPC_FUNC_IMPL(__imp__sub_831D85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D85B8"))) PPC_WEAK_FUNC(sub_831D85B8);
PPC_FUNC_IMPL(__imp__sub_831D85B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D85C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// rlwinm. r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x831d8674
	if (!ctx.cr0.eq) goto loc_831D8674;
	// rlwinm. r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831d8674
	if (!ctx.cr0.eq) goto loc_831D8674;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x831d8610
	if (ctx.cr6.lt) goto loc_831D8610;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bgt cr6,0x831d8610
	if (ctx.cr6.gt) goto loc_831D8610;
	// li r10,1
	ctx.r10.s64 = 1;
loc_831D8610:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8674
	if (!ctx.cr0.eq) goto loc_831D8674;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x831d8674
	if (ctx.cr6.eq) goto loc_831D8674;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0710
	ctx.lr = 0x831D8630;
	sub_831D0710(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831d8678
	if (!ctx.cr6.eq) goto loc_831D8678;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831d7dd8
	ctx.lr = 0x831D866C;
	sub_831D7DD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831d8680
	goto loc_831D8680;
loc_831D8674:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831D8678:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_831D8680:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D8688"))) PPC_WEAK_FUNC(sub_831D8688);
PPC_FUNC_IMPL(__imp__sub_831D8688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x831D8690;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r6.u32);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831d82c0
	ctx.lr = 0x831D86D4;
	sub_831D82C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x831d8c04
	if (!ctx.cr6.eq) goto loc_831D8C04;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r19,-1
	ctx.r19.s64 = -1;
	// b 0x831d86fc
	goto loc_831D86FC;
loc_831D86F4:
	// lwz r27,388(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r31,380(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_831D86FC:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r15,0(r27)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r11,r16,30
	ctx.r11.u64 = ctx.r16.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// bl 0x831cc840
	ctx.lr = 0x831D8744;
	sub_831CC840(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r21,r11,228
	ctx.r21.u64 = ctx.r11.u64 | 228;
	// ble cr6,0x831d8aa8
	if (!ctx.cr6.gt) goto loc_831D8AA8;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// addi r17,r1,136
	ctx.r17.s64 = ctx.r1.s64 + 136;
loc_831D876C:
	// srw r11,r16,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r16.u32 >> (ctx.r24.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// bl 0x831cc840
	ctx.lr = 0x831D87A0;
	sub_831CC840(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// andc r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 & ~ctx.r11.u64;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,120(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// slw r10,r29,r24
	ctx.r10.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r24.u8 & 0x3F));
	// lwz r18,124(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// or r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x831d8904
	if (ctx.cr6.eq) goto loc_831D8904;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// beq cr6,0x831d88fc
	if (ctx.cr6.eq) goto loc_831D88FC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d0710
	ctx.lr = 0x831D87E8;
	sub_831D0710(ctx, base);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// beq cr6,0x831d88d8
	if (ctx.cr6.eq) goto loc_831D88D8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
loc_831D8808:
	// srw r11,r21,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8c00
	if (ctx.cr0.eq) goto loc_831D8C00;
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r31,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r31,1,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r19,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// srw r4,r11,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// lfdx f1,r10,r7
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r7.u32);
	// bl 0x831ca960
	ctx.lr = 0x831D8868;
	sub_831CA960(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stfd f1,0(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f1.u64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r31,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r31,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r8,r19,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r30,27
	ctx.r7.u64 = ctx.r30.u32 & 0x1F;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x831d8808
	if (ctx.cr6.lt) goto loc_831D8808;
	// lwz r27,388(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r31,380(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_831D88D8:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x831d0518
	ctx.lr = 0x831D88EC;
	sub_831D0518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r21,228
	ctx.r21.s64 = 228;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r22,0
	ctx.r22.s64 = 0;
loc_831D88FC:
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x831d890c
	if (!ctx.cr6.eq) goto loc_831D890C;
loc_831D8904:
	// cmplw cr6,r22,r18
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x831d8a90
	if (ctx.cr6.eq) goto loc_831D8A90;
loc_831D890C:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831d0710
	ctx.lr = 0x831D891C;
	sub_831D0710(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8c04
	if (ctx.cr0.eq) goto loc_831D8C04;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq cr6,0x831d89c8
	if (ctx.cr6.eq) goto loc_831D89C8;
	// rlwinm r23,r28,0,0,19
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_831D894C:
	// srw r11,r21,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r27,r11,30
	ctx.r27.u64 = ctx.r11.u32 & 0x3;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cab88
	ctx.lr = 0x831D8964;
	sub_831CAB88(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f1.u64);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8988
	if (!ctx.cr0.eq) goto loc_831D8988;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831d899c
	goto loc_831D899C;
loc_831D8988:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
loc_831D899C:
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bne 0x831d894c
	if (!ctx.cr0.eq) goto loc_831D894C;
loc_831D89C8:
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r29,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r29,1,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1E;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r19,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// srw r4,r11,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// lfdx f1,r10,r7
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r7.u32);
	// bl 0x831ca960
	ctx.lr = 0x831D8A10;
	sub_831CA960(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stfd f1,0(r17)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r17.u32 + 0, ctx.f1.u64);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r10,r29,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r29,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1E;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r7,r19,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r11,r24,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r24,27
	ctx.r7.u64 = ctx.r24.u32 & 0x1F;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r25,1
	ctx.r4.s64 = ctx.r25.s64 + 1;
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831d0518
	ctx.lr = 0x831D8A74;
	sub_831D0518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,388(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r31,380(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r21,228
	ctx.r21.s64 = 228;
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_831D8A90:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831d876c
	if (ctx.cr6.lt) goto loc_831D876C;
loc_831D8AA8:
	// rlwinm. r11,r22,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8ac0
	if (ctx.cr0.eq) goto loc_831D8AC0;
	// rlwinm. r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8ac0
	if (ctx.cr0.eq) goto loc_831D8AC0;
loc_831D8AB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831d8ae8
	goto loc_831D8AE8;
loc_831D8AC0:
	// rlwinm. r11,r22,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8ad0
	if (ctx.cr0.eq) goto loc_831D8AD0;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8ab8
	if (!ctx.cr0.eq) goto loc_831D8AB8;
loc_831D8AD0:
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8ae4
	if (ctx.cr0.eq) goto loc_831D8AE4;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x831d8ae8
	if (!ctx.cr0.eq) goto loc_831D8AE8;
loc_831D8AE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D8AE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8c04
	if (ctx.cr0.eq) goto loc_831D8C04;
	// rlwinm. r9,r22,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x831d8b0c
	if (ctx.cr0.eq) goto loc_831D8B0C;
	// rlwinm. r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8b0c
	if (ctx.cr0.eq) goto loc_831D8B0C;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
loc_831D8B0C:
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8b20
	if (ctx.cr0.eq) goto loc_831D8B20;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_831D8B20:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8b34
	if (ctx.cr0.eq) goto loc_831D8B34;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831d8b34
	if (ctx.cr0.eq) goto loc_831D8B34;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_831D8B34:
	// lwz r9,396(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d8b98
	if (!ctx.cr6.eq) goto loc_831D8B98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831d8b74
	goto loc_831D8B74;
loc_831D8B6C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_831D8B74:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d8b6c
	if (!ctx.cr6.eq) goto loc_831D8B6C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x831104e0
	ctx.lr = 0x831D8B98;
	sub_831104E0(ctx, base);
loc_831D8B98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x83123458
	ctx.lr = 0x831D8BA4;
	sub_83123458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83122f18
	ctx.lr = 0x831D8BC0;
	sub_83122F18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,388(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r21,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// bl 0x831d82c0
	ctx.lr = 0x831D8BEC;
	sub_831D82C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x831d86f4
	if (ctx.cr6.eq) goto loc_831D86F4;
loc_831D8C00:
	// lwz r31,380(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_831D8C04:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d8c4c
	if (!ctx.cr6.eq) goto loc_831D8C4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831d8c28
	goto loc_831D8C28;
loc_831D8C20:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_831D8C28:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d8c20
	if (!ctx.cr6.eq) goto loc_831D8C20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x831104e0
	ctx.lr = 0x831D8C4C;
	sub_831104E0(ctx, base);
loc_831D8C4C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8C54"))) PPC_WEAK_FUNC(sub_831D8C54);
PPC_FUNC_IMPL(__imp__sub_831D8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8C58"))) PPC_WEAK_FUNC(sub_831D8C58);
PPC_FUNC_IMPL(__imp__sub_831D8C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_831D8C5C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831d8ca8
	if (ctx.cr6.eq) goto loc_831D8CA8;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8c7c
	if (!ctx.cr0.eq) goto loc_831D8C7C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831d8c80
	if (ctx.cr0.eq) goto loc_831D8C80;
loc_831D8C7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D8C80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d8c94
	if (ctx.cr0.eq) goto loc_831D8C94;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831d8c98
	if (!ctx.cr0.eq) goto loc_831D8C98;
loc_831D8C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D8C98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x831d8c5c
	goto loc_831D8C5C;
loc_831D8CA8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8CB8"))) PPC_WEAK_FUNC(sub_831D8CB8);
PPC_FUNC_IMPL(__imp__sub_831D8CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x831d8ccc
	goto loc_831D8CCC;
loc_831D8CC4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831D8CCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x831d8cc4
	if (!ctx.cr6.eq) goto loc_831D8CC4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8CF4"))) PPC_WEAK_FUNC(sub_831D8CF4);
PPC_FUNC_IMPL(__imp__sub_831D8CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8CF8"))) PPC_WEAK_FUNC(sub_831D8CF8);
PPC_FUNC_IMPL(__imp__sub_831D8CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x831d8d0c
	goto loc_831D8D0C;
loc_831D8D04:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_831D8D0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x831d8d04
	if (!ctx.cr6.eq) goto loc_831D8D04;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8D34"))) PPC_WEAK_FUNC(sub_831D8D34);
PPC_FUNC_IMPL(__imp__sub_831D8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8D38"))) PPC_WEAK_FUNC(sub_831D8D38);
PPC_FUNC_IMPL(__imp__sub_831D8D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// b 0x831d8d4c
	goto loc_831D8D4C;
loc_831D8D44:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_831D8D4C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x831d8d44
	if (!ctx.cr6.eq) goto loc_831D8D44;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x831d8d78
	goto loc_831D8D78;
loc_831D8D6C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_831D8D78:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x831d8d6c
	if (!ctx.cr6.eq) goto loc_831D8D6C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8D8C"))) PPC_WEAK_FUNC(sub_831D8D8C);
PPC_FUNC_IMPL(__imp__sub_831D8D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8D90"))) PPC_WEAK_FUNC(sub_831D8D90);
PPC_FUNC_IMPL(__imp__sub_831D8D90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_831D8DBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x831d8ddc
	if (!ctx.cr0.eq) goto loc_831D8DDC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831d8dbc
	goto loc_831D8DBC;
loc_831D8DDC:
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x831d8e28
	goto loc_831D8E28;
loc_831D8E00:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831d8e1c
	if (!ctx.cr0.eq) goto loc_831D8E1C;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831d8e30
	if (!ctx.cr0.eq) goto loc_831D8E30;
loc_831D8E1C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_831D8E28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831d8e00
	if (!ctx.cr6.eq) goto loc_831D8E00;
loc_831D8E30:
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8E3C"))) PPC_WEAK_FUNC(sub_831D8E3C);
PPC_FUNC_IMPL(__imp__sub_831D8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8E40"))) PPC_WEAK_FUNC(sub_831D8E40);
PPC_FUNC_IMPL(__imp__sub_831D8E40) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x831181d0
	ctx.lr = 0x831D8E6C;
	sub_831181D0(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8EAC"))) PPC_WEAK_FUNC(sub_831D8EAC);
PPC_FUNC_IMPL(__imp__sub_831D8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8EB0"))) PPC_WEAK_FUNC(sub_831D8EB0);
PPC_FUNC_IMPL(__imp__sub_831D8EB0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x831181d0
	ctx.lr = 0x831D8EDC;
	sub_831181D0(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8F1C"))) PPC_WEAK_FUNC(sub_831D8F1C);
PPC_FUNC_IMPL(__imp__sub_831D8F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8F20"))) PPC_WEAK_FUNC(sub_831D8F20);
PPC_FUNC_IMPL(__imp__sub_831D8F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
loc_831D8F24:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831d8f24
	if (!ctx.cr6.eq) goto loc_831D8F24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8F60"))) PPC_WEAK_FUNC(sub_831D8F60);
PPC_FUNC_IMPL(__imp__sub_831D8F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x831D8F68;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r24,23
	ctx.r11.s64 = ctx.r24.s64 + 23;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// b 0x831d8fac
	goto loc_831D8FAC;
loc_831D8F90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831d9050
	if (ctx.cr6.eq) goto loc_831D9050;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83123778
	ctx.lr = 0x831D8FA0;
	sub_83123778(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831d905c
	if (ctx.cr0.eq) goto loc_831D905C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_831D8FAC:
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x831d8f90
	if (!ctx.cr6.eq) goto loc_831D8F90;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123778
	ctx.lr = 0x831D8FC0;
	sub_83123778(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x831d9068
	if (ctx.cr0.eq) goto loc_831D9068;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_831D8FCC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d9068
	if (ctx.cr6.eq) goto loc_831D9068;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x831d903c
	if (ctx.cr6.eq) goto loc_831D903C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d8ff8
	if (!ctx.cr0.eq) goto loc_831D8FF8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831d8ffc
	if (ctx.cr0.eq) goto loc_831D8FFC;
loc_831D8FF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D8FFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d9010
	if (ctx.cr0.eq) goto loc_831D9010;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831d9014
	if (!ctx.cr0.eq) goto loc_831D9014;
loc_831D9010:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D9014:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d903c
	if (ctx.cr0.eq) goto loc_831D903C;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x831d903c
	if (!ctx.cr6.eq) goto loc_831D903C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123d48
	ctx.lr = 0x831D903C;
	sub_83123D48(ctx, base);
loc_831D903C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d8fcc
	if (!ctx.cr6.eq) goto loc_831D8FCC;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// b 0x831d8fcc
	goto loc_831D8FCC;
loc_831D9050:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fd318
	ctx.lr = 0x831D905C;
	sub_830FD318(ctx, base);
loc_831D905C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fd318
	ctx.lr = 0x831D9068;
	sub_830FD318(ctx, base);
loc_831D9068:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d915c
	if (ctx.cr6.eq) goto loc_831D915C;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
loc_831D9074:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d9100
	if (ctx.cr6.eq) goto loc_831D9100;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831d90ec
	if (ctx.cr6.eq) goto loc_831D90EC;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x831d90ec
	if (ctx.cr6.eq) goto loc_831D90EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831d90ac
	if (!ctx.cr0.eq) goto loc_831D90AC;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831d90b0
	if (ctx.cr0.eq) goto loc_831D90B0;
loc_831D90AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D90B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d90c4
	if (ctx.cr0.eq) goto loc_831D90C4;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831d90c8
	if (!ctx.cr0.eq) goto loc_831D90C8;
loc_831D90C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D90C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d90ec
	if (ctx.cr0.eq) goto loc_831D90EC;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x831d90ec
	if (!ctx.cr6.eq) goto loc_831D90EC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83123d48
	ctx.lr = 0x831D90EC;
	sub_83123D48(ctx, base);
loc_831D90EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831d9074
	if (!ctx.cr6.eq) goto loc_831D9074;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// b 0x831d9074
	goto loc_831D9074;
loc_831D9100:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d9148
	if (ctx.cr6.eq) goto loc_831D9148;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831d9124
	goto loc_831D9124;
loc_831D911C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_831D9124:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x831d911c
	if (!ctx.cr6.eq) goto loc_831D911C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// b 0x831d9174
	goto loc_831D9174;
loc_831D9148:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83123d48
	ctx.lr = 0x831D9158;
	sub_83123D48(ctx, base);
	// b 0x831d9174
	goto loc_831D9174;
loc_831D915C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d916c
	if (ctx.cr6.eq) goto loc_831D916C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x831d9170
	goto loc_831D9170;
loc_831D916C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D9170:
	// stwx r11,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r11.u32);
loc_831D9174:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831d918c
	if (ctx.cr6.eq) goto loc_831D918C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123d48
	ctx.lr = 0x831D918C;
	sub_83123D48(ctx, base);
loc_831D918C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831d8c58
	ctx.lr = 0x831D9198;
	sub_831D8C58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_831D91A0"))) PPC_WEAK_FUNC(sub_831D91A0);
PPC_FUNC_IMPL(__imp__sub_831D91A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831D91C0:
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw. r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831d9220
	if (ctx.cr0.eq) goto loc_831D9220;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831d9220
	if (ctx.cr6.eq) goto loc_831D9220;
	// lwz r4,64(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831d91c0
	if (!ctx.cr6.eq) goto loc_831D91C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831D9220:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9228"))) PPC_WEAK_FUNC(sub_831D9228);
PPC_FUNC_IMPL(__imp__sub_831D9228) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D922C"))) PPC_WEAK_FUNC(sub_831D922C);
PPC_FUNC_IMPL(__imp__sub_831D922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9230"))) PPC_WEAK_FUNC(sub_831D9230);
PPC_FUNC_IMPL(__imp__sub_831D9230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831D9238;
	sub_82CA2BE0(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x831d9260
	if (ctx.cr6.lt) goto loc_831D9260;
	// li r27,43
	ctx.r27.s64 = 43;
	// b 0x831d9268
	goto loc_831D9268;
loc_831D9260:
	// li r27,45
	ctx.r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_831D9268:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	ctx.f30.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,2864
	ctx.r29.s64 = ctx.r11.s64 + 2864;
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_831D92AC:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8223f888
	ctx.lr = 0x831D92E8;
	sub_8223F888(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x831d92ac
	if (ctx.cr6.lt) goto loc_831D92AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,20720
	ctx.r4.s64 = ctx.r10.s64 + 20720;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = ctx.r27.s8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223f888
	ctx.lr = 0x831D9318;
	sub_8223F888(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831D9328"))) PPC_WEAK_FUNC(sub_831D9328);
PPC_FUNC_IMPL(__imp__sub_831D9328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9330;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d936c
	if (!ctx.cr6.eq) goto loc_831D936C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,733
	ctx.r7.s64 = 733;
	// bl 0x831034d8
	ctx.lr = 0x831D936C;
	sub_831034D8(ctx, base);
loc_831D936C:
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9378;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831d93dc
	if (!ctx.cr6.eq) goto loc_831D93DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d939c
	if (ctx.cr6.eq) goto loc_831D939C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D939C;
	sub_831093F0(ctx, base);
loc_831D939C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d93d4
	if (ctx.cr6.eq) goto loc_831D93D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d93d4
	if (ctx.cr6.eq) goto loc_831D93D4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D93D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D93D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9434
	goto loc_831D9434;
loc_831D93DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d93f8
	if (ctx.cr6.eq) goto loc_831D93F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D93F8;
	sub_831093F0(ctx, base);
loc_831D93F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9430
	if (ctx.cr6.eq) goto loc_831D9430;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9430
	if (ctx.cr6.eq) goto loc_831D9430;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9434:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D943C"))) PPC_WEAK_FUNC(sub_831D943C);
PPC_FUNC_IMPL(__imp__sub_831D943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9440"))) PPC_WEAK_FUNC(sub_831D9440);
PPC_FUNC_IMPL(__imp__sub_831D9440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831D9448;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9484
	if (!ctx.cr6.eq) goto loc_831D9484;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,817
	ctx.r7.s64 = 817;
	// bl 0x831034d8
	ctx.lr = 0x831D9484;
	sub_831034D8(ctx, base);
loc_831D9484:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9490;
	sub_83108DE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D94A0;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831d950c
	if (ctx.cr6.eq) goto loc_831D950C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831d950c
	if (!ctx.cr6.eq) goto loc_831D950C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d94cc
	if (ctx.cr6.eq) goto loc_831D94CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D94CC;
	sub_831093F0(ctx, base);
loc_831D94CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9504
	if (ctx.cr6.eq) goto loc_831D9504;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9504
	if (ctx.cr6.eq) goto loc_831D9504;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9504:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9564
	goto loc_831D9564;
loc_831D950C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9528
	if (ctx.cr6.eq) goto loc_831D9528;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9528;
	sub_831093F0(ctx, base);
loc_831D9528:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9560
	if (ctx.cr6.eq) goto loc_831D9560;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9560
	if (ctx.cr6.eq) goto loc_831D9560;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831D956C"))) PPC_WEAK_FUNC(sub_831D956C);
PPC_FUNC_IMPL(__imp__sub_831D956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9570"))) PPC_WEAK_FUNC(sub_831D9570);
PPC_FUNC_IMPL(__imp__sub_831D9570) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831d95a8
	if (ctx.cr6.eq) goto loc_831D95A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x831093f0
	ctx.lr = 0x831D95A8;
	sub_831093F0(ctx, base);
loc_831D95A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d95e0
	if (ctx.cr6.eq) goto loc_831D95E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d95e0
	if (ctx.cr6.eq) goto loc_831D95E0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831D95E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D95E0:
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

__attribute__((alias("__imp__sub_831D95FC"))) PPC_WEAK_FUNC(sub_831D95FC);
PPC_FUNC_IMPL(__imp__sub_831D95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9600"))) PPC_WEAK_FUNC(sub_831D9600);
PPC_FUNC_IMPL(__imp__sub_831D9600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831D9608;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831d9634
	if (ctx.cr6.eq) goto loc_831D9634;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x831093f0
	ctx.lr = 0x831D9634;
	sub_831093F0(ctx, base);
loc_831D9634:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9670
	if (ctx.cr6.eq) goto loc_831D9670;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9670
	if (ctx.cr6.eq) goto loc_831D9670;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831D9670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831D967C"))) PPC_WEAK_FUNC(sub_831D967C);
PPC_FUNC_IMPL(__imp__sub_831D967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9680"))) PPC_WEAK_FUNC(sub_831D9680);
PPC_FUNC_IMPL(__imp__sub_831D9680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9688;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831d96c4
	if (!ctx.cr6.eq) goto loc_831D96C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,988
	ctx.r7.s64 = 988;
	// bl 0x831034d8
	ctx.lr = 0x831D96C4;
	sub_831034D8(ctx, base);
loc_831D96C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831d96e0
	if (ctx.cr6.eq) goto loc_831D96E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D96E0;
	sub_831093F0(ctx, base);
loc_831D96E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d971c
	if (ctx.cr6.eq) goto loc_831D971C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d971c
	if (ctx.cr6.eq) goto loc_831D971C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,63
	ctx.r6.s64 = 63;
	// lwz r5,252(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831D971C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D971C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9728"))) PPC_WEAK_FUNC(sub_831D9728);
PPC_FUNC_IMPL(__imp__sub_831D9728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9730;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831090e8
	ctx.lr = 0x831D9750;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831d97b8
	if (!ctx.cr6.eq) goto loc_831D97B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9774
	if (ctx.cr6.eq) goto loc_831D9774;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9774;
	sub_831093F0(ctx, base);
loc_831D9774:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d97b0
	if (ctx.cr6.eq) goto loc_831D97B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d97b0
	if (ctx.cr6.eq) goto loc_831D97B0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D97B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D97B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9814
	goto loc_831D9814;
loc_831D97B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d97d4
	if (ctx.cr6.eq) goto loc_831D97D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D97D4;
	sub_831093F0(ctx, base);
loc_831D97D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9810
	if (ctx.cr6.eq) goto loc_831D9810;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9810
	if (ctx.cr6.eq) goto loc_831D9810;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D981C"))) PPC_WEAK_FUNC(sub_831D981C);
PPC_FUNC_IMPL(__imp__sub_831D981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9820"))) PPC_WEAK_FUNC(sub_831D9820);
PPC_FUNC_IMPL(__imp__sub_831D9820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831D9828;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9864
	if (!ctx.cr6.eq) goto loc_831D9864;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1097
	ctx.r7.s64 = 1097;
	// bl 0x831034d8
	ctx.lr = 0x831D9864;
	sub_831034D8(ctx, base);
loc_831D9864:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9870;
	sub_83108DE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9880;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831d98ec
	if (ctx.cr6.eq) goto loc_831D98EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831d98ec
	if (ctx.cr6.eq) goto loc_831D98EC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d98ac
	if (ctx.cr6.eq) goto loc_831D98AC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D98AC;
	sub_831093F0(ctx, base);
loc_831D98AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d98e4
	if (ctx.cr6.eq) goto loc_831D98E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d98e4
	if (ctx.cr6.eq) goto loc_831D98E4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D98E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D98E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9944
	goto loc_831D9944;
loc_831D98EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9908
	if (ctx.cr6.eq) goto loc_831D9908;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9908;
	sub_831093F0(ctx, base);
loc_831D9908:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9940
	if (ctx.cr6.eq) goto loc_831D9940;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9940
	if (ctx.cr6.eq) goto loc_831D9940;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9940:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831D994C"))) PPC_WEAK_FUNC(sub_831D994C);
PPC_FUNC_IMPL(__imp__sub_831D994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9950"))) PPC_WEAK_FUNC(sub_831D9950);
PPC_FUNC_IMPL(__imp__sub_831D9950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9958;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9994
	if (!ctx.cr6.eq) goto loc_831D9994;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// bl 0x831034d8
	ctx.lr = 0x831D9994;
	sub_831034D8(ctx, base);
loc_831D9994:
	// li r4,934
	ctx.r4.s64 = 934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D99A0;
	sub_83108DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x831d9a04
	if (ctx.cr0.eq) goto loc_831D9A04;
	// beq cr6,0x831d99c4
	if (ctx.cr6.eq) goto loc_831D99C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D99C4;
	sub_831093F0(ctx, base);
loc_831D99C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d99fc
	if (ctx.cr6.eq) goto loc_831D99FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d99fc
	if (ctx.cr6.eq) goto loc_831D99FC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D99FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D99FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9a58
	goto loc_831D9A58;
loc_831D9A04:
	// beq cr6,0x831d9a1c
	if (ctx.cr6.eq) goto loc_831D9A1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9A1C;
	sub_831093F0(ctx, base);
loc_831D9A1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9a54
	if (ctx.cr6.eq) goto loc_831D9A54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9a54
	if (ctx.cr6.eq) goto loc_831D9A54;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9A58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9A60"))) PPC_WEAK_FUNC(sub_831D9A60);
PPC_FUNC_IMPL(__imp__sub_831D9A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9A68;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9aa4
	if (!ctx.cr6.eq) goto loc_831D9AA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1208
	ctx.r7.s64 = 1208;
	// bl 0x831034d8
	ctx.lr = 0x831D9AA4;
	sub_831034D8(ctx, base);
loc_831D9AA4:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9AB0;
	sub_83108DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x831d9b14
	if (ctx.cr0.eq) goto loc_831D9B14;
	// beq cr6,0x831d9ad4
	if (ctx.cr6.eq) goto loc_831D9AD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9AD4;
	sub_831093F0(ctx, base);
loc_831D9AD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9b0c
	if (ctx.cr6.eq) goto loc_831D9B0C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9b0c
	if (ctx.cr6.eq) goto loc_831D9B0C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9B0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9b68
	goto loc_831D9B68;
loc_831D9B14:
	// beq cr6,0x831d9b2c
	if (ctx.cr6.eq) goto loc_831D9B2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9B2C;
	sub_831093F0(ctx, base);
loc_831D9B2C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9b64
	if (ctx.cr6.eq) goto loc_831D9B64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9b64
	if (ctx.cr6.eq) goto loc_831D9B64;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9B68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9B70"))) PPC_WEAK_FUNC(sub_831D9B70);
PPC_FUNC_IMPL(__imp__sub_831D9B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9B78;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9bb4
	if (!ctx.cr6.eq) goto loc_831D9BB4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// bl 0x831034d8
	ctx.lr = 0x831D9BB4;
	sub_831034D8(ctx, base);
loc_831D9BB4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9BC0;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831d9c24
	if (!ctx.cr6.eq) goto loc_831D9C24;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9be4
	if (ctx.cr6.eq) goto loc_831D9BE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9BE4;
	sub_831093F0(ctx, base);
loc_831D9BE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9c1c
	if (ctx.cr6.eq) goto loc_831D9C1C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9c1c
	if (ctx.cr6.eq) goto loc_831D9C1C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9C1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9c7c
	goto loc_831D9C7C;
loc_831D9C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9c40
	if (ctx.cr6.eq) goto loc_831D9C40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9C40;
	sub_831093F0(ctx, base);
loc_831D9C40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9c78
	if (ctx.cr6.eq) goto loc_831D9C78;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9c78
	if (ctx.cr6.eq) goto loc_831D9C78;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9C7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9C84"))) PPC_WEAK_FUNC(sub_831D9C84);
PPC_FUNC_IMPL(__imp__sub_831D9C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9C88"))) PPC_WEAK_FUNC(sub_831D9C88);
PPC_FUNC_IMPL(__imp__sub_831D9C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9C90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9ccc
	if (!ctx.cr6.eq) goto loc_831D9CCC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1316
	ctx.r7.s64 = 1316;
	// bl 0x831034d8
	ctx.lr = 0x831D9CCC;
	sub_831034D8(ctx, base);
loc_831D9CCC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9CD8;
	sub_83108DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x831d9d3c
	if (!ctx.cr0.eq) goto loc_831D9D3C;
	// beq cr6,0x831d9cfc
	if (ctx.cr6.eq) goto loc_831D9CFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9CFC;
	sub_831093F0(ctx, base);
loc_831D9CFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9d34
	if (ctx.cr6.eq) goto loc_831D9D34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9d34
	if (ctx.cr6.eq) goto loc_831D9D34;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,19
	ctx.r6.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9D34:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9d90
	goto loc_831D9D90;
loc_831D9D3C:
	// beq cr6,0x831d9d54
	if (ctx.cr6.eq) goto loc_831D9D54;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9D54;
	sub_831093F0(ctx, base);
loc_831D9D54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9d8c
	if (ctx.cr6.eq) goto loc_831D9D8C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9d8c
	if (ctx.cr6.eq) goto loc_831D9D8C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,19
	ctx.r6.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9D98"))) PPC_WEAK_FUNC(sub_831D9D98);
PPC_FUNC_IMPL(__imp__sub_831D9D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9DA0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9ddc
	if (!ctx.cr6.eq) goto loc_831D9DDC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// bl 0x831034d8
	ctx.lr = 0x831D9DDC;
	sub_831034D8(ctx, base);
loc_831D9DDC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9DE8;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831d9e4c
	if (!ctx.cr6.eq) goto loc_831D9E4C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9e0c
	if (ctx.cr6.eq) goto loc_831D9E0C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9E0C;
	sub_831093F0(ctx, base);
loc_831D9E0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9e44
	if (ctx.cr6.eq) goto loc_831D9E44;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9e44
	if (ctx.cr6.eq) goto loc_831D9E44;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9E44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9ea4
	goto loc_831D9EA4;
loc_831D9E4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9e68
	if (ctx.cr6.eq) goto loc_831D9E68;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9E68;
	sub_831093F0(ctx, base);
loc_831D9E68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9ea0
	if (ctx.cr6.eq) goto loc_831D9EA0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9ea0
	if (ctx.cr6.eq) goto loc_831D9EA0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9EAC"))) PPC_WEAK_FUNC(sub_831D9EAC);
PPC_FUNC_IMPL(__imp__sub_831D9EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9EB0"))) PPC_WEAK_FUNC(sub_831D9EB0);
PPC_FUNC_IMPL(__imp__sub_831D9EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9EB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831d9ef4
	if (!ctx.cr6.eq) goto loc_831D9EF4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// bl 0x831034d8
	ctx.lr = 0x831D9EF4;
	sub_831034D8(ctx, base);
loc_831D9EF4:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831D9F00;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831d9f64
	if (!ctx.cr6.eq) goto loc_831D9F64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9f24
	if (ctx.cr6.eq) goto loc_831D9F24;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9F24;
	sub_831093F0(ctx, base);
loc_831D9F24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9f5c
	if (ctx.cr6.eq) goto loc_831D9F5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9f5c
	if (ctx.cr6.eq) goto loc_831D9F5C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9F5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9fbc
	goto loc_831D9FBC;
loc_831D9F64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831d9f80
	if (ctx.cr6.eq) goto loc_831D9F80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831D9F80;
	sub_831093F0(ctx, base);
loc_831D9F80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831d9fb8
	if (ctx.cr6.eq) goto loc_831D9FB8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831d9fb8
	if (ctx.cr6.eq) goto loc_831D9FB8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D9FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831D9FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D9FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831D9FC4"))) PPC_WEAK_FUNC(sub_831D9FC4);
PPC_FUNC_IMPL(__imp__sub_831D9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9FC8"))) PPC_WEAK_FUNC(sub_831D9FC8);
PPC_FUNC_IMPL(__imp__sub_831D9FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831D9FD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da00c
	if (!ctx.cr6.eq) goto loc_831DA00C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1471
	ctx.r7.s64 = 1471;
	// bl 0x831034d8
	ctx.lr = 0x831DA00C;
	sub_831034D8(ctx, base);
loc_831DA00C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DA018;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x831da07c
	if (!ctx.cr6.eq) goto loc_831DA07C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da03c
	if (ctx.cr6.eq) goto loc_831DA03C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA03C;
	sub_831093F0(ctx, base);
loc_831DA03C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da074
	if (ctx.cr6.eq) goto loc_831DA074;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da074
	if (ctx.cr6.eq) goto loc_831DA074;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA074:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da0d4
	goto loc_831DA0D4;
loc_831DA07C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da098
	if (ctx.cr6.eq) goto loc_831DA098;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA098;
	sub_831093F0(ctx, base);
loc_831DA098:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da0d0
	if (ctx.cr6.eq) goto loc_831DA0D0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da0d0
	if (ctx.cr6.eq) goto loc_831DA0D0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA0D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA0DC"))) PPC_WEAK_FUNC(sub_831DA0DC);
PPC_FUNC_IMPL(__imp__sub_831DA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA0E0"))) PPC_WEAK_FUNC(sub_831DA0E0);
PPC_FUNC_IMPL(__imp__sub_831DA0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DA0E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da124
	if (!ctx.cr6.eq) goto loc_831DA124;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1521
	ctx.r7.s64 = 1521;
	// bl 0x831034d8
	ctx.lr = 0x831DA124;
	sub_831034D8(ctx, base);
loc_831DA124:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DA130;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831da194
	if (!ctx.cr6.eq) goto loc_831DA194;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da154
	if (ctx.cr6.eq) goto loc_831DA154;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA154;
	sub_831093F0(ctx, base);
loc_831DA154:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da18c
	if (ctx.cr6.eq) goto loc_831DA18C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da18c
	if (ctx.cr6.eq) goto loc_831DA18C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA18C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da1ec
	goto loc_831DA1EC;
loc_831DA194:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da1b0
	if (ctx.cr6.eq) goto loc_831DA1B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA1B0;
	sub_831093F0(ctx, base);
loc_831DA1B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da1e8
	if (ctx.cr6.eq) goto loc_831DA1E8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da1e8
	if (ctx.cr6.eq) goto loc_831DA1E8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA1E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA1EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA1F4"))) PPC_WEAK_FUNC(sub_831DA1F4);
PPC_FUNC_IMPL(__imp__sub_831DA1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA1F8"))) PPC_WEAK_FUNC(sub_831DA1F8);
PPC_FUNC_IMPL(__imp__sub_831DA1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DA200;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da23c
	if (!ctx.cr6.eq) goto loc_831DA23C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1571
	ctx.r7.s64 = 1571;
	// bl 0x831034d8
	ctx.lr = 0x831DA23C;
	sub_831034D8(ctx, base);
loc_831DA23C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DA248;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831da2ac
	if (!ctx.cr6.eq) goto loc_831DA2AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da26c
	if (ctx.cr6.eq) goto loc_831DA26C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA26C;
	sub_831093F0(ctx, base);
loc_831DA26C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da2a4
	if (ctx.cr6.eq) goto loc_831DA2A4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da2a4
	if (ctx.cr6.eq) goto loc_831DA2A4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da304
	goto loc_831DA304;
loc_831DA2AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da2c8
	if (ctx.cr6.eq) goto loc_831DA2C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA2C8;
	sub_831093F0(ctx, base);
loc_831DA2C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da300
	if (ctx.cr6.eq) goto loc_831DA300;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da300
	if (ctx.cr6.eq) goto loc_831DA300;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA30C"))) PPC_WEAK_FUNC(sub_831DA30C);
PPC_FUNC_IMPL(__imp__sub_831DA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA310"))) PPC_WEAK_FUNC(sub_831DA310);
PPC_FUNC_IMPL(__imp__sub_831DA310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DA318;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da354
	if (!ctx.cr6.eq) goto loc_831DA354;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1622
	ctx.r7.s64 = 1622;
	// bl 0x831034d8
	ctx.lr = 0x831DA354;
	sub_831034D8(ctx, base);
loc_831DA354:
	// li r4,615
	ctx.r4.s64 = 615;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DA360;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831da3c4
	if (!ctx.cr6.eq) goto loc_831DA3C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da384
	if (ctx.cr6.eq) goto loc_831DA384;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA384;
	sub_831093F0(ctx, base);
loc_831DA384:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da3bc
	if (ctx.cr6.eq) goto loc_831DA3BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da3bc
	if (ctx.cr6.eq) goto loc_831DA3BC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA3BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da41c
	goto loc_831DA41C;
loc_831DA3C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da3e0
	if (ctx.cr6.eq) goto loc_831DA3E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA3E0;
	sub_831093F0(ctx, base);
loc_831DA3E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da418
	if (ctx.cr6.eq) goto loc_831DA418;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da418
	if (ctx.cr6.eq) goto loc_831DA418;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA41C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA424"))) PPC_WEAK_FUNC(sub_831DA424);
PPC_FUNC_IMPL(__imp__sub_831DA424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA428"))) PPC_WEAK_FUNC(sub_831DA428);
PPC_FUNC_IMPL(__imp__sub_831DA428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DA430;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831da470
	if (!ctx.cr6.eq) goto loc_831DA470;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1676
	ctx.r7.s64 = 1676;
	// bl 0x831034d8
	ctx.lr = 0x831DA470;
	sub_831034D8(ctx, base);
loc_831DA470:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DA480;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831da4e8
	if (!ctx.cr6.eq) goto loc_831DA4E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da4a4
	if (ctx.cr6.eq) goto loc_831DA4A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA4A4;
	sub_831093F0(ctx, base);
loc_831DA4A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da4e0
	if (ctx.cr6.eq) goto loc_831DA4E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da4e0
	if (ctx.cr6.eq) goto loc_831DA4E0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,33
	ctx.r6.s64 = 33;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA4E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da544
	goto loc_831DA544;
loc_831DA4E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da504
	if (ctx.cr6.eq) goto loc_831DA504;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA504;
	sub_831093F0(ctx, base);
loc_831DA504:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da540
	if (ctx.cr6.eq) goto loc_831DA540;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da540
	if (ctx.cr6.eq) goto loc_831DA540;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,33
	ctx.r6.s64 = 33;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DA54C"))) PPC_WEAK_FUNC(sub_831DA54C);
PPC_FUNC_IMPL(__imp__sub_831DA54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA550"))) PPC_WEAK_FUNC(sub_831DA550);
PPC_FUNC_IMPL(__imp__sub_831DA550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DA558;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831da598
	if (!ctx.cr6.eq) goto loc_831DA598;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// bl 0x831034d8
	ctx.lr = 0x831DA598;
	sub_831034D8(ctx, base);
loc_831DA598:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DA5A8;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831da610
	if (!ctx.cr6.eq) goto loc_831DA610;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da5cc
	if (ctx.cr6.eq) goto loc_831DA5CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA5CC;
	sub_831093F0(ctx, base);
loc_831DA5CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da608
	if (ctx.cr6.eq) goto loc_831DA608;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da608
	if (ctx.cr6.eq) goto loc_831DA608;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA608:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da66c
	goto loc_831DA66C;
loc_831DA610:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da62c
	if (ctx.cr6.eq) goto loc_831DA62C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA62C;
	sub_831093F0(ctx, base);
loc_831DA62C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da668
	if (ctx.cr6.eq) goto loc_831DA668;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da668
	if (ctx.cr6.eq) goto loc_831DA668;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA66C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DA674"))) PPC_WEAK_FUNC(sub_831DA674);
PPC_FUNC_IMPL(__imp__sub_831DA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA678"))) PPC_WEAK_FUNC(sub_831DA678);
PPC_FUNC_IMPL(__imp__sub_831DA678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DA680;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831da6c0
	if (!ctx.cr6.eq) goto loc_831DA6C0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// bl 0x831034d8
	ctx.lr = 0x831DA6C0;
	sub_831034D8(ctx, base);
loc_831DA6C0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DA6D0;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x831da738
	if (!ctx.cr6.eq) goto loc_831DA738;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da6f4
	if (ctx.cr6.eq) goto loc_831DA6F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA6F4;
	sub_831093F0(ctx, base);
loc_831DA6F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da730
	if (ctx.cr6.eq) goto loc_831DA730;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da730
	if (ctx.cr6.eq) goto loc_831DA730;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA730:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da794
	goto loc_831DA794;
loc_831DA738:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da754
	if (ctx.cr6.eq) goto loc_831DA754;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA754;
	sub_831093F0(ctx, base);
loc_831DA754:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da790
	if (ctx.cr6.eq) goto loc_831DA790;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831da790
	if (ctx.cr6.eq) goto loc_831DA790;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DA790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DA79C"))) PPC_WEAK_FUNC(sub_831DA79C);
PPC_FUNC_IMPL(__imp__sub_831DA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA7A0"))) PPC_WEAK_FUNC(sub_831DA7A0);
PPC_FUNC_IMPL(__imp__sub_831DA7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DA7A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da7e4
	if (!ctx.cr6.eq) goto loc_831DA7E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// bl 0x831034d8
	ctx.lr = 0x831DA7E4;
	sub_831034D8(ctx, base);
loc_831DA7E4:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DA7F0;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831da854
	if (!ctx.cr6.eq) goto loc_831DA854;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da814
	if (ctx.cr6.eq) goto loc_831DA814;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA814;
	sub_831093F0(ctx, base);
loc_831DA814:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da84c
	if (ctx.cr6.eq) goto loc_831DA84C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da84c
	if (ctx.cr6.eq) goto loc_831DA84C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA84C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831da8ac
	goto loc_831DA8AC;
loc_831DA854:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da870
	if (ctx.cr6.eq) goto loc_831DA870;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA870;
	sub_831093F0(ctx, base);
loc_831DA870:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da8a8
	if (ctx.cr6.eq) goto loc_831DA8A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da8a8
	if (ctx.cr6.eq) goto loc_831DA8A8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA8A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA8AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA8B4"))) PPC_WEAK_FUNC(sub_831DA8B4);
PPC_FUNC_IMPL(__imp__sub_831DA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA8B8"))) PPC_WEAK_FUNC(sub_831DA8B8);
PPC_FUNC_IMPL(__imp__sub_831DA8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DA8C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831da8fc
	if (!ctx.cr6.eq) goto loc_831DA8FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1877
	ctx.r7.s64 = 1877;
	// bl 0x831034d8
	ctx.lr = 0x831DA8FC;
	sub_831034D8(ctx, base);
loc_831DA8FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831da918
	if (ctx.cr6.eq) goto loc_831DA918;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA918;
	sub_831093F0(ctx, base);
loc_831DA918:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da954
	if (ctx.cr6.eq) goto loc_831DA954;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831da954
	if (ctx.cr6.eq) goto loc_831DA954;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DA954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DA954:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DA960"))) PPC_WEAK_FUNC(sub_831DA960);
PPC_FUNC_IMPL(__imp__sub_831DA960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DA968;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831da9a8
	if (!ctx.cr6.eq) goto loc_831DA9A8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// bl 0x831034d8
	ctx.lr = 0x831DA9A8;
	sub_831034D8(ctx, base);
loc_831DA9A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DA9B8;
	sub_831090E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DA9CC;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831daa3c
	if (!ctx.cr6.eq) goto loc_831DAA3C;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x831daa3c
	if (!ctx.cr6.eq) goto loc_831DAA3C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831da9f8
	if (ctx.cr6.eq) goto loc_831DA9F8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DA9F8;
	sub_831093F0(ctx, base);
loc_831DA9F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831daa34
	if (ctx.cr6.eq) goto loc_831DAA34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831daa34
	if (ctx.cr6.eq) goto loc_831DAA34;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DAA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAA34:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831daa98
	goto loc_831DAA98;
loc_831DAA3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831daa58
	if (ctx.cr6.eq) goto loc_831DAA58;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAA58;
	sub_831093F0(ctx, base);
loc_831DAA58:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831daa94
	if (ctx.cr6.eq) goto loc_831DAA94;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831daa94
	if (ctx.cr6.eq) goto loc_831DAA94;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DAA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAA94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DAA98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831DAAA0"))) PPC_WEAK_FUNC(sub_831DAAA0);
PPC_FUNC_IMPL(__imp__sub_831DAAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DAAA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831daae8
	if (!ctx.cr6.eq) goto loc_831DAAE8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1991
	ctx.r7.s64 = 1991;
	// bl 0x831034d8
	ctx.lr = 0x831DAAE8;
	sub_831034D8(ctx, base);
loc_831DAAE8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAAF8;
	sub_831090E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAB0C;
	sub_831090E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831dab7c
	if (!ctx.cr0.eq) goto loc_831DAB7C;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x831dab7c
	if (!ctx.cr6.eq) goto loc_831DAB7C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dab38
	if (ctx.cr6.eq) goto loc_831DAB38;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAB38;
	sub_831093F0(ctx, base);
loc_831DAB38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dab74
	if (ctx.cr6.eq) goto loc_831DAB74;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831dab74
	if (ctx.cr6.eq) goto loc_831DAB74;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DAB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAB74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831dabd8
	goto loc_831DABD8;
loc_831DAB7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dab98
	if (ctx.cr6.eq) goto loc_831DAB98;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAB98;
	sub_831093F0(ctx, base);
loc_831DAB98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dabd4
	if (ctx.cr6.eq) goto loc_831DABD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831dabd4
	if (ctx.cr6.eq) goto loc_831DABD4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DABD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DABD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DABD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831DABE0"))) PPC_WEAK_FUNC(sub_831DABE0);
PPC_FUNC_IMPL(__imp__sub_831DABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DABE8;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dac28
	if (!ctx.cr6.eq) goto loc_831DAC28;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// bl 0x831034d8
	ctx.lr = 0x831DAC28;
	sub_831034D8(ctx, base);
loc_831DAC28:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAC38;
	sub_831090E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x831daca0
	if (!ctx.cr0.eq) goto loc_831DACA0;
	// beq cr6,0x831dac5c
	if (ctx.cr6.eq) goto loc_831DAC5C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAC5C;
	sub_831093F0(ctx, base);
loc_831DAC5C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dac98
	if (ctx.cr6.eq) goto loc_831DAC98;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dac98
	if (ctx.cr6.eq) goto loc_831DAC98;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DAC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAC98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831dacf8
	goto loc_831DACF8;
loc_831DACA0:
	// beq cr6,0x831dacb8
	if (ctx.cr6.eq) goto loc_831DACB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DACB8;
	sub_831093F0(ctx, base);
loc_831DACB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dacf4
	if (ctx.cr6.eq) goto loc_831DACF4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dacf4
	if (ctx.cr6.eq) goto loc_831DACF4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DACF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DACF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DACF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DAD00"))) PPC_WEAK_FUNC(sub_831DAD00);
PPC_FUNC_IMPL(__imp__sub_831DAD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DAD08;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dad48
	if (!ctx.cr6.eq) goto loc_831DAD48;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2102
	ctx.r7.s64 = 2102;
	// bl 0x831034d8
	ctx.lr = 0x831DAD48;
	sub_831034D8(ctx, base);
loc_831DAD48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAD58;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831dadc0
	if (!ctx.cr6.eq) goto loc_831DADC0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dad7c
	if (ctx.cr6.eq) goto loc_831DAD7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAD7C;
	sub_831093F0(ctx, base);
loc_831DAD7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dadb8
	if (ctx.cr6.eq) goto loc_831DADB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dadb8
	if (ctx.cr6.eq) goto loc_831DADB8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DADB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DADB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831dae1c
	goto loc_831DAE1C;
loc_831DADC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831daddc
	if (ctx.cr6.eq) goto loc_831DADDC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DADDC;
	sub_831093F0(ctx, base);
loc_831DADDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dae18
	if (ctx.cr6.eq) goto loc_831DAE18;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dae18
	if (ctx.cr6.eq) goto loc_831DAE18;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DAE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAE18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DAE1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DAE24"))) PPC_WEAK_FUNC(sub_831DAE24);
PPC_FUNC_IMPL(__imp__sub_831DAE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DAE28"))) PPC_WEAK_FUNC(sub_831DAE28);
PPC_FUNC_IMPL(__imp__sub_831DAE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DAE30;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dae70
	if (!ctx.cr6.eq) goto loc_831DAE70;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// bl 0x831034d8
	ctx.lr = 0x831DAE70;
	sub_831034D8(ctx, base);
loc_831DAE70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAE80;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831daee8
	if (!ctx.cr6.eq) goto loc_831DAEE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831daea4
	if (ctx.cr6.eq) goto loc_831DAEA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAEA4;
	sub_831093F0(ctx, base);
loc_831DAEA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831daee0
	if (ctx.cr6.eq) goto loc_831DAEE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831daee0
	if (ctx.cr6.eq) goto loc_831DAEE0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DAEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAEE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831daf44
	goto loc_831DAF44;
loc_831DAEE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831daf04
	if (ctx.cr6.eq) goto loc_831DAF04;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAF04;
	sub_831093F0(ctx, base);
loc_831DAF04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831daf40
	if (ctx.cr6.eq) goto loc_831DAF40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831daf40
	if (ctx.cr6.eq) goto loc_831DAF40;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DAF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DAF40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DAF44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DAF4C"))) PPC_WEAK_FUNC(sub_831DAF4C);
PPC_FUNC_IMPL(__imp__sub_831DAF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DAF50"))) PPC_WEAK_FUNC(sub_831DAF50);
PPC_FUNC_IMPL(__imp__sub_831DAF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DAF58;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831daf98
	if (!ctx.cr6.eq) goto loc_831DAF98;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2208
	ctx.r7.s64 = 2208;
	// bl 0x831034d8
	ctx.lr = 0x831DAF98;
	sub_831034D8(ctx, base);
loc_831DAF98:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DAFA8;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831db010
	if (!ctx.cr6.eq) goto loc_831DB010;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dafcc
	if (ctx.cr6.eq) goto loc_831DAFCC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DAFCC;
	sub_831093F0(ctx, base);
loc_831DAFCC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db008
	if (ctx.cr6.eq) goto loc_831DB008;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db008
	if (ctx.cr6.eq) goto loc_831DB008;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB008:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db06c
	goto loc_831DB06C;
loc_831DB010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db02c
	if (ctx.cr6.eq) goto loc_831DB02C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB02C;
	sub_831093F0(ctx, base);
loc_831DB02C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db068
	if (ctx.cr6.eq) goto loc_831DB068;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db068
	if (ctx.cr6.eq) goto loc_831DB068;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB06C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB074"))) PPC_WEAK_FUNC(sub_831DB074);
PPC_FUNC_IMPL(__imp__sub_831DB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB078"))) PPC_WEAK_FUNC(sub_831DB078);
PPC_FUNC_IMPL(__imp__sub_831DB078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB080;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831db0c0
	if (!ctx.cr6.eq) goto loc_831DB0C0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2261
	ctx.r7.s64 = 2261;
	// bl 0x831034d8
	ctx.lr = 0x831DB0C0;
	sub_831034D8(ctx, base);
loc_831DB0C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DB0D0;
	sub_831090E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x831db138
	if (!ctx.cr0.eq) goto loc_831DB138;
	// beq cr6,0x831db0f4
	if (ctx.cr6.eq) goto loc_831DB0F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB0F4;
	sub_831093F0(ctx, base);
loc_831DB0F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db130
	if (ctx.cr6.eq) goto loc_831DB130;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db130
	if (ctx.cr6.eq) goto loc_831DB130;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB130:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db190
	goto loc_831DB190;
loc_831DB138:
	// beq cr6,0x831db150
	if (ctx.cr6.eq) goto loc_831DB150;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB150;
	sub_831093F0(ctx, base);
loc_831DB150:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db18c
	if (ctx.cr6.eq) goto loc_831DB18C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db18c
	if (ctx.cr6.eq) goto loc_831DB18C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB18C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB198"))) PPC_WEAK_FUNC(sub_831DB198);
PPC_FUNC_IMPL(__imp__sub_831DB198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB1A0;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831db1e0
	if (!ctx.cr6.eq) goto loc_831DB1E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// bl 0x831034d8
	ctx.lr = 0x831DB1E0;
	sub_831034D8(ctx, base);
loc_831DB1E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DB1F0;
	sub_831090E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x831db258
	if (!ctx.cr0.eq) goto loc_831DB258;
	// beq cr6,0x831db214
	if (ctx.cr6.eq) goto loc_831DB214;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB214;
	sub_831093F0(ctx, base);
loc_831DB214:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db250
	if (ctx.cr6.eq) goto loc_831DB250;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db250
	if (ctx.cr6.eq) goto loc_831DB250;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB250:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db2b0
	goto loc_831DB2B0;
loc_831DB258:
	// beq cr6,0x831db270
	if (ctx.cr6.eq) goto loc_831DB270;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB270;
	sub_831093F0(ctx, base);
loc_831DB270:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db2ac
	if (ctx.cr6.eq) goto loc_831DB2AC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db2ac
	if (ctx.cr6.eq) goto loc_831DB2AC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB2B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB2B8"))) PPC_WEAK_FUNC(sub_831DB2B8);
PPC_FUNC_IMPL(__imp__sub_831DB2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB2C0;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831db300
	if (!ctx.cr6.eq) goto loc_831DB300;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2371
	ctx.r7.s64 = 2371;
	// bl 0x831034d8
	ctx.lr = 0x831DB300;
	sub_831034D8(ctx, base);
loc_831DB300:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DB310;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831db378
	if (!ctx.cr6.eq) goto loc_831DB378;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db334
	if (ctx.cr6.eq) goto loc_831DB334;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB334;
	sub_831093F0(ctx, base);
loc_831DB334:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db370
	if (ctx.cr6.eq) goto loc_831DB370;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db370
	if (ctx.cr6.eq) goto loc_831DB370;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB370:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db3d4
	goto loc_831DB3D4;
loc_831DB378:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db394
	if (ctx.cr6.eq) goto loc_831DB394;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB394;
	sub_831093F0(ctx, base);
loc_831DB394:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db3d0
	if (ctx.cr6.eq) goto loc_831DB3D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db3d0
	if (ctx.cr6.eq) goto loc_831DB3D0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB3D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB3DC"))) PPC_WEAK_FUNC(sub_831DB3DC);
PPC_FUNC_IMPL(__imp__sub_831DB3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB3E0"))) PPC_WEAK_FUNC(sub_831DB3E0);
PPC_FUNC_IMPL(__imp__sub_831DB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB3E8;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831db428
	if (!ctx.cr6.eq) goto loc_831DB428;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// bl 0x831034d8
	ctx.lr = 0x831DB428;
	sub_831034D8(ctx, base);
loc_831DB428:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DB438;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831db4a0
	if (!ctx.cr6.eq) goto loc_831DB4A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db45c
	if (ctx.cr6.eq) goto loc_831DB45C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB45C;
	sub_831093F0(ctx, base);
loc_831DB45C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db498
	if (ctx.cr6.eq) goto loc_831DB498;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db498
	if (ctx.cr6.eq) goto loc_831DB498;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB498:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db4fc
	goto loc_831DB4FC;
loc_831DB4A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db4bc
	if (ctx.cr6.eq) goto loc_831DB4BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB4BC;
	sub_831093F0(ctx, base);
loc_831DB4BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db4f8
	if (ctx.cr6.eq) goto loc_831DB4F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db4f8
	if (ctx.cr6.eq) goto loc_831DB4F8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB4F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB4FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB504"))) PPC_WEAK_FUNC(sub_831DB504);
PPC_FUNC_IMPL(__imp__sub_831DB504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB508"))) PPC_WEAK_FUNC(sub_831DB508);
PPC_FUNC_IMPL(__imp__sub_831DB508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831DB510;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DB528;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831db58c
	if (!ctx.cr6.eq) goto loc_831DB58C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831db54c
	if (ctx.cr6.eq) goto loc_831DB54C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB54C;
	sub_831093F0(ctx, base);
loc_831DB54C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db584
	if (ctx.cr6.eq) goto loc_831DB584;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db584
	if (ctx.cr6.eq) goto loc_831DB584;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DB584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB584:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db5e4
	goto loc_831DB5E4;
loc_831DB58C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831db5a8
	if (ctx.cr6.eq) goto loc_831DB5A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB5A8;
	sub_831093F0(ctx, base);
loc_831DB5A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db5e0
	if (ctx.cr6.eq) goto loc_831DB5E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db5e0
	if (ctx.cr6.eq) goto loc_831DB5E0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DB5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB5E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB5E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831DB5EC"))) PPC_WEAK_FUNC(sub_831DB5EC);
PPC_FUNC_IMPL(__imp__sub_831DB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB5F0"))) PPC_WEAK_FUNC(sub_831DB5F0);
PPC_FUNC_IMPL(__imp__sub_831DB5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DB5F8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831db634
	if (!ctx.cr6.eq) goto loc_831DB634;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// bl 0x831034d8
	ctx.lr = 0x831DB634;
	sub_831034D8(ctx, base);
loc_831DB634:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DB640;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831db6a4
	if (!ctx.cr6.eq) goto loc_831DB6A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db664
	if (ctx.cr6.eq) goto loc_831DB664;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB664;
	sub_831093F0(ctx, base);
loc_831DB664:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db69c
	if (ctx.cr6.eq) goto loc_831DB69C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db69c
	if (ctx.cr6.eq) goto loc_831DB69C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DB69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB69C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831db6fc
	goto loc_831DB6FC;
loc_831DB6A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db6c0
	if (ctx.cr6.eq) goto loc_831DB6C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB6C0;
	sub_831093F0(ctx, base);
loc_831DB6C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db6f8
	if (ctx.cr6.eq) goto loc_831DB6F8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db6f8
	if (ctx.cr6.eq) goto loc_831DB6F8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DB6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB6FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DB704"))) PPC_WEAK_FUNC(sub_831DB704);
PPC_FUNC_IMPL(__imp__sub_831DB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB708"))) PPC_WEAK_FUNC(sub_831DB708);
PPC_FUNC_IMPL(__imp__sub_831DB708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DB710;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831db74c
	if (!ctx.cr6.eq) goto loc_831DB74C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// bl 0x831034d8
	ctx.lr = 0x831DB74C;
	sub_831034D8(ctx, base);
loc_831DB74C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831db768
	if (ctx.cr6.eq) goto loc_831DB768;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB768;
	sub_831093F0(ctx, base);
loc_831DB768:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db7a4
	if (ctx.cr6.eq) goto loc_831DB7A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db7a4
	if (ctx.cr6.eq) goto loc_831DB7A4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DB7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB7A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DB7B0"))) PPC_WEAK_FUNC(sub_831DB7B0);
PPC_FUNC_IMPL(__imp__sub_831DB7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB7B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831db7f8
	if (!ctx.cr6.eq) goto loc_831DB7F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2631
	ctx.r7.s64 = 2631;
	// bl 0x831034d8
	ctx.lr = 0x831DB7F8;
	sub_831034D8(ctx, base);
loc_831DB7F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DB808;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x831db870
	if (ctx.cr6.gt) goto loc_831DB870;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db82c
	if (ctx.cr6.eq) goto loc_831DB82C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB82C;
	sub_831093F0(ctx, base);
loc_831DB82C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db868
	if (ctx.cr6.eq) goto loc_831DB868;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db868
	if (ctx.cr6.eq) goto loc_831DB868;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB868:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831db8cc
	goto loc_831DB8CC;
loc_831DB870:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db88c
	if (ctx.cr6.eq) goto loc_831DB88C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB88C;
	sub_831093F0(ctx, base);
loc_831DB88C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db8c8
	if (ctx.cr6.eq) goto loc_831DB8C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831db8c8
	if (ctx.cr6.eq) goto loc_831DB8C8;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DB8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB8C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831DB8CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB8D4"))) PPC_WEAK_FUNC(sub_831DB8D4);
PPC_FUNC_IMPL(__imp__sub_831DB8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB8D8"))) PPC_WEAK_FUNC(sub_831DB8D8);
PPC_FUNC_IMPL(__imp__sub_831DB8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DB8E0;
	sub_82CA2BE4(ctx, base);
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
	// bne cr6,0x831db920
	if (!ctx.cr6.eq) goto loc_831DB920;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// bl 0x831034d8
	ctx.lr = 0x831DB920;
	sub_831034D8(ctx, base);
loc_831DB920:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DB92C;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831db994
	if (!ctx.cr6.eq) goto loc_831DB994;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db950
	if (ctx.cr6.eq) goto loc_831DB950;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB950;
	sub_831093F0(ctx, base);
loc_831DB950:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db98c
	if (ctx.cr6.eq) goto loc_831DB98C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db98c
	if (ctx.cr6.eq) goto loc_831DB98C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DB98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB98C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831db9f0
	goto loc_831DB9F0;
loc_831DB994:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831db9b0
	if (ctx.cr6.eq) goto loc_831DB9B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DB9B0;
	sub_831093F0(ctx, base);
loc_831DB9B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831db9ec
	if (ctx.cr6.eq) goto loc_831DB9EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831db9ec
	if (ctx.cr6.eq) goto loc_831DB9EC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DB9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DB9EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831DB9F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DB9F8"))) PPC_WEAK_FUNC(sub_831DB9F8);
PPC_FUNC_IMPL(__imp__sub_831DB9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DBA00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831dba3c
	if (!ctx.cr6.eq) goto loc_831DBA3C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// bl 0x831034d8
	ctx.lr = 0x831DBA3C;
	sub_831034D8(ctx, base);
loc_831DBA3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831dba58
	if (ctx.cr6.eq) goto loc_831DBA58;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DBA58;
	sub_831093F0(ctx, base);
loc_831DBA58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dba94
	if (ctx.cr6.eq) goto loc_831DBA94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dba94
	if (ctx.cr6.eq) goto loc_831DBA94;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DBA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DBA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DBAA0"))) PPC_WEAK_FUNC(sub_831DBAA0);
PPC_FUNC_IMPL(__imp__sub_831DBAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DBAA8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DBAC4;
	sub_83108DE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DBAD4;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x831dbb20
	if (!ctx.cr6.eq) goto loc_831DBB20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831dbaec
	if (!ctx.cr6.eq) goto loc_831DBAEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831dbb18
	goto loc_831DBB18;
loc_831DBAEC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831dbafc
	if (!ctx.cr6.eq) goto loc_831DBAFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831dbb18
	goto loc_831DBB18;
loc_831DBAFC:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x831dbb0c
	if (!ctx.cr6.eq) goto loc_831DBB0C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x831dbb18
	goto loc_831DBB18;
loc_831DBB0C:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x831dbb20
	if (!ctx.cr6.eq) goto loc_831DBB20;
	// li r11,11
	ctx.r11.s64 = 11;
loc_831DBB18:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831dbb44
	goto loc_831DBB44;
loc_831DBB20:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-10856
	ctx.r5.s64 = ctx.r10.s64 + -10856;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DBB44;
	sub_831034D8(ctx, base);
loc_831DBB44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dbb7c
	if (ctx.cr6.eq) goto loc_831DBB7C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dbb7c
	if (ctx.cr6.eq) goto loc_831DBB7C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20728
	ctx.r4.s64 = ctx.r10.s64 + 20728;
	// li r6,61
	ctx.r6.s64 = 61;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DBB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DBB7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DBB88"))) PPC_WEAK_FUNC(sub_831DBB88);
PPC_FUNC_IMPL(__imp__sub_831DBB88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBB9C"))) PPC_WEAK_FUNC(sub_831DBB9C);
PPC_FUNC_IMPL(__imp__sub_831DBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBBA0"))) PPC_WEAK_FUNC(sub_831DBBA0);
PPC_FUNC_IMPL(__imp__sub_831DBBA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBBB4"))) PPC_WEAK_FUNC(sub_831DBBB4);
PPC_FUNC_IMPL(__imp__sub_831DBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBBB8"))) PPC_WEAK_FUNC(sub_831DBBB8);
PPC_FUNC_IMPL(__imp__sub_831DBBB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBBC8"))) PPC_WEAK_FUNC(sub_831DBBC8);
PPC_FUNC_IMPL(__imp__sub_831DBBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DBBD0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831dbc10
	if (!ctx.cr6.eq) goto loc_831DBC10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2877
	ctx.r7.s64 = 2877;
	// bl 0x831034d8
	ctx.lr = 0x831DBC10;
	sub_831034D8(ctx, base);
loc_831DBC10:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x831dbc38
	if (!ctx.cr6.lt) goto loc_831DBC38;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x831dbc38
	if (ctx.cr6.eq) goto loc_831DBC38;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBC30;
	sub_831090E8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x831dbc3c
	goto loc_831DBC3C;
loc_831DBC38:
	// li r8,0
	ctx.r8.s64 = 0;
loc_831DBC3C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// beq cr6,0x831dbcac
	if (ctx.cr6.eq) goto loc_831DBCAC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dbcac
	if (ctx.cr6.eq) goto loc_831DBCAC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DBCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DBCAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DBCB8"))) PPC_WEAK_FUNC(sub_831DBCB8);
PPC_FUNC_IMPL(__imp__sub_831DBCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x831DBCC0;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r18,r11,-18548
	ctx.r18.s64 = ctx.r11.s64 + -18548;
	// addi r17,r10,20744
	ctx.r17.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dbd10
	if (!ctx.cr6.eq) goto loc_831DBD10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,2967
	ctx.r7.s64 = 2967;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DBD10;
	sub_831034D8(ctx, base);
loc_831DBD10:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x831dbd50
	if (!ctx.cr6.eq) goto loc_831DBD50;
	// li r4,928
	ctx.r4.s64 = 928;
	// li r28,23
	ctx.r28.s64 = 23;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DBD34;
	sub_83108DE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,927
	ctx.r4.s64 = 927;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DBD44;
	sub_83108DE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x831dbdc4
	goto loc_831DBDC4;
loc_831DBD50:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x831090e8
	ctx.lr = 0x831DBD5C;
	sub_831090E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBD70;
	sub_831090E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBD84;
	sub_831090E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBD98;
	sub_831090E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBDAC;
	sub_831090E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBDC0;
	sub_831090E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_831DBDC4:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x831dbde0
	if (!ctx.cr6.gt) goto loc_831DBDE0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831b3138
	ctx.lr = 0x831DBDD8;
	sub_831B3138(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x831dbde4
	goto loc_831DBDE4;
loc_831DBDE0:
	// li r22,1
	ctx.r22.s64 = 1;
loc_831DBDE4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// beq cr6,0x831dbdfc
	if (ctx.cr6.eq) goto loc_831DBDFC;
	// addi r11,r11,20144
	ctx.r11.s64 = ctx.r11.s64 + 20144;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// b 0x831dbe00
	goto loc_831DBE00;
loc_831DBDFC:
	// addi r10,r11,20144
	ctx.r10.s64 = ctx.r11.s64 + 20144;
loc_831DBE00:
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x831dbe30
	if (!ctx.cr6.eq) goto loc_831DBE30;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831DBE30:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x831dbe4c
	if (!ctx.cr6.eq) goto loc_831DBE4C;
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831DBE4C:
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x831dbe84
	if (!ctx.cr6.eq) goto loc_831DBE84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBE74;
	sub_831090E8(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831DBE84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831dbeac
	if (!ctx.cr6.eq) goto loc_831DBEAC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,-10856
	ctx.r5.s64 = ctx.r11.s64 + -10856;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,3048
	ctx.r7.s64 = 3048;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DBEAC;
	sub_831034D8(ctx, base);
loc_831DBEAC:
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// beq cr6,0x831dbf48
	if (ctx.cr6.eq) goto loc_831DBF48;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x831dbf48
	if (ctx.cr6.eq) goto loc_831DBF48;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r27,r11,3160
	ctx.r27.s64 = ctx.r11.s64 + 3160;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r8,20860
	ctx.r4.s64 = ctx.r8.s64 + 20860;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r5,120(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x831DBF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,396(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,20728
	ctx.r4.s64 = ctx.r11.s64 + 20728;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x831DBF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DBF48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_831DBF54"))) PPC_WEAK_FUNC(sub_831DBF54);
PPC_FUNC_IMPL(__imp__sub_831DBF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBF58"))) PPC_WEAK_FUNC(sub_831DBF58);
PPC_FUNC_IMPL(__imp__sub_831DBF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x831DBF60;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-18548
	ctx.r25.s64 = ctx.r11.s64 + -18548;
	// addi r24,r10,20744
	ctx.r24.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dbfb4
	if (!ctx.cr6.eq) goto loc_831DBFB4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3110
	ctx.r7.s64 = 3110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DBFB4;
	sub_831034D8(ctx, base);
loc_831DBFB4:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x831dbfc8
	if (!ctx.cr6.eq) goto loc_831DBFC8;
	// li r27,23
	ctx.r27.s64 = 23;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831dbff0
	goto loc_831DBFF0;
loc_831DBFC8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBFD8;
	sub_831090E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DBFEC;
	sub_831090E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_831DBFF0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x831dc00c
	if (!ctx.cr6.gt) goto loc_831DC00C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831b3138
	ctx.lr = 0x831DC004;
	sub_831B3138(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x831dc010
	goto loc_831DC010;
loc_831DC00C:
	// li r22,1
	ctx.r22.s64 = 1;
loc_831DC010:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// beq cr6,0x831dc028
	if (ctx.cr6.eq) goto loc_831DC028;
	// addi r11,r11,20144
	ctx.r11.s64 = ctx.r11.s64 + 20144;
	// addi r30,r11,-576
	ctx.r30.s64 = ctx.r11.s64 + -576;
	// b 0x831dc02c
	goto loc_831DC02C;
loc_831DC028:
	// addi r30,r11,20144
	ctx.r30.s64 = ctx.r11.s64 + 20144;
loc_831DC02C:
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831dc0dc
	if (!ctx.cr6.eq) goto loc_831DC0DC;
	// addi r11,r27,-17
	ctx.r11.s64 = ctx.r27.s64 + -17;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3584
	ctx.r10.s64 = ctx.r10.s64 + 3584;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc078
	if (!ctx.cr6.eq) goto loc_831DC078;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,20992
	ctx.r5.s64 = ctx.r11.s64 + 20992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3140
	ctx.r7.s64 = 3140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC078;
	sub_831034D8(ctx, base);
loc_831DC078:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x831dc090
	if (ctx.cr6.lt) goto loc_831DC090;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x831dc0ac
	if (ctx.cr6.lt) goto loc_831DC0AC;
loc_831DC090:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,20952
	ctx.r5.s64 = ctx.r11.s64 + 20952;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3142
	ctx.r7.s64 = 3142;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC0AC;
	sub_831034D8(ctx, base);
loc_831DC0AC:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831dc0dc
	if (!ctx.cr6.eq) goto loc_831DC0DC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,20940
	ctx.r5.s64 = ctx.r11.s64 + 20940;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC0DC;
	sub_831034D8(ctx, base);
loc_831DC0DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831dc14c
	if (ctx.cr6.eq) goto loc_831DC14C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x831dc14c
	if (ctx.cr6.eq) goto loc_831DC14C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r31,r11,3160
	ctx.r31.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20916
	ctx.r4.s64 = ctx.r10.s64 + 20916;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DC12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,20728
	ctx.r4.s64 = ctx.r11.s64 + 20728;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DC14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC14C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_831DC158"))) PPC_WEAK_FUNC(sub_831DC158);
PPC_FUNC_IMPL(__imp__sub_831DC158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x831DC160;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-18548
	ctx.r25.s64 = ctx.r11.s64 + -18548;
	// addi r24,r10,20744
	ctx.r24.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dc1b0
	if (!ctx.cr6.eq) goto loc_831DC1B0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3188
	ctx.r7.s64 = 3188;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC1B0;
	sub_831034D8(ctx, base);
loc_831DC1B0:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x831dc1c4
	if (!ctx.cr6.eq) goto loc_831DC1C4;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x831dc1ec
	goto loc_831DC1EC;
loc_831DC1C4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC1D4;
	sub_831090E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC1E8;
	sub_831090E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_831DC1EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dc204
	if (ctx.cr6.eq) goto loc_831DC204;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831b3138
	ctx.lr = 0x831DC200;
	sub_831B3138(ctx, base);
	// b 0x831dc208
	goto loc_831DC208;
loc_831DC204:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831DC208:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// beq cr6,0x831dc220
	if (ctx.cr6.eq) goto loc_831DC220;
	// addi r11,r11,20144
	ctx.r11.s64 = ctx.r11.s64 + 20144;
	// addi r29,r11,-576
	ctx.r29.s64 = ctx.r11.s64 + -576;
	// b 0x831dc224
	goto loc_831DC224;
loc_831DC220:
	// addi r29,r11,20144
	ctx.r29.s64 = ctx.r11.s64 + 20144;
loc_831DC224:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831dc2e0
	if (!ctx.cr6.eq) goto loc_831DC2E0;
	// addi r11,r30,-17
	ctx.r11.s64 = ctx.r30.s64 + -17;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3584
	ctx.r10.s64 = ctx.r10.s64 + 3584;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc278
	if (!ctx.cr6.eq) goto loc_831DC278;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,20992
	ctx.r5.s64 = ctx.r11.s64 + 20992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3219
	ctx.r7.s64 = 3219;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC278;
	sub_831034D8(ctx, base);
loc_831DC278:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x831dc290
	if (ctx.cr6.lt) goto loc_831DC290;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x831dc2ac
	if (ctx.cr6.lt) goto loc_831DC2AC;
loc_831DC290:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,20952
	ctx.r5.s64 = ctx.r11.s64 + 20952;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3221
	ctx.r7.s64 = 3221;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC2AC;
	sub_831034D8(ctx, base);
loc_831DC2AC:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x831dc2e0
	if (!ctx.cr0.eq) goto loc_831DC2E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,21008
	ctx.r5.s64 = ctx.r11.s64 + 21008;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3223
	ctx.r7.s64 = 3223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DC2E0;
	sub_831034D8(ctx, base);
loc_831DC2E0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x831dc31c
	if (ctx.cr6.eq) goto loc_831DC31C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x831dc31c
	if (ctx.cr6.eq) goto loc_831DC31C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x831DC31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC31C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831DC328"))) PPC_WEAK_FUNC(sub_831DC328);
PPC_FUNC_IMPL(__imp__sub_831DC328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DC330;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc374
	if (!ctx.cr6.eq) goto loc_831DC374;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3264
	ctx.r7.s64 = 3264;
	// bl 0x831034d8
	ctx.lr = 0x831DC374;
	sub_831034D8(ctx, base);
loc_831DC374:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x831dc388
	if (!ctx.cr6.eq) goto loc_831DC388;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x831dc3b0
	goto loc_831DC3B0;
loc_831DC388:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC398;
	sub_831090E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC3AC;
	sub_831090E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_831DC3B0:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x831dc3cc
	if (!ctx.cr6.gt) goto loc_831DC3CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831b3138
	ctx.lr = 0x831DC3C4;
	sub_831B3138(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831dc3d0
	goto loc_831DC3D0;
loc_831DC3CC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_831DC3D0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,20144
	ctx.r11.s64 = ctx.r11.s64 + 20144;
	// beq cr6,0x831dc400
	if (ctx.cr6.eq) goto loc_831DC400;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// mulli r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 * 24;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x831dc414
	goto loc_831DC414;
loc_831DC400:
	// mulli r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 * 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_831DC414:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831dc434
	if (!ctx.cr6.eq) goto loc_831DC434;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831dc430
	if (ctx.cr6.eq) goto loc_831DC430;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x831dc434
	goto loc_831DC434;
loc_831DC430:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_831DC434:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831dc490
	if (ctx.cr6.eq) goto loc_831DC490;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x831dc490
	if (ctx.cr6.eq) goto loc_831DC490;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r11,3160
	ctx.r30.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x831DC470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,396(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,20728
	ctx.r4.s64 = ctx.r11.s64 + 20728;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x831DC490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC490:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DC49C"))) PPC_WEAK_FUNC(sub_831DC49C);
PPC_FUNC_IMPL(__imp__sub_831DC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC4A0"))) PPC_WEAK_FUNC(sub_831DC4A0);
PPC_FUNC_IMPL(__imp__sub_831DC4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x831DC4A8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC4D4;
	sub_831090E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x831090e8
	ctx.lr = 0x831DC4E8;
	sub_831090E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DC4FC;
	sub_831090E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x831dc54c
	if (ctx.cr6.eq) goto loc_831DC54C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dc54c
	if (ctx.cr6.eq) goto loc_831DC54C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r7,21036
	ctx.r4.s64 = ctx.r7.s64 + 21036;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DC54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC54C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_831DC558"))) PPC_WEAK_FUNC(sub_831DC558);
PPC_FUNC_IMPL(__imp__sub_831DC558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DC560;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc59c
	if (!ctx.cr6.eq) goto loc_831DC59C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3379
	ctx.r7.s64 = 3379;
	// bl 0x831034d8
	ctx.lr = 0x831DC59C;
	sub_831034D8(ctx, base);
loc_831DC59C:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DC5A8;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dc5ec
	if (ctx.cr6.eq) goto loc_831DC5EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc5ec
	if (ctx.cr6.eq) goto loc_831DC5EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DC5C4;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DC5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC5EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DC5F8"))) PPC_WEAK_FUNC(sub_831DC5F8);
PPC_FUNC_IMPL(__imp__sub_831DC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DC600;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc63c
	if (!ctx.cr6.eq) goto loc_831DC63C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3411
	ctx.r7.s64 = 3411;
	// bl 0x831034d8
	ctx.lr = 0x831DC63C;
	sub_831034D8(ctx, base);
loc_831DC63C:
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DC648;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dc68c
	if (ctx.cr6.eq) goto loc_831DC68C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc68c
	if (ctx.cr6.eq) goto loc_831DC68C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DC664;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DC68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC68C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DC698"))) PPC_WEAK_FUNC(sub_831DC698);
PPC_FUNC_IMPL(__imp__sub_831DC698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,21080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC6AC"))) PPC_WEAK_FUNC(sub_831DC6AC);
PPC_FUNC_IMPL(__imp__sub_831DC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC6B0"))) PPC_WEAK_FUNC(sub_831DC6B0);
PPC_FUNC_IMPL(__imp__sub_831DC6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DC6B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc6f4
	if (!ctx.cr6.eq) goto loc_831DC6F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3457
	ctx.r7.s64 = 3457;
	// bl 0x831034d8
	ctx.lr = 0x831DC6F4;
	sub_831034D8(ctx, base);
loc_831DC6F4:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DC700;
	sub_83108DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DC710;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831dc740
	if (!ctx.cr6.eq) goto loc_831DC740;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,21084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21084);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x831dc748
	goto loc_831DC748;
loc_831DC740:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,21080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21080);
	ctx.f0.f64 = double(temp.f32);
loc_831DC748:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc790
	if (ctx.cr6.eq) goto loc_831DC790;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dc790
	if (ctx.cr6.eq) goto loc_831DC790;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x831d9230
	ctx.lr = 0x831DC768;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,67
	ctx.r6.s64 = 67;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DC790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC790:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DC79C"))) PPC_WEAK_FUNC(sub_831DC79C);
PPC_FUNC_IMPL(__imp__sub_831DC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC7A0"))) PPC_WEAK_FUNC(sub_831DC7A0);
PPC_FUNC_IMPL(__imp__sub_831DC7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,21088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC7B4"))) PPC_WEAK_FUNC(sub_831DC7B4);
PPC_FUNC_IMPL(__imp__sub_831DC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC7B8"))) PPC_WEAK_FUNC(sub_831DC7B8);
PPC_FUNC_IMPL(__imp__sub_831DC7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DC7C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc7fc
	if (!ctx.cr6.eq) goto loc_831DC7FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// bl 0x831034d8
	ctx.lr = 0x831DC7FC;
	sub_831034D8(ctx, base);
loc_831DC7FC:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DC808;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dc84c
	if (ctx.cr6.eq) goto loc_831DC84C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc84c
	if (ctx.cr6.eq) goto loc_831DC84C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DC824;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DC84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC84C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DC858"))) PPC_WEAK_FUNC(sub_831DC858);
PPC_FUNC_IMPL(__imp__sub_831DC858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DC860;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc89c
	if (!ctx.cr6.eq) goto loc_831DC89C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3546
	ctx.r7.s64 = 3546;
	// bl 0x831034d8
	ctx.lr = 0x831DC89C;
	sub_831034D8(ctx, base);
loc_831DC89C:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DC8A8;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dc8ec
	if (ctx.cr6.eq) goto loc_831DC8EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc8ec
	if (ctx.cr6.eq) goto loc_831DC8EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DC8C4;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,69
	ctx.r6.s64 = 69;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DC8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC8EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DC8F8"))) PPC_WEAK_FUNC(sub_831DC8F8);
PPC_FUNC_IMPL(__imp__sub_831DC8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DC900;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc93c
	if (!ctx.cr6.eq) goto loc_831DC93C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3577
	ctx.r7.s64 = 3577;
	// bl 0x831034d8
	ctx.lr = 0x831DC93C;
	sub_831034D8(ctx, base);
loc_831DC93C:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DC948;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dc98c
	if (ctx.cr6.eq) goto loc_831DC98C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dc98c
	if (ctx.cr6.eq) goto loc_831DC98C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DC964;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,70
	ctx.r6.s64 = 70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DC98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DC98C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DC998"))) PPC_WEAK_FUNC(sub_831DC998);
PPC_FUNC_IMPL(__imp__sub_831DC998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC9AC"))) PPC_WEAK_FUNC(sub_831DC9AC);
PPC_FUNC_IMPL(__imp__sub_831DC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC9B0"))) PPC_WEAK_FUNC(sub_831DC9B0);
PPC_FUNC_IMPL(__imp__sub_831DC9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DC9B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dc9f8
	if (!ctx.cr6.eq) goto loc_831DC9F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3620
	ctx.r7.s64 = 3620;
	// bl 0x831034d8
	ctx.lr = 0x831DC9F8;
	sub_831034D8(ctx, base);
loc_831DC9F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DCA08;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dca50
	if (ctx.cr6.eq) goto loc_831DCA50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dca50
	if (ctx.cr6.eq) goto loc_831DCA50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCA24;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DCA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCA50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DCA5C"))) PPC_WEAK_FUNC(sub_831DCA5C);
PPC_FUNC_IMPL(__imp__sub_831DCA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCA60"))) PPC_WEAK_FUNC(sub_831DCA60);
PPC_FUNC_IMPL(__imp__sub_831DCA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DCA68;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dcaa8
	if (!ctx.cr6.eq) goto loc_831DCAA8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3654
	ctx.r7.s64 = 3654;
	// bl 0x831034d8
	ctx.lr = 0x831DCAA8;
	sub_831034D8(ctx, base);
loc_831DCAA8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DCAB8;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dcb00
	if (ctx.cr6.eq) goto loc_831DCB00;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dcb00
	if (ctx.cr6.eq) goto loc_831DCB00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCAD4;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DCB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCB00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DCB0C"))) PPC_WEAK_FUNC(sub_831DCB0C);
PPC_FUNC_IMPL(__imp__sub_831DCB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCB10"))) PPC_WEAK_FUNC(sub_831DCB10);
PPC_FUNC_IMPL(__imp__sub_831DCB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DCB18;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dcb58
	if (!ctx.cr6.eq) goto loc_831DCB58;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3688
	ctx.r7.s64 = 3688;
	// bl 0x831034d8
	ctx.lr = 0x831DCB58;
	sub_831034D8(ctx, base);
loc_831DCB58:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DCB68;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dcbb0
	if (ctx.cr6.eq) goto loc_831DCBB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dcbb0
	if (ctx.cr6.eq) goto loc_831DCBB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCB84;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DCBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCBB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DCBBC"))) PPC_WEAK_FUNC(sub_831DCBBC);
PPC_FUNC_IMPL(__imp__sub_831DCBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCBC0"))) PPC_WEAK_FUNC(sub_831DCBC0);
PPC_FUNC_IMPL(__imp__sub_831DCBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DCBC8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dcc08
	if (!ctx.cr6.eq) goto loc_831DCC08;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3721
	ctx.r7.s64 = 3721;
	// bl 0x831034d8
	ctx.lr = 0x831DCC08;
	sub_831034D8(ctx, base);
loc_831DCC08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DCC18;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dcc60
	if (ctx.cr6.eq) goto loc_831DCC60;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dcc60
	if (ctx.cr6.eq) goto loc_831DCC60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCC34;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,74
	ctx.r6.s64 = 74;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DCC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCC60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DCC6C"))) PPC_WEAK_FUNC(sub_831DCC6C);
PPC_FUNC_IMPL(__imp__sub_831DCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCC70"))) PPC_WEAK_FUNC(sub_831DCC70);
PPC_FUNC_IMPL(__imp__sub_831DCC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DCC78;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,20744
	ctx.r28.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dccc0
	if (!ctx.cr6.eq) goto loc_831DCCC0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DCCC0;
	sub_831034D8(ctx, base);
loc_831DCCC0:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DCCCC;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x831dcce8
	if (!ctx.cr6.eq) goto loc_831DCCE8;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DCCE0;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x831dccf4
	goto loc_831DCCF4;
loc_831DCCE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_831DCCF4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DCD00;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x831dcd24
	if (ctx.cr6.eq) goto loc_831DCD24;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21112
	ctx.r5.s64 = ctx.r11.s64 + 21112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DCD24;
	sub_831034D8(ctx, base);
loc_831DCD24:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dcd68
	if (ctx.cr6.eq) goto loc_831DCD68;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831dcd68
	if (ctx.cr6.eq) goto loc_831DCD68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DCD40;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DCD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCD68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831DCD74"))) PPC_WEAK_FUNC(sub_831DCD74);
PPC_FUNC_IMPL(__imp__sub_831DCD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCD78"))) PPC_WEAK_FUNC(sub_831DCD78);
PPC_FUNC_IMPL(__imp__sub_831DCD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DCD80;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,20744
	ctx.r28.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dcdcc
	if (!ctx.cr6.eq) goto loc_831DCDCC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DCDCC;
	sub_831034D8(ctx, base);
loc_831DCDCC:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DCDD8;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x831dce30
	if (!ctx.cr6.eq) goto loc_831DCE30;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x831b78f0
	ctx.lr = 0x831DCDEC;
	sub_831B78F0(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831b78f0
	ctx.lr = 0x831DCDFC;
	sub_831B78F0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x831dce20
	if (!ctx.cr6.eq) goto loc_831DCE20;
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x831dce54
	goto loc_831DCE54;
loc_831DCE20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x831dce50
	goto loc_831DCE50;
loc_831DCE30:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x831b78f0
	ctx.lr = 0x831DCE38;
	sub_831B78F0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_831DCE50:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_831DCE54:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DCE60;
	sub_83108DE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x831dce84
	if (ctx.cr6.eq) goto loc_831DCE84;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21256
	ctx.r5.s64 = ctx.r11.s64 + 21256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DCE84;
	sub_831034D8(ctx, base);
loc_831DCE84:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dcec8
	if (ctx.cr6.eq) goto loc_831DCEC8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831dcec8
	if (ctx.cr6.eq) goto loc_831DCEC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DCEA0;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,27
	ctx.r6.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831DCEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCEC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831DCED8"))) PPC_WEAK_FUNC(sub_831DCED8);
PPC_FUNC_IMPL(__imp__sub_831DCED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DCEE0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dcf1c
	if (!ctx.cr6.eq) goto loc_831DCF1C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3857
	ctx.r7.s64 = 3857;
	// bl 0x831034d8
	ctx.lr = 0x831DCF1C;
	sub_831034D8(ctx, base);
loc_831DCF1C:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DCF28;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dcf6c
	if (ctx.cr6.eq) goto loc_831DCF6C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dcf6c
	if (ctx.cr6.eq) goto loc_831DCF6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCF44;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,93
	ctx.r6.s64 = 93;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DCF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DCF6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DCF78"))) PPC_WEAK_FUNC(sub_831DCF78);
PPC_FUNC_IMPL(__imp__sub_831DCF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DCF80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dcfbc
	if (!ctx.cr6.eq) goto loc_831DCFBC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3889
	ctx.r7.s64 = 3889;
	// bl 0x831034d8
	ctx.lr = 0x831DCFBC;
	sub_831034D8(ctx, base);
loc_831DCFBC:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DCFC8;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd00c
	if (ctx.cr6.eq) goto loc_831DD00C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dd00c
	if (ctx.cr6.eq) goto loc_831DD00C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DCFE4;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DD00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD00C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DD018"))) PPC_WEAK_FUNC(sub_831DD018);
PPC_FUNC_IMPL(__imp__sub_831DD018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD02C"))) PPC_WEAK_FUNC(sub_831DD02C);
PPC_FUNC_IMPL(__imp__sub_831DD02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD030"))) PPC_WEAK_FUNC(sub_831DD030);
PPC_FUNC_IMPL(__imp__sub_831DD030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD044"))) PPC_WEAK_FUNC(sub_831DD044);
PPC_FUNC_IMPL(__imp__sub_831DD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD048"))) PPC_WEAK_FUNC(sub_831DD048);
PPC_FUNC_IMPL(__imp__sub_831DD048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD05C"))) PPC_WEAK_FUNC(sub_831DD05C);
PPC_FUNC_IMPL(__imp__sub_831DD05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD060"))) PPC_WEAK_FUNC(sub_831DD060);
PPC_FUNC_IMPL(__imp__sub_831DD060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD074"))) PPC_WEAK_FUNC(sub_831DD074);
PPC_FUNC_IMPL(__imp__sub_831DD074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD078"))) PPC_WEAK_FUNC(sub_831DD078);
PPC_FUNC_IMPL(__imp__sub_831DD078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD08C"))) PPC_WEAK_FUNC(sub_831DD08C);
PPC_FUNC_IMPL(__imp__sub_831DD08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD090"))) PPC_WEAK_FUNC(sub_831DD090);
PPC_FUNC_IMPL(__imp__sub_831DD090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD0A4"))) PPC_WEAK_FUNC(sub_831DD0A4);
PPC_FUNC_IMPL(__imp__sub_831DD0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD0A8"))) PPC_WEAK_FUNC(sub_831DD0A8);
PPC_FUNC_IMPL(__imp__sub_831DD0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD0BC"))) PPC_WEAK_FUNC(sub_831DD0BC);
PPC_FUNC_IMPL(__imp__sub_831DD0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD0C0"))) PPC_WEAK_FUNC(sub_831DD0C0);
PPC_FUNC_IMPL(__imp__sub_831DD0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD0D4"))) PPC_WEAK_FUNC(sub_831DD0D4);
PPC_FUNC_IMPL(__imp__sub_831DD0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD0D8"))) PPC_WEAK_FUNC(sub_831DD0D8);
PPC_FUNC_IMPL(__imp__sub_831DD0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD0EC"))) PPC_WEAK_FUNC(sub_831DD0EC);
PPC_FUNC_IMPL(__imp__sub_831DD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD0F0"))) PPC_WEAK_FUNC(sub_831DD0F0);
PPC_FUNC_IMPL(__imp__sub_831DD0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD0F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd138
	if (!ctx.cr6.eq) goto loc_831DD138;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4098
	ctx.r7.s64 = 4098;
	// bl 0x831034d8
	ctx.lr = 0x831DD138;
	sub_831034D8(ctx, base);
loc_831DD138:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DD148;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dd190
	if (ctx.cr6.eq) goto loc_831DD190;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd190
	if (ctx.cr6.eq) goto loc_831DD190;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD164;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DD190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD19C"))) PPC_WEAK_FUNC(sub_831DD19C);
PPC_FUNC_IMPL(__imp__sub_831DD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD1A0"))) PPC_WEAK_FUNC(sub_831DD1A0);
PPC_FUNC_IMPL(__imp__sub_831DD1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD1A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd1e8
	if (!ctx.cr6.eq) goto loc_831DD1E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// bl 0x831034d8
	ctx.lr = 0x831DD1E8;
	sub_831034D8(ctx, base);
loc_831DD1E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD1F8;
	sub_831090E8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x831dd250
	if (ctx.cr6.eq) goto loc_831DD250;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd250
	if (ctx.cr6.eq) goto loc_831DD250;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x831d9230
	ctx.lr = 0x831DD228;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DD250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD250:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD25C"))) PPC_WEAK_FUNC(sub_831DD25C);
PPC_FUNC_IMPL(__imp__sub_831DD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD260"))) PPC_WEAK_FUNC(sub_831DD260);
PPC_FUNC_IMPL(__imp__sub_831DD260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DD268;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd2a4
	if (!ctx.cr6.eq) goto loc_831DD2A4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4163
	ctx.r7.s64 = 4163;
	// bl 0x831034d8
	ctx.lr = 0x831DD2A4;
	sub_831034D8(ctx, base);
loc_831DD2A4:
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DD2B0;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd2f4
	if (ctx.cr6.eq) goto loc_831DD2F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dd2f4
	if (ctx.cr6.eq) goto loc_831DD2F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD2CC;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DD2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD2F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DD300"))) PPC_WEAK_FUNC(sub_831DD300);
PPC_FUNC_IMPL(__imp__sub_831DD300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DD308;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd344
	if (!ctx.cr6.eq) goto loc_831DD344;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// bl 0x831034d8
	ctx.lr = 0x831DD344;
	sub_831034D8(ctx, base);
loc_831DD344:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DD350;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd394
	if (ctx.cr6.eq) goto loc_831DD394;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dd394
	if (ctx.cr6.eq) goto loc_831DD394;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD36C;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,75
	ctx.r6.s64 = 75;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DD394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD394:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DD3A0"))) PPC_WEAK_FUNC(sub_831DD3A0);
PPC_FUNC_IMPL(__imp__sub_831DD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DD3A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd3e4
	if (!ctx.cr6.eq) goto loc_831DD3E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4225
	ctx.r7.s64 = 4225;
	// bl 0x831034d8
	ctx.lr = 0x831DD3E4;
	sub_831034D8(ctx, base);
loc_831DD3E4:
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b78f0
	ctx.lr = 0x831DD3F0;
	sub_831B78F0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd434
	if (ctx.cr6.eq) goto loc_831DD434;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dd434
	if (ctx.cr6.eq) goto loc_831DD434;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD40C;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DD434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD434:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DD440"))) PPC_WEAK_FUNC(sub_831DD440);
PPC_FUNC_IMPL(__imp__sub_831DD440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DD448;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831dd484
	if (!ctx.cr6.eq) goto loc_831DD484;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4257
	ctx.r7.s64 = 4257;
	// bl 0x831034d8
	ctx.lr = 0x831DD484;
	sub_831034D8(ctx, base);
loc_831DD484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// beq cr6,0x831dd4d4
	if (ctx.cr6.eq) goto loc_831DD4D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd4d4
	if (ctx.cr6.eq) goto loc_831DD4D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD4A8;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831DD4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD4D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DD4E0"))) PPC_WEAK_FUNC(sub_831DD4E0);
PPC_FUNC_IMPL(__imp__sub_831DD4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD4E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd528
	if (!ctx.cr6.eq) goto loc_831DD528;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4293
	ctx.r7.s64 = 4293;
	// bl 0x831034d8
	ctx.lr = 0x831DD528;
	sub_831034D8(ctx, base);
loc_831DD528:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DD538;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dd580
	if (ctx.cr6.eq) goto loc_831DD580;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd580
	if (ctx.cr6.eq) goto loc_831DD580;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD554;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,65
	ctx.r6.s64 = 65;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DD580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD58C"))) PPC_WEAK_FUNC(sub_831DD58C);
PPC_FUNC_IMPL(__imp__sub_831DD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD590"))) PPC_WEAK_FUNC(sub_831DD590);
PPC_FUNC_IMPL(__imp__sub_831DD590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD598;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd5d8
	if (!ctx.cr6.eq) goto loc_831DD5D8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// bl 0x831034d8
	ctx.lr = 0x831DD5D8;
	sub_831034D8(ctx, base);
loc_831DD5D8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b88c0
	ctx.lr = 0x831DD5E8;
	sub_831B88C0(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dd630
	if (ctx.cr6.eq) goto loc_831DD630;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd630
	if (ctx.cr6.eq) goto loc_831DD630;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9230
	ctx.lr = 0x831DD604;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,66
	ctx.r6.s64 = 66;
	// lwz r5,264(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831DD630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD630:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD63C"))) PPC_WEAK_FUNC(sub_831DD63C);
PPC_FUNC_IMPL(__imp__sub_831DD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD640"))) PPC_WEAK_FUNC(sub_831DD640);
PPC_FUNC_IMPL(__imp__sub_831DD640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD648;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd688
	if (!ctx.cr6.eq) goto loc_831DD688;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// bl 0x831034d8
	ctx.lr = 0x831DD688;
	sub_831034D8(ctx, base);
loc_831DD688:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD698;
	sub_831090E8(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831dd6ec
	if (ctx.cr6.eq) goto loc_831DD6EC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd6ec
	if (ctx.cr6.eq) goto loc_831DD6EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DD6C0;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,62
	ctx.r6.s64 = 62;
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DD6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD6EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD6F8"))) PPC_WEAK_FUNC(sub_831DD6F8);
PPC_FUNC_IMPL(__imp__sub_831DD6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831DD700;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831dd760
	if (ctx.cr6.eq) goto loc_831DD760;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd760
	if (ctx.cr6.eq) goto loc_831DD760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DD734;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831DD760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD760:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831DD76C"))) PPC_WEAK_FUNC(sub_831DD76C);
PPC_FUNC_IMPL(__imp__sub_831DD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD770"))) PPC_WEAK_FUNC(sub_831DD770);
PPC_FUNC_IMPL(__imp__sub_831DD770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DD778;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,20744
	ctx.r27.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dd7c4
	if (!ctx.cr6.eq) goto loc_831DD7C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DD7C4;
	sub_831034D8(ctx, base);
loc_831DD7C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD7D4;
	sub_831090E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD7E8;
	sub_831090E8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,3608
	ctx.r11.s64 = ctx.r10.s64 + 3608;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x831dd848
	if (ctx.cr6.eq) goto loc_831DD848;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x831dd848
	if (ctx.cr6.eq) goto loc_831DD848;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x831dd840
	if (ctx.cr6.eq) goto loc_831DD840;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831dd840
	if (ctx.cr6.eq) goto loc_831DD840;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,16216
	ctx.r5.s64 = ctx.r11.s64 + 16216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DD840;
	sub_831034D8(ctx, base);
loc_831DD840:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831dd84c
	goto loc_831DD84C;
loc_831DD848:
	// li r11,2
	ctx.r11.s64 = 2;
loc_831DD84C:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831dd8a8
	if (ctx.cr6.eq) goto loc_831DD8A8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x831dd8a8
	if (ctx.cr6.eq) goto loc_831DD8A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DD87C;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,89
	ctx.r6.s64 = 89;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x831DD8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD8A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DD8B4"))) PPC_WEAK_FUNC(sub_831DD8B4);
PPC_FUNC_IMPL(__imp__sub_831DD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD8B8"))) PPC_WEAK_FUNC(sub_831DD8B8);
PPC_FUNC_IMPL(__imp__sub_831DD8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD8C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd900
	if (!ctx.cr6.eq) goto loc_831DD900;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4490
	ctx.r7.s64 = 4490;
	// bl 0x831034d8
	ctx.lr = 0x831DD900;
	sub_831034D8(ctx, base);
loc_831DD900:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD910;
	sub_831090E8(ctx, base);
	// oris r11,r3,19200
	ctx.r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831dd960
	if (ctx.cr6.eq) goto loc_831DD960;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dd960
	if (ctx.cr6.eq) goto loc_831DD960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d9230
	ctx.lr = 0x831DD934;
	sub_831D9230(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,90
	ctx.r6.s64 = 90;
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DD960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DD960:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DD96C"))) PPC_WEAK_FUNC(sub_831DD96C);
PPC_FUNC_IMPL(__imp__sub_831DD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD970"))) PPC_WEAK_FUNC(sub_831DD970);
PPC_FUNC_IMPL(__imp__sub_831DD970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DD978;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831dd9b8
	if (!ctx.cr6.eq) goto loc_831DD9B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,447
	ctx.r7.s64 = 447;
	// bl 0x831034d8
	ctx.lr = 0x831DD9B8;
	sub_831034D8(ctx, base);
loc_831DD9B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DD9C8;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831dda30
	if (!ctx.cr6.eq) goto loc_831DDA30;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dd9ec
	if (ctx.cr6.eq) goto loc_831DD9EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DD9EC;
	sub_831093F0(ctx, base);
loc_831DD9EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dda28
	if (ctx.cr6.eq) goto loc_831DDA28;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dda28
	if (ctx.cr6.eq) goto loc_831DDA28;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DDA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDA28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831dda8c
	goto loc_831DDA8C;
loc_831DDA30:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831dda4c
	if (ctx.cr6.eq) goto loc_831DDA4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDA4C;
	sub_831093F0(ctx, base);
loc_831DDA4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831dda88
	if (ctx.cr6.eq) goto loc_831DDA88;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dda88
	if (ctx.cr6.eq) goto loc_831DDA88;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831DDA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DDA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DDA94"))) PPC_WEAK_FUNC(sub_831DDA94);
PPC_FUNC_IMPL(__imp__sub_831DDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DDA98"))) PPC_WEAK_FUNC(sub_831DDA98);
PPC_FUNC_IMPL(__imp__sub_831DDA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DDAA0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,20744
	ctx.r29.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831ddaec
	if (!ctx.cr6.eq) goto loc_831DDAEC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,504
	ctx.r7.s64 = 504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDAEC;
	sub_831034D8(ctx, base);
loc_831DDAEC:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x831ddb10
	if (ctx.cr6.lt) goto loc_831DDB10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21412
	ctx.r5.s64 = ctx.r11.s64 + 21412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDB10;
	sub_831034D8(ctx, base);
loc_831DDB10:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x831ddb34
	if (!ctx.cr6.lt) goto loc_831DDB34;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21400
	ctx.r5.s64 = ctx.r11.s64 + 21400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDB34;
	sub_831034D8(ctx, base);
loc_831DDB34:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DDB44;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x831ddba8
	if (ctx.cr6.eq) goto loc_831DDBA8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831ddb68
	if (ctx.cr6.eq) goto loc_831DDB68;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDB68;
	sub_831093F0(ctx, base);
loc_831DDB68:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddba0
	if (ctx.cr6.eq) goto loc_831DDBA0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddba0
	if (ctx.cr6.eq) goto loc_831DDBA0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,3160(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDBA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDBA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ddc00
	goto loc_831DDC00;
loc_831DDBA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831ddbc4
	if (ctx.cr6.eq) goto loc_831DDBC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDBC4;
	sub_831093F0(ctx, base);
loc_831DDBC4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddbfc
	if (ctx.cr6.eq) goto loc_831DDBFC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddbfc
	if (ctx.cr6.eq) goto loc_831DDBFC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,3160(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDBFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DDC00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DDC08"))) PPC_WEAK_FUNC(sub_831DDC08);
PPC_FUNC_IMPL(__imp__sub_831DDC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DDC10;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,20744
	ctx.r28.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831ddc5c
	if (!ctx.cr6.eq) goto loc_831DDC5C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDC5C;
	sub_831034D8(ctx, base);
loc_831DDC5C:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x831ddc80
	if (ctx.cr6.lt) goto loc_831DDC80;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21412
	ctx.r5.s64 = ctx.r11.s64 + 21412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDC80;
	sub_831034D8(ctx, base);
loc_831DDC80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x831ddca4
	if (!ctx.cr6.lt) goto loc_831DDCA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21400
	ctx.r5.s64 = ctx.r11.s64 + 21400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDCA4;
	sub_831034D8(ctx, base);
loc_831DDCA4:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DDCB0;
	sub_83108DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DDCC4;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831ddd34
	if (!ctx.cr6.eq) goto loc_831DDD34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x831ddd34
	if (!ctx.cr6.eq) goto loc_831DDD34;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831ddcf0
	if (ctx.cr6.eq) goto loc_831DDCF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDCF0;
	sub_831093F0(ctx, base);
loc_831DDCF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddd2c
	if (ctx.cr6.eq) goto loc_831DDD2C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddd2c
	if (ctx.cr6.eq) goto loc_831DDD2C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDD2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ddd90
	goto loc_831DDD90;
loc_831DDD34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831ddd50
	if (ctx.cr6.eq) goto loc_831DDD50;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDD50;
	sub_831093F0(ctx, base);
loc_831DDD50:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddd8c
	if (ctx.cr6.eq) goto loc_831DDD8C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddd8c
	if (ctx.cr6.eq) goto loc_831DDD8C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDD8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DDD90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DDD98"))) PPC_WEAK_FUNC(sub_831DDD98);
PPC_FUNC_IMPL(__imp__sub_831DDD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DDDA0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,20744
	ctx.r28.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831dddec
	if (!ctx.cr6.eq) goto loc_831DDDEC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDDEC;
	sub_831034D8(ctx, base);
loc_831DDDEC:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x831dde10
	if (ctx.cr6.lt) goto loc_831DDE10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21412
	ctx.r5.s64 = ctx.r11.s64 + 21412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,620
	ctx.r7.s64 = 620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDE10;
	sub_831034D8(ctx, base);
loc_831DDE10:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x831dde34
	if (!ctx.cr6.lt) goto loc_831DDE34;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21400
	ctx.r5.s64 = ctx.r11.s64 + 21400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDE34;
	sub_831034D8(ctx, base);
loc_831DDE34:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DDE40;
	sub_83108DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DDE54;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831ddec4
	if (!ctx.cr6.eq) goto loc_831DDEC4;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x831ddec4
	if (!ctx.cr6.eq) goto loc_831DDEC4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831dde80
	if (ctx.cr6.eq) goto loc_831DDE80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDE80;
	sub_831093F0(ctx, base);
loc_831DDE80:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddebc
	if (ctx.cr6.eq) goto loc_831DDEBC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddebc
	if (ctx.cr6.eq) goto loc_831DDEBC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDEBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ddf20
	goto loc_831DDF20;
loc_831DDEC4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831ddee0
	if (ctx.cr6.eq) goto loc_831DDEE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DDEE0;
	sub_831093F0(ctx, base);
loc_831DDEE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831ddf1c
	if (ctx.cr6.eq) goto loc_831DDF1C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831ddf1c
	if (ctx.cr6.eq) goto loc_831DDF1C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DDF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DDF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DDF20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DDF28"))) PPC_WEAK_FUNC(sub_831DDF28);
PPC_FUNC_IMPL(__imp__sub_831DDF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DDF30;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,20744
	ctx.r28.s64 = ctx.r10.s64 + 20744;
	// bne cr6,0x831ddf7c
	if (!ctx.cr6.eq) goto loc_831DDF7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDF7C;
	sub_831034D8(ctx, base);
loc_831DDF7C:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x831ddfa0
	if (ctx.cr6.lt) goto loc_831DDFA0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21412
	ctx.r5.s64 = ctx.r11.s64 + 21412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,678
	ctx.r7.s64 = 678;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDFA0;
	sub_831034D8(ctx, base);
loc_831DDFA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x831ddfc4
	if (!ctx.cr6.lt) goto loc_831DDFC4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,21400
	ctx.r5.s64 = ctx.r11.s64 + 21400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,679
	ctx.r7.s64 = 679;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DDFC4;
	sub_831034D8(ctx, base);
loc_831DDFC4:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DDFD0;
	sub_83108DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DDFE4;
	sub_831090E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x831de054
	if (!ctx.cr6.eq) goto loc_831DE054;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x831de054
	if (!ctx.cr6.eq) goto loc_831DE054;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831de010
	if (ctx.cr6.eq) goto loc_831DE010;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DE010;
	sub_831093F0(ctx, base);
loc_831DE010:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831de04c
	if (ctx.cr6.eq) goto loc_831DE04C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831de04c
	if (ctx.cr6.eq) goto loc_831DE04C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DE04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DE04C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831de0b0
	goto loc_831DE0B0;
loc_831DE054:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831de070
	if (ctx.cr6.eq) goto loc_831DE070;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831093f0
	ctx.lr = 0x831DE070;
	sub_831093F0(ctx, base);
loc_831DE070:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831de0ac
	if (ctx.cr6.eq) goto loc_831DE0AC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831de0ac
	if (ctx.cr6.eq) goto loc_831DE0AC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831DE0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DE0AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DE0B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DE0B8"))) PPC_WEAK_FUNC(sub_831DE0B8);
PPC_FUNC_IMPL(__imp__sub_831DE0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DE0C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831de104
	if (!ctx.cr6.eq) goto loc_831DE104;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,21432
	ctx.r6.s64 = ctx.r11.s64 + 21432;
	// addi r5,r10,21424
	ctx.r5.s64 = ctx.r10.s64 + 21424;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,683
	ctx.r7.s64 = 683;
	// bl 0x831034d8
	ctx.lr = 0x831DE104;
	sub_831034D8(ctx, base);
loc_831DE104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de118
	if (!ctx.cr6.eq) goto loc_831DE118;
loc_831DE110:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831de154
	goto loc_831DE154;
loc_831DE118:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831de110
	if (ctx.cr6.eq) goto loc_831DE110;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_831DE124:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x831de15c
	if (!ctx.cr6.eq) goto loc_831DE15C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831de16c
	if (!ctx.cr6.eq) goto loc_831DE16C;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_831DE150:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831DE154:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_831DE15C:
	// bge cr6,0x831de168
	if (!ctx.cr6.lt) goto loc_831DE168;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831de16c
	goto loc_831DE16C;
loc_831DE168:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_831DE16C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de124
	if (!ctx.cr6.eq) goto loc_831DE124;
	// b 0x831de150
	goto loc_831DE150;
}

__attribute__((alias("__imp__sub_831DE178"))) PPC_WEAK_FUNC(sub_831DE178);
PPC_FUNC_IMPL(__imp__sub_831DE178) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831de188
	if (ctx.cr6.eq) goto loc_831DE188;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_831DE188:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DE190"))) PPC_WEAK_FUNC(sub_831DE190);
PPC_FUNC_IMPL(__imp__sub_831DE190) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831b48e0
	ctx.lr = 0x831DE1B4;
	sub_831B48E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831DE1E4"))) PPC_WEAK_FUNC(sub_831DE1E4);
PPC_FUNC_IMPL(__imp__sub_831DE1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DE1E8"))) PPC_WEAK_FUNC(sub_831DE1E8);
PPC_FUNC_IMPL(__imp__sub_831DE1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DE1F0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,21432
	ctx.r26.s64 = ctx.r10.s64 + 21432;
	// bne cr6,0x831de238
	if (!ctx.cr6.eq) goto loc_831DE238;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,66
	ctx.r7.s64 = 66;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE238;
	sub_831034D8(ctx, base);
loc_831DE238:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831de25c
	if (!ctx.cr6.eq) goto loc_831DE25C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,67
	ctx.r7.s64 = 67;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE25C;
	sub_831034D8(ctx, base);
loc_831DE25C:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DE26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831de290
	if (!ctx.cr0.eq) goto loc_831DE290;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,21536
	ctx.r5.s64 = ctx.r11.s64 + 21536;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,70
	ctx.r7.s64 = 70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE290;
	sub_831034D8(ctx, base);
loc_831DE290:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831b47b0
	ctx.lr = 0x831DE2C4;
	sub_831B47B0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831de2e8
	if (!ctx.cr0.eq) goto loc_831DE2E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,21512
	ctx.r5.s64 = ctx.r11.s64 + 21512;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,88
	ctx.r7.s64 = 88;
	// bl 0x831034d8
	ctx.lr = 0x831DE2E8;
	sub_831034D8(ctx, base);
loc_831DE2E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DE2F4"))) PPC_WEAK_FUNC(sub_831DE2F4);
PPC_FUNC_IMPL(__imp__sub_831DE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DE2F8"))) PPC_WEAK_FUNC(sub_831DE2F8);
PPC_FUNC_IMPL(__imp__sub_831DE2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DE300;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831de464
	if (ctx.cr6.eq) goto loc_831DE464;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831de354
	if (!ctx.cr6.eq) goto loc_831DE354;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831de190
	ctx.lr = 0x831DE340;
	sub_831DE190(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831DE354:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831de41c
	if (ctx.cr6.eq) goto loc_831DE41C;
loc_831DE35C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831de3b0
	if (!ctx.cr6.eq) goto loc_831DE3B0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x831de41c
	if (ctx.cr6.eq) goto loc_831DE41C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de3a8
	if (!ctx.cr6.eq) goto loc_831DE3A8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831de190
	ctx.lr = 0x831DE398;
	sub_831DE190(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831DE3A8:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x831de410
	goto loc_831DE410;
loc_831DE3B0:
	// bge cr6,0x831de3e4
	if (!ctx.cr6.lt) goto loc_831DE3E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de3dc
	if (!ctx.cr6.eq) goto loc_831DE3DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831de190
	ctx.lr = 0x831DE3CC;
	sub_831DE190(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831DE3DC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x831de410
	goto loc_831DE410;
loc_831DE3E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de40c
	if (!ctx.cr6.eq) goto loc_831DE40C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831de190
	ctx.lr = 0x831DE3FC;
	sub_831DE190(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831DE40C:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831DE410:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x831de35c
	if (ctx.cr6.lt) goto loc_831DE35C;
loc_831DE41C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831de464
	if (!ctx.cr6.lt) goto loc_831DE464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831de190
	ctx.lr = 0x831DE438;
	sub_831DE190(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// ble cr6,0x831de45c
	if (!ctx.cr6.gt) goto loc_831DE45C;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_831DE45C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x831de468
	goto loc_831DE468;
loc_831DE464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DE468:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DE470"))) PPC_WEAK_FUNC(sub_831DE470);
PPC_FUNC_IMPL(__imp__sub_831DE470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DE478;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r26,r10,-18548
	ctx.r26.s64 = ctx.r10.s64 + -18548;
	// addi r25,r11,21432
	ctx.r25.s64 = ctx.r11.s64 + 21432;
	// bne cr6,0x831de4b4
	if (!ctx.cr6.eq) goto loc_831DE4B4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,21424
	ctx.r5.s64 = ctx.r11.s64 + 21424;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,572
	ctx.r7.s64 = 572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE4B4;
	sub_831034D8(ctx, base);
loc_831DE4B4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831de574
	if (ctx.cr6.lt) goto loc_831DE574;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,21548
	ctx.r27.s64 = ctx.r11.s64 + 21548;
loc_831DE4D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de4f4
	if (!ctx.cr6.eq) goto loc_831DE4F4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831de4f4
	if (!ctx.cr6.eq) goto loc_831DE4F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831de4fc
	if (ctx.cr6.eq) goto loc_831DE4FC;
loc_831DE4F4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x831de4d0
	goto loc_831DE4D0;
loc_831DE4FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x831b49e0
	ctx.lr = 0x831DE508;
	sub_831B49E0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq 0x831de570
	if (ctx.cr0.eq) goto loc_831DE570;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831de540
	if (!ctx.cr6.eq) goto loc_831DE540;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,616
	ctx.r7.s64 = 616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE540;
	sub_831034D8(ctx, base);
loc_831DE540:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831de554
	if (!ctx.cr6.eq) goto loc_831DE554;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x831de4d0
	goto loc_831DE4D0;
loc_831DE554:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831de568
	if (!ctx.cr6.eq) goto loc_831DE568;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x831de4d0
	goto loc_831DE4D0;
loc_831DE568:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x831de4d0
	goto loc_831DE4D0;
loc_831DE570:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_831DE574:
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DE584"))) PPC_WEAK_FUNC(sub_831DE584);
PPC_FUNC_IMPL(__imp__sub_831DE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DE588"))) PPC_WEAK_FUNC(sub_831DE588);
PPC_FUNC_IMPL(__imp__sub_831DE588) {
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
	// bne cr6,0x831de5c4
	if (!ctx.cr6.eq) goto loc_831DE5C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,21432
	ctx.r6.s64 = ctx.r11.s64 + 21432;
	// addi r5,r10,21424
	ctx.r5.s64 = ctx.r10.s64 + 21424;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,109
	ctx.r7.s64 = 109;
	// bl 0x831034d8
	ctx.lr = 0x831DE5C4;
	sub_831034D8(ctx, base);
loc_831DE5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831de470
	ctx.lr = 0x831DE5CC;
	sub_831DE470(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b4870
	ctx.lr = 0x831DE5D4;
	sub_831B4870(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DE5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_831DE5FC"))) PPC_WEAK_FUNC(sub_831DE5FC);
PPC_FUNC_IMPL(__imp__sub_831DE5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DE600"))) PPC_WEAK_FUNC(sub_831DE600);
PPC_FUNC_IMPL(__imp__sub_831DE600) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// ori r9,r11,31161
	ctx.r9.u64 = ctx.r11.u64 | 31161;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x831de6e0
	if (ctx.cr6.lt) goto loc_831DE6E0;
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r8,r4,r8
	ctx.r8.u32 = ctx.r4.u32 / ctx.r8.u32;
loc_831DE628:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r6,r10,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r5,r10,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r6,r9,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r6,r9,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm r6,r11,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r6,r9,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// bne 0x831de628
	if (!ctx.cr0.eq) goto loc_831DE628;
loc_831DE6E0:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x831de700
	if (ctx.cr6.eq) goto loc_831DE700;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x831de708
	if (!ctx.cr6.eq) goto loc_831DE708;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_831DE700:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_831DE708:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r9,17,15,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DE7A0"))) PPC_WEAK_FUNC(sub_831DE7A0);
PPC_FUNC_IMPL(__imp__sub_831DE7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831DE7A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,496
	ctx.r9.s64 = ctx.r10.s64 + 496;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,8(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,22656
	ctx.r26.s64 = ctx.r10.s64 + 22656;
	// bne cr6,0x831de7f8
	if (!ctx.cr6.eq) goto loc_831DE7F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,8088
	ctx.r5.s64 = ctx.r11.s64 + 8088;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1690
	ctx.r7.s64 = 1690;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE7F8;
	sub_831034D8(ctx, base);
loc_831DE7F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c9040
	ctx.lr = 0x831DE804;
	sub_831C9040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831de824
	if (!ctx.cr0.eq) goto loc_831DE824;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,22748
	ctx.r5.s64 = ctx.r11.s64 + 22748;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1691
	ctx.r7.s64 = 1691;
	// bl 0x831034d8
	ctx.lr = 0x831DE824;
	sub_831034D8(ctx, base);
loc_831DE824:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x831c9040
	ctx.lr = 0x831DE838;
	sub_831C9040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831c9040
	ctx.lr = 0x831DE864;
	sub_831C9040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831DE898"))) PPC_WEAK_FUNC(sub_831DE898);
PPC_FUNC_IMPL(__imp__sub_831DE898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x831DE8A0;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x831fbac8
	ctx.lr = 0x831DE8C4;
	sub_831FBAC8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r24,r11,-18548
	ctx.r24.s64 = ctx.r11.s64 + -18548;
	// addi r23,r10,22656
	ctx.r23.s64 = ctx.r10.s64 + 22656;
	// bne 0x831de8f8
	if (!ctx.cr0.eq) goto loc_831DE8F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,22788
	ctx.r5.s64 = ctx.r11.s64 + 22788;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1730
	ctx.r7.s64 = 1730;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE8F8;
	sub_831034D8(ctx, base);
loc_831DE8F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x831de938
	if (!ctx.cr6.eq) goto loc_831DE938;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x831de938
	if (!ctx.cr6.eq) goto loc_831DE938;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x831de938
	if (!ctx.cr6.eq) goto loc_831DE938;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x831de938
	if (!ctx.cr6.eq) goto loc_831DE938;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831dea5c
	goto loc_831DEA5C;
loc_831DE938:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fbd28
	ctx.lr = 0x831DE944;
	sub_831FBD28(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r22,r11,22768
	ctx.r22.s64 = ctx.r11.s64 + 22768;
	// bgt 0x831de96c
	if (ctx.cr0.gt) goto loc_831DE96C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1750
	ctx.r7.s64 = 1750;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE96C;
	sub_831034D8(ctx, base);
loc_831DE96C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x831de9a8
	if (!ctx.cr6.gt) goto loc_831DE9A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r27,r31,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r26,r31,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_831DE984:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r5,r27,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fc1b0
	ctx.lr = 0x831DE998;
	sub_831FC1B0(ctx, base);
	// stwx r3,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x831de984
	if (!ctx.cr0.eq) goto loc_831DE984;
loc_831DE9A8:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fc048
	ctx.lr = 0x831DE9B8;
	sub_831FC048(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fc010
	ctx.lr = 0x831DE9CC;
	sub_831FC010(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x831de9ec
	if (ctx.cr0.gt) goto loc_831DE9EC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1763
	ctx.r7.s64 = 1763;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DE9EC;
	sub_831034D8(ctx, base);
loc_831DE9EC:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// beq cr6,0x831dea3c
	if (ctx.cr6.eq) goto loc_831DEA3C;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// beq cr6,0x831dea24
	if (ctx.cr6.eq) goto loc_831DEA24;
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// beq cr6,0x831dea1c
	if (ctx.cr6.eq) goto loc_831DEA1C;
	// cmplwi cr6,r19,8
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 8, ctx.xer);
	// bne cr6,0x831dea6c
	if (!ctx.cr6.eq) goto loc_831DEA6C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// b 0x831dea68
	goto loc_831DEA68;
loc_831DEA1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x831dea60
	goto loc_831DEA60;
loc_831DEA24:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// b 0x831dea58
	goto loc_831DEA58;
loc_831DEA3C:
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_831DEA58:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_831DEA5C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_831DEA60:
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_831DEA68:
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_831DEA6C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_831DEA78"))) PPC_WEAK_FUNC(sub_831DEA78);
PPC_FUNC_IMPL(__imp__sub_831DEA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DEA80;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x831dead4
	if (ctx.cr6.eq) goto loc_831DEAD4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x831090e8
	ctx.lr = 0x831DEAA4;
	sub_831090E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DEAB8;
	sub_831090E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DEACC;
	sub_831090E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x831deaf8
	goto loc_831DEAF8;
loc_831DEAD4:
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x83108de0
	ctx.lr = 0x831DEADC;
	sub_83108DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,961
	ctx.r4.s64 = 961;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108de0
	ctx.lr = 0x831DEAEC;
	sub_83108DE0(ctx, base);
	// lis r24,770
	ctx.r24.s64 = 50462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r24,r24,256
	ctx.r24.u64 = ctx.r24.u64 | 256;
loc_831DEAF8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,22656
	ctx.r26.s64 = ctx.r10.s64 + 22656;
	// beq cr6,0x831deb18
	if (ctx.cr6.eq) goto loc_831DEB18;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// blt cr6,0x831deb34
	if (ctx.cr6.lt) goto loc_831DEB34;
loc_831DEB18:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24712
	ctx.r5.s64 = ctx.r11.s64 + 24712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,321
	ctx.r7.s64 = 321;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEB34;
	sub_831034D8(ctx, base);
loc_831DEB34:
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// addi r31,r11,21560
	ctx.r31.s64 = ctx.r11.s64 + 21560;
	// bne cr6,0x831deb90
	if (!ctx.cr6.eq) goto loc_831DEB90;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x831deb7c
	if (!ctx.cr6.eq) goto loc_831DEB7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24684
	ctx.r5.s64 = ctx.r11.s64 + 24684;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,331
	ctx.r7.s64 = 331;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEB7C;
	sub_831034D8(ctx, base);
loc_831DEB7C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x831debac
	if (!ctx.cr6.eq) goto loc_831DEBAC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// b 0x831deba8
	goto loc_831DEBA8;
loc_831DEB90:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x831debac
	if (!ctx.cr6.eq) goto loc_831DEBAC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
loc_831DEBA8:
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_831DEBAC:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwzx r30,r30,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x831debe4
	if (ctx.cr6.lt) goto loc_831DEBE4;
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831debe4
	if (ctx.cr6.eq) goto loc_831DEBE4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24568
	ctx.r5.s64 = ctx.r11.s64 + 24568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,369
	ctx.r7.s64 = 369;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEBE4;
	sub_831034D8(ctx, base);
loc_831DEBE4:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x831dec14
	if (ctx.cr6.lt) goto loc_831DEC14;
	// rlwinm r11,r28,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831dec14
	if (ctx.cr6.eq) goto loc_831DEC14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24448
	ctx.r5.s64 = ctx.r11.s64 + 24448;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEC14;
	sub_831034D8(ctx, base);
loc_831DEC14:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x831dec44
	if (ctx.cr6.lt) goto loc_831DEC44;
	// rlwinm r11,r28,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831dec44
	if (ctx.cr6.eq) goto loc_831DEC44;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24328
	ctx.r5.s64 = ctx.r11.s64 + 24328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEC44;
	sub_831034D8(ctx, base);
loc_831DEC44:
	// cmplwi cr6,r29,34
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 34, ctx.xer);
	// bne cr6,0x831dec68
	if (!ctx.cr6.eq) goto loc_831DEC68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24248
	ctx.r5.s64 = ctx.r11.s64 + 24248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEC68;
	sub_831034D8(ctx, base);
loc_831DEC68:
	// cmplwi cr6,r29,35
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 35, ctx.xer);
	// bne cr6,0x831dec8c
	if (!ctx.cr6.eq) goto loc_831DEC8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24168
	ctx.r5.s64 = ctx.r11.s64 + 24168;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEC8C;
	sub_831034D8(ctx, base);
loc_831DEC8C:
	// cmplwi cr6,r29,17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 17, ctx.xer);
	// bne cr6,0x831decb0
	if (!ctx.cr6.eq) goto loc_831DECB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24088
	ctx.r5.s64 = ctx.r11.s64 + 24088;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,387
	ctx.r7.s64 = 387;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DECB0;
	sub_831034D8(ctx, base);
loc_831DECB0:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x831decd4
	if (!ctx.cr6.eq) goto loc_831DECD4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,24000
	ctx.r5.s64 = ctx.r11.s64 + 24000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DECD4;
	sub_831034D8(ctx, base);
loc_831DECD4:
	// cmplwi cr6,r29,18
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 18, ctx.xer);
	// bne cr6,0x831decf8
	if (!ctx.cr6.eq) goto loc_831DECF8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23912
	ctx.r5.s64 = ctx.r11.s64 + 23912;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DECF8;
	sub_831034D8(ctx, base);
loc_831DECF8:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x831ded50
	if (ctx.cr6.lt) goto loc_831DED50;
	// beq cr6,0x831ded48
	if (ctx.cr6.eq) goto loc_831DED48;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x831ded40
	if (ctx.cr6.eq) goto loc_831DED40;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// beq cr6,0x831ded38
	if (ctx.cr6.eq) goto loc_831DED38;
	// cmplwi cr6,r29,33
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 33, ctx.xer);
	// beq cr6,0x831ded30
	if (ctx.cr6.eq) goto loc_831DED30;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bne cr6,0x831ded50
	if (!ctx.cr6.eq) goto loc_831DED50;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831ded54
	goto loc_831DED54;
loc_831DED30:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x831ded54
	goto loc_831DED54;
loc_831DED38:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831ded54
	goto loc_831DED54;
loc_831DED40:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831ded54
	goto loc_831DED54;
loc_831DED48:
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// b 0x831ded58
	goto loc_831DED58;
loc_831DED50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831DED54:
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_831DED58:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831dee0c
	if (!ctx.cr0.eq) goto loc_831DEE0C;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x831deda0
	if (ctx.cr6.lt) goto loc_831DEDA0;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831deda0
	if (ctx.cr6.eq) goto loc_831DEDA0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831deda0
	if (ctx.cr6.eq) goto loc_831DEDA0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831deda0
	if (ctx.cr6.eq) goto loc_831DEDA0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23656
	ctx.r5.s64 = ctx.r11.s64 + 23656;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEDA0;
	sub_831034D8(ctx, base);
loc_831DEDA0:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x831dede0
	if (ctx.cr6.lt) goto loc_831DEDE0;
	// rlwinm r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x831dede0
	if (ctx.cr6.eq) goto loc_831DEDE0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831dede0
	if (ctx.cr6.eq) goto loc_831DEDE0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831dede0
	if (ctx.cr6.eq) goto loc_831DEDE0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23400
	ctx.r5.s64 = ctx.r11.s64 + 23400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,454
	ctx.r7.s64 = 454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEDE0;
	sub_831034D8(ctx, base);
loc_831DEDE0:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x831deeec
	if (ctx.cr6.lt) goto loc_831DEEEC;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// li r7,458
	ctx.r7.s64 = 458;
	// b 0x831deed4
	goto loc_831DEED4;
loc_831DEE0C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x831dee30
	if (ctx.cr6.eq) goto loc_831DEE30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23320
	ctx.r5.s64 = ctx.r11.s64 + 23320;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,466
	ctx.r7.s64 = 466;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEE30;
	sub_831034D8(ctx, base);
loc_831DEE30:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x831dee70
	if (ctx.cr6.lt) goto loc_831DEE70;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831dee70
	if (ctx.cr6.eq) goto loc_831DEE70;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831dee70
	if (ctx.cr6.eq) goto loc_831DEE70;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831dee70
	if (ctx.cr6.eq) goto loc_831DEE70;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23656
	ctx.r5.s64 = ctx.r11.s64 + 23656;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,472
	ctx.r7.s64 = 472;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEE70;
	sub_831034D8(ctx, base);
loc_831DEE70:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x831deeac
	if (ctx.cr6.lt) goto loc_831DEEAC;
	// rlwinm. r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831deeac
	if (ctx.cr0.eq) goto loc_831DEEAC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831deeac
	if (ctx.cr6.eq) goto loc_831DEEAC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831deeac
	if (ctx.cr6.eq) goto loc_831DEEAC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,23064
	ctx.r5.s64 = ctx.r11.s64 + 23064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,476
	ctx.r7.s64 = 476;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEEAC;
	sub_831034D8(ctx, base);
loc_831DEEAC:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x831deeec
	if (ctx.cr6.lt) goto loc_831DEEEC;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x831deeec
	if (ctx.cr6.eq) goto loc_831DEEEC;
	// li r7,480
	ctx.r7.s64 = 480;
loc_831DEED4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,22808
	ctx.r5.s64 = ctx.r11.s64 + 22808;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEEEC;
	sub_831034D8(ctx, base);
loc_831DEEEC:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DEEF8"))) PPC_WEAK_FUNC(sub_831DEEF8);
PPC_FUNC_IMPL(__imp__sub_831DEEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DEF00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DEF1C;
	sub_831090E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x831090e8
	ctx.lr = 0x831DEF30;
	sub_831090E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831090e8
	ctx.lr = 0x831DEF44;
	sub_831090E8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,22656
	ctx.r27.s64 = ctx.r10.s64 + 22656;
	// beq cr6,0x831def64
	if (ctx.cr6.eq) goto loc_831DEF64;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// blt cr6,0x831def80
	if (ctx.cr6.lt) goto loc_831DEF80;
loc_831DEF64:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,24772
	ctx.r5.s64 = ctx.r11.s64 + 24772;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,553
	ctx.r7.s64 = 553;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DEF80;
	sub_831034D8(ctx, base);
loc_831DEF80:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x831defbc
	if (!ctx.cr6.eq) goto loc_831DEFBC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,21768
	ctx.r11.s64 = ctx.r11.s64 + 21768;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831df024
	if (!ctx.cr6.eq) goto loc_831DF024;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,24756
	ctx.r5.s64 = ctx.r11.s64 + 24756;
	// b 0x831df014
	goto loc_831DF014;
loc_831DEFBC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,21768
	ctx.r11.s64 = ctx.r11.s64 + 21768;
	// bne cr6,0x831deff0
	if (!ctx.cr6.eq) goto loc_831DEFF0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831df024
	if (!ctx.cr6.eq) goto loc_831DF024;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,24756
	ctx.r5.s64 = ctx.r11.s64 + 24756;
	// b 0x831df014
	goto loc_831DF014;
loc_831DEFF0:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831df024
	if (!ctx.cr6.eq) goto loc_831DF024;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x831df024
	if (ctx.cr6.eq) goto loc_831DF024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,585
	ctx.r7.s64 = 585;
	// addi r5,r11,-10856
	ctx.r5.s64 = ctx.r11.s64 + -10856;
loc_831DF014:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF024;
	sub_831034D8(ctx, base);
loc_831DF024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DF02C"))) PPC_WEAK_FUNC(sub_831DF02C);
PPC_FUNC_IMPL(__imp__sub_831DF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF030"))) PPC_WEAK_FUNC(sub_831DF030);
PPC_FUNC_IMPL(__imp__sub_831DF030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831DF038;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831df078
	if (!ctx.cr6.eq) goto loc_831DF078;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,24860
	ctx.r5.s64 = ctx.r10.s64 + 24860;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,244
	ctx.r7.s64 = 244;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF078;
	sub_831034D8(ctx, base);
loc_831DF078:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc6f8
	ctx.lr = 0x831DF084;
	sub_831FC6F8(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831DF090"))) PPC_WEAK_FUNC(sub_831DF090);
PPC_FUNC_IMPL(__imp__sub_831DF090) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DF098"))) PPC_WEAK_FUNC(sub_831DF098);
PPC_FUNC_IMPL(__imp__sub_831DF098) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eea08
	ctx.lr = 0x831DF0B4;
	sub_831EEA08(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1394(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1394, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_831DF0D4"))) PPC_WEAK_FUNC(sub_831DF0D4);
PPC_FUNC_IMPL(__imp__sub_831DF0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF0D8"))) PPC_WEAK_FUNC(sub_831DF0D8);
PPC_FUNC_IMPL(__imp__sub_831DF0D8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831c58b0
	ctx.lr = 0x831DF110;
	sub_831C58B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831DF12C"))) PPC_WEAK_FUNC(sub_831DF12C);
PPC_FUNC_IMPL(__imp__sub_831DF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF130"))) PPC_WEAK_FUNC(sub_831DF130);
PPC_FUNC_IMPL(__imp__sub_831DF130) {
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
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fad00
	ctx.lr = 0x831DF154;
	sub_831FAD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fad80
	ctx.lr = 0x831DF160;
	sub_831FAD80(ctx, base);
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

__attribute__((alias("__imp__sub_831DF178"))) PPC_WEAK_FUNC(sub_831DF178);
PPC_FUNC_IMPL(__imp__sub_831DF178) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DF180"))) PPC_WEAK_FUNC(sub_831DF180);
PPC_FUNC_IMPL(__imp__sub_831DF180) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2076(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DF188"))) PPC_WEAK_FUNC(sub_831DF188);
PPC_FUNC_IMPL(__imp__sub_831DF188) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2073(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2073);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DF190"))) PPC_WEAK_FUNC(sub_831DF190);
PPC_FUNC_IMPL(__imp__sub_831DF190) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831df1d4
	if (!ctx.cr0.eq) goto loc_831DF1D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = ctx.r11.s64 + 25064;
	// addi r5,r10,25036
	ctx.r5.s64 = ctx.r10.s64 + 25036;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1902
	ctx.r7.s64 = 1902;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF1D4;
	sub_831034D8(ctx, base);
loc_831DF1D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_831DF1F8"))) PPC_WEAK_FUNC(sub_831DF1F8);
PPC_FUNC_IMPL(__imp__sub_831DF1F8) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831df23c
	if (!ctx.cr0.eq) goto loc_831DF23C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = ctx.r11.s64 + 25064;
	// addi r5,r10,25036
	ctx.r5.s64 = ctx.r10.s64 + 25036;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF23C;
	sub_831034D8(ctx, base);
loc_831DF23C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831DF27C"))) PPC_WEAK_FUNC(sub_831DF27C);
PPC_FUNC_IMPL(__imp__sub_831DF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF280"))) PPC_WEAK_FUNC(sub_831DF280);
PPC_FUNC_IMPL(__imp__sub_831DF280) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831df2c8
	if (!ctx.cr6.eq) goto loc_831DF2C8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = ctx.r11.s64 + 25064;
	// addi r5,r10,25144
	ctx.r5.s64 = ctx.r10.s64 + 25144;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1919
	ctx.r7.s64 = 1919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF2C8;
	sub_831034D8(ctx, base);
loc_831DF2C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x831df304
	if (ctx.cr0.eq) goto loc_831DF304;
	// addi r10,r11,57
	ctx.r10.s64 = ctx.r11.s64 + 57;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x831df308
	goto loc_831DF308;
loc_831DF304:
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
loc_831DF308:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_831DF328"))) PPC_WEAK_FUNC(sub_831DF328);
PPC_FUNC_IMPL(__imp__sub_831DF328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DF330;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,25064
	ctx.r28.s64 = ctx.r10.s64 + 25064;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x831df378
	if (!ctx.cr6.gt) goto loc_831DF378;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25232
	ctx.r5.s64 = ctx.r11.s64 + 25232;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1945
	ctx.r7.s64 = 1945;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF378;
	sub_831034D8(ctx, base);
loc_831DF378:
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lbz r11,1393(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831df3bc
	if (ctx.cr0.eq) goto loc_831DF3BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x831df3bc
	if (!ctx.cr6.eq) goto loc_831DF3BC;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831df3bc
	if (ctx.cr0.eq) goto loc_831DF3BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25160
	ctx.r5.s64 = ctx.r11.s64 + 25160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF3BC;
	sub_831034D8(ctx, base);
loc_831DF3BC:
	// addi r11,r30,58
	ctx.r11.s64 = ctx.r30.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DF3D0"))) PPC_WEAK_FUNC(sub_831DF3D0);
PPC_FUNC_IMPL(__imp__sub_831DF3D0) {
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
	// lwz r3,2068(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831DF3F0;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_831DF408"))) PPC_WEAK_FUNC(sub_831DF408);
PPC_FUNC_IMPL(__imp__sub_831DF408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DF410;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831df484
	if (!ctx.cr6.gt) goto loc_831DF484;
	// li r30,0
	ctx.r30.s64 = 0;
loc_831DF434:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831df44c
	if (!ctx.cr6.lt) goto loc_831DF44C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x831df454
	goto loc_831DF454;
loc_831DF44C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831DF454;
	sub_831FC9D0(ctx, base);
loc_831DF454:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831df46c
	if (!ctx.cr6.eq) goto loc_831DF46C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// bl 0x831fc910
	ctx.lr = 0x831DF46C;
	sub_831FC910(ctx, base);
loc_831DF46C:
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831df434
	if (ctx.cr6.lt) goto loc_831DF434;
loc_831DF484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831DF48C"))) PPC_WEAK_FUNC(sub_831DF48C);
PPC_FUNC_IMPL(__imp__sub_831DF48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF490"))) PPC_WEAK_FUNC(sub_831DF490);
PPC_FUNC_IMPL(__imp__sub_831DF490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DF498;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r24,136(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831df630
	if (ctx.cr6.eq) goto loc_831DF630;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r10,-18548
	ctx.r28.s64 = ctx.r10.s64 + -18548;
	// addi r27,r9,25252
	ctx.r27.s64 = ctx.r9.s64 + 25252;
	// addi r26,r11,24888
	ctx.r26.s64 = ctx.r11.s64 + 24888;
loc_831DF4C8:
	// lwz r31,28(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// b 0x831df614
	goto loc_831DF614;
loc_831DF4D0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831df610
	if (ctx.cr0.eq) goto loc_831DF610;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DF4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x831df588
	if (ctx.cr6.lt) goto loc_831DF588;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
loc_831DF500:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x831df54c
	if (ctx.cr6.eq) goto loc_831DF54C;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x831df54c
	if (ctx.cr6.eq) goto loc_831DF54C;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x831df54c
	if (ctx.cr6.eq) goto loc_831DF54C;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// beq cr6,0x831df54c
	if (ctx.cr6.eq) goto loc_831DF54C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DF540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x831df500
	if (!ctx.cr6.gt) goto loc_831DF500;
	// b 0x831df588
	goto loc_831DF588;
loc_831DF54C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x831ee258
	ctx.lr = 0x831DF55C;
	sub_831EE258(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x831df57c
	if (!ctx.cr0.eq) goto loc_831DF57C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DF57C;
	sub_831034D8(ctx, base);
loc_831DF57C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ffdc0
	ctx.lr = 0x831DF588;
	sub_831FFDC0(ctx, base);
loc_831DF588:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831df5c8
	if (ctx.cr0.eq) goto loc_831DF5C8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x831ff888
	ctx.lr = 0x831DF5A0;
	sub_831FF888(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x831df5c8
	if (!ctx.cr6.eq) goto loc_831DF5C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x831ee258
	ctx.lr = 0x831DF5B8;
	sub_831EE258(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x831df5c8
	if (ctx.cr0.eq) goto loc_831DF5C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ffdc0
	ctx.lr = 0x831DF5C8;
	sub_831FFDC0(ctx, base);
loc_831DF5C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831df610
	if (ctx.cr6.eq) goto loc_831DF610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831feda8
	ctx.lr = 0x831DF5DC;
	sub_831FEDA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831df610
	if (ctx.cr0.eq) goto loc_831DF610;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x831df610
	if (ctx.cr6.eq) goto loc_831DF610;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ffdc0
	ctx.lr = 0x831DF600;
	sub_831FFDC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831fd370
	ctx.lr = 0x831DF610;
	sub_831FD370(ctx, base);
loc_831DF610:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_831DF614:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831df4d0
	if (!ctx.cr6.eq) goto loc_831DF4D0;
	// lwz r24,8(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831df4c8
	if (!ctx.cr6.eq) goto loc_831DF4C8;
loc_831DF630:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DF638"))) PPC_WEAK_FUNC(sub_831DF638);
PPC_FUNC_IMPL(__imp__sub_831DF638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831DF640;
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
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831df668
	if (ctx.cr6.eq) goto loc_831DF668;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c59e0
	ctx.lr = 0x831DF668;
	sub_831C59E0(ctx, base);
loc_831DF668:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c58b0
	ctx.lr = 0x831DF67C;
	sub_831C58B0(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
loc_831DF688:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831df688
	if (!ctx.cr0.eq) goto loc_831DF688;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831DF6A8"))) PPC_WEAK_FUNC(sub_831DF6A8);
PPC_FUNC_IMPL(__imp__sub_831DF6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831DF6B0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831df72c
	if (ctx.cr6.lt) goto loc_831DF72C;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_831DF6D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1456(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831DF6E8;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x831df708
	if (ctx.cr0.eq) goto loc_831DF708;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x831DF704;
	sub_831DF0D8(ctx, base);
	// b 0x831df70c
	goto loc_831DF70C;
loc_831DF708:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831DF70C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831df6d4
	if (!ctx.cr6.gt) goto loc_831DF6D4;
loc_831DF72C:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x831df754
	goto loc_831DF754;
loc_831DF734:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831DF74C;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831DF754:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831df734
	if (!ctx.cr6.eq) goto loc_831DF734;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x831fc770
	ctx.lr = 0x831DF768;
	sub_831FC770(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c58b0
	ctx.lr = 0x831DF780;
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831df7fc
	if (ctx.cr6.lt) goto loc_831DF7FC;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_831DF7A4:
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831df7e0
	if (ctx.cr6.eq) goto loc_831DF7E0;
	// rotlwi r28,r26,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_831DF7BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832027e0
	ctx.lr = 0x831DF7C4;
	sub_832027E0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831df7bc
	if (!ctx.cr6.eq) goto loc_831DF7BC;
loc_831DF7E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831df7a4
	if (!ctx.cr6.gt) goto loc_831DF7A4;
loc_831DF7FC:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831DF808"))) PPC_WEAK_FUNC(sub_831DF808);
PPC_FUNC_IMPL(__imp__sub_831DF808) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831DF82C;
	sub_831EEAC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r11.u8);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831DF850"))) PPC_WEAK_FUNC(sub_831DF850);
PPC_FUNC_IMPL(__imp__sub_831DF850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831DF858;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831df808
	ctx.lr = 0x831DF864;
	sub_831DF808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r11,2073(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2073, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x831fcfb8
	ctx.lr = 0x831DF880;
	sub_831FCFB8(ctx, base);
	// b 0x831df960
	goto loc_831DF960;
loc_831DF884:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
loc_831DF88C:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r27,r11,21
	ctx.r27.s64 = ctx.r11.s64 + 21;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x831df94c
	if (!ctx.cr6.eq) goto loc_831DF94C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831df94c
	if (!ctx.cr6.eq) goto loc_831DF94C;
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831DF8C0;
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DF8D0;
	sub_831FF250(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DF8E0;
	sub_831FF250(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_831DF8E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DF904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x831df8e4
	if (ctx.cr6.lt) goto loc_831DF8E4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DF920;
	sub_831FF250(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831DF930;
	sub_831EEAC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DF940;
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831DF94C;
	sub_83201E40(ctx, base);
loc_831DF94C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x831df88c
	if (ctx.cr6.lt) goto loc_831DF88C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fcef0
	ctx.lr = 0x831DF960;
	sub_831FCEF0(ctx, base);
loc_831DF960:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne cr6,0x831df884
	if (!ctx.cr6.eq) goto loc_831DF884;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831DF97C"))) PPC_WEAK_FUNC(sub_831DF97C);
PPC_FUNC_IMPL(__imp__sub_831DF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DF980"))) PPC_WEAK_FUNC(sub_831DF980);
PPC_FUNC_IMPL(__imp__sub_831DF980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x831DF988;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,-18548
	ctx.r23.s64 = ctx.r11.s64 + -18548;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r22,r10,24888
	ctx.r22.s64 = ctx.r10.s64 + 24888;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x831dfa4c
	if (ctx.cr6.eq) goto loc_831DFA4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831ee220
	ctx.lr = 0x831DF9BC;
	sub_831EE220(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831df9f4
	if (!ctx.cr0.eq) goto loc_831DF9F4;
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831ee278
	ctx.lr = 0x831DF9D4;
	sub_831EE278(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DF9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831dfa0c
	goto loc_831DFA0C;
loc_831DF9F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DFA0C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831dfa30
	if (!ctx.cr6.eq) goto loc_831DFA30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25280
	ctx.r5.s64 = ctx.r11.s64 + 25280;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,649
	ctx.r7.s64 = 649;
	// bl 0x831034d8
	ctx.lr = 0x831DFA30;
	sub_831034D8(ctx, base);
loc_831DFA30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fd320
	ctx.lr = 0x831DFA3C;
	sub_831FD320(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFA4C;
	sub_831FF250(ctx, base);
loc_831DFA4C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831dfd04
	if (ctx.cr6.lt) goto loc_831DFD04;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r28,r29,84
	ctx.r28.s64 = ctx.r29.s64 + 84;
	// addi r27,r11,24848
	ctx.r27.s64 = ctx.r11.s64 + 24848;
	// addi r24,r10,10000
	ctx.r24.s64 = ctx.r10.s64 + 10000;
	// addi r25,r9,25264
	ctx.r25.s64 = ctx.r9.s64 + 25264;
loc_831DFA78:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// beq cr6,0x831dfa8c
	if (ctx.cr6.eq) goto loc_831DFA8C;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x831dfaa4
	if (!ctx.cr6.eq) goto loc_831DFAA4;
loc_831DFA8C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1508(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, ctx.r11.u32);
	// stw r11,-24(r28)
	PPC_STORE_U32(ctx.r28.u32 + -24, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_831DFAA4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ee220
	ctx.lr = 0x831DFAB4;
	sub_831EE220(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831dfaec
	if (!ctx.cr0.eq) goto loc_831DFAEC;
	// lwz r5,-24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831ee278
	ctx.lr = 0x831DFACC;
	sub_831EE278(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831dfb04
	goto loc_831DFB04;
loc_831DFAEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831DFB04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831fd370
	ctx.lr = 0x831DFB14;
	sub_831FD370(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFB24;
	sub_831FF250(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x831dfba8
	if (!ctx.cr6.eq) goto loc_831DFBA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df808
	ctx.lr = 0x831DFB38;
	sub_831DF808(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831DFB48;
	sub_831FEDE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFB60;
	sub_831FF250(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831DFB70;
	sub_831FF250(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r20)
	PPC_STORE_U32(ctx.r20.u32 + 132, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831DFB84;
	sub_831DF980(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831DFB90;
	sub_83201E40(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831fee78
	ctx.lr = 0x831DFB98;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831dfc68
	if (!ctx.cr0.eq) goto loc_831DFC68;
	// li r7,704
	ctx.r7.s64 = 704;
	// b 0x831dfc54
	goto loc_831DFC54;
loc_831DFBA8:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x831dfc68
	if (!ctx.cr6.eq) goto loc_831DFC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df808
	ctx.lr = 0x831DFBB8;
	sub_831DF808(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831DFBC8;
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFBD8;
	sub_831FF250(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831DFBE8;
	sub_831FF250(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831DFC34;
	sub_831DF980(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831DFC40;
	sub_83201E40(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831fee78
	ctx.lr = 0x831DFC48;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831dfc68
	if (!ctx.cr0.eq) goto loc_831DFC68;
	// li r7,718
	ctx.r7.s64 = 718;
loc_831DFC54:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DFC68;
	sub_831034D8(ctx, base);
loc_831DFC68:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831dfcf0
	if (!ctx.cr0.eq) goto loc_831DFCF0;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831dfcf0
	if (ctx.cr0.eq) goto loc_831DFCF0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x831dfcf0
	if (ctx.cr6.eq) goto loc_831DFCF0;
	// lbz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x831dfca4
	if (ctx.cr6.eq) goto loc_831DFCA4;
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
loc_831DFCA4:
	// stb r11,48(r28)
	PPC_STORE_U8(ctx.r28.u32 + 48, ctx.r11.u8);
	// lbz r11,129(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831dfcbc
	if (ctx.cr6.eq) goto loc_831DFCBC;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
loc_831DFCBC:
	// stb r11,49(r28)
	PPC_STORE_U8(ctx.r28.u32 + 49, ctx.r11.u8);
	// lbz r11,130(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x831dfcd4
	if (ctx.cr6.eq) goto loc_831DFCD4;
	// lbz r11,50(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 50);
loc_831DFCD4:
	// stb r11,50(r28)
	PPC_STORE_U8(ctx.r28.u32 + 50, ctx.r11.u8);
	// lbz r11,131(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 131);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x831dfcec
	if (ctx.cr6.eq) goto loc_831DFCEC;
	// lbz r11,51(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 51);
loc_831DFCEC:
	// stb r11,51(r28)
	PPC_STORE_U8(ctx.r28.u32 + 51, ctx.r11.u8);
loc_831DFCF0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831dfa78
	if (!ctx.cr6.gt) goto loc_831DFA78;
loc_831DFD04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_831DFD0C"))) PPC_WEAK_FUNC(sub_831DFD0C);
PPC_FUNC_IMPL(__imp__sub_831DFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DFD10"))) PPC_WEAK_FUNC(sub_831DFD10);
PPC_FUNC_IMPL(__imp__sub_831DFD10) {
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
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x831dfd3c
	goto loc_831DFD3C;
loc_831DFD28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201fd8
	ctx.lr = 0x831DFD30;
	sub_83201FD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831dfd60
	if (ctx.cr0.eq) goto loc_831DFD60;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_831DFD3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831dfd28
	if (!ctx.cr6.eq) goto loc_831DFD28;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831DFD4C:
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
loc_831DFD60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831dfd4c
	goto loc_831DFD4C;
}

__attribute__((alias("__imp__sub_831DFD68"))) PPC_WEAK_FUNC(sub_831DFD68);
PPC_FUNC_IMPL(__imp__sub_831DFD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831DFD70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r31,r11,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831c58b0
	ctx.lr = 0x831DFD94;
	sub_831C58B0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831dfdd0
	if (ctx.cr6.eq) goto loc_831DFDD0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_831DFDB4:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831dfdb4
	if (ctx.cr6.lt) goto loc_831DFDB4;
loc_831DFDD0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831DFDDC"))) PPC_WEAK_FUNC(sub_831DFDDC);
PPC_FUNC_IMPL(__imp__sub_831DFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DFDE0"))) PPC_WEAK_FUNC(sub_831DFDE0);
PPC_FUNC_IMPL(__imp__sub_831DFDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831DFDE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831DFE00;
	sub_831EEAC8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r31,1452(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// lwz r27,28(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,32(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x831c58b0
	ctx.lr = 0x831DFE24;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x831dfe44
	if (ctx.cr0.eq) goto loc_831DFE44;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832007a8
	ctx.lr = 0x831DFE3C;
	sub_832007A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831dfe48
	goto loc_831DFE48;
loc_831DFE44:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831DFE48:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFE58;
	sub_831FF250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFE68;
	sub_831FF250(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFE78;
	sub_831FF250(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_831DFE7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x831dfe7c
	if (ctx.cr6.lt) goto loc_831DFE7C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fd6c8
	ctx.lr = 0x831DFEB8;
	sub_831FD6C8(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x831ff7a0
	ctx.lr = 0x831DFEC0;
	sub_831FF7A0(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DFED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x83201e40
	ctx.lr = 0x831DFEE0;
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831DFEE8;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831dff14
	if (!ctx.cr0.eq) goto loc_831DFF14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,25288
	ctx.r5.s64 = ctx.r10.s64 + 25288;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1198
	ctx.r7.s64 = 1198;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831DFF14;
	sub_831034D8(ctx, base);
loc_831DFF14:
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831DFF24;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831DFF30"))) PPC_WEAK_FUNC(sub_831DFF30);
PPC_FUNC_IMPL(__imp__sub_831DFF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831DFF38;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831dc7b8
	ctx.lr = 0x831DFF5C;
	sub_831DC7B8(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc858
	ctx.lr = 0x831DFF78;
	sub_831DC858(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc8f8
	ctx.lr = 0x831DFF94;
	sub_831DC8F8(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc998
	ctx.lr = 0x831DFFB0;
	sub_831DC998(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x83200d28
	ctx.lr = 0x831DFFC4;
	sub_83200D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831DFFD4;
	sub_831FF250(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831DFFE4;
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ffe70
	ctx.lr = 0x831E0004;
	sub_831FFE70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r11.u8);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x83201f30
	ctx.lr = 0x831E0040;
	sub_83201F30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x831eeac8
	ctx.lr = 0x831E0050;
	sub_831EEAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d98
	ctx.lr = 0x831E0060;
	sub_83200D98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0070;
	sub_831FF250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0080;
	sub_831FF250(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_831E0084:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E00A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x831e0084
	if (ctx.cr6.lt) goto loc_831E0084;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E00C0;
	sub_831FF250(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ffe70
	ctx.lr = 0x831E00E0;
	sub_831FFE70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x83201f30
	ctx.lr = 0x831E0114;
	sub_83201F30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831E011C"))) PPC_WEAK_FUNC(sub_831E011C);
PPC_FUNC_IMPL(__imp__sub_831E011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0120"))) PPC_WEAK_FUNC(sub_831E0120);
PPC_FUNC_IMPL(__imp__sub_831E0120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x831E0128;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9b70
	ctx.lr = 0x831E0168;
	sub_831D9B70(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E018C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9c88
	ctx.lr = 0x831E01A4;
	sub_831D9C88(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E01C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9d98
	ctx.lr = 0x831E01E0;
	sub_831D9D98(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E0200;
	sub_831EEAC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x832023c8
	ctx.lr = 0x831E020C;
	sub_832023C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,-18548
	ctx.r23.s64 = ctx.r11.s64 + -18548;
	// addi r22,r10,24888
	ctx.r22.s64 = ctx.r10.s64 + 24888;
	// beq cr6,0x831e0240
	if (ctx.cr6.eq) goto loc_831E0240;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25356
	ctx.r5.s64 = ctx.r11.s64 + 25356;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0240;
	sub_831034D8(ctx, base);
loc_831E0240:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831E0260:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x831e0270
	if (!ctx.cr6.gt) goto loc_831E0270;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x831e027c
	goto loc_831E027C;
loc_831E0270:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_831E027C:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831e0294
	if (ctx.cr0.eq) goto loc_831E0294;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x831e0260
	goto loc_831E0260;
loc_831E0294:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x831e04dc
	if (!ctx.cr6.eq) goto loc_831E04DC;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r25,r11,25480
	ctx.r25.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E02C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9eb0
	ctx.lr = 0x831E02DC;
	sub_831D9EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831e045c
	if (!ctx.cr0.eq) goto loc_831E045C;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dcc70
	ctx.lr = 0x831E0300;
	sub_831DCC70(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dcd78
	ctx.lr = 0x831E031C;
	sub_831DCD78(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d28
	ctx.lr = 0x831E0328;
	sub_83200D28(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0338;
	sub_831FF250(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r11,24852
	ctx.r30.s64 = ctx.r11.s64 + 24852;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stw r11,128(r25)
	PPC_STORE_U32(ctx.r25.u32 + 128, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E0368;
	sub_831FFE70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,153(r25)
	PPC_STORE_U8(ctx.r25.u32 + 153, ctx.r11.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831ff250
	ctx.lr = 0x831E0380;
	sub_831FF250(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831E0394;
	sub_831DF980(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E03A0;
	sub_83201E40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E03A8;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e03cc
	if (!ctx.cr0.eq) goto loc_831E03CC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25340
	ctx.r5.s64 = ctx.r11.s64 + 25340;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1372
	ctx.r7.s64 = 1372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E03CC;
	sub_831034D8(ctx, base);
loc_831E03CC:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d28
	ctx.lr = 0x831E03D8;
	sub_83200D28(ctx, base);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r26.u32);
	// stw r10,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r10.u32);
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E03FC;
	sub_831FF250(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E0424;
	sub_831FFE70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E0430;
	sub_831DF980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E043C;
	sub_83201E40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E0444;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e06c4
	if (!ctx.cr0.eq) goto loc_831E06C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,1383
	ctx.r7.s64 = 1383;
	// addi r5,r11,25324
	ctx.r5.s64 = ctx.r11.s64 + 25324;
	// b 0x831e06b4
	goto loc_831E06B4;
loc_831E045C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E0468;
	sub_831FEDE8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,24852
	ctx.r27.s64 = ctx.r11.s64 + 24852;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// lwz r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E0494;
	sub_831FF250(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831E04A8;
	sub_831DF980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E04B0;
	sub_831FEE78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E04BC;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E04C4;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e06c4
	if (!ctx.cr0.eq) goto loc_831E06C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// addi r5,r11,25264
	ctx.r5.s64 = ctx.r11.s64 + 25264;
	// b 0x831e06b4
	goto loc_831E06B4;
loc_831E04DC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x831e06a0
	if (ctx.cr6.eq) goto loc_831E06A0;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dcf78
	ctx.lr = 0x831E0500;
	sub_831DCF78(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dced8
	ctx.lr = 0x831E051C;
	sub_831DCED8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200c70
	ctx.lr = 0x831E0528;
	sub_83200C70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,23
	ctx.r30.s64 = 23;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r26.u32);
	// stw r30,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r30.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E0544;
	sub_831FF250(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r27,r11,24852
	ctx.r27.s64 = ctx.r11.s64 + 24852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831E0560;
	sub_831DF980(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E056C;
	sub_83201E40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E0574;
	sub_831FEE78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,25324
	ctx.r25.s64 = ctx.r11.s64 + 25324;
	// bne 0x831e059c
	if (!ctx.cr0.eq) goto loc_831E059C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E059C;
	sub_831034D8(ctx, base);
loc_831E059C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d28
	ctx.lr = 0x831E05A8;
	sub_83200D28(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r26.u32);
	// stw r30,80(r24)
	PPC_STORE_U32(ctx.r24.u32 + 80, ctx.r30.u32);
	// stw r26,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r26.u32);
	// stw r30,84(r24)
	PPC_STORE_U32(ctx.r24.u32 + 84, ctx.r30.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E05D8;
	sub_831FFE70(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E05E4;
	sub_831DF980(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E05F0;
	sub_83201E40(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E05F8;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e0618
	if (!ctx.cr0.eq) goto loc_831E0618;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1420
	ctx.r7.s64 = 1420;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0618;
	sub_831034D8(ctx, base);
loc_831E0618:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d98
	ctx.lr = 0x831E0624;
	sub_83200D98(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r26,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r26.u32);
	// stw r30,80(r24)
	PPC_STORE_U32(ctx.r24.u32 + 80, ctx.r30.u32);
	// stw r26,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r26.u32);
	// stw r30,84(r24)
	PPC_STORE_U32(ctx.r24.u32 + 84, ctx.r30.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E0644;
	sub_831FF250(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E066C;
	sub_831FFE70(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E0678;
	sub_831DF980(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E0684;
	sub_83201E40(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E068C;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e06c4
	if (!ctx.cr0.eq) goto loc_831E06C4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r7,1430
	ctx.r7.s64 = 1430;
	// b 0x831e06b4
	goto loc_831E06B4;
loc_831E06A0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x831e06c4
	if (!ctx.cr6.eq) goto loc_831E06C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,25308
	ctx.r5.s64 = ctx.r11.s64 + 25308;
loc_831E06B4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E06C4;
	sub_831034D8(ctx, base);
loc_831E06C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831E06CC"))) PPC_WEAK_FUNC(sub_831E06CC);
PPC_FUNC_IMPL(__imp__sub_831E06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E06D0"))) PPC_WEAK_FUNC(sub_831E06D0);
PPC_FUNC_IMPL(__imp__sub_831E06D0) {
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
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E06F4;
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,23
	ctx.r10.s64 = 23;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f3,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E072C;
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E0738;
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83201e40
	ctx.lr = 0x831E0744;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E074C;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e0778
	if (!ctx.cr0.eq) goto loc_831E0778;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,25264
	ctx.r5.s64 = ctx.r10.s64 + 25264;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1445
	ctx.r7.s64 = 1445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0778;
	sub_831034D8(ctx, base);
loc_831E0778:
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

__attribute__((alias("__imp__sub_831E0790"))) PPC_WEAK_FUNC(sub_831E0790);
PPC_FUNC_IMPL(__imp__sub_831E0790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x831E0798;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r22,136(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e096c
	if (ctx.cr6.eq) goto loc_831E096C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r25,r11,-18548
	ctx.r25.s64 = ctx.r11.s64 + -18548;
	// addi r24,r10,25392
	ctx.r24.s64 = ctx.r10.s64 + 25392;
	// addi r23,r9,24888
	ctx.r23.s64 = ctx.r9.s64 + 24888;
loc_831E07C8:
	// lwz r31,28(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// b 0x831e0950
	goto loc_831E0950;
loc_831E07D0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e094c
	if (ctx.cr0.eq) goto loc_831E094C;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x831e094c
	if (!ctx.cr6.gt) goto loc_831E094C;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_831E07F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831e0824
	if (ctx.cr6.eq) goto loc_831E0824;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x831e0824
	if (ctx.cr6.eq) goto loc_831E0824;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x831e0824
	if (ctx.cr6.eq) goto loc_831E0824;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x831e0828
	if (!ctx.cr6.eq) goto loc_831E0828;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x831e0828
	goto loc_831E0828;
loc_831E0824:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_831E0828:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x831e07f8
	if (!ctx.cr0.eq) goto loc_831E07F8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x831e094c
	if (ctx.cr6.eq) goto loc_831E094C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x831e094c
	if (ctx.cr6.eq) goto loc_831E094C;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// bgt cr6,0x831e0854
	if (ctx.cr6.gt) goto loc_831E0854;
	// li r28,1
	ctx.r28.s64 = 1;
loc_831E0854:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x831e087c
	if (ctx.cr6.eq) goto loc_831E087C;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x831e087c
	if (ctx.cr6.eq) goto loc_831E087C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,1915
	ctx.r7.s64 = 1915;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E087C;
	sub_831034D8(ctx, base);
loc_831E087C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
loc_831E0884:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831e08a0
	if (ctx.cr6.eq) goto loc_831E08A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x831e08a0
	if (ctx.cr6.eq) goto loc_831E08A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x831e08a8
	if (!ctx.cr6.eq) goto loc_831E08A8;
loc_831E08A0:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831e08b8
	if (!ctx.cr0.eq) goto loc_831E08B8;
loc_831E08A8:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x831e093c
	if (!ctx.cr6.eq) goto loc_831E093C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e093c
	if (!ctx.cr0.eq) goto loc_831E093C;
loc_831E08B8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E08C4;
	sub_831FEDE8(ctx, base);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r21,0(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E08E8;
	sub_831EEAC8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x831E08FC;
	sub_831FF250(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E090C;
	sub_831FF250(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831fd6c8
	ctx.lr = 0x831E091C;
	sub_831FD6C8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E092C;
	sub_831FF250(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83201f30
	ctx.lr = 0x831E093C;
	sub_83201F30(ctx, base);
loc_831E093C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x831e0884
	if (ctx.cr6.lt) goto loc_831E0884;
loc_831E094C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_831E0950:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e07d0
	if (!ctx.cr6.eq) goto loc_831E07D0;
	// lwz r22,8(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e07c8
	if (!ctx.cr6.eq) goto loc_831E07C8;
loc_831E096C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_831E0974"))) PPC_WEAK_FUNC(sub_831E0974);
PPC_FUNC_IMPL(__imp__sub_831E0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0978"))) PPC_WEAK_FUNC(sub_831E0978);
PPC_FUNC_IMPL(__imp__sub_831E0978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831E0980;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x831fb1b8
	ctx.lr = 0x831E099C;
	sub_831FB1B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e0e40
	if (ctx.cr0.eq) goto loc_831E0E40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x831eeac8
	ctx.lr = 0x831E09B4;
	sub_831EEAC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E09C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r23,r11,-18548
	ctx.r23.s64 = ctx.r11.s64 + -18548;
	// addi r22,r10,24888
	ctx.r22.s64 = ctx.r10.s64 + 24888;
	// bne 0x831e09fc
	if (!ctx.cr0.eq) goto loc_831E09FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25488
	ctx.r5.s64 = ctx.r11.s64 + 25488;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1977
	ctx.r7.s64 = 1977;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E09FC;
	sub_831034D8(ctx, base);
loc_831E09FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1452(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E0A10;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x831e0a34
	if (ctx.cr0.eq) goto loc_831E0A34;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x831E0A2C;
	sub_831DF0D8(ctx, base);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// b 0x831e0a38
	goto loc_831E0A38;
loc_831E0A34:
	// li r21,0
	ctx.r21.s64 = 0;
loc_831E0A38:
	// li r24,1
	ctx.r24.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_831E0A48:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831e0a60
	if (!ctx.cr6.gt) goto loc_831E0A60;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831e0a6c
	goto loc_831E0A6C;
loc_831E0A60:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r30,r10,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
loc_831E0A6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e0ad0
	if (ctx.cr0.eq) goto loc_831E0AD0;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e0ac4
	if (ctx.cr0.eq) goto loc_831E0AC4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x831e0ac4
	if (!ctx.cr6.gt) goto loc_831E0AC4;
	// addi r28,r30,84
	ctx.r28.s64 = ctx.r30.s64 + 84;
loc_831E0A94:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x831e0ab0
	if (!ctx.cr6.eq) goto loc_831E0AB0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E0AAC;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831E0AB0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831e0a94
	if (ctx.cr6.lt) goto loc_831E0A94;
loc_831E0AC4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x831e0a48
	goto loc_831E0A48;
loc_831E0AD0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r24.u8);
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E0AF0;
	sub_831EEAC8(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x831e0b20
	if (ctx.cr6.eq) goto loc_831E0B20;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25448
	ctx.r5.s64 = ctx.r11.s64 + 25448;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1996
	ctx.r7.s64 = 1996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0B20;
	sub_831034D8(ctx, base);
loc_831E0B20:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E0B2C;
	sub_831FEDE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0B3C;
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E0B4C;
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E0B98;
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E0BA4;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E0BAC;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e0bd0
	if (!ctx.cr0.eq) goto loc_831E0BD0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,25264
	ctx.r5.s64 = ctx.r11.s64 + 25264;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2008
	ctx.r7.s64 = 2008;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0BD0;
	sub_831034D8(ctx, base);
loc_831E0BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df808
	ctx.lr = 0x831E0BD8;
	sub_831DF808(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e0d38
	if (ctx.cr6.eq) goto loc_831E0D38;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x831fede8
	ctx.lr = 0x831E0BF4;
	sub_831FEDE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0C04;
	sub_831FF250(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E0C54;
	sub_831FF250(ctx, base);
	// stb r24,159(r29)
	PPC_STORE_U8(ctx.r29.u32 + 159, ctx.r24.u8);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc698
	ctx.lr = 0x831E0C74;
	sub_831DC698(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc6b0
	ctx.lr = 0x831E0C90;
	sub_831DC6B0(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E0CB0;
	sub_831FFE70(ctx, base);
	// stb r24,154(r29)
	PPC_STORE_U8(ctx.r29.u32 + 154, ctx.r24.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E0CC0;
	sub_83201E40(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E0CCC;
	sub_831FEDE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0CDC;
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E0D2C;
	sub_831FF250(ctx, base);
	// stb r24,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r24.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x831e0da8
	goto loc_831E0DA8;
loc_831E0D38:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x831fede8
	ctx.lr = 0x831E0D40;
	sub_831FEDE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0D50;
	sub_831FF250(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E0D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,159(r29)
	PPC_STORE_U8(ctx.r29.u32 + 159, ctx.r24.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E0DA4;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_831E0DA8:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E0DB0;
	sub_83201E40(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e0e40
	if (ctx.cr6.eq) goto loc_831E0E40;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831e0dd8
	if (!ctx.cr6.lt) goto loc_831E0DD8;
loc_831E0DCC:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x831e0de4
	goto loc_831E0DE4;
loc_831E0DD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831E0DE4;
	sub_831FC9D0(ctx, base);
loc_831E0DE4:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831e0e2c
	if (ctx.cr6.lt) goto loc_831E0E2C;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
loc_831E0DFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x831e0e18
	if (!ctx.cr6.eq) goto loc_831E0E18;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E0E18;
	sub_831FF250(ctx, base);
loc_831E0E18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831e0dfc
	if (!ctx.cr6.gt) goto loc_831E0DFC;
loc_831E0E2C:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831e0dcc
	if (ctx.cr6.lt) goto loc_831E0DCC;
loc_831E0E40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_831E0E48"))) PPC_WEAK_FUNC(sub_831E0E48);
PPC_FUNC_IMPL(__imp__sub_831E0E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x831E0E50;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x831fb1b8
	ctx.lr = 0x831E0E6C;
	sub_831FB1B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e1154
	if (ctx.cr0.eq) goto loc_831E1154;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x832023c8
	ctx.lr = 0x831E0E7C;
	sub_832023C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r24,r11,-18548
	ctx.r24.s64 = ctx.r11.s64 + -18548;
	// addi r23,r10,24888
	ctx.r23.s64 = ctx.r10.s64 + 24888;
	// beq cr6,0x831e0eb0
	if (ctx.cr6.eq) goto loc_831E0EB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,25356
	ctx.r5.s64 = ctx.r11.s64 + 25356;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2104
	ctx.r7.s64 = 2104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0EB0;
	sub_831034D8(ctx, base);
loc_831E0EB0:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831E0ED0:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x831e0ee0
	if (!ctx.cr6.gt) goto loc_831E0EE0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x831e0eec
	goto loc_831E0EEC;
loc_831E0EE0:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_831E0EEC:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831e0f04
	if (ctx.cr0.eq) goto loc_831E0F04;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x831e0ed0
	goto loc_831E0ED0;
loc_831E0F04:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r10,25480
	ctx.r6.s64 = ctx.r10.s64 + 25480;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x831dcf78
	ctx.lr = 0x831E0F28;
	sub_831DCF78(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dced8
	ctx.lr = 0x831E0F44;
	sub_831DCED8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200c70
	ctx.lr = 0x831E0F50;
	sub_83200C70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,32
	ctx.r29.s64 = 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r27.u32);
	// stw r29,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r29.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E0F6C;
	sub_831FF250(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r30,r11,24840
	ctx.r30.s64 = ctx.r11.s64 + 24840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831E0F88;
	sub_831DF980(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E0F94;
	sub_83201E40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E0F9C;
	sub_831FEE78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,25324
	ctx.r25.s64 = ctx.r11.s64 + 25324;
	// bne 0x831e0fc4
	if (!ctx.cr0.eq) goto loc_831E0FC4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2130
	ctx.r7.s64 = 2130;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E0FC4;
	sub_831034D8(ctx, base);
loc_831E0FC4:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d28
	ctx.lr = 0x831E0FD0;
	sub_83200D28(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,56(r22)
	PPC_STORE_U32(ctx.r22.u32 + 56, ctx.r27.u32);
	// stw r29,80(r22)
	PPC_STORE_U32(ctx.r22.u32 + 80, ctx.r29.u32);
	// stw r27,60(r22)
	PPC_STORE_U32(ctx.r22.u32 + 60, ctx.r27.u32);
	// stw r29,84(r22)
	PPC_STORE_U32(ctx.r22.u32 + 84, ctx.r29.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E1000;
	sub_831FFE70(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E100C;
	sub_831DF980(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E1018;
	sub_83201E40(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1020;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1040
	if (!ctx.cr0.eq) goto loc_831E1040;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2139
	ctx.r7.s64 = 2139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1040;
	sub_831034D8(ctx, base);
loc_831E1040:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200d98
	ctx.lr = 0x831E104C;
	sub_83200D98(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,56(r22)
	PPC_STORE_U32(ctx.r22.u32 + 56, ctx.r27.u32);
	// stw r11,128(r22)
	PPC_STORE_U32(ctx.r22.u32 + 128, ctx.r11.u32);
	// stw r29,80(r22)
	PPC_STORE_U32(ctx.r22.u32 + 80, ctx.r29.u32);
	// stw r27,60(r22)
	PPC_STORE_U32(ctx.r22.u32 + 60, ctx.r27.u32);
	// stw r29,84(r22)
	PPC_STORE_U32(ctx.r22.u32 + 84, ctx.r29.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E1074;
	sub_831FF250(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,136(r22)
	PPC_STORE_U32(ctx.r22.u32 + 136, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E109C;
	sub_831FFE70(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E10A8;
	sub_831DF980(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E10B4;
	sub_83201E40(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E10BC;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e10dc
	if (!ctx.cr0.eq) goto loc_831E10DC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E10DC;
	sub_831034D8(ctx, base);
loc_831E10DC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E10E8;
	sub_831FEDE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r27.u32);
	// stw r29,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r29.u32);
	// stw r11,128(r25)
	PPC_STORE_U32(ctx.r25.u32 + 128, ctx.r11.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E1108;
	sub_831FF250(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// bl 0x831df980
	ctx.lr = 0x831E111C;
	sub_831DF980(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E1128;
	sub_83201E40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1130;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1154
	if (!ctx.cr0.eq) goto loc_831E1154;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,25264
	ctx.r5.s64 = ctx.r11.s64 + 25264;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2161
	ctx.r7.s64 = 2161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1154;
	sub_831034D8(ctx, base);
loc_831E1154:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831E115C"))) PPC_WEAK_FUNC(sub_831E115C);
PPC_FUNC_IMPL(__imp__sub_831E115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1160"))) PPC_WEAK_FUNC(sub_831E1160);
PPC_FUNC_IMPL(__imp__sub_831E1160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831E1168;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x831db5f0
	ctx.lr = 0x831E11A8;
	sub_831DB5F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831e1350
	if (!ctx.cr6.eq) goto loc_831E1350;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r11,25480
	ctx.r5.s64 = ctx.r11.s64 + 25480;
	// bl 0x831dbbb8
	ctx.lr = 0x831E11C8;
	sub_831DBBB8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,24888
	ctx.r27.s64 = ctx.r10.s64 + 24888;
	// beq cr6,0x831e11fc
	if (ctx.cr6.eq) goto loc_831E11FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,25516
	ctx.r5.s64 = ctx.r11.s64 + 25516;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2364
	ctx.r7.s64 = 2364;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E11FC;
	sub_831034D8(ctx, base);
loc_831E11FC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// oris r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 327680;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,24828(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205558
	ctx.lr = 0x831E122C;
	sub_83205558(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E1238;
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E12A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E12C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_831E12D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E12F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x831e12d8
	if (ctx.cr6.lt) goto loc_831E12D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1310;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x83201e88
	ctx.lr = 0x831E131C;
	sub_83201E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1324;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1348
	if (!ctx.cr0.eq) goto loc_831E1348;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,25264
	ctx.r5.s64 = ctx.r11.s64 + 25264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2382
	ctx.r7.s64 = 2382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1348;
	sub_831034D8(ctx, base);
loc_831E1348:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
loc_831E1350:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831E1358"))) PPC_WEAK_FUNC(sub_831E1358);
PPC_FUNC_IMPL(__imp__sub_831E1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831E1360;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_831E1384:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r26,r11,25480
	ctx.r26.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E13A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x831dd970
	ctx.lr = 0x831E13BC;
	sub_831DD970(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
	// blt cr6,0x831e1384
	if (ctx.cr6.lt) goto loc_831E1384;
	// lbz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831e1574
	if (ctx.cr0.eq) goto loc_831E1574;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831e1574
	if (ctx.cr6.eq) goto loc_831E1574;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e1574
	if (ctx.cr0.eq) goto loc_831E1574;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc558
	ctx.lr = 0x831E1418;
	sub_831DC558(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,25480
	ctx.r6.s64 = ctx.r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc558
	ctx.lr = 0x831E1434;
	sub_831DC558(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x831fede8
	ctx.lr = 0x831E1448;
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E1458;
	sub_831FF250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E1468;
	sub_831FF250(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E1488;
	sub_831FFE70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1494;
	sub_831DF980(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83201f30
	ctx.lr = 0x831E14A4;
	sub_83201F30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E14AC;
	sub_831FEE78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,24888
	ctx.r28.s64 = ctx.r10.s64 + 24888;
	// bne 0x831e14e0
	if (!ctx.cr0.eq) goto loc_831E14E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25556
	ctx.r5.s64 = ctx.r11.s64 + 25556;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2421
	ctx.r7.s64 = 2421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E14E0;
	sub_831034D8(ctx, base);
loc_831E14E0:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E14EC;
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E14FC;
	sub_831FF250(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E150C;
	sub_831FF250(ctx, base);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E152C;
	sub_831FFE70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1538;
	sub_831DF980(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83201f30
	ctx.lr = 0x831E1548;
	sub_83201F30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1550;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1574
	if (!ctx.cr0.eq) goto loc_831E1574;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25540
	ctx.r5.s64 = ctx.r11.s64 + 25540;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2429
	ctx.r7.s64 = 2429;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1574;
	sub_831034D8(ctx, base);
loc_831E1574:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831E157C"))) PPC_WEAK_FUNC(sub_831E157C);
PPC_FUNC_IMPL(__imp__sub_831E157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1580"))) PPC_WEAK_FUNC(sub_831E1580);
PPC_FUNC_IMPL(__imp__sub_831E1580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x831E1588;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831df808
	ctx.lr = 0x831E159C;
	sub_831DF808(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,5664
	ctx.r11.s64 = ctx.r11.s64 + 5664;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f30,3080(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lfs f31,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r29,r30,1096
	ctx.r29.s64 = ctx.r30.s64 + 1096;
	// li r28,16
	ctx.r28.s64 = 16;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r10,r10,25264
	ctx.r10.s64 = ctx.r10.s64 + 25264;
	// addi r9,r9,25596
	ctx.r9.s64 = ctx.r9.s64 + 25596;
	// addi r11,r7,25572
	ctx.r11.s64 = ctx.r7.s64 + 25572;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r23,r8,-18548
	ctx.r23.s64 = ctx.r8.s64 + -18548;
	// addi r22,r6,24888
	ctx.r22.s64 = ctx.r6.s64 + 24888;
loc_831E1608:
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x831e1bf8
	if (ctx.cr6.eq) goto loc_831E1BF8;
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x831e1bf8
	if (!ctx.cr6.eq) goto loc_831E1BF8;
	// lwz r25,36(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// lwz r19,4(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_831E1634:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831e1648
	if (!ctx.cr6.gt) goto loc_831E1648;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831e1654
	goto loc_831E1654;
loc_831E1648:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwzx r27,r10,r21
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
loc_831E1654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e1ba8
	if (ctx.cr0.eq) goto loc_831E1BA8;
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e1b9c
	if (ctx.cr0.eq) goto loc_831E1B9C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831e1b9c
	if (ctx.cr6.lt) goto loc_831E1B9C;
	// addi r24,r27,32
	ctx.r24.s64 = ctx.r27.s64 + 32;
loc_831E167C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831e1b80
	if (!ctx.cr6.eq) goto loc_831E1B80;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r28,12(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E16AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x831ddc08
	ctx.lr = 0x831E16C4;
	sub_831DDC08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831e1898
	if (!ctx.cr6.eq) goto loc_831E1898;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x831e1864
	if (!ctx.cr6.eq) goto loc_831E1864;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E16E0;
	sub_831FEDE8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E1700;
	sub_831EEAC8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x831E1714;
	sub_831FF250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ff250
	ctx.lr = 0x831E1724;
	sub_831FF250(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r17,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r17.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1774;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E1780;
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1788;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e17a8
	if (!ctx.cr0.eq) goto loc_831E17A8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2501
	ctx.r7.s64 = 2501;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E17A8;
	sub_831034D8(ctx, base);
loc_831E17A8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E17B4;
	sub_831FEDE8(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E17C4;
	sub_831FF250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E17E4;
	sub_831FFE70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1830;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E183C;
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1844;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1864
	if (!ctx.cr0.eq) goto loc_831E1864;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2511
	ctx.r7.s64 = 2511;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1864;
	sub_831034D8(ctx, base);
loc_831E1864:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E1874;
	sub_831FF250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1880;
	sub_831DF980(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1888;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1b80
	if (!ctx.cr0.eq) goto loc_831E1B80;
	// li r7,2516
	ctx.r7.s64 = 2516;
	// b 0x831e1b6c
	goto loc_831E1B6C;
loc_831E1898:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E18B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x831dda98
	ctx.lr = 0x831E18D0;
	sub_831DDA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831e1b80
	if (!ctx.cr0.eq) goto loc_831E1B80;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E18E4;
	sub_831FEDE8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E1904;
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x831E1918;
	sub_831FF250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ff250
	ctx.lr = 0x831E1928;
	sub_831FF250(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r17,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r17.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1978;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E1984;
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E198C;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e19ac
	if (!ctx.cr0.eq) goto loc_831E19AC;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2536
	ctx.r7.s64 = 2536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E19AC;
	sub_831034D8(ctx, base);
loc_831E19AC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E19B8;
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E19C8;
	sub_831FF250(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E19E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E1A18;
	sub_831FF250(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r15,r11,25480
	ctx.r15.s64 = ctx.r11.s64 + 25480;
	// lwz r14,12(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,1488(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// bl 0x831ddd98
	ctx.lr = 0x831E1A50;
	sub_831DDD98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831e1a60
	if (!ctx.cr6.eq) goto loc_831E1A60;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831e1aa4
	goto loc_831E1AA4;
loc_831E1A60:
	// lwz r15,12(r30)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r14,r11,25480
	ctx.r14.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// bl 0x831ddf28
	ctx.lr = 0x831E1A98;
	sub_831DDF28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831e1ae4
	if (!ctx.cr6.eq) goto loc_831E1AE4;
	// li r6,2
	ctx.r6.s64 = 2;
loc_831E1AA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831e1afc
	goto loc_831E1AFC;
loc_831E1AE4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2565
	ctx.r7.s64 = 2565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1AFC;
	sub_831034D8(ctx, base);
loc_831E1AFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1B08;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831E1B14;
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1B1C;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1b3c
	if (!ctx.cr0.eq) goto loc_831E1B3C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,2570
	ctx.r7.s64 = 2570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1B3C;
	sub_831034D8(ctx, base);
loc_831E1B3C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E1B4C;
	sub_831FF250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1B58;
	sub_831DF980(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1B60;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1b80
	if (!ctx.cr0.eq) goto loc_831E1B80;
	// li r7,2575
	ctx.r7.s64 = 2575;
loc_831E1B6C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1B80;
	sub_831034D8(ctx, base);
loc_831E1B80:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831e167c
	if (!ctx.cr6.gt) goto loc_831E167C;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_831E1B9C:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x831e1634
	goto loc_831E1634;
loc_831E1BA8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x831e1bf8
	if (ctx.cr6.eq) goto loc_831E1BF8;
	// rlwinm r31,r19,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
loc_831E1BB4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831e1bd4
	if (!ctx.cr6.lt) goto loc_831E1BD4;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x831e1be4
	goto loc_831E1BE4;
loc_831E1BD4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831E1BE0;
	sub_831FC9D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_831E1BE4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831fd770
	ctx.lr = 0x831E1BF0;
	sub_831FD770(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x831e1bb4
	if (!ctx.cr6.eq) goto loc_831E1BB4;
loc_831E1BF8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bne 0x831e1608
	if (!ctx.cr0.eq) goto loc_831E1608;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E1C1C"))) PPC_WEAK_FUNC(sub_831E1C1C);
PPC_FUNC_IMPL(__imp__sub_831E1C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1C20"))) PPC_WEAK_FUNC(sub_831E1C20);
PPC_FUNC_IMPL(__imp__sub_831E1C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831E1C28;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e1d4c
	if (!ctx.cr6.eq) goto loc_831E1D4C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x832023c8
	ctx.lr = 0x831E1C44;
	sub_832023C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,24888
	ctx.r28.s64 = ctx.r10.s64 + 24888;
	// beq cr6,0x831e1c78
	if (ctx.cr6.eq) goto loc_831E1C78;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25356
	ctx.r5.s64 = ctx.r11.s64 + 25356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2604
	ctx.r7.s64 = 2604;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1C78;
	sub_831034D8(ctx, base);
loc_831E1C78:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831E1C94:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x831e1ca4
	if (!ctx.cr6.gt) goto loc_831E1CA4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831e1cb0
	goto loc_831E1CB0;
loc_831E1CA4:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_831E1CB0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831e1cc8
	if (ctx.cr0.eq) goto loc_831E1CC8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x831e1c94
	goto loc_831E1C94;
loc_831E1CC8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E1CD4;
	sub_831FEDE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r11.u32);
	// lfs f4,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831E1D08;
	sub_831FFE70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E1D14;
	sub_831DF980(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E1D20;
	sub_83201E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E1D28;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e1d4c
	if (!ctx.cr0.eq) goto loc_831E1D4C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25264
	ctx.r5.s64 = ctx.r11.s64 + 25264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2616
	ctx.r7.s64 = 2616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1D4C;
	sub_831034D8(ctx, base);
loc_831E1D4C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831e1d7c
	goto loc_831E1D7C;
loc_831E1D5C:
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831e1d74
	if (ctx.cr0.eq) goto loc_831E1D74;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x831e1d88
	if (ctx.cr6.eq) goto loc_831E1D88;
loc_831E1D74:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_831E1D7C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831e1d5c
	if (!ctx.cr6.eq) goto loc_831E1D5C;
	// b 0x831e1d8c
	goto loc_831E1D8C;
loc_831E1D88:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_831E1D8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831E1D94"))) PPC_WEAK_FUNC(sub_831E1D94);
PPC_FUNC_IMPL(__imp__sub_831E1D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1D98"))) PPC_WEAK_FUNC(sub_831E1D98);
PPC_FUNC_IMPL(__imp__sub_831E1D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831E1DA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-20720
	ctx.r10.s64 = ctx.r10.s64 + -20720;
	// li r3,142
	ctx.r3.s64 = 142;
	// lwz r11,7432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7432);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// lbz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831e1e74
	if (ctx.cr0.eq) goto loc_831E1E74;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e1e74
	if (ctx.cr6.eq) goto loc_831E1E74;
	// lwz r29,948(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201e88
	ctx.lr = 0x831E1E14;
	sub_83201E88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x831df280
	ctx.lr = 0x831E1E20;
	sub_831DF280(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e1e74
	if (ctx.cr6.eq) goto loc_831E1E74;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x831e1e68
	if (ctx.cr6.eq) goto loc_831E1E68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,25612
	ctx.r5.s64 = ctx.r10.s64 + 25612;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2823
	ctx.r7.s64 = 2823;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1E68;
	sub_831034D8(ctx, base);
loc_831E1E68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x831df280
	ctx.lr = 0x831E1E74;
	sub_831DF280(ctx, base);
loc_831E1E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831E1E7C"))) PPC_WEAK_FUNC(sub_831E1E7C);
PPC_FUNC_IMPL(__imp__sub_831E1E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1E80"))) PPC_WEAK_FUNC(sub_831E1E80);
PPC_FUNC_IMPL(__imp__sub_831E1E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831E1E88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm. r30,r11,29,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x831e1ed4
	if (ctx.cr0.eq) goto loc_831E1ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831e1ed4
	if (ctx.cr0.eq) goto loc_831E1ED4;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r10,948(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 948);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
loc_831E1ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831E1EE0"))) PPC_WEAK_FUNC(sub_831E1EE0);
PPC_FUNC_IMPL(__imp__sub_831E1EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x831E1EE8;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2148, ctx.r11.u32);
	// lwz r30,1456(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E1F10;
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x831e1f34
	if (ctx.cr0.eq) goto loc_831E1F34;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x831E1F2C;
	sub_831DF0D8(ctx, base);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x831e1f38
	goto loc_831E1F38;
loc_831E1F34:
	// li r24,0
	ctx.r24.s64 = 0;
loc_831E1F38:
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x831e24b4
	if (!ctx.cr6.gt) goto loc_831E24B4;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r21,r11,-4
	ctx.r21.s64 = ctx.r11.s64 + -4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r23,r22,-1
	ctx.r23.s64 = ctx.r22.s64 + -1;
	// addi r20,r11,-18548
	ctx.r20.s64 = ctx.r11.s64 + -18548;
	// addi r19,r10,25664
	ctx.r19.s64 = ctx.r10.s64 + 25664;
	// addi r18,r9,24888
	ctx.r18.s64 = ctx.r9.s64 + 24888;
loc_831E1F6C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e1f90
	if (ctx.cr6.eq) goto loc_831E1F90;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,2864
	ctx.r7.s64 = 2864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E1F90;
	sub_831034D8(ctx, base);
loc_831E1F90:
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831e1fac
	if (!ctx.cr6.lt) goto loc_831E1FAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x831e1fb4
	goto loc_831E1FB4;
loc_831E1FAC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831E1FB4;
	sub_831FC9D0(ctx, base);
loc_831E1FB4:
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x831e2498
	if (ctx.cr6.gt) goto loc_831E2498;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E1FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831e2498
	if (ctx.cr0.eq) goto loc_831E2498;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e2498
	if (!ctx.cr0.eq) goto loc_831E2498;
	// lwz r3,236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e2498
	if (!ctx.cr0.eq) goto loc_831E2498;
	// lwz r31,236(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff818
	ctx.lr = 0x831E2028;
	sub_831FF818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2224
	if (ctx.cr0.eq) goto loc_831E2224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831e1e80
	ctx.lr = 0x831E203C;
	sub_831E1E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2224
	if (ctx.cr0.eq) goto loc_831E2224;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831e2194
	if (ctx.cr0.eq) goto loc_831E2194;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831e2104
	if (ctx.cr6.lt) goto loc_831E2104;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_831E2078:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831e20ec
	if (!ctx.cr0.eq) goto loc_831E20EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831e1e80
	ctx.lr = 0x831E20A4;
	sub_831E1E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e20ec
	if (ctx.cr0.eq) goto loc_831E20EC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x831e20ec
	if (ctx.cr6.eq) goto loc_831E20EC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e20ec
	if (ctx.cr6.eq) goto loc_831E20EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E20D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e20ec
	if (!ctx.cr0.eq) goto loc_831E20EC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x831e20f0
	if (!ctx.cr6.eq) goto loc_831E20F0;
loc_831E20EC:
	// li r26,0
	ctx.r26.s64 = 0;
loc_831E20F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831e2078
	if (!ctx.cr6.gt) goto loc_831E2078;
loc_831E2104:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2498
	if (ctx.cr0.eq) goto loc_831E2498;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831e215c
	if (ctx.cr6.lt) goto loc_831E215C;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_831E2120:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831e2148
	if (ctx.cr6.eq) goto loc_831E2148;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2144;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831E2148:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831e2120
	if (!ctx.cr6.gt) goto loc_831E2120;
loc_831E215C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831df408
	ctx.lr = 0x831E2168;
	sub_831DF408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E217C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831e2224
	goto loc_831E2224;
loc_831E2194:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x831e2498
	if (ctx.cr6.eq) goto loc_831E2498;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e2498
	if (ctx.cr6.eq) goto loc_831E2498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E21C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e2498
	if (!ctx.cr0.eq) goto loc_831E2498;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x831e2498
	if (ctx.cr6.eq) goto loc_831E2498;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e2498
	if (!ctx.cr0.eq) goto loc_831E2498;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831df408
	ctx.lr = 0x831E21EC;
	sub_831DF408(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831e2224
	if (ctx.cr6.eq) goto loc_831E2224;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2220;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_831E2224:
	// lwz r27,80(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r26,56(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// b 0x831e2488
	goto loc_831E2488;
loc_831E2230:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831e24a4
	if (ctx.cr6.eq) goto loc_831E24A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831fc910
	ctx.lr = 0x831E224C;
	sub_831FC910(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff818
	ctx.lr = 0x831E2258;
	sub_831FF818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e23ac
	if (ctx.cr0.eq) goto loc_831E23AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831e1e80
	ctx.lr = 0x831E226C;
	sub_831E1E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e23ac
	if (ctx.cr0.eq) goto loc_831E23AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x831e23ac
	if (ctx.cr6.eq) goto loc_831E23AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e23ac
	if (ctx.cr6.eq) goto loc_831E23AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E22A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e23ac
	if (!ctx.cr0.eq) goto loc_831E23AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x831e23ac
	if (ctx.cr6.eq) goto loc_831E23AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E22C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831e2338
	if (ctx.cr0.eq) goto loc_831E2338;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x831e2320
	if (ctx.cr6.lt) goto loc_831E2320;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_831E22E4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831e230c
	if (ctx.cr6.eq) goto loc_831E230C;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2308;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831E230C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831e22e4
	if (!ctx.cr6.gt) goto loc_831E22E4;
loc_831E2320:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831e2488
	goto loc_831E2488;
loc_831E2338:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e237c
	if (ctx.cr0.eq) goto loc_831E237C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df190
	ctx.lr = 0x831E234C;
	sub_831DF190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831e2374
	if (ctx.cr6.eq) goto loc_831E2374;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2370;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831E2374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df1f8
	ctx.lr = 0x831E237C;
	sub_831DF1F8(ctx, base);
loc_831E237C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E239C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831df280
	ctx.lr = 0x831E23A8;
	sub_831DF280(ctx, base);
	// b 0x831e2488
	goto loc_831E2488;
loc_831E23AC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83201318
	ctx.lr = 0x831E23B8;
	sub_83201318(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831df328
	ctx.lr = 0x831E23C8;
	sub_831DF328(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E23E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831df280
	ctx.lr = 0x831E23F4;
	sub_831DF280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831e1e80
	ctx.lr = 0x831E2400;
	sub_831E1E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// beq 0x831e2478
	if (ctx.cr0.eq) goto loc_831E2478;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x831e2470
	if (!ctx.cr6.eq) goto loc_831E2470;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831e2448
	goto loc_831E2448;
loc_831E2430:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831e2460
	if (ctx.cr6.eq) goto loc_831E2460;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_831E2448:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2430
	if (ctx.cr0.eq) goto loc_831E2430;
	// b 0x831e2464
	goto loc_831E2464;
loc_831E2460:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_831E2464:
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x831e2480
	goto loc_831E2480;
loc_831E2470:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x831e2480
	goto loc_831E2480;
loc_831E2478:
	// lwz r3,948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_831E2480:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83201ed0
	ctx.lr = 0x831E2488;
	sub_83201ED0(ctx, base);
loc_831E2488:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e2230
	if (!ctx.cr6.eq) goto loc_831E2230;
	// b 0x831e24a4
	goto loc_831E24A4;
loc_831E2498:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x831df280
	ctx.lr = 0x831E24A4;
	sub_831DF280(ctx, base);
loc_831E24A4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt 0x831e1f6c
	if (ctx.cr0.gt) goto loc_831E1F6C;
loc_831E24B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_831E24BC"))) PPC_WEAK_FUNC(sub_831E24BC);
PPC_FUNC_IMPL(__imp__sub_831E24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E24C0"))) PPC_WEAK_FUNC(sub_831E24C0);
PPC_FUNC_IMPL(__imp__sub_831E24C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831E24C8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r11,2144(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// beq 0x831e24ec
	if (ctx.cr0.eq) goto loc_831E24EC;
	// lwz r11,7588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7588);
	// b 0x831e24f0
	goto loc_831E24F0;
loc_831E24EC:
	// lwz r11,7536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7536);
loc_831E24F0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-20720
	ctx.r10.s64 = ctx.r10.s64 + -20720;
	// li r3,144
	ctx.r3.s64 = 144;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831e2538
	if (ctx.cr6.eq) goto loc_831E2538;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831E2538:
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// lwz r25,168(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r29,84(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831e2794
	if (ctx.cr6.eq) goto loc_831E2794;
loc_831E255C:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831e2594
	if (!ctx.cr0.eq) goto loc_831E2594;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831e2594
	if (!ctx.cr0.eq) goto loc_831E2594;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e2594
	if (!ctx.cr0.eq) goto loc_831E2594;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r29,84(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x831e255c
	if (!ctx.cr6.eq) goto loc_831E255C;
loc_831E2594:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831e2794
	if (ctx.cr6.eq) goto loc_831E2794;
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831e2794
	if (!ctx.cr6.eq) goto loc_831E2794;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,1376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// bl 0x831dfd68
	ctx.lr = 0x831E25CC;
	sub_831DFD68(ctx, base);
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x831e2644
	goto loc_831E2644;
loc_831E25D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E25E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e25fc
	if (!ctx.cr0.eq) goto loc_831E25FC;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2640
	if (ctx.cr0.eq) goto loc_831E2640;
loc_831E25FC:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// blt cr6,0x831e2640
	if (ctx.cr6.lt) goto loc_831E2640;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
loc_831E261C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// stw r8,228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 228, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x831e261c
	if (!ctx.cr6.gt) goto loc_831E261C;
loc_831E2640:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831E2644:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e25d4
	if (!ctx.cr6.eq) goto loc_831E25D4;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r26,112(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// b 0x831e26a8
	goto loc_831E26A8;
loc_831E265C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e26a4
	if (ctx.cr0.eq) goto loc_831E26A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E267C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831e26a0
	if (!ctx.cr0.eq) goto loc_831E26A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e26b4
	if (ctx.cr0.eq) goto loc_831E26B4;
loc_831E26A0:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_831E26A4:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_831E26A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e265c
	if (!ctx.cr6.eq) goto loc_831E265C;
loc_831E26B4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,1456(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E26C8;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x831e26e8
	if (ctx.cr0.eq) goto loc_831E26E8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x831E26E4;
	sub_831DF0D8(ctx, base);
	// b 0x831e26ec
	goto loc_831E26EC;
loc_831E26E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831E26EC:
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x831e2708
	goto loc_831E2708;
loc_831E26F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2700;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831E2708:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e26f4
	if (!ctx.cr6.eq) goto loc_831E26F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e2780
	if (ctx.cr6.eq) goto loc_831E2780;
loc_831E2724:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc910
	ctx.lr = 0x831E2738;
	sub_831FC910(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2768
	if (ctx.cr0.eq) goto loc_831E2768;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831e2750
	if (!ctx.cr6.eq) goto loc_831E2750;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_831E2750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc718
	ctx.lr = 0x831E2758;
	sub_831FC718(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83201ed0
	ctx.lr = 0x831E2768;
	sub_83201ED0(ctx, base);
loc_831E2768:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e2724
	if (!ctx.cr6.eq) goto loc_831E2724;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x831e2784
	if (!ctx.cr6.eq) goto loc_831E2784;
loc_831E2780:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_831E2784:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x83201ed0
	ctx.lr = 0x831E2790;
	sub_83201ED0(ctx, base);
	// b 0x831e2804
	goto loc_831E2804;
loc_831E2794:
	// lwz r31,28(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// b 0x831e27e4
	goto loc_831E27E4;
loc_831E279C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e27e0
	if (ctx.cr0.eq) goto loc_831E27E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E27BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831e27e0
	if (!ctx.cr0.eq) goto loc_831E27E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E27D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e27f4
	if (ctx.cr0.eq) goto loc_831E27F4;
loc_831E27E0:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_831E27E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831e279c
	if (!ctx.cr6.eq) goto loc_831E279C;
	// b 0x831e2804
	goto loc_831E2804;
loc_831E27F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83201f30
	ctx.lr = 0x831E2804;
	sub_83201F30(ctx, base);
loc_831E2804:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r4,104(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831e2824
	if (ctx.cr6.eq) goto loc_831E2824;
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x831df280
	ctx.lr = 0x831E2824;
	sub_831DF280(ctx, base);
loc_831E2824:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2838;
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x831e285c
	if (ctx.cr0.eq) goto loc_831E285C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x831E2854;
	sub_831DF0D8(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x831e2860
	goto loc_831E2860;
loc_831E285C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831E2860:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_831E286C:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831e2884
	if (!ctx.cr6.gt) goto loc_831E2884;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831e2890
	goto loc_831E2890;
loc_831E2884:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_831E2890:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2928
	if (ctx.cr0.eq) goto loc_831E2928;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E28A4;
	sub_831FC9D0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// b 0x831e286c
	goto loc_831E286C;
loc_831E28B4:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fc910
	ctx.lr = 0x831E28C8;
	sub_831FC910(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_831E28E0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831e28f8
	if (!ctx.cr6.gt) goto loc_831E28F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831e2904
	goto loc_831E2904;
loc_831E28F8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_831E2904:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831e2928
	if (ctx.cr0.eq) goto loc_831E2928;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831E2918;
	sub_831FC9D0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x831e28e0
	goto loc_831E28E0;
loc_831E2928:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e28b4
	if (!ctx.cr6.eq) goto loc_831E28B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831E293C"))) PPC_WEAK_FUNC(sub_831E293C);
PPC_FUNC_IMPL(__imp__sub_831E293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E2940"))) PPC_WEAK_FUNC(sub_831E2940);
PPC_FUNC_IMPL(__imp__sub_831E2940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831E2948;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// stb r30,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r30.u8);
	// bl 0x831fc738
	ctx.lr = 0x831E2998;
	sub_831FC738(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r5,1880
	ctx.r5.s64 = 1880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x831E29B4;
	sub_82CA2C60(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// stb r30,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r30,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// stw r30,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// stw r30,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// stw r30,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// stw r30,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r8,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831E2A0C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831e2a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831E2A0C;
	// stw r31,2736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2736, ctx.r31.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r28,1452(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2A2C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831e2a4c
	if (ctx.cr0.eq) goto loc_831E2A4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c816e8
	ctx.lr = 0x831E2A44;
	sub_82C816E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x831e2a50
	goto loc_831E2A50;
loc_831E2A4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831E2A50:
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r4,1452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x831dfd68
	ctx.lr = 0x831E2A60;
	sub_831DFD68(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r28,1452(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2A74;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831e2a90
	if (ctx.cr0.eq) goto loc_831E2A90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83202b28
	ctx.lr = 0x831E2A8C;
	sub_83202B28(ctx, base);
	// b 0x831e2a94
	goto loc_831E2A94;
loc_831E2A90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831E2A94:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r28,1452(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2AA8;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831e2ac4
	if (ctx.cr0.eq) goto loc_831E2AC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83202b80
	ctx.lr = 0x831E2AC0;
	sub_83202B80(ctx, base);
	// b 0x831e2ac8
	goto loc_831E2AC8;
loc_831E2AC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831E2AC8:
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1452(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2ADC;
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// beq 0x831e2af8
	if (ctx.cr0.eq) goto loc_831E2AF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x831E2AF4;
	sub_831DF0D8(ctx, base);
	// b 0x831e2afc
	goto loc_831E2AFC;
loc_831E2AF8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_831E2AFC:
	// stw r28,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1452(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2B10;
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// beq 0x831e2b2c
	if (ctx.cr0.eq) goto loc_831E2B2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x831E2B28;
	sub_831DF0D8(ctx, base);
	// b 0x831e2b30
	goto loc_831E2B30;
loc_831E2B2C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_831E2B30:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lbz r4,1380(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1380);
	// stb r4,2144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2144, ctx.r4.u8);
	// bl 0x831ee798
	ctx.lr = 0x831E2B44;
	sub_831EE798(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831fc7c0
	ctx.lr = 0x831E2B54;
	sub_831FC7C0(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,168(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831fc798
	ctx.lr = 0x831E2B68;
	sub_831FC798(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lbz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831e2b84
	if (ctx.cr0.eq) goto loc_831E2B84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-22696
	ctx.r11.s64 = ctx.r11.s64 + -22696;
	// b 0x831e2b8c
	goto loc_831E2B8C;
loc_831E2B84:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-22960
	ctx.r11.s64 = ctx.r11.s64 + -22960;
loc_831E2B8C:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831dfd68
	ctx.lr = 0x831E2BA4;
	sub_831DFD68(ctx, base);
	// stw r3,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x831dfd68
	ctx.lr = 0x831E2BB4;
	sub_831DFD68(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// stw r3,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x831e2bec
	if (!ctx.cr6.gt) goto loc_831E2BEC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_831E2BD4:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831e2bd4
	if (ctx.cr6.lt) goto loc_831E2BD4;
loc_831E2BEC:
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831e2c18
	if (!ctx.cr6.gt) goto loc_831E2C18;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_831E2C00:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x831e2c00
	if (ctx.cr6.lt) goto loc_831E2C00;
loc_831E2C18:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwz r3,1452(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831c58b0
	ctx.lr = 0x831E2C2C;
	sub_831C58B0(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831E2C3C"))) PPC_WEAK_FUNC(sub_831E2C3C);
PPC_FUNC_IMPL(__imp__sub_831E2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E2C40"))) PPC_WEAK_FUNC(sub_831E2C40);
PPC_FUNC_IMPL(__imp__sub_831E2C40) {
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
	// lwz r11,2140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e2c70
	if (ctx.cr6.eq) goto loc_831E2C70;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831E2C70;
	sub_831C59E0(ctx, base);
loc_831E2C70:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831e2c88
	if (ctx.cr6.eq) goto loc_831E2C88;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831E2C88;
	sub_831C59E0(ctx, base);
loc_831E2C88:
	// lwz r3,2068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831e2c9c
	if (ctx.cr6.eq) goto loc_831E2C9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x831E2C9C;
	sub_8320D3D0(ctx, base);
loc_831E2C9C:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831e2cbc
	if (ctx.cr6.eq) goto loc_831E2CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f0708
	ctx.lr = 0x831E2CB0;
	sub_831F0708(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831E2CBC;
	sub_831C59E0(ctx, base);
loc_831E2CBC:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x831fc7e0
	ctx.lr = 0x831E2CC4;
	sub_831FC7E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c59e0
	ctx.lr = 0x831E2CD4;
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c59e0
	ctx.lr = 0x831E2CE4;
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c59e0
	ctx.lr = 0x831E2CF4;
	sub_831C59E0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,25032
	ctx.r11.s64 = ctx.r11.s64 + 25032;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831E2D1C"))) PPC_WEAK_FUNC(sub_831E2D1C);
PPC_FUNC_IMPL(__imp__sub_831E2D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E2D20"))) PPC_WEAK_FUNC(sub_831E2D20);
PPC_FUNC_IMPL(__imp__sub_831E2D20) {
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
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e2dac
	if (!ctx.cr6.eq) goto loc_831E2DAC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r31,1456(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E2D58;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x831e2d78
	if (ctx.cr0.eq) goto loc_831E2D78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832014c0
	ctx.lr = 0x831E2D70;
	sub_832014C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831e2d7c
	goto loc_831E2D7C;
loc_831E2D78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831E2D7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83201980
	ctx.lr = 0x831E2D88;
	sub_83201980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831df638
	ctx.lr = 0x831E2D98;
	sub_831DF638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832015b0
	ctx.lr = 0x831E2DA0;
	sub_832015B0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831E2DAC;
	sub_831C59E0(ctx, base);
loc_831E2DAC:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
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

__attribute__((alias("__imp__sub_831E2DC8"))) PPC_WEAK_FUNC(sub_831E2DC8);
PPC_FUNC_IMPL(__imp__sub_831E2DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831E2DD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831e2e4c
	if (!ctx.cr6.eq) goto loc_831E2E4C;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x831fc770
	ctx.lr = 0x831E2DEC;
	sub_831FC770(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831c58b0
	ctx.lr = 0x831E2E04;
	sub_831C58B0(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e2d20
	ctx.lr = 0x831E2E10;
	sub_831E2D20(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x831e2e4c
	if (ctx.cr6.lt) goto loc_831E2E4C;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831E2E30:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x831e2e30
	if (!ctx.cr0.eq) goto loc_831E2E30;
loc_831E2E4C:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831E2E58"))) PPC_WEAK_FUNC(sub_831E2E58);
PPC_FUNC_IMPL(__imp__sub_831E2E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831E2E60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831da310
	ctx.lr = 0x831E2EA0;
	sub_831DA310(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x831e2ed8
	if (ctx.cr6.eq) goto loc_831E2ED8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x831e2ee0
	if (!ctx.cr6.eq) goto loc_831E2EE0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,553
	ctx.r7.s64 = 553;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E2ED4;
	sub_831034D8(ctx, base);
	// b 0x831e2ee0
	goto loc_831E2EE0;
loc_831E2ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df850
	ctx.lr = 0x831E2EE0;
	sub_831DF850(ctx, base);
loc_831E2EE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831E2EE8"))) PPC_WEAK_FUNC(sub_831E2EE8);
PPC_FUNC_IMPL(__imp__sub_831E2EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831E2EF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9440
	ctx.lr = 0x831E2F30;
	sub_831D9440(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x831e2f68
	if (ctx.cr6.eq) goto loc_831E2F68;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x831e2fb8
	if (!ctx.cr6.eq) goto loc_831E2FB8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,24888
	ctx.r6.s64 = ctx.r11.s64 + 24888;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1013
	ctx.r7.s64 = 1013;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E2F64;
	sub_831034D8(ctx, base);
	// b 0x831e2fb8
	goto loc_831E2FB8;
loc_831E2F68:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E2F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831d9570
	ctx.lr = 0x831E2FA0;
	sub_831D9570(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x831e2fb4
	if (!ctx.cr6.eq) goto loc_831E2FB4;
	// bl 0x831dfde0
	ctx.lr = 0x831E2FB0;
	sub_831DFDE0(ctx, base);
	// b 0x831e2fb8
	goto loc_831E2FB8;
loc_831E2FB4:
	// bl 0x831dff30
	ctx.lr = 0x831E2FB8;
	sub_831DFF30(ctx, base);
loc_831E2FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831E2FC0"))) PPC_WEAK_FUNC(sub_831E2FC0);
PPC_FUNC_IMPL(__imp__sub_831E2FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831E2FC8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831df808
	ctx.lr = 0x831E2FD4;
	sub_831DF808(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E2FF4;
	sub_831EEAC8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831E3014;
	sub_831EEAC8(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x832023c8
	ctx.lr = 0x831E301C;
	sub_832023C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r24,r11,-18548
	ctx.r24.s64 = ctx.r11.s64 + -18548;
	// addi r23,r10,24888
	ctx.r23.s64 = ctx.r10.s64 + 24888;
	// beq cr6,0x831e3050
	if (ctx.cr6.eq) goto loc_831E3050;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,25356
	ctx.r5.s64 = ctx.r11.s64 + 25356;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1083
	ctx.r7.s64 = 1083;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E3050;
	sub_831034D8(ctx, base);
loc_831E3050:
	// lwz r22,168(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,60(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831E306C:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x831e307c
	if (!ctx.cr6.gt) goto loc_831E307C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831e3088
	goto loc_831E3088;
loc_831E307C:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_831E3088:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831e30a0
	if (ctx.cr0.eq) goto loc_831E30A0;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x831e306c
	goto loc_831E306C;
loc_831E30A0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E30AC;
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E30BC;
	sub_831FF250(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_831E30C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E30E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x831e30c8
	if (ctx.cr6.lt) goto loc_831E30C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E3100;
	sub_831DF980(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r29,1452(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E3114;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831e3140
	if (ctx.cr0.eq) goto loc_831E3140;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83202f40
	ctx.lr = 0x831E3138;
	sub_83202F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831e3144
	goto loc_831E3144;
loc_831E3140:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831E3144:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E314C;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e3170
	if (!ctx.cr0.eq) goto loc_831E3170;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,25700
	ctx.r5.s64 = ctx.r11.s64 + 25700;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E3170;
	sub_831034D8(ctx, base);
loc_831E3170:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r27,144(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E3180;
	sub_831FEDE8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E3190;
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E31B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E31D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E31F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E3220;
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831c5778
	ctx.lr = 0x831E3268;
	sub_831C5778(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E3278;
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E3284;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E328C;
	sub_831FEE78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,25680
	ctx.r26.s64 = ctx.r11.s64 + 25680;
	// bne 0x831e32b4
	if (!ctx.cr0.eq) goto loc_831E32B4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1121
	ctx.r7.s64 = 1121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E32B4;
	sub_831034D8(ctx, base);
loc_831E32B4:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fede8
	ctx.lr = 0x831E32C0;
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// bl 0x831ff250
	ctx.lr = 0x831E32E0;
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E32EC;
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E32F8;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E3300;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e3320
	if (!ctx.cr0.eq) goto loc_831E3320;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1129
	ctx.r7.s64 = 1129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E3320;
	sub_831034D8(ctx, base);
loc_831E3320:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x831fede8
	ctx.lr = 0x831E3334;
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E3344;
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E33A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E33C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	ctx.lr = 0x831E33D4;
	sub_831FF250(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831E33E4;
	sub_831FF250(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_831E33E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E3428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x831e33e8
	if (ctx.cr6.lt) goto loc_831E33E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df980
	ctx.lr = 0x831E3440;
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83201e40
	ctx.lr = 0x831E344C;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fee78
	ctx.lr = 0x831E3454;
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831e3474
	if (!ctx.cr0.eq) goto loc_831E3474;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831E3474;
	sub_831034D8(ctx, base);
loc_831E3474:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,1452(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831E3488;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x831e34a8
	if (ctx.cr0.eq) goto loc_831E34A8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83202060
	ctx.lr = 0x831E34A0;
	sub_83202060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831e34ac
	goto loc_831E34AC;
loc_831E34A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831E34AC:
	// stw r30,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83202840
	ctx.lr = 0x831E34BC;
	sub_83202840(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,152(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83202840
	ctx.lr = 0x831E34CC;
	sub_83202840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202840
	ctx.lr = 0x831E34D8;
	sub_83202840(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83202d70
	ctx.lr = 0x831E34EC;
	sub_83202D70(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df030
	ctx.lr = 0x831E34FC;
	sub_831DF030(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df030
	ctx.lr = 0x831E350C;
	sub_831DF030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df030
	ctx.lr = 0x831E351C;
	sub_831DF030(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831df030
	ctx.lr = 0x831E352C;
	sub_831DF030(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

